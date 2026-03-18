/*
 * XREFs of KeGetDynamicTickDisableReason @ 0x140195C44
 * Callers:
 *     PopDiagTraceDynamicTickStatusRundown @ 0x1406B90FC (PopDiagTraceDynamicTickStatusRundown.c)
 *     EtwpClockSourceRunDown @ 0x1406E8450 (EtwpClockSourceRunDown.c)
 * Callees:
 *     <none>
 */

char KeGetDynamicTickDisableReason()
{
  return KiDynamicTickDisableReason;
}
