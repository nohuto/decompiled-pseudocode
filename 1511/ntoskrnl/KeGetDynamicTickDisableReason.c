/*
 * XREFs of KeGetDynamicTickDisableReason @ 0x140166E88
 * Callers:
 *     PopDiagTraceDynamicTickStatusRundown @ 0x140639008 (PopDiagTraceDynamicTickStatusRundown.c)
 *     EtwpClockSourceRunDown @ 0x14066535C (EtwpClockSourceRunDown.c)
 * Callees:
 *     <none>
 */

char KeGetDynamicTickDisableReason()
{
  return KiDynamicTickDisableReason;
}
