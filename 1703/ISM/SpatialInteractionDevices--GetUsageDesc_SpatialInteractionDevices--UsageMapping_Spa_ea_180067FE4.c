/*
 * XREFs of SpatialInteractionDevices::GetUsageDesc_SpatialInteractionDevices::UsageMapping_SpatialInteractionDevices::UsageDesc_SpatialInteractionDevices::FloatUsage__1___ @ 0x180067FE4
 * Callers:
 *     SpatialInteractionDevices::ReadTouchpad @ 0x180066E7C (SpatialInteractionDevices--ReadTouchpad.c)
 *     SpatialInteractionDevices::ReadLocalOrientation @ 0x180066F2C (SpatialInteractionDevices--ReadLocalOrientation.c)
 *     SpatialInteractionDevices::ReadTrigger @ 0x180067058 (SpatialInteractionDevices--ReadTrigger.c)
 *     ?ListSupportedValues@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@IPEAPEAUHSTRING__@@@Z @ 0x18006781C (-ListSupportedValues@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@IPEAPEAUHSTRING__@@@Z.c)
 *     ?SupportsAnalogTrigger@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEA_N@Z @ 0x180067DAC (-SupportsAnalogTrigger@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall SpatialInteractionDevices::GetUsageDesc_SpatialInteractionDevices::UsageMapping_SpatialInteractionDevices::UsageDesc_SpatialInteractionDevices::FloatUsage__1___(
        _OWORD *a1,
        _WORD *a2,
        __int64 a3)
{
  _WORD *v4; // rcx

  *a1 = *(_OWORD *)a3;
  if ( a2[53] != 1 || a2[52] != 15 )
  {
    v4 = (_WORD *)(a3 + 16);
    if ( a2[53] == *(_WORD *)(a3 + 20)
      && a2[52] == *(_WORD *)(a3 + 22)
      && (!*v4 && !*(_WORD *)(a3 + 18) || a2[44] == *v4 && a2[45] == *(_WORD *)(a3 + 18)) )
    {
      *a1 = *(_OWORD *)(a3 + 24);
    }
  }
  return a1;
}
