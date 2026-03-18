/*
 * XREFs of MmQueryWorkingSetInformation @ 0x1400F090C
 * Callers:
 *     SmKmVirtualLockContextIncreaseWsMin @ 0x140257FA0 (SmKmVirtualLockContextIncreaseWsMin.c)
 *     SmKmVirtualLockCtxMemoryUnlocked @ 0x1402582E4 (SmKmVirtualLockCtxMemoryUnlocked.c)
 *     NtQueryInformationProcess @ 0x14050D9A0 (NtQueryInformationProcess.c)
 *     PspQueryQuotaLimits @ 0x140511084 (PspQueryQuotaLimits.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140033D90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140264154 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140264230 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MmQueryWorkingSetInformation(_QWORD *a1, _QWORD *a2, _QWORD *a3, _QWORD *a4, _QWORD *a5, _DWORD *a6)
{
  unsigned __int16 *v10; // rbx
  unsigned __int8 CurrentIrql; // si
  signed __int32 v12; // ett
  void *retaddr; // [rsp+38h] [rbp+0h]

  *a6 = 0;
  v10 = &KeGetCurrentThread()->ApcState.Process[1].IdealNode[8];
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v10);
  }
  else
  {
    _m_prefetchw(v10);
    v12 = *(_DWORD *)v10 & 0x7FFFFFFF;
    if ( v12 != _InterlockedCompareExchange((volatile signed __int32 *)v10, v12 + 1, v12) )
      ExpWaitForSpinLockSharedAndAcquire((volatile signed __int32 *)v10);
  }
  *a1 = *((_QWORD *)v10 + 21) << 12;
  *a2 = *((_QWORD *)v10 + 13) << 12;
  *a3 = *((_QWORD *)v10 + 14) << 12;
  *a4 = *((_QWORD *)v10 + 12) << 12;
  *a5 = *((_QWORD *)v10 + 17) << 12;
  if ( *((char *)v10 + 216) < 0 )
    *a6 |= 4u;
  if ( (v10[108] & 0x40) != 0 )
    *a6 |= 1u;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v10, retaddr);
  }
  else
  {
    _InterlockedAnd((volatile signed __int32 *)v10, 0xBFFFFFFF);
    _InterlockedDecrement((volatile signed __int32 *)v10);
  }
  __writecr8(CurrentIrql);
  return 0LL;
}
