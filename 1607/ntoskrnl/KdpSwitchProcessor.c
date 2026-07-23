/*
 * XREFs of KdpSwitchProcessor @ 0x1401D16CC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall KdpSwitchProcessor(__int64 a1, __int64 a2, __int64 a3)
{
  return KdpReportExceptionStateChange(a1, a2, a3);
}
