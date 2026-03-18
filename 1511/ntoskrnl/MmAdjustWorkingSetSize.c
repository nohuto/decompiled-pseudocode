/*
 * XREFs of MmAdjustWorkingSetSize @ 0x1401D2A7C
 * Callers:
 *     SmKmVirtualLockContextIncreaseWsMin @ 0x140208CDC (SmKmVirtualLockContextIncreaseWsMin.c)
 *     SmKmVirtualLockCtxMemoryUnlocked @ 0x1402090B0 (SmKmVirtualLockCtxMemoryUnlocked.c)
 *     PspApplyWorkingSetLimitsToProcess @ 0x1403E9200 (PspApplyWorkingSetLimitsToProcess.c)
 *     PspApplyWorkingSetLimits @ 0x140641E10 (PspApplyWorkingSetLimits.c)
 * Callees:
 *     MmAdjustWorkingSetSizeEx @ 0x140096B2C (MmAdjustWorkingSetSizeEx.c)
 */

__int64 __fastcall MmAdjustWorkingSetSize(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, char a4)
{
  _BYTE v5[24]; // [rsp+30h] [rbp-18h] BYREF

  return MmAdjustWorkingSetSizeEx(a1, a2, a3, a4, 0, v5);
}
