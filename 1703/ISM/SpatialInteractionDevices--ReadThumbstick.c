/*
 * XREFs of SpatialInteractionDevices::ReadThumbstick @ 0x180066DD0
 * Callers:
 *     ?ParseInputReport@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAUInputReport@1@@Z @ 0x1800670C8 (-ParseInputReport@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAUInputReport@1@@Z.c)
 *     ?ParseInputReport@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAUHID_REPORT@1@PEAUInputReport@1@@Z @ 0x18006744C (-ParseInputReport@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAUHID_REPORT@1@PEAUInputRepor.c)
 * Callees:
 *     SpatialInteractionDevices::GetUsageDesc_SpatialInteractionDevices::UsageMapping_SpatialInteractionDevices::UsageDesc_SpatialInteractionDevices::FloatUsage__2___ @ 0x180067E6C (SpatialInteractionDevices--GetUsageDesc_SpatialInteractionDevices--UsageMapping_SpatialInteracti.c)
 *     SpatialInteractionDevices::ParseFloatData_DirectX::XMFLOAT2_ @ 0x180067F10 (SpatialInteractionDevices--ParseFloatData_DirectX--XMFLOAT2_.c)
 */

__int64 __fastcall SpatialInteractionDevices::ReadThumbstick(
        SpatialInteractionDevices::Internal *this,
        struct SpatialInteractionDevices::HID_HANDLE *a2,
        __int64 a3)
{
  float *v6; // rbp
  __int64 result; // rax
  __int64 v8; // [rsp+30h] [rbp-18h] BYREF

  v6 = (float *)(a3 + 56);
  _mm_srli_si128(
    *(__m128i *)SpatialInteractionDevices::GetUsageDesc_SpatialInteractionDevices::UsageMapping_SpatialInteractionDevices::UsageDesc_SpatialInteractionDevices::FloatUsage__2___(
                  &v8,
                  this),
    8);
  result = SpatialInteractionDevices::ParseFloatData_DirectX::XMFLOAT2_(this, a2, (__int64)v6);
  if ( (_BYTE)result )
  {
    *(_BYTE *)(a3 + 64) = 1;
    if ( !*((_BYTE *)this + 256) )
    {
      if ( *((_BYTE *)this + 259) )
        *v6 = 1.0 - *v6;
      if ( *((_BYTE *)this + 260) )
        *(float *)(a3 + 60) = 1.0 - *(float *)(a3 + 60);
    }
  }
  return result;
}
