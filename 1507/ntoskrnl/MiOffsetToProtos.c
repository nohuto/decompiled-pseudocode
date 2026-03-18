/*
 * XREFs of MiOffsetToProtos @ 0x140053430
 * Callers:
 *     MiSetSystemCodeProtection @ 0x140023140 (MiSetSystemCodeProtection.c)
 *     MmMapViewInSystemCache @ 0x14003D650 (MmMapViewInSystemCache.c)
 *     MiLogRelocationRva @ 0x1404431EC (MiLogRelocationRva.c)
 *     MiRelocateImage @ 0x14046E680 (MiRelocateImage.c)
 *     MiScanRelocationPage @ 0x14046EDB0 (MiScanRelocationPage.c)
 *     MmHardFaultBytesRequired @ 0x14049CF40 (MmHardFaultBytesRequired.c)
 *     MiPfPrepareSequentialReadList @ 0x14049D9A0 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x14049E0C0 (MiPfPrepareReadList.c)
 *     MiAddMappedPtes @ 0x14051C0C0 (MiAddMappedPtes.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140033D90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiLocatePagefileSubsection @ 0x140089C20 (MiLocatePagefileSubsection.c)
 *     MiSubsectionCompare @ 0x140123344 (MiSubsectionCompare.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140264154 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140264230 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiOffsetToProtos(_DWORD *a1, unsigned __int64 a2, unsigned __int64 *a3)
{
  _DWORD *v3; // rsi
  int v6; // eax
  unsigned __int8 CurrentIrql; // r12
  signed __int32 v9; // ett
  __int64 v10; // rax
  __int64 i; // rcx
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rcx
  unsigned __int8 v14; // r14
  signed __int32 v15; // ett
  __int64 v16; // r13
  __int64 v17; // r8
  unsigned __int64 v18; // rbp
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  unsigned __int64 j; // rax
  _QWORD *v23; // rbp
  int v24; // eax
  char v25[32]; // [rsp+20h] [rbp-98h] BYREF
  __int16 v26; // [rsp+40h] [rbp-78h]
  int v27; // [rsp+44h] [rbp-74h]
  void *retaddr; // [rsp+B8h] [rbp+0h]
  __int16 v29; // [rsp+C4h] [rbp+Ch]

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
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(a1 + 18);
    }
    else
    {
      _m_prefetchw(a1 + 18);
      v9 = a1[18] & 0x7FFFFFFF;
      if ( v9 != _InterlockedCompareExchange(a1 + 18, v9 + 1, v9) )
        ExpWaitForSpinLockSharedAndAcquire(a1 + 18);
    }
    v10 = *((_QWORD *)a1 + 29);
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
    return MiLocatePagefileSubsection(a1 + 30, a3);
  if ( (a1[14] & 0x20) != 0 )
  {
    v3 = a1 + 30;
    for ( j = (unsigned int)a1[41]; v13 >= j; j = (unsigned int)v3[11] )
    {
      v13 -= j;
      *a3 = v13;
      v3 = (_DWORD *)*((_QWORD *)v3 + 2);
    }
  }
  else
  {
    if ( a2 < 0x3FFFFFFFFFF000LL )
    {
      v14 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        ExpAcquireSpinLockSharedAtDpcLevelInstrumented(a1 + 18);
      }
      else
      {
        _m_prefetchw(a1 + 18);
        v15 = a1[18] & 0x7FFFFFFF;
        if ( v15 != _InterlockedCompareExchange(a1 + 18, v15 + 1, v15) )
          ExpWaitForSpinLockSharedAndAcquire(a1 + 18);
      }
      v16 = *((_QWORD *)a1 + 31);
      v17 = 65520LL;
      v18 = a2 >> 12;
      v19 = *(unsigned int *)(v16 + 36) | ((unsigned __int64)(*(_WORD *)(v16 + 32) & 0xFFC0) << 26);
      v20 = v19 + *(unsigned int *)(v16 + 40) - 1LL;
      if ( (*(_WORD *)(v16 + 34) & 0xFFF0) != 0 )
        v20 = v19 + *(unsigned int *)(v16 + 40);
      v29 = WORD2(v18);
      if ( v18 < v19 || v18 > v20 )
      {
        v27 = v18;
        v23 = (_QWORD *)*((_QWORD *)a1 + 29);
        v26 = (v29 << 6) | v26 & 0x3F;
        while ( v23 )
        {
          v24 = MiSubsectionCompare(v25, v23, v17);
          if ( v24 < 0 )
          {
            v23 = (_QWORD *)*v23;
          }
          else
          {
            if ( v24 <= 0 )
            {
              v3 = v23 - 7;
              *((_QWORD *)a1 + 31) = v23 - 7;
              break;
            }
            v23 = (_QWORD *)v23[1];
          }
        }
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
      }
      else
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
      }
    }
    *a3 -= (unsigned int)v3[9] | ((unsigned __int64)((_WORD)v3[8] & 0xFFC0) << 26);
  }
  return (__int64)v3;
}
