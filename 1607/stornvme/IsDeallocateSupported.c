/*
 * XREFs of IsDeallocateSupported @ 0x1C0009D0C
 * Callers:
 *     FormInquiryBlockLimitsData @ 0x1C0008D88 (FormInquiryBlockLimitsData.c)
 *     FormInquiryBlockProvisioningData @ 0x1C0008E74 (FormInquiryBlockProvisioningData.c)
 *     ScsiUnmapRequest @ 0x1C000C394 (ScsiUnmapRequest.c)
 * Callees:
 *     <none>
 */

char __fastcall IsDeallocateSupported(__int64 a1)
{
  char v1; // dl

  v1 = 1;
  if ( (*(_DWORD *)(a1 + 52) & 1) != 0 || (*(_BYTE *)(*(_QWORD *)(a1 + 1080) + 520LL) & 4) == 0 )
    return 0;
  return v1;
}
