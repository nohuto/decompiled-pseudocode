/*
 * XREFs of ?GetBits@CaptureBitsResponse@@IEAAJXZ @ 0x1800A533C
 * Callers:
 *     ?OnPresentComplete@CaptureBitsResponse@@UEAAJXZ @ 0x1800A5040 (-OnPresentComplete@CaptureBitsResponse@@UEAAJXZ.c)
 *     ?OnPresentComplete@VisualCaptureBitsResponse@@UEAAJXZ @ 0x18010A180 (-OnPresentComplete@VisualCaptureBitsResponse@@UEAAJXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180076CE4 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     TemplateEventDescriptor @ 0x1800BA27C (TemplateEventDescriptor.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x18010A258 (-CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x18010A4B4 (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 */

__int64 __fastcall CaptureBitsResponse::GetBits(CaptureBitsResponse *this)
{
  int v2; // edi
  int v3; // edx
  __int64 v4; // rcx
  __int64 v5; // rsi
  __int64 v6; // rcx
  __m128i v8; // xmm0
  __m128i v9; // xmm1
  int RenderTargetBitmap; // eax
  int v11; // r9d
  int (__fastcall ***v12)(_QWORD, GUID *, __int64 *); // rdi
  int v13; // eax
  unsigned int v14; // edx
  unsigned int v15; // r12d
  float v16; // xmm6_4
  float v17; // xmm7_4
  float v18; // xmm8_4
  float v19; // xmm9_4
  __m128i v20; // xmm4
  int v21; // eax
  float v22; // xmm0_4
  float v23; // xmm2_4
  float v24; // xmm4_4
  float v25; // xmm3_4
  float v26; // xmm5_4
  int v27; // eax
  unsigned int v28; // [rsp+28h] [rbp-79h]
  __int64 v29; // [rsp+38h] [rbp-69h] BYREF
  __int128 v30; // [rsp+40h] [rbp-61h] BYREF
  int v31; // [rsp+50h] [rbp-51h]
  int v32; // [rsp+54h] [rbp-4Dh]
  unsigned __int64 v33; // [rsp+58h] [rbp-49h]
  __m128i v34; // [rsp+60h] [rbp-41h] BYREF
  float v35; // [rsp+70h] [rbp-31h] BYREF
  float v36; // [rsp+74h] [rbp-2Dh]
  float v37; // [rsp+78h] [rbp-29h]
  float v38; // [rsp+7Ch] [rbp-25h]
  _DWORD v39[4]; // [rsp+80h] [rbp-21h] BYREF

  v29 = 0LL;
  v2 = -2147467259;
  v39[0] = *((_DWORD *)this + 20);
  v3 = *((_DWORD *)this + 21);
  v39[2] = *((_DWORD *)this + 22) + v39[0];
  v4 = (unsigned int)(v3 + *((_DWORD *)this + 23));
  v39[1] = v3;
  v39[3] = v4;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    TemplateEventDescriptor(v4, &EVTDESC_ETWGUID_RTCAPTURE_GETBITS);
  v5 = *((_QWORD *)this + 5);
  if ( v5 )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, _QWORD))(*(_QWORD *)v5 + 64LL))(
           *((_QWORD *)this + 5),
           v39,
           *((_QWORD *)this + 19));
    if ( v2 >= 0 )
      goto LABEL_5;
  }
  if ( !*((_QWORD *)this + 8) )
  {
    v28 = 282;
    v11 = v2;
    goto LABEL_42;
  }
  v8 = _mm_cvtsi32_si128(*((_DWORD *)this + 22));
  v9 = _mm_cvtsi32_si128(*((_DWORD *)this + 23));
  v35 = 0.0;
  v36 = 0.0;
  v37 = _mm_cvtepi32_ps(v8).m128_f32[0] + 0.0;
  v38 = _mm_cvtepi32_ps(v9).m128_f32[0] + 0.0;
  RenderTargetBitmap = CaptureBitsResponse::CreateRenderTargetBitmap(this);
  v2 = RenderTargetBitmap;
  if ( RenderTargetBitmap < 0 )
  {
    v28 = 237;
LABEL_13:
    v11 = RenderTargetBitmap;
LABEL_42:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, v28);
    goto LABEL_5;
  }
  RenderTargetBitmap = CaptureBitsResponse::RenderForCapture(this);
  v2 = RenderTargetBitmap;
  if ( RenderTargetBitmap < 0 )
  {
    v28 = 242;
    goto LABEL_13;
  }
  v12 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 5);
  if ( !v12 || (**v12)(*((_QWORD *)this + 5), &GUID_13a6c51a_a471_439c_9055_ad1418ff1971, &v29) < 0 )
  {
    RenderTargetBitmap = (*(__int64 (__fastcall **)(_QWORD, float *, _QWORD, _QWORD, _DWORD))(**((_QWORD **)this + 9)
                                                                                            + 96LL))(
                           *((_QWORD *)this + 9),
                           &v35,
                           *((_QWORD *)this + 19),
                           0LL,
                           0);
    v2 = RenderTargetBitmap;
    if ( RenderTargetBitmap >= 0 )
      goto LABEL_5;
    v28 = 277;
    goto LABEL_13;
  }
  v31 = 0;
  v32 = 0;
  LODWORD(v33) = 0;
  v30 = 0LL;
  v13 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v29 + 288LL))(v29, &v30);
  v2 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xFFu);
    goto LABEL_21;
  }
  v14 = v33;
  v15 = 0;
  if ( (_DWORD)v33 )
  {
    v16 = v38;
    v17 = v37;
    v18 = v36;
    v19 = v35;
    do
    {
      v20 = _mm_loadu_si128((const __m128i *)(v30 + 16LL * v15));
      v21 = -*((_DWORD *)this + 21);
      v34 = v20;
      v22 = (float)-*((_DWORD *)this + 20);
      v23 = *(float *)&v20.m128i_i32[1] + (float)v21;
      v24 = *(float *)v20.m128i_i32 + v22;
      v25 = *(float *)&v20.m128i_i32[2] + v22;
      v26 = *(float *)&v20.m128i_i32[3] + (float)v21;
      *(float *)&v34.m128i_i32[1] = v23;
      *(float *)v34.m128i_i32 = v24;
      *(float *)&v34.m128i_i32[2] = *(float *)&v20.m128i_i32[2] + v22;
      *(float *)&v34.m128i_i32[3] = v26;
      if ( v19 > v24 )
      {
        v24 = v19;
        *(float *)v34.m128i_i32 = v19;
      }
      if ( v18 > v23 )
      {
        v23 = v18;
        *(float *)&v34.m128i_i32[1] = v18;
      }
      if ( v25 > v17 )
      {
        v25 = v17;
        *(float *)&v34.m128i_i32[2] = v17;
      }
      if ( v26 > v16 )
      {
        v26 = v16;
        *(float *)&v34.m128i_i32[3] = v16;
      }
      if ( v25 <= v24 || v26 <= v23 )
      {
        v34 = 0uLL;
      }
      else
      {
        v27 = (*(__int64 (__fastcall **)(_QWORD, __m128i *, _QWORD, _QWORD, int))(**((_QWORD **)this + 9) + 96LL))(
                *((_QWORD *)this + 9),
                &v34,
                *((_QWORD *)this + 19),
                (unsigned int)(int)v24,
                (int)v23);
        v2 = v27;
        if ( v27 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v27, 0x10Cu);
          break;
        }
        v16 = v38;
        v17 = v37;
        v18 = v36;
        v19 = v35;
        v14 = v33;
      }
      ++v15;
    }
    while ( v15 < v14 );
  }
LABEL_21:
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)&v30);
LABEL_5:
  if ( v29 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    TemplateEventDescriptor(v6, &EVTDESC_ETWGUID_RTCAPTURE_Stop);
  return (unsigned int)v2;
}
