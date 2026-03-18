/*
 * XREFs of KeGetDynamicTickDisableReason @ 0x1400B5F6C
 * Callers:
 *     PopDiagTraceDynamicTickStatusRundown @ 0x14052B548 (PopDiagTraceDynamicTickStatusRundown.c)
 *     EtwpClockSourceRunDown @ 0x1406A6D40 (EtwpClockSourceRunDown.c)
 * Callees:
 *     <none>
 */

char KeGetDynamicTickDisableReason()
{
  return KiDynamicTickDisableReason;
}
