/*
 * XREFs of ADD_MAP_REGISTERS @ 0x140705A88
 * Callers:
 *     VfAllocateAdapterChannel @ 0x1407061E0 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x1407063A4 (VfAllocateAdapterChannelEx.c)
 *     VfAllocateCrashDumpRegisters @ 0x1407066B8 (VfAllocateCrashDumpRegisters.c)
 *     VfHalAllocateMapRegisters @ 0x140707AB4 (VfHalAllocateMapRegisters.c)
 *     ViScatterGatherCallback @ 0x14070A358 (ViScatterGatherCallback.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x140223544 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x140709ABC (ViHalPreprocessOptions.c)
 */

void __fastcall ADD_MAP_REGISTERS(__int64 a1, unsigned int a2, char a3)
{
  unsigned int v5; // esi

  v5 = a2 + _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 160), a2);
  _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 156), a2);
  if ( a2 > *(_DWORD *)(a1 + 152) )
  {
    ViHalPreprocessOptions(byte_1402F9940, "Allocating too many map registers at a time: %x (max %x).", 12, a2);
    VfReportIssueWithOptions(230, 12, a2, *(_DWORD *)(a1 + 152), 0LL, byte_1402F9940);
  }
  if ( !a3 && v5 > *(_DWORD *)(a1 + 152) )
  {
    ViHalPreprocessOptions(byte_1402F9944, "Allocated too many map registers : %x (max %x).", 21, v5);
    VfReportIssueWithOptions(230, 21, v5, *(_DWORD *)(a1 + 152), 0LL, byte_1402F9944);
  }
}
