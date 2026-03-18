/*
 * XREFs of ?PointInsideCurtainRegion@@YAHUtagPOINT@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01F1E68
 * Callers:
 *     ?UpdateContactRestingState@@YAXUtagPOINT@@_KPEAUtagTPCONTACTSTATE@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01F28F4 (-UpdateContactRestingState@@YAXUtagPOINT@@_KPEAUtagTPCONTACTSTATE@@PEAUtagTPSTATE@@PEAUtagHID_PO.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PointInsideCurtainRegion(struct tagPOINT a1, struct tagHID_POINTER_DEVICE_INFO *a2)
{
  unsigned int v2; // r8d

  v2 = 0;
  if ( !*((_DWORD *)a2 + 58) )
    return 0LL;
  if ( a1.y < *((_DWORD *)a2 + 55) || a1.x < *((_DWORD *)a2 + 56) || a1.x > *((_DWORD *)a2 + 57) )
    return 1;
  return v2;
}
