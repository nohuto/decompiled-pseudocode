/*
 * XREFs of MiEnableFileExtents @ 0x140230720
 * Callers:
 *     MiInitializeFileExtents @ 0x140230AFC (MiInitializeFileExtents.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KeWaitForGate @ 0x140126304 (KeWaitForGate.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiCreateFileOnlyPfns @ 0x1406AA3C8 (MiCreateFileOnlyPfns.c)
 */

__int64 __fastcall MiEnableFileExtents(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rsi
  unsigned __int8 v5; // r15
  _QWORD *v6; // r14
  __int64 *v7; // rcx
  volatile signed __int32 *v8; // rbx
  unsigned int v9; // edi
  signed __int32 v10; // eax
  volatile signed __int32 *v11; // rbx
  int FileOnlyPfns; // esi
  unsigned int v14; // edi
  signed __int32 v15; // eax
  __int64 v16; // [rsp+20h] [rbp-38h] BYREF
  __int64 v17; // [rsp+28h] [rbp-30h] BYREF
  __int64 v18; // [rsp+30h] [rbp-28h] BYREF
  __int64 *v19; // [rsp+38h] [rbp-20h]
  void *retaddr; // [rsp+58h] [rbp+0h]

  v4 = *a1;
  v5 = a2;
  v6 = a1;
  if ( a1[3] )
  {
    while ( !v6[1] )
    {
      HIDWORD(v17) = 0;
      v7 = (__int64 *)v6[3];
      v8 = (volatile signed __int32 *)(v4 + 72);
      v19 = &v18;
      v18 = (__int64)&v18;
      LOWORD(v17) = 263;
      BYTE2(v17) = 6;
      v16 = *v7;
      *v7 = (__int64)&v16;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v4 + 72, retaddr);
      else
        *v8 = 0;
      __writecr8(v5);
      KeWaitForGate(&v17, 0x12u);
      __writecr8(2uLL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v4 + 72);
      }
      else
      {
        v9 = 0;
        if ( _interlockedbittestandset(v8, 0x1Fu) )
          v9 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)(v4 + 72));
        while ( 1 )
        {
          v10 = *v8;
          a1 = (_QWORD *)*(unsigned int *)v8;
          LODWORD(a1) = (unsigned int)a1 & 0xBFFFFFFF;
          if ( (_DWORD)a1 == 0x80000000 )
            break;
          if ( (v10 & 0x40000000) == 0 )
            _InterlockedCompareExchange(v8, v10 | 0x40000000, v10);
          if ( (++v9 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v9);
        }
      }
      if ( !v6[3] )
        goto LABEL_18;
    }
    return 3221225505LL;
  }
  else
  {
LABEL_18:
    v6[3] = a3;
    v11 = (volatile signed __int32 *)(v4 + 72);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v4 + 72, retaddr);
    else
      *v11 = 0;
    __writecr8(v5);
    FileOnlyPfns = MiCreateFileOnlyPfns(a1, a2, *((unsigned int *)v6 + 11), a3, v16, v17, v18, v19);
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v11);
    }
    else
    {
      v14 = 0;
      if ( _interlockedbittestandset(v11, 0x1Fu) )
        v14 = ExpWaitForSpinLockExclusiveAndAcquire(v11);
      while ( 1 )
      {
        v15 = *v11;
        if ( (*v11 & 0xBFFFFFFF) == 0x80000000 )
          break;
        if ( (v15 & 0x40000000) == 0 )
          _InterlockedCompareExchange(v11, v15 | 0x40000000, v15);
        if ( (++v14 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v14);
      }
    }
    if ( FileOnlyPfns < 0 )
      v6[3] = 0LL;
    return (unsigned int)FileOnlyPfns;
  }
}
