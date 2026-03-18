/*
 * XREFs of MmAdjustWorkingSetSize @ 0x1401E2B40
 * Callers:
 *     SmKmVirtualLockContextIncreaseWsMin @ 0x1402210D8 (SmKmVirtualLockContextIncreaseWsMin.c)
 *     SmKmVirtualLockCtxMemoryUnlocked @ 0x140221370 (SmKmVirtualLockCtxMemoryUnlocked.c)
 *     PspApplyWorkingSetLimitsToProcess @ 0x14046A558 (PspApplyWorkingSetLimitsToProcess.c)
 *     PspApplyWorkingSetLimits @ 0x140680254 (PspApplyWorkingSetLimits.c)
 * Callees:
 *     MmAdjustWorkingSetSizeEx @ 0x1400AD44C (MmAdjustWorkingSetSizeEx.c)
 */

__int64 __fastcall MmAdjustWorkingSetSize(unsigned __int64 a1, unsigned __int64 a2, int a3, char a4)
{
  _BYTE v5[24]; // [rsp+30h] [rbp-18h] BYREF

  return MmAdjustWorkingSetSizeEx(a1, a2, a3, a4, 0, v5);
}
