/*
 * XREFs of ?PointInsideNonCurtainRegion@@YAHPEAUtagTPSTATE@@PEAUtagPOINTER_INFO@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01F2104
 * Callers:
 *     ?UpdateTPStateIndicator@@YAXPEAUtagTPCONTACTSTATE@@PEAUtagTPSTATE@@PEAUtagPOINTER_INFO@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAH@Z @ 0x1C01F3264 (-UpdateTPStateIndicator@@YAXPEAUtagTPCONTACTSTATE@@PEAUtagTPSTATE@@PEAUtagPOINTER_INFO@@PEAUtagH.c)
 * Callees:
 *     ?TPAAPGetLevel@@YA?AW4tagTOUCH_PAD_AAP_LEVEL@@PEAUtagTPSTATE@@@Z @ 0x1C01F2418 (-TPAAPGetLevel@@YA-AW4tagTOUCH_PAD_AAP_LEVEL@@PEAUtagTPSTATE@@@Z.c)
 */

__int64 __fastcall PointInsideNonCurtainRegion(
        struct tagTPSTATE *a1,
        struct tagPOINTER_INFO *a2,
        struct tagHID_POINTER_DEVICE_INFO *a3)
{
  int v3; // eax
  __int64 v4; // rdx
  _DWORD *v5; // r8
  unsigned int v6; // ecx
  int v7; // eax

  v3 = TPAAPGetLevel(a1, a2, a3);
  v6 = 0;
  if ( !v3 || (v5[63] & 2) == 0 )
    return 1LL;
  if ( *(_DWORD *)(v4 + 44) >= v5[55] )
  {
    v7 = *(_DWORD *)(v4 + 40);
    if ( v7 >= v5[56] )
      return v7 <= v5[57];
  }
  return v6;
}
