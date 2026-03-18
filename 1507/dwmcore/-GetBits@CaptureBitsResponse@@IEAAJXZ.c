/*
 * XREFs of ?GetBits@CaptureBitsResponse@@IEAAJXZ @ 0x180061DCC
 * Callers:
 *     ?OnPresentComplete@CaptureBitsResponse@@UEAAJXZ @ 0x180061AD0 (-OnPresentComplete@CaptureBitsResponse@@UEAAJXZ.c)
 *     ?OnPresentComplete@VisualCaptureBitsResponse@@UEAAJXZ @ 0x1800F0440 (-OnPresentComplete@VisualCaptureBitsResponse@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     TemplateEventDescriptor @ 0x1800E1E38 (TemplateEventDescriptor.c)
 *     ?CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x1800F0518 (-CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x1800F0774 (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 */

__int64 __fastcall CaptureBitsResponse::GetBits(CaptureBitsResponse *this)
{
  int v2; // ebx
  int v3; // edx
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rcx
  __m128i v8; // xmm0
  __m128i v9; // xmm1
  int RenderTargetBitmap; // eax
  int v11; // r9d
  unsigned int v12; // [rsp+20h] [rbp-48h]
  _DWORD v13[4]; // [rsp+30h] [rbp-38h] BYREF
  _DWORD v14[4]; // [rsp+40h] [rbp-28h] BYREF

  v2 = -2147467259;
  v13[0] = *((_DWORD *)this + 20);
  v3 = *((_DWORD *)this + 21);
  v13[2] = *((_DWORD *)this + 22) + v13[0];
  v4 = (unsigned int)(v3 + *((_DWORD *)this + 23));
  v13[1] = v3;
  v13[3] = v4;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    TemplateEventDescriptor(v4, &EVTDESC_ETWGUID_RTCAPTURE_GETBITS);
  v5 = *((_QWORD *)this + 5);
  if ( !v5
    || (v2 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, _QWORD))(*(_QWORD *)v5 + 64LL))(
               *((_QWORD *)this + 5),
               v13,
               *((_QWORD *)this + 19)),
        v2 < 0) )
  {
    if ( *((_QWORD *)this + 8) )
    {
      v8 = _mm_cvtsi32_si128(*((_DWORD *)this + 22));
      v9 = _mm_cvtsi32_si128(*((_DWORD *)this + 23));
      v14[0] = 0;
      v14[1] = 0;
      *(float *)&v14[2] = _mm_cvtepi32_ps(v8).m128_f32[0] + 0.0;
      *(float *)&v14[3] = _mm_cvtepi32_ps(v9).m128_f32[0] + 0.0;
      RenderTargetBitmap = CaptureBitsResponse::CreateRenderTargetBitmap(this);
      v2 = RenderTargetBitmap;
      if ( RenderTargetBitmap >= 0 )
      {
        RenderTargetBitmap = CaptureBitsResponse::RenderForCapture(this);
        v2 = RenderTargetBitmap;
        if ( RenderTargetBitmap >= 0 )
        {
          RenderTargetBitmap = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, _QWORD, _QWORD, _DWORD))(**((_QWORD **)this + 9) + 96LL))(
                                 *((_QWORD *)this + 9),
                                 v14,
                                 *((_QWORD *)this + 19),
                                 0LL,
                                 0);
          v2 = RenderTargetBitmap;
          if ( RenderTargetBitmap >= 0 )
            goto LABEL_5;
          v12 = 246;
        }
        else
        {
          v12 = 241;
        }
      }
      else
      {
        v12 = 236;
      }
      v11 = RenderTargetBitmap;
    }
    else
    {
      v12 = 250;
      v11 = v2;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, v12);
  }
LABEL_5:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    TemplateEventDescriptor(v6, &EVTDESC_ETWGUID_RTCAPTURE_Stop);
  return (unsigned int)v2;
}
