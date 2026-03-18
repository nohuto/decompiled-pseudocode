/*
 * XREFs of RtlSetTimeZoneInformation @ 0x140648FEC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlSetTimeZoneInformation(PRTL_TIME_ZONE_INFORMATION TimeZoneInformation)
{
  return RtlpSetTimeZoneInformationWorker(TimeZoneInformation);
}
