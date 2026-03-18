/*
 * XREFs of INCREMENT_ADAPTER_CHANNELS @ 0x1406B9D60
 * Callers:
 *     VfAllocateAdapterChannel @ 0x1406BA16C (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x1406BA330 (VfAllocateAdapterChannelEx.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x14020BA88 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x1406BDA64 (ViHalPreprocessOptions.c)
 */

void __fastcall INCREMENT_ADAPTER_CHANNELS(__int64 a1)
{
  signed __int32 v2; // ebx
  int v3; // ecx

  v2 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 180));
  if ( *(_DWORD *)(a1 + 192) < 3u )
  {
    v3 = *(_DWORD *)(a1 + 184);
    if ( v2 != v3 + 1 )
    {
      ViHalPreprocessOptions(
        byte_1402D3FCC,
        "Driver has allocated too many simultaneous adapter channels.",
        11LL,
        (unsigned int)(v2 - v3),
        0LL,
        0LL);
      VfReportIssueWithOptions(230, 11, v2 - *(_DWORD *)(a1 + 184), 0, 0LL, byte_1402D3FCC);
    }
  }
}
