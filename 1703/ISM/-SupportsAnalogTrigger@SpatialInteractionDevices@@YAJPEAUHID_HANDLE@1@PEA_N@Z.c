/*
 * XREFs of ?SupportsAnalogTrigger@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEA_N@Z @ 0x180067DAC
 * Callers:
 *     ?SupportsAnalogTrigger@SpatialInteractionDevice@@UEAAJPEA_N@Z @ 0x1800648E0 (-SupportsAnalogTrigger@SpatialInteractionDevice@@UEAAJPEA_N@Z.c)
 *     ?PrepareParsing@SpatialInteractionController@SpatialInteractionDevices@@QEAAJQEAU_HIDP_CAPS@@PEAU_HIDP_PREPARSED_DATA@@GGGPEAUHSTRING__@@@Z @ 0x1800997D4 (-PrepareParsing@SpatialInteractionController@SpatialInteractionDevices@@QEAAJQEAU_HIDP_CAPS@@PEA.c)
 * Callees:
 *     ?GetValueCaps@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@GGGGPEAPEAU_HIDP_VALUE_CAPS@@@Z @ 0x180066230 (-GetValueCaps@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@GGGGPEAPEAU_HIDP_VALUE_CAP.c)
 *     SpatialInteractionDevices::GetUsageDesc_SpatialInteractionDevices::UsageMapping_SpatialInteractionDevices::UsageDesc_SpatialInteractionDevices::FloatUsage__1___ @ 0x180067FE4 (SpatialInteractionDevices--GetUsageDesc_SpatialInteractionDevices--UsageMapping_Spa_ea_180067FE4.c)
 */

__int64 __fastcall SpatialInteractionDevices::SupportsAnalogTrigger(
        SpatialInteractionDevices *this,
        struct SpatialInteractionDevices::HID_HANDLE *a2,
        bool *a3)
{
  bool v5; // bl
  unsigned int v6; // edi
  __int64 result; // rax
  struct _HIDP_VALUE_CAPS **v8[2]; // [rsp+30h] [rbp-28h]
  __int64 v9; // [rsp+40h] [rbp-18h] BYREF
  __int64 v10; // [rsp+68h] [rbp+10h] BYREF

  v5 = 1;
  v6 = 0;
  *(_OWORD *)v8 = *(_OWORD *)SpatialInteractionDevices::GetUsageDesc_SpatialInteractionDevices::UsageMapping_SpatialInteractionDevices::UsageDesc_SpatialInteractionDevices::FloatUsage__1___(
                               &v9,
                               this,
                               &off_1800A9A30);
  do
  {
    if ( v6 >= LODWORD(v8[1]) )
      break;
    v10 = 0LL;
    v5 = (int)SpatialInteractionDevices::Internal::GetValueCaps(
                this,
                (struct SpatialInteractionDevices::HID_HANDLE *)LOWORD(v8[0][2 * v6]),
                WORD1(v8[0][2 * v6]),
                WORD2(v8[0][2 * v6]),
                HIWORD(v8[0][2 * v6]),
                &v10) >= 0;
    ++v6;
  }
  while ( v5 );
  result = 0LL;
  *(_BYTE *)a2 = v5;
  return result;
}
