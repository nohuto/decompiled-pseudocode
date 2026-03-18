/*
 * XREFs of RtlQueryTimeZoneInformation @ 0x140688598
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlQueryTimeZoneInformation(PRTL_TIME_ZONE_INFORMATION TimeZoneInformation)
{
  return RtlpQueryTimeZoneInformationWorker((char *)TimeZoneInformation, 0xACuLL);
}
