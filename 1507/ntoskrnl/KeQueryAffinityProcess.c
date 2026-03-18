/*
 * XREFs of KeQueryAffinityProcess @ 0x1400F07A0
 * Callers:
 *     PspAllocateProcess @ 0x140468798 (PspAllocateProcess.c)
 *     NtQueryInformationProcess @ 0x14050D9A0 (NtQueryInformationProcess.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140033D90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140264154 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140264230 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

__int64 __fastcall KeQueryAffinityProcess(__int64 a1, __int64 a2, int *a3, __int64 a4)
{
  unsigned __int8 CurrentIrql; // r14
  signed __int32 v9; // ett
  unsigned int v10; // edi
  __int64 result; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(a1 + 64);
  }
  else
  {
    _m_prefetchw((const void *)(a1 + 64));
    v9 = *(_DWORD *)(a1 + 64) & 0x7FFFFFFF;
    if ( v9 != _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 64), v9 + 1, v9) )
      ExpWaitForSpinLockSharedAndAcquire((volatile signed __int32 *)(a1 + 64));
  }
  *(_OWORD *)a2 = *(_OWORD *)(a1 + 80);
  *(_OWORD *)(a2 + 16) = *(_OWORD *)(a1 + 96);
  *(_OWORD *)(a2 + 32) = *(_OWORD *)(a1 + 112);
  *(_OWORD *)(a2 + 48) = *(_OWORD *)(a1 + 128);
  *(_OWORD *)(a2 + 64) = *(_OWORD *)(a1 + 144);
  *(_OWORD *)(a2 + 80) = *(_OWORD *)(a1 + 160);
  *(_OWORD *)(a2 + 96) = *(_OWORD *)(a1 + 176);
  *(_OWORD *)(a2 + 112) = *(_OWORD *)(a1 + 192);
  *(_OWORD *)(a2 + 128) = *(_OWORD *)(a1 + 208);
  *(_OWORD *)(a2 + 144) = *(_OWORD *)(a1 + 224);
  *(_QWORD *)(a2 + 160) = *(_QWORD *)(a1 + 240);
  v10 = *(_DWORD *)(a1 + 440);
  if ( a4 )
  {
    *(_OWORD *)a4 = *(_OWORD *)(a1 + 528);
    *(_OWORD *)(a4 + 16) = *(_OWORD *)(a1 + 544);
    *(_QWORD *)(a4 + 32) = *(_QWORD *)(a1 + 560);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented(a1 + 64, retaddr);
  }
  else
  {
    _InterlockedAnd((volatile signed __int32 *)(a1 + 64), 0xBFFFFFFF);
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 64));
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  if ( a3 )
    *a3 = (v10 >> 8) & 0xFFFFF;
  return result;
}
