/*
 * XREFs of INCREASE_MAPPED_TRANSFER_BYTE_COUNT @ 0x14073A304
 * Callers:
 *     VfMapTransfer @ 0x14073C630 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x14073C7D8 (VfMapTransferEx.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x14025B0C0 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x14073E7D0 (ViHalPreprocessOptions.c)
 */

void __fastcall INCREASE_MAPPED_TRANSFER_BYTE_COUNT(__int64 a1, unsigned int a2, char a3)
{
  unsigned int v3; // r9d
  unsigned int v4; // eax
  int v5; // ebx
  int v6; // edi

  v3 = *(_DWORD *)(a1 + 160) << 12;
  v4 = a2 + _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 188), a2);
  if ( !a3 && v4 > v3 )
  {
    v5 = v3;
    v6 = v4;
    ViHalPreprocessOptions(byte_1403230F8, "Driver did not flush adapter buffers -- bytes mapped: %x (%x max).", 13, v4);
    VfReportIssueWithOptions(230, 13, v6, v5, 0LL, byte_1403230F8);
  }
}
