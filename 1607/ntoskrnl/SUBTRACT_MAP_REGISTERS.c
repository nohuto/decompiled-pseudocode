/*
 * XREFs of SUBTRACT_MAP_REGISTERS @ 0x140705EA0
 * Callers:
 *     ViFlushZeroMapRegisterBaseWcbs @ 0x140222A28 (ViFlushZeroMapRegisterBaseWcbs.c)
 *     VfAllocateAdapterChannel @ 0x140706210 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x1407063D4 (VfAllocateAdapterChannelEx.c)
 *     VfCancelAdapterChannel @ 0x140706DA0 (VfCancelAdapterChannel.c)
 *     VfFreeAdapterChannel @ 0x1407070FC (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x14070719C (VfFreeAdapterObject.c)
 *     VfFreeMapRegisters @ 0x140707368 (VfFreeMapRegisters.c)
 *     VfPutScatterGatherList @ 0x140708340 (VfPutScatterGatherList.c)
 *     ViAdapterCallback @ 0x1407084B8 (ViAdapterCallback.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x140223370 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x140709AEC (ViHalPreprocessOptions.c)
 */

void __fastcall SUBTRACT_MAP_REGISTERS(__int64 a1, int a2)
{
  int v3; // eax
  int v4; // ebx

  v3 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 160), -a2) - a2;
  if ( v3 < 0 )
  {
    v4 = -v3;
    ViHalPreprocessOptions(byte_1402F993C, "Freed too many map registers: -%x.", 5);
    VfReportIssueWithOptions(230, 5, v4, 0, 0LL, byte_1402F993C);
  }
  _InterlockedExchange((volatile __int32 *)(a1 + 188), 0);
}
