/*
 * XREFs of ADD_MAP_REGISTERS @ 0x140705AB8
 * Callers:
 *     VfAllocateAdapterChannel @ 0x140706210 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x1407063D4 (VfAllocateAdapterChannelEx.c)
 *     VfAllocateCrashDumpRegisters @ 0x1407066E8 (VfAllocateCrashDumpRegisters.c)
 *     VfHalAllocateMapRegisters @ 0x140707AE4 (VfHalAllocateMapRegisters.c)
 *     ViScatterGatherCallback @ 0x14070A388 (ViScatterGatherCallback.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x140223370 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x140709AEC (ViHalPreprocessOptions.c)
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
