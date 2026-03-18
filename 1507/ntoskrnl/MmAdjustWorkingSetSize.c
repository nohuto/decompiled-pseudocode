/*
 * XREFs of MmAdjustWorkingSetSize @ 0x140213DAC
 * Callers:
 *     SmKmVirtualLockContextIncreaseWsMin @ 0x140257FA0 (SmKmVirtualLockContextIncreaseWsMin.c)
 *     SmKmVirtualLockCtxMemoryUnlocked @ 0x1402582E4 (SmKmVirtualLockCtxMemoryUnlocked.c)
 *     PspApplyWorkingSetLimitsToProcess @ 0x14041B1FC (PspApplyWorkingSetLimitsToProcess.c)
 *     PspApplyWorkingSetLimits @ 0x1406C43B8 (PspApplyWorkingSetLimits.c)
 * Callees:
 *     MmAdjustWorkingSetSizeEx @ 0x14012B124 (MmAdjustWorkingSetSizeEx.c)
 */

__int64 __fastcall MmAdjustWorkingSetSize(unsigned __int64 a1, unsigned __int64 a2, int a3, char a4)
{
  _BYTE v5[24]; // [rsp+30h] [rbp-18h] BYREF

  return MmAdjustWorkingSetSizeEx(a1, a2, a3, a4, 0, v5);
}
