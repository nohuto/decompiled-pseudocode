/*
 * XREFs of MiPurgeSubsection @ 0x140211C88
 * Callers:
 *     MiDeleteCachedSubsection @ 0x140210AF8 (MiDeleteCachedSubsection.c)
 * Callees:
 *     MiLockLeafPage @ 0x140037DE0 (MiLockLeafPage.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiCheckProtoPtePageState @ 0x140081F50 (MiCheckProtoPtePageState.c)
 *     MiPfnShareCountIsZero @ 0x1400B2270 (MiPfnShareCountIsZero.c)
 *     MiUnlockProtoPoolPage @ 0x1400B5110 (MiUnlockProtoPoolPage.c)
 *     MiUnlinkPageFromList @ 0x1400C6FD0 (MiUnlinkPageFromList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400C80C0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiDereferenceControlAreaPfn @ 0x1400E6738 (MiDereferenceControlAreaPfn.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiReverseSwizzleInvalidPte @ 0x140225FD8 (MiReverseSwizzleInvalidPte.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiPurgeSubsection(ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR v1; // rbx
  __int64 v2; // rax
  __int64 v4; // r13
  __int64 v5; // rdi
  ULONG_PTR v6; // r12
  volatile signed __int32 *v7; // rsi
  unsigned int v8; // ebp
  signed __int32 v9; // edx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  ULONG_PTR BugCheckParameter4; // rdx
  __int64 v14; // r9
  __int64 v15; // rax
  __int16 v16; // r10
  ULONG_PTR v17; // r15
  __int64 v18; // rsi
  __int64 v19; // rdx
  unsigned int v20; // esi
  __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  volatile signed __int32 *v24; // rbx
  unsigned __int8 CurrentIrql; // si
  unsigned int v26; // edi
  signed __int32 i; // edx
  _DWORD *v28; // rcx
  void *retaddr; // [rsp+58h] [rbp+0h]
  unsigned __int8 v30; // [rsp+60h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(BugCheckParameter2 + 8);
  v2 = *(unsigned int *)(BugCheckParameter2 + 44);
  v4 = *(_QWORD *)BugCheckParameter2;
  v5 = 0LL;
  v30 = 17;
  v6 = v1 + 8 * v2;
  if ( v1 >= v6 )
    return 1LL;
  do
  {
    if ( (v1 & 0xFFF) == 0 || v30 == 17 )
    {
      if ( v30 != 17 )
        MiUnlockProtoPoolPage(v5, v30);
      v5 = MiCheckProtoPtePageState(v1, (unsigned __int64)&v30);
      if ( !v5 )
      {
        v1 = (v1 & 0xFFFFFFFFFFFFF000uLL) + 4096;
        continue;
      }
      v7 = (volatile signed __int32 *)(v4 + 72);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v4 + 72);
      }
      else
      {
        v8 = 0;
        if ( _interlockedbittestandset(v7, 0x1Fu) )
          v8 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)(v4 + 72));
        while ( 1 )
        {
          v9 = *v7;
          if ( (*v7 & 0xBFFFFFFF) == 0x80000000 )
            break;
          if ( (v9 & 0x40000000) == 0 )
            _InterlockedCompareExchange(v7, v9 | 0x40000000, v9);
          if ( (++v8 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v8);
        }
      }
      if ( *(_QWORD *)(BugCheckParameter2 + 96) != 1LL || (*(_BYTE *)(BugCheckParameter2 + 32) & 1) != 0 )
      {
        v28 = (_DWORD *)(v4 + 72);
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v28, retaddr);
        else
          *v28 = 0;
        MiUnlockProtoPoolPage(v5, v30);
        return 0LL;
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v4 + 72, retaddr);
      else
        *v7 = 0;
    }
    v10 = MiLockLeafPage((unsigned __int64 *)v1, 0LL);
    BugCheckParameter4 = *(_QWORD *)v1;
    v14 = v10;
    if ( v1 + 0x90482413000LL <= 0x7F8
      && (unsigned int)MiPteHasShadow(v11, BugCheckParameter4)
      && (BugCheckParameter4 & 1) != 0
      && ((BugCheckParameter4 & 0x20) == 0 || (BugCheckParameter4 & 0x42) == 0) )
    {
      v12 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
      if ( v12 )
      {
        v15 = *(_QWORD *)(v12 + 8 * ((v1 >> 3) & 0x1FF));
        if ( (v15 & 0x20) != 0 )
          BugCheckParameter4 |= 0x20uLL;
        if ( (v15 & 0x42) != 0 )
          BugCheckParameter4 |= 0x42uLL;
      }
    }
    if ( v14 )
    {
      if ( (BugCheckParameter4 & 1) != 0 )
        KeBugCheckEx(0xDEu, 3uLL, BugCheckParameter2, v1, BugCheckParameter4);
      v17 = ((unsigned __int64)MiReverseSwizzleInvalidPte(BugCheckParameter4, BugCheckParameter4, v12, v14) >> 12) & 0xFFFFFFFFFLL;
      v18 = 48 * v17 - 0x58000000000LL;
      if ( (*(_BYTE *)(v18 + 34) & 0x10) != 0 || *(_WORD *)(v18 + 32) != v16 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiUnlockProtoPoolPage(v5, v30);
        v24 = (volatile signed __int32 *)(v4 + 72);
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v4 + 72);
        }
        else
        {
          v26 = 0;
          if ( _interlockedbittestandset(v24, 0x1Fu) )
            v26 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)(v4 + 72));
          for ( i = *v24; (*v24 & 0xBFFFFFFF) != 0x80000000; i = *v24 )
          {
            if ( (i & 0x40000000) == 0 )
              _InterlockedCompareExchange(v24, i | 0x40000000, i);
            if ( (++v26 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v26);
          }
        }
        *(_WORD *)(BugCheckParameter2 + 32) |= 1u;
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v24, retaddr);
        else
          *v24 = 0;
        __writecr8(CurrentIrql);
        return 0LL;
      }
      MiDereferenceControlAreaPfn(v4, BugCheckParameter2, 2);
      v19 = *(_QWORD *)(v18 + 16);
      *(_QWORD *)v1 = v19;
      if ( v1 + 0x90482413000LL <= 0x7F8 )
        MiWritePteShadow(v1, v19);
      MiUnlinkPageFromList(48 * v17 - 0x58000000000LL, 0LL);
      MiInsertPageInFreeOrZeroedList(v17, 2);
      _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v20 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v20 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v20);
        }
        while ( *(__int64 *)(v5 + 24) < 0 );
      }
      if ( (*(_BYTE *)(v5 + 34) & 7) != 6 )
        KeBugCheckEx(
          0x4Eu,
          0x99uLL,
          (v5 + 0x58000000000LL) / 48,
          *(_BYTE *)(v5 + 34) & 7,
          *(_QWORD *)(v5 + 24) & 0x3FFFFFFFFFFFFFFFLL);
      v21 = *(_QWORD *)(v5 + 24);
      v22 = (v21 & 0x3FFFFFFFFFFFFFFFLL) - 1;
      *(_QWORD *)(v5 + 24) = v21 ^ (v22 ^ v21) & 0x3FFFFFFFFFFFFFFFLL;
      if ( (v21 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
        MiPfnShareCountIsZero(v5, v22);
      _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    else if ( (BugCheckParameter4 & 0xC00) == 0 && BugCheckParameter4 )
    {
      KeBugCheckEx(0xDEu, 4uLL, BugCheckParameter2, v1, BugCheckParameter4);
    }
    v1 += 8LL;
  }
  while ( v1 < v6 );
  if ( v30 != 17 )
    MiUnlockProtoPoolPage(v5, v30);
  return 1LL;
}
