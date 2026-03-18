/*
 * XREFs of SUBTRACT_MAP_REGISTERS @ 0x1406B9DFC
 * Callers:
 *     ViFlushZeroMapRegisterBaseWcbs @ 0x14020B140 (ViFlushZeroMapRegisterBaseWcbs.c)
 *     VfAllocateAdapterChannel @ 0x1406BA16C (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x1406BA330 (VfAllocateAdapterChannelEx.c)
 *     VfCancelAdapterChannel @ 0x1406BACFC (VfCancelAdapterChannel.c)
 *     VfFreeAdapterChannel @ 0x1406BB058 (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x1406BB0F8 (VfFreeAdapterObject.c)
 *     VfFreeMapRegisters @ 0x1406BB2C4 (VfFreeMapRegisters.c)
 *     VfPutScatterGatherList @ 0x1406BC29C (VfPutScatterGatherList.c)
 *     ViAdapterCallback @ 0x1406BC414 (ViAdapterCallback.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x14020BA88 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x1406BDA64 (ViHalPreprocessOptions.c)
 */

void __fastcall SUBTRACT_MAP_REGISTERS(__int64 a1, int a2)
{
  int v3; // eax
  int v4; // ebx

  v3 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 160), -a2) - a2;
  if ( v3 < 0 )
  {
    v4 = -v3;
    ViHalPreprocessOptions(byte_1402D3FD4, "Freed too many map registers: -%x.", 5);
    VfReportIssueWithOptions(230, 5, v4, 0, 0LL, byte_1402D3FD4);
  }
  _InterlockedExchange((volatile __int32 *)(a1 + 188), 0);
}
