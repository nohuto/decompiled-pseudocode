/*
 * XREFs of ADD_MAP_REGISTERS @ 0x14073A048
 * Callers:
 *     VfAllocateAdapterChannel @ 0x14073A974 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x14073AB94 (VfAllocateAdapterChannelEx.c)
 *     VfAllocateCrashDumpRegisters @ 0x14073AEF0 (VfAllocateCrashDumpRegisters.c)
 *     VfHalAllocateMapRegisters @ 0x14073C424 (VfHalAllocateMapRegisters.c)
 *     ViScatterGatherCallback @ 0x14073F15C (ViScatterGatherCallback.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x14025B0C0 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x14073E7D0 (ViHalPreprocessOptions.c)
 */

void __fastcall ADD_MAP_REGISTERS(__int64 a1, unsigned int a2, char a3)
{
  unsigned int v5; // esi

  v5 = a2 + _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 160), a2);
  _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 156), a2);
  if ( a2 > *(_DWORD *)(a1 + 152) )
  {
    ViHalPreprocessOptions(byte_140323108, "Allocating too many map registers at a time: %x (max %x).", 12, a2);
    VfReportIssueWithOptions(230, 12, a2, *(_DWORD *)(a1 + 152), 0LL, byte_140323108);
  }
  if ( !a3 && v5 > *(_DWORD *)(a1 + 152) )
  {
    ViHalPreprocessOptions(byte_140323100, "Allocated too many map registers : %x (max %x).", 21, v5);
    VfReportIssueWithOptions(230, 21, v5, *(_DWORD *)(a1 + 152), 0LL, byte_140323100);
  }
}
