/*
 * XREFs of SpatialInteractionDevices::GetUsageDesc_SpatialInteractionDevices::UsageMapping_SpatialInteractionDevices::UsageDesc_SpatialInteractionDevices::ButtonUsage__2___ @ 0x180068220
 * Callers:
 *     ?ParseInputReport@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAUInputReport@1@@Z @ 0x1800670C8 (-ParseInputReport@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAUInputReport@1@@Z.c)
 *     ?ParseInputReport@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAUHID_REPORT@1@PEAUInputReport@1@@Z @ 0x18006744C (-ParseInputReport@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAUHID_REPORT@1@PEAUInputRepor.c)
 *     ?ListSupportedValues@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@IPEAPEAUHSTRING__@@@Z @ 0x18006781C (-ListSupportedValues@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@IPEAPEAUHSTRING__@@@Z.c)
 *     ?PrepareParsing@SpatialInteractionController@SpatialInteractionDevices@@QEAAJQEAU_HIDP_CAPS@@PEAU_HIDP_PREPARSED_DATA@@GGGPEAUHSTRING__@@@Z @ 0x1800997D4 (-PrepareParsing@SpatialInteractionController@SpatialInteractionDevices@@QEAAJQEAU_HIDP_CAPS@@PEA.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall SpatialInteractionDevices::GetUsageDesc_SpatialInteractionDevices::UsageMapping_SpatialInteractionDevices::UsageDesc_SpatialInteractionDevices::ButtonUsage__2___(
        _OWORD *a1,
        _WORD *a2)
{
  __int64 v3; // r9
  unsigned __int64 v4; // rcx
  __int16 v5; // ax

  *a1 = *(_OWORD *)&off_1800A99C0;
  if ( a2[53] != 1 || a2[52] != 15 )
  {
    v3 = 0LL;
    v4 = 0LL;
    while ( 1 )
    {
      if ( a2[53] == *(_WORD *)((char *)&off_1800A99C0 + v4 + 20)
        && a2[52] == *(_WORD *)((char *)&off_1800A99C0 + v4 + 22) )
      {
        v5 = *(_WORD *)((char *)&off_1800A99C0 + v4 + 16);
        if ( !v5 && !*(_WORD *)((char *)&off_1800A99C0 + v4 + 18) )
          break;
        if ( a2[44] == v5 && a2[45] == *(_WORD *)((char *)&off_1800A99C0 + v4 + 18) )
          break;
      }
      ++v3;
      v4 += 24LL;
      if ( v4 >= 0x30 )
        return a1;
    }
    *a1 = *(_OWORD *)(&off_1800A99C0 + 3 * v3 + 3);
  }
  return a1;
}
