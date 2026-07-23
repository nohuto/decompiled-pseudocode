/*
 * XREFs of INCREASE_MAPPED_TRANSFER_BYTE_COUNT @ 0x140705D74
 * Callers:
 *     VfMapTransfer @ 0x140707CF0 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x140707E98 (VfMapTransferEx.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x140223370 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x140709AEC (ViHalPreprocessOptions.c)
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
    ViHalPreprocessOptions(byte_1402F9938, "Driver did not flush adapter buffers -- bytes mapped: %x (%x max).", 13, v4);
    VfReportIssueWithOptions(230, 13, v6, v5, 0LL, byte_1402F9938);
  }
}
