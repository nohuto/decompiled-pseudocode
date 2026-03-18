/*
 * XREFs of SUBTRACT_MAP_REGISTERS @ 0x14073A430
 * Callers:
 *     ViFlushZeroMapRegisterBaseWcbs @ 0x14025A6B4 (ViFlushZeroMapRegisterBaseWcbs.c)
 *     VfAllocateAdapterChannel @ 0x14073A974 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x14073AB94 (VfAllocateAdapterChannelEx.c)
 *     VfCancelAdapterChannel @ 0x14073B648 (VfCancelAdapterChannel.c)
 *     VfFreeAdapterChannel @ 0x14073B9A4 (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x14073BA44 (VfFreeAdapterObject.c)
 *     VfFreeMapRegisters @ 0x14073BC54 (VfFreeMapRegisters.c)
 *     VfPutScatterGatherList @ 0x14073CCCC (VfPutScatterGatherList.c)
 *     ViAdapterCallback @ 0x14073CEBC (ViAdapterCallback.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x14025B0C0 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x14073E7D0 (ViHalPreprocessOptions.c)
 */

void __fastcall SUBTRACT_MAP_REGISTERS(__int64 a1, int a2)
{
  int v3; // eax
  int v4; // ebx

  v3 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 160), -a2) - a2;
  if ( v3 < 0 )
  {
    v4 = -v3;
    ViHalPreprocessOptions(byte_140323104, "Freed too many map registers: -%x.", 5);
    VfReportIssueWithOptions(230, 5, v4, 0, 0LL, byte_140323104);
  }
  _InterlockedExchange((volatile __int32 *)(a1 + 188), 0);
}
