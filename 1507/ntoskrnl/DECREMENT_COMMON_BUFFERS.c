/*
 * XREFs of DECREMENT_COMMON_BUFFERS @ 0x14073A1E8
 * Callers:
 *     VfFreeCommonBuffer @ 0x14073BB9C (VfFreeCommonBuffer.c)
 *     ViSpecialFreeCommonBuffer @ 0x14073F328 (ViSpecialFreeCommonBuffer.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x14025B0C0 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x14073E7D0 (ViHalPreprocessOptions.c)
 */

void __fastcall DECREMENT_COMMON_BUFFERS(__int64 a1)
{
  signed __int32 v2; // ebx
  unsigned int v3; // ecx
  unsigned __int32 v4; // ebx

  v2 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 176), 1u);
  v3 = *(_DWORD *)(a1 + 172);
  v4 = v2 + 1;
  if ( v4 > v3 )
  {
    ViHalPreprocessOptions(byte_1403230FC, "Freed too many common buffers.", 3LL, v4 - v3, 0LL, 0LL);
    VfReportIssueWithOptions(230, 3, v4 - *(_DWORD *)(a1 + 172), 0, 0LL, byte_1403230FC);
  }
}
