/*
 * XREFs of ?TPAAPGetLevel@@YA?AW4tagTOUCH_PAD_AAP_LEVEL@@PEAUtagTPSTATE@@@Z @ 0x1C01F2418
 * Callers:
 *     ?PointInsideNonCurtainRegion@@YAHPEAUtagTPSTATE@@PEAUtagPOINTER_INFO@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01F2104 (-PointInsideNonCurtainRegion@@YAHPEAUtagTPSTATE@@PEAUtagPOINTER_INFO@@PEAUtagHID_POINTER_DEVICE_.c)
 *     ?TPAAPShouldAllowMoveNow@@YAHPEAUtagTPSTATE@@PEAUtagTPCONTACTSTATE@@PEAH@Z @ 0x1C01F25EC (-TPAAPShouldAllowMoveNow@@YAHPEAUtagTPSTATE@@PEAUtagTPCONTACTSTATE@@PEAH@Z.c)
 *     ?TPAAPShouldAllowNow@@YAHKHHPEAUtagTPSTATE@@@Z @ 0x1C01F273C (-TPAAPShouldAllowNow@@YAHKHHPEAUtagTPSTATE@@@Z.c)
 *     ?xxxDoTouchpadProcessing@@YAHPEAXH@Z @ 0x1C01F4F58 (-xxxDoTouchpadProcessing@@YAHPEAXH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TPAAPGetLevel(__int64 a1)
{
  if ( a1 && *(int *)(a1 + 1544) < 0 )
    return 0LL;
  else
    return DWORD2(gTouchPadParameters);
}
