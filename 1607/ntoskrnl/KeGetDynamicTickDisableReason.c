/*
 * XREFs of KeGetDynamicTickDisableReason @ 0x1400B3D94
 * Callers:
 *     PopDiagTraceDynamicTickStatusRundown @ 0x14052C198 (PopDiagTraceDynamicTickStatusRundown.c)
 *     EtwpClockSourceRunDown @ 0x1406A6E78 (EtwpClockSourceRunDown.c)
 * Callees:
 *     <none>
 */

char KeGetDynamicTickDisableReason()
{
  return KiDynamicTickDisableReason;
}
