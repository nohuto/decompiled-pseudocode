/*
 * XREFs of MiOffsetToProtos @ 0x140032BF0
 * Callers:
 *     MmMapViewInSystemCache @ 0x1400185A0 (MmMapViewInSystemCache.c)
 *     MiSetSystemCodeProtection @ 0x1400FBE74 (MiSetSystemCodeProtection.c)
 *     MiPfPrepareSequentialReadList @ 0x14042F1C0 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x140444BC0 (MiPfPrepareReadList.c)
 *     MmHardFaultBytesRequired @ 0x140446420 (MmHardFaultBytesRequired.c)
 *     MiRelocateImage @ 0x140507390 (MiRelocateImage.c)
 *     MiScanRelocationPage @ 0x140507FA0 (MiScanRelocationPage.c)
 *     MiLogRelocationRva @ 0x140508C50 (MiLogRelocationRva.c)
 *     MiAddMappedPtes @ 0x140509080 (MiAddMappedPtes.c)
 * Callees:
 *     MiLocatePagefileSubsection @ 0x14002CBC0 (MiLocatePagefileSubsection.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140089320 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExReleaseSpinLockShared @ 0x1400E80B0 (ExReleaseSpinLockShared.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14022DC08 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14022DCE8 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiOffsetToProtos(_DWORD *a1, unsigned __int64 a2, unsigned __int64 *a3)
{
  _DWORD *v3; // rsi
  int v6; // eax
  unsigned __int8 CurrentIrql; // r12
  signed __int32 v9; // ett
  __int64 v10; // rax
  __int64 i; // rcx
  unsigned __int64 v12; // rbp
  unsigned __int64 v13; // rcx
  KIRQL v14; // bp
  signed __int32 v15; // ett
  __int64 v16; // r13
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  _QWORD *v21; // rcx
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // r8
  __int64 v24; // rax
  unsigned __int64 v25; // r9
  unsigned __int64 j; // rax
  void *retaddr; // [rsp+B8h] [rbp+0h]

  v3 = 0LL;
  *a3 = a2 >> 12;
  v6 = a1[14];
  if ( (v6 & 0x20) != 0 || !*((_QWORD *)a1 + 8) || (v6 & 0x400) != 0 )
  {
    v12 = *(unsigned int *)(*(_QWORD *)a1 + 8LL) | ((unsigned __int64)(*(_WORD *)(*(_QWORD *)a1 + 12LL) & 0x3FF) << 32);
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(a1 + 18, CurrentIrql);
    }
    else
    {
      _m_prefetchw(a1 + 18);
      v9 = a1[18] & 0x7FFFFFFF;
      if ( v9 != _InterlockedCompareExchange(a1 + 18, v9 + 1, v9) )
        ExpWaitForSpinLockSharedAndAcquire(a1 + 18, CurrentIrql);
    }
    v10 = *((_QWORD *)a1 + 30);
    for ( i = 0LL; v10; v10 = *(_QWORD *)(v10 + 8) )
      i = v10;
    v12 = *(unsigned int *)(i - 12)
        + (*(unsigned int *)(i - 20) | ((unsigned __int64)(*(_WORD *)(i - 24) & 0xFFC0) << 26));
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(a1 + 18, retaddr);
    }
    else
    {
      _InterlockedAnd(a1 + 18, 0xBFFFFFFF);
      _InterlockedDecrement(a1 + 18);
    }
    __writecr8(CurrentIrql);
  }
  v13 = *a3;
  if ( *a3 >= v12 )
    return 0LL;
  if ( !*((_QWORD *)a1 + 8) )
    return MiLocatePagefileSubsection((unsigned __int64)(a1 + 32), a3);
  if ( (a1[14] & 0x20) != 0 )
  {
    v3 = a1 + 32;
    for ( j = (unsigned int)a1[43]; v13 >= j; j = (unsigned int)v3[11] )
    {
      v13 -= j;
      *a3 = v13;
      v3 = (_DWORD *)*((_QWORD *)v3 + 2);
    }
  }
  else
  {
    if ( a2 >= 0x3FFFFFFFFFF000LL )
      goto LABEL_28;
    v14 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(a1 + 18, v14);
    }
    else
    {
      _m_prefetchw(a1 + 18);
      v15 = a1[18] & 0x7FFFFFFF;
      if ( v15 != _InterlockedCompareExchange(a1 + 18, v15 + 1, v15) )
        ExpWaitForSpinLockSharedAndAcquire(a1 + 18, v14);
    }
    v16 = *((_QWORD *)a1 + 32);
    v17 = a2 >> 12;
    v18 = *(unsigned int *)(v16 + 36) | ((unsigned __int64)(*(_WORD *)(v16 + 32) & 0xFFC0) << 26);
    v19 = v18 + *(unsigned int *)(v16 + 40) - 1LL;
    if ( (*(_WORD *)(v16 + 34) & 0xFFF0) != 0 )
      v19 = v18 + *(unsigned int *)(v16 + 40);
    if ( v17 >= v18 && v17 <= v19 )
    {
      if ( v14 != 17 )
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        {
          ExpReleaseSpinLockSharedFromDpcLevelInstrumented(a1 + 18, retaddr);
        }
        else
        {
          _InterlockedAnd(a1 + 18, 0xBFFFFFFF);
          _InterlockedDecrement(a1 + 18);
        }
        __writecr8(v14);
      }
      v3 = (_DWORD *)v16;
      goto LABEL_28;
    }
    v21 = (_QWORD *)*((_QWORD *)a1 + 30);
    if ( v21 )
    {
      v22 = (unsigned int)v17 | ((unsigned __int64)(unsigned __int16)(WORD2(v17) << 6) << 26);
      do
      {
        v23 = *((unsigned int *)v21 - 5) | ((unsigned __int64)(*(_WORD *)(v21 - 3) & 0xFFC0) << 26);
        v24 = *((unsigned int *)v21 - 4);
        v25 = v24 + v23 - 1;
        if ( (*((_WORD *)v21 - 11) & 0xFFF0) != 0 )
          v25 = v24 + v23;
        if ( v22 > v25 )
        {
          v21 = (_QWORD *)v21[1];
        }
        else
        {
          if ( v22 >= v23 )
          {
            v3 = v21 - 7;
            *((_QWORD *)a1 + 32) = v21 - 7;
            if ( v14 != 17 )
              goto LABEL_38;
            goto LABEL_28;
          }
          v21 = (_QWORD *)*v21;
        }
      }
      while ( v21 );
    }
    if ( v14 != 17 )
LABEL_38:
      ExReleaseSpinLockShared(a1 + 18, v14);
LABEL_28:
    *a3 -= (unsigned int)v3[9] | ((unsigned __int64)((_WORD)v3[8] & 0xFFC0) << 26);
  }
  return (__int64)v3;
}
