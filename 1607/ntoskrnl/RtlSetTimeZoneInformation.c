/*
 * XREFs of RtlSetTimeZoneInformation @ 0x1406885B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlSetTimeZoneInformation(PRTL_TIME_ZONE_INFORMATION TimeZoneInformation)
{
  return RtlpSetTimeZoneInformationWorker(TimeZoneInformation);
}
