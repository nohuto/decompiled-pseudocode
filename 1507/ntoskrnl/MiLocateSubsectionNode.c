/*
 * XREFs of MiLocateSubsectionNode @ 0x140085A20
 * Callers:
 *     MiComputeDataFlushRange @ 0x140085714 (MiComputeDataFlushRange.c)
 *     MiGetProtoPteAddress @ 0x1400BF2B0 (MiGetProtoPteAddress.c)
 *     MiAdvanceVadView @ 0x1400F1AD4 (MiAdvanceVadView.c)
 *     MiPfPrepareReadList @ 0x14049E0C0 (MiPfPrepareReadList.c)
 *     MiMapViewOfDataSection @ 0x1404B64E0 (MiMapViewOfDataSection.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140033D90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiSubsectionCompare @ 0x140123344 (MiSubsectionCompare.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140264154 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140264230 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

_QWORD *__fastcall MiLocateSubsectionNode(volatile signed __int32 *a1, unsigned __int64 a2, int a3)
{
  unsigned __int8 CurrentIrql; // si
  __int64 v6; // rdi
  __int64 v7; // r8
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  signed __int32 v12; // ett
  _QWORD *v13; // rbx
  int v14; // eax
  _QWORD *v15; // rbx
  char v16[32]; // [rsp+20h] [rbp-78h] BYREF
  __int16 v17; // [rsp+40h] [rbp-58h]
  int v18; // [rsp+44h] [rbp-54h]
  void *retaddr; // [rsp+98h] [rbp+0h]
  __int16 v20; // [rsp+ACh] [rbp+14h]

  if ( a2 >= 0x3FFFFFFFFFF000LL )
    return 0LL;
  if ( a3 == 1 )
  {
    CurrentIrql = 17;
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
      _m_prefetchw((const void *)(a1 + 18));
      v12 = a1[18] & 0x7FFFFFFF;
      if ( v12 != _InterlockedCompareExchange(a1 + 18, v12 + 1, v12) )
        ExpWaitForSpinLockSharedAndAcquire(a1 + 18);
    }
  }
  v6 = *((_QWORD *)a1 + 31);
  v7 = 65520LL;
  v8 = a2 >> 12;
  v20 = WORD2(v8);
  v9 = *(unsigned int *)(v6 + 36) | ((unsigned __int64)(*(_WORD *)(v6 + 32) & 0xFFC0) << 26);
  v10 = v9 + *(unsigned int *)(v6 + 40) - 1LL;
  if ( (*(_WORD *)(v6 + 34) & 0xFFF0) != 0 )
    v10 = v9 + *(unsigned int *)(v6 + 40);
  if ( v8 >= v9 && v8 <= v10 )
  {
    if ( CurrentIrql != 17 )
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
      __writecr8(CurrentIrql);
    }
    return (_QWORD *)v6;
  }
  v18 = v8;
  v13 = (_QWORD *)*((_QWORD *)a1 + 29);
  v17 = v17 & 0x3F | (v20 << 6);
  while ( v13 )
  {
    v14 = MiSubsectionCompare(v16, v13, v7);
    if ( v14 < 0 )
    {
      v13 = (_QWORD *)*v13;
    }
    else
    {
      if ( v14 <= 0 )
      {
        v15 = v13 - 7;
        *((_QWORD *)a1 + 31) = v15;
        if ( CurrentIrql != 17 )
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
          __writecr8(CurrentIrql);
        }
        return v15;
      }
      v13 = (_QWORD *)v13[1];
    }
  }
  if ( CurrentIrql != 17 )
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
    __writecr8(CurrentIrql);
  }
  return 0LL;
}
