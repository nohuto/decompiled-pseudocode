/*
 * XREFs of ADD_MAP_REGISTERS @ 0x1406B9A14
 * Callers:
 *     VfAllocateAdapterChannel @ 0x1406BA16C (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x1406BA330 (VfAllocateAdapterChannelEx.c)
 *     VfAllocateCrashDumpRegisters @ 0x1406BA644 (VfAllocateCrashDumpRegisters.c)
 *     VfHalAllocateMapRegisters @ 0x1406BBA40 (VfHalAllocateMapRegisters.c)
 *     ViScatterGatherCallback @ 0x1406BE300 (ViScatterGatherCallback.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x14020BA88 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x1406BDA64 (ViHalPreprocessOptions.c)
 */

void __fastcall ADD_MAP_REGISTERS(__int64 a1, unsigned int a2, char a3)
{
  unsigned int v5; // esi

  v5 = a2 + _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 160), a2);
  _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 156), a2);
  if ( a2 > *(_DWORD *)(a1 + 152) )
  {
    ViHalPreprocessOptions(byte_1402D3FD8, "Allocating too many map registers at a time: %x (max %x).", 12, a2);
    VfReportIssueWithOptions(230, 12, a2, *(_DWORD *)(a1 + 152), 0LL, byte_1402D3FD8);
  }
  if ( !a3 && v5 > *(_DWORD *)(a1 + 152) )
  {
    ViHalPreprocessOptions(byte_1402D3FDC, "Allocated too many map registers : %x (max %x).", 21, v5);
    VfReportIssueWithOptions(230, 21, v5, *(_DWORD *)(a1 + 152), 0LL, byte_1402D3FDC);
  }
}
