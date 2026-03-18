/*
 * XREFs of MiInsertViewOfPhysicalSection @ 0x14016A030
 * Callers:
 *     MiMapViewOfPhysicalSection @ 0x1405B2C58 (MiMapViewOfPhysicalSection.c)
 * Callees:
 *     MiMakeSystemAddressValid @ 0x14005E6FC (MiMakeSystemAddressValid.c)
 *     MI_INCREMENT_USED_PTES_BY_HANDLE_CLUSTER @ 0x14005E830 (MI_INCREMENT_USED_PTES_BY_HANDLE_CLUSTER.c)
 *     MiMakeProtectionPfnCompatible @ 0x1400797E8 (MiMakeProtectionPfnCompatible.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiLockVad @ 0x140089660 (MiLockVad.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     MiInsertVad @ 0x14008AC30 (MiInsertVad.c)
 *     MI_IS_PFN @ 0x1400C56E0 (MI_IS_PFN.c)
 *     MiLookupIoPageNode @ 0x140135BE4 (MiLookupIoPageNode.c)
 *     MiAssignInitialPageAttribute @ 0x140139738 (MiAssignInitialPageAttribute.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     MiShowBadMapper @ 0x14020DDF0 (MiShowBadMapper.c)
 *     MI_GET_USED_PTES_HANDLE @ 0x140223A68 (MI_GET_USED_PTES_HANDLE.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiInsertViewOfPhysicalSection(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rbp
  __int64 v5; // r15
  ULONG_PTR v6; // r12
  unsigned __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdi
  int v10; // ecx
  unsigned __int64 *v11; // rsi
  volatile signed __int32 *v12; // r13
  unsigned int v13; // ebx
  signed __int32 i; // edx
  __int64 v15; // rdx
  __int64 v16; // r14
  unsigned __int64 PteShadow; // rax
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // r11
  ULONG_PTR v21; // rbp
  _BYTE *v22; // r14
  __int64 v23; // rcx
  unsigned __int64 *v24; // r8
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // r8
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rbp
  unsigned __int64 v30; // rbx
  unsigned int ProtectionPfnCompatible; // eax
  __int64 v32; // rbx
  _QWORD *v33; // rax
  int v34; // eax
  unsigned int v35; // ebx
  volatile signed __int32 *v36; // rbx
  unsigned __int8 v37; // si
  unsigned int v38; // edi
  signed __int32 j; // edx
  unsigned __int64 v41; // [rsp+30h] [rbp-78h]
  unsigned __int64 v42; // [rsp+38h] [rbp-70h]
  unsigned __int8 CurrentIrql; // [rsp+40h] [rbp-68h]
  __int64 v44; // [rsp+48h] [rbp-60h]
  __int64 v45; // [rsp+50h] [rbp-58h]
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp-50h]
  void *retaddr; // [rsp+A8h] [rbp+0h]
  int v49; // [rsp+C0h] [rbp+18h]
  ULONG_PTR BugCheckParameter2; // [rsp+C8h] [rbp+20h]

  v3 = *(_QWORD *)(a2 + 80);
  v4 = (*(unsigned int *)(a2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 32) << 32)) << 12;
  v5 = (*(_DWORD *)(a2 + 48) >> 3) & 0x1F;
  BugCheckParameter2 = v3;
  v6 = ((8 * (*(unsigned int *)(a2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 32) << 32))) & 0x7FFFFFFFF8LL)
     - 0x98000000000LL;
  v41 = 8 * ((*(unsigned int *)(a2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 33) << 32)) & 0xFFFFFFFFFLL)
      - 0x98000000000LL;
  v7 = MmProtectToPteMask[v5] & 0xFFFFFFFFFFFFFF7FuLL;
  v8 = 16 * (v3 & 0xFFFFFFFFFLL);
  v9 = v7 | ((v8 | HIBYTE(word_14034EC18) & 1) << 8) | 0x25;
  if ( MmProtectToPteMask[v5] & 0x800 | ((v8 | HIBYTE(word_14034EC18) & 1) << 8) & 0x800 )
    v9 = v7 | ((v8 | HIBYTE(word_14034EC18) & 1) << 8) | 0x67;
  v10 = 2;
  if ( (unsigned int)v5 >> 3 != 3 || ((*(_DWORD *)(a2 + 48) >> 3) & 7) == 0 )
    v10 = (unsigned int)v5 >> 3 != 1;
  v49 = MiPlatformCacheAttributes[v10];
  v11 = (unsigned __int64 *)(((v4 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
  v45 = **(_QWORD **)(a2 + 72);
  CurrentThread = KeGetCurrentThread();
  MiLockVad((__int64)CurrentThread, a2, 0LL, 0x140000000LL);
  v12 = (volatile signed __int32 *)(a1 + 1272);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a1 + 1272);
  }
  else
  {
    v13 = 0;
    if ( _interlockedbittestandset(v12, 0x1Fu) )
      v13 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)(a1 + 1272));
    for ( i = *v12; (*v12 & 0xBFFFFFFF) != 0x80000000; i = *v12 )
    {
      if ( (i & 0x40000000) == 0 )
        _InterlockedCompareExchange(v12, i | 0x40000000, i);
      if ( (++v13 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v13);
    }
    v3 = BugCheckParameter2;
  }
  v15 = a1;
  v16 = a2;
  MiInsertVad(a2, v15);
  MiMakeSystemAddressValid(
    ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
    0LL,
    (*(_DWORD *)(a2 + 48) >> 8) & 0x3F,
    CurrentIrql,
    1);
  PteShadow = *v11;
  if ( (unsigned __int64)(v11 + 0x12090482600LL) <= 0x7F8 )
    PteShadow = MiReadPteShadow(v11, *v11);
  v18 = 48 * ((PteShadow >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  v19 = MI_GET_USED_PTES_HANDLE(v4);
  v21 = v41;
  v44 = v19;
  if ( v6 <= v41 )
  {
    v42 = v6 + v20;
    v22 = (_BYTE *)(48 * v3 - 0x57FFFFFFFDELL);
    while ( 1 )
    {
      if ( (v6 & 0xFFF) == 0 )
      {
        MiMakeSystemAddressValid(v6, 0LL, (*(_DWORD *)(a2 + 48) >> 8) & 0x3F, CurrentIrql, 1);
        v24 = (unsigned __int64 *)(((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        v25 = *v24;
        if ( (unsigned __int64)(v24 + 0x12090482600LL) <= 0x7F8
          && (unsigned int)MiPteHasShadow(v23, v25)
          && (v25 & 1) != 0
          && ((v25 & 0x20) == 0 || (v25 & 0x42) == 0) )
        {
          v27 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
          if ( v27 )
          {
            v28 = *(_QWORD *)(v27 + 8 * ((v26 >> 3) & 0x1FF));
            if ( (v28 & 0x20) != 0 )
              v25 |= 0x20uLL;
            if ( (v28 & 0x42) != 0 )
              v25 |= 0x42uLL;
          }
        }
        v18 = 48 * ((v25 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
        v19 = MI_GET_USED_PTES_HANDLE((__int64)(v6 << 25) >> 16);
        v44 = v19;
      }
      MI_INCREMENT_USED_PTES_BY_HANDLE_CLUSTER(v19, 1u);
      if ( !MI_IS_PFN(v3) )
        break;
      v29 = v3 & 0xFFFFFFFFFLL;
      v30 = ((v3 & 0xFFFFFFFFFLL) << 12) | v9 & 0xFFFF000000000FFFuLL;
      if ( !*((_WORD *)v22 - 1) )
        MiShowBadMapper(BugCheckParameter2);
      if ( (*v22 & 0xC0) == 0xC0 )
        MiAssignInitialPageAttribute((__int64)(v22 - 34), v49);
      if ( (unsigned __int8)*v22 >> 6 != v49 )
      {
        ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(v5, (__int64)(v22 - 34));
        v32 = (16 * v29) | HIBYTE(word_14034EC18) & 1;
        v5 = ProtectionPfnCompatible;
        v21 = v41;
LABEL_42:
        v30 = MmProtectToPteMask[v5] & 0xFFFFFFFFFFFFFF7FuLL | (v32 << 8) | 0x25;
        if ( (v30 & 0x800) != 0 )
          v30 |= 0x42uLL;
        goto LABEL_51;
      }
      v21 = v41;
LABEL_51:
      *(_QWORD *)v6 = v30;
      if ( v42 <= 0x7F8 )
        MiWritePteShadow(v6, v30);
      v35 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v35 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v35);
        }
        while ( *(__int64 *)(v18 + 24) < 0 );
      }
      *(_QWORD *)(v18 + 24) ^= (*(_QWORD *)(v18 + 24) ^ (*(_QWORD *)(v18 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v6 += 8LL;
      v42 += 8LL;
      v3 = BugCheckParameter2 + 1;
      v19 = v44;
      v22 += 48;
      ++BugCheckParameter2;
      if ( v6 > v21 )
      {
        v16 = a2;
        goto LABEL_62;
      }
    }
    v33 = MiLookupIoPageNode(v3);
    if ( !v33 )
      KeBugCheckEx(0x1Au, 0x61949uLL, v3, 1uLL, 0LL);
    v5 &= 7u;
    v34 = *(unsigned __int16 *)(v33[6] + 2 * (v3 - v33[5])) >> 14;
    if ( v34 )
    {
      if ( v34 == 2 )
        v5 = (unsigned int)v5 | 0x38;
    }
    else
    {
      v5 = (unsigned int)v5 | 0x28;
    }
    v32 = (16 * (BugCheckParameter2 & 0xFFFFFFFFFLL)) | HIBYTE(word_14034EC18) & 1;
    goto LABEL_42;
  }
LABEL_62:
  v36 = (volatile signed __int32 *)(v45 + 72);
  v37 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v45 + 72);
  }
  else
  {
    v38 = 0;
    if ( _interlockedbittestandset(v36, 0x1Fu) )
      v38 = ExpWaitForSpinLockExclusiveAndAcquire(v36);
    for ( j = *v36; (*v36 & 0xBFFFFFFF) != 0x80000000; j = *v36 )
    {
      if ( (j & 0x40000000) == 0 )
        _InterlockedCompareExchange(v36, j | 0x40000000, j);
      if ( (++v38 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v38);
    }
  }
  ++*(_QWORD *)(v45 + 40);
  ++*(_QWORD *)(v45 + 48);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v36, retaddr);
  else
    *v36 = 0;
  __writecr8(v37);
  ++MEMORY[0xFFFFF58010804220];
  MiUnlockWorkingSetExclusive((__int64)v12, CurrentIrql);
  return MiUnlockVad((__int64)CurrentThread, v16);
}
