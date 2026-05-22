/*
 * XREFs of SpatialInteractionDevices::ReadLocalOrientation @ 0x180066F2C
 * Callers:
 *     ?ParseInputReport@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAUInputReport@1@@Z @ 0x1800670C8 (-ParseInputReport@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAUInputReport@1@@Z.c)
 *     ?ParseInputReport@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAUHID_REPORT@1@PEAUInputReport@1@@Z @ 0x18006744C (-ParseInputReport@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAUHID_REPORT@1@PEAUInputRepor.c)
 * Callees:
 *     SpatialInteractionDevices::GetUsageDesc_SpatialInteractionDevices::UsageMapping_SpatialInteractionDevices::UsageDesc_SpatialInteractionDevices::FloatUsage__1___ @ 0x180067FE4 (SpatialInteractionDevices--GetUsageDesc_SpatialInteractionDevices--UsageMapping_Spa_ea_180067FE4.c)
 *     SpatialInteractionDevices::ParseFloatData_DirectX::XMFLOAT4_ @ 0x180068078 (SpatialInteractionDevices--ParseFloatData_DirectX--XMFLOAT4_.c)
 */

char __fastcall SpatialInteractionDevices::ReadLocalOrientation(
        SpatialInteractionDevices::Internal *this,
        struct SpatialInteractionDevices::HID_HANDLE *a2,
        __int64 a3)
{
  __m128i *v6; // rax
  __m128 *v7; // r15
  __int64 v8; // rbp
  int v9; // r14d
  char result; // al
  __m128 v11; // xmm1
  __m128 v12; // xmm3
  __m128 v13; // xmm1
  __int64 v14; // [rsp+30h] [rbp-28h] BYREF

  v6 = (__m128i *)SpatialInteractionDevices::GetUsageDesc_SpatialInteractionDevices::UsageMapping_SpatialInteractionDevices::UsageDesc_SpatialInteractionDevices::FloatUsage__1___(
                    &v14,
                    this,
                    &off_1800A9A00);
  v7 = (__m128 *)(a3 + 76);
  v8 = v6->m128i_i64[0];
  v9 = _mm_cvtsi128_si32(_mm_srli_si128(*v6, 8));
  result = SpatialInteractionDevices::ParseFloatData_DirectX::XMFLOAT4_(this, a2, a3 + 76);
  if ( result )
  {
    *(_BYTE *)(a3 + 92) = 1;
    result = *((_WORD *)this + 45) == 0xFF00 && *((_WORD *)this + 44) == 255 && *((_WORD *)this + 46) == 1;
    if ( !*((_BYTE *)this + 256) && !result && v9 && *(_WORD *)(v8 + 4) == 1 )
    {
      v11 = _mm_shuffle_ps(*v7, *v7, 27);
      v12 = _mm_mul_ps(_mm_shuffle_ps((__m128)xmmword_1800D2D28, (__m128)xmmword_1800D2D28, 0), v11);
      v13 = _mm_shuffle_ps(v11, v11, 177);
      *v7 = _mm_add_ps(
              _mm_add_ps(
                _mm_mul_ps(
                  _mm_mul_ps(
                    _mm_shuffle_ps(v13, v13, 27),
                    _mm_shuffle_ps((__m128)xmmword_1800D2D28, (__m128)xmmword_1800D2D28, 170)),
                  (__m128)`DirectX::XMQuaternionMultiply'::`2'::ControlYXWZ),
                _mm_mul_ps(
                  _mm_mul_ps(_mm_shuffle_ps((__m128)xmmword_1800D2D28, (__m128)xmmword_1800D2D28, 85), v13),
                  (__m128)`DirectX::XMQuaternionMultiply'::`2'::ControlZWXY)),
              _mm_add_ps(
                _mm_mul_ps(_mm_shuffle_ps((__m128)xmmword_1800D2D28, (__m128)xmmword_1800D2D28, 255), *v7),
                _mm_mul_ps((__m128)`DirectX::XMQuaternionMultiply'::`2'::ControlWZYX, v12)));
    }
  }
  return result;
}
