/*
 * XREFs of HUBMISC_ConvertUsbDeviceIdsToString @ 0x1C0028068
 * Callers:
 *     HUBFDO_QueryHubErrataFlags @ 0x1C00672B4 (HUBFDO_QueryHubErrataFlags.c)
 *     HUBMISC_QueryAndCacheRegistryValuesForDevice @ 0x1C006ADB0 (HUBMISC_QueryAndCacheRegistryValuesForDevice.c)
 *     HUBREG_AssignUsbflagsValueForDevice @ 0x1C006BBB0 (HUBREG_AssignUsbflagsValueForDevice.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x1C0001000 (RtlStringCchPrintfA.c)
 */

NTSTATUS __fastcall HUBMISC_ConvertUsbDeviceIdsToString(unsigned __int16 *a1, char *a2, char *a3, char *a4)
{
  RtlStringCchPrintfA(a2, 5uLL, "%04X", a1[4]);
  RtlStringCchPrintfA(a3, 5uLL, "%04X", a1[5]);
  return RtlStringCchPrintfA(a4, 5uLL, "%04X", a1[6]);
}
