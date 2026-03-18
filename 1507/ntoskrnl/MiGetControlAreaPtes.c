/*
 * XREFs of MiGetControlAreaPtes @ 0x14008A830
 * Callers:
 *     MiPfPrepareSequentialReadList @ 0x14049D9A0 (MiPfPrepareSequentialReadList.c)
 *     MiMapViewOfDataSection @ 0x1404B64E0 (MiMapViewOfDataSection.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140033D90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140264154 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140264230 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

unsigned __int64 __fastcall MiGetControlAreaPtes(__int64 a1)
{
  int v1; // eax
  _DWORD *v4; // rdi
  unsigned __int8 CurrentIrql; // si
  signed __int32 v6; // ett
  __int64 v7; // rax
  __int64 i; // rcx
  unsigned __int64 v9; // rbx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *(_DWORD *)(a1 + 56);
  if ( (v1 & 0x20) != 0 || !*(_QWORD *)(a1 + 64) || (v1 & 0x400) != 0 )
    return *(unsigned int *)(*(_QWORD *)a1 + 8LL) | ((unsigned __int64)(*(_WORD *)(*(_QWORD *)a1 + 12LL) & 0x3FF) << 32);
  v4 = (_DWORD *)(a1 + 72);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v4);
  }
  else
  {
    _m_prefetchw(v4);
    v6 = *v4 & 0x7FFFFFFF;
    if ( v6 != _InterlockedCompareExchange(v4, v6 + 1, v6) )
      ExpWaitForSpinLockSharedAndAcquire(v4);
  }
  v7 = *(_QWORD *)(a1 + 232);
  for ( i = 0LL; v7; v7 = *(_QWORD *)(v7 + 8) )
    i = v7;
  v9 = *(unsigned int *)(i - 12) + (*(unsigned int *)(i - 20) | ((unsigned __int64)(*(_WORD *)(i - 24) & 0xFFC0) << 26));
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v4, retaddr);
  }
  else
  {
    _InterlockedAnd(v4, 0xBFFFFFFF);
    _InterlockedDecrement(v4);
  }
  __writecr8(CurrentIrql);
  return v9;
}
