/*
 * XREFs of SpatialInteractionDevices::IsValidButtonUsage @ 0x180066B40
 * Callers:
 *     ?ParseInputReport@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAUInputReport@1@@Z @ 0x1800670C8 (-ParseInputReport@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAUInputReport@1@@Z.c)
 *     ?ParseInputReport@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAUHID_REPORT@1@PEAUInputReport@1@@Z @ 0x18006744C (-ParseInputReport@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAUHID_REPORT@1@PEAUInputRepor.c)
 *     SpatialInteractionDevices::ListSupportedButtons @ 0x180067734 (SpatialInteractionDevices--ListSupportedButtons.c)
 *     ?PrepareParsing@SpatialInteractionController@SpatialInteractionDevices@@QEAAJQEAU_HIDP_CAPS@@PEAU_HIDP_PREPARSED_DATA@@GGGPEAUHSTRING__@@@Z @ 0x1800997D4 (-PrepareParsing@SpatialInteractionController@SpatialInteractionDevices@@QEAAJQEAU_HIDP_CAPS@@PEA.c)
 * Callees:
 *     <none>
 */

char __fastcall SpatialInteractionDevices::IsValidButtonUsage(__int64 a1, _WORD *a2)
{
  char v2; // r8
  unsigned __int16 v3; // ax
  __int16 v4; // ax

  v2 = 0;
  if ( *(_WORD *)a1 == a2[2] )
  {
    v3 = a2[3];
    if ( *(_BYTE *)(a1 + 12) )
    {
      if ( v3 < *(_WORD *)(a1 + 56) || v3 > *(_WORD *)(a1 + 58) )
        return v2;
    }
    else if ( *(_WORD *)(a1 + 56) != v3 )
    {
      return v2;
    }
    v4 = a2[1];
    v2 = 1;
    if ( v4 && *a2 && (v4 != *(_WORD *)(a1 + 8) || *a2 != *(_WORD *)(a1 + 10)) )
      return 0;
  }
  return v2;
}
