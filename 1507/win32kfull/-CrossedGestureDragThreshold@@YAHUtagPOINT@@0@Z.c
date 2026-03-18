/*
 * XREFs of ?CrossedGestureDragThreshold@@YAHUtagPOINT@@0@Z @ 0x1C01F11DC
 * Callers:
 *     ?UpdateTPStateIndicator@@YAXPEAUtagTPCONTACTSTATE@@PEAUtagTPSTATE@@PEAUtagPOINTER_INFO@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAH@Z @ 0x1C01F2F3C (-UpdateTPStateIndicator@@YAXPEAUtagTPCONTACTSTATE@@PEAUtagTPSTATE@@PEAUtagPOINTER_INFO@@PEAUtagH.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CrossedGestureDragThreshold(struct tagPOINT a1, struct tagPOINT a2)
{
  return (unsigned __int64)(40000 * ((a1.y - a2.y) * (a1.y - a2.y) + (__int64)((a1.x - a2.x) * (a1.x - a2.x)))) > 0x5F5E1000;
}
