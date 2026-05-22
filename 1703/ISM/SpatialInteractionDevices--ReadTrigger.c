/*
 * XREFs of SpatialInteractionDevices::ReadTrigger @ 0x180067058
 * Callers:
 *     ?ParseInputReport@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAUInputReport@1@@Z @ 0x1800670C8 (-ParseInputReport@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAUInputReport@1@@Z.c)
 *     ?ParseInputReport@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAUHID_REPORT@1@PEAUInputReport@1@@Z @ 0x18006744C (-ParseInputReport@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAUHID_REPORT@1@PEAUInputRepor.c)
 * Callees:
 *     SpatialInteractionDevices::GetUsageDesc_SpatialInteractionDevices::UsageMapping_SpatialInteractionDevices::UsageDesc_SpatialInteractionDevices::FloatUsage__1___ @ 0x180067FE4 (SpatialInteractionDevices--GetUsageDesc_SpatialInteractionDevices--UsageMapping_Spa_ea_180067FE4.c)
 *     SpatialInteractionDevices::ParseFloatData_float_ @ 0x18006814C (SpatialInteractionDevices--ParseFloatData_float_.c)
 */

__int64 __fastcall SpatialInteractionDevices::ReadTrigger(
        SpatialInteractionDevices::Internal *this,
        struct SpatialInteractionDevices::HID_HANDLE *a2,
        __int64 a3)
{
  __int64 result; // rax
  _BYTE v7[24]; // [rsp+30h] [rbp-18h] BYREF

  _mm_srli_si128(
    *(__m128i *)SpatialInteractionDevices::GetUsageDesc_SpatialInteractionDevices::UsageMapping_SpatialInteractionDevices::UsageDesc_SpatialInteractionDevices::FloatUsage__1___(
                  v7,
                  this,
                  &off_1800A9A30),
    8);
  result = SpatialInteractionDevices::ParseFloatData_float_(this, a2, a3 + 68);
  if ( (_BYTE)result )
    *(_BYTE *)(a3 + 72) = 1;
  return result;
}
