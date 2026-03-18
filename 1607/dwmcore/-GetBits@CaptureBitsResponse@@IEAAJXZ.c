/*
 * XREFs of ?GetBits@CaptureBitsResponse@@IEAAJXZ @ 0x180009B4C
 * Callers:
 *     ?OnPresentComplete@CaptureBitsResponse@@UEAAJXZ @ 0x180009880 (-OnPresentComplete@CaptureBitsResponse@@UEAAJXZ.c)
 *     ?OnPresentComplete@VisualCaptureBitsResponse@@UEAAJXZ @ 0x180120870 (-OnPresentComplete@VisualCaptureBitsResponse@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A64C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     TemplateEventDescriptor @ 0x1800BCF6C (TemplateEventDescriptor.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x180120938 (-CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x180120B7C (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 */

__int64 __fastcall CaptureBitsResponse::GetBits(CaptureBitsResponse *this)
{
  int v2; // ebx
  int v3; // edx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __m128i v8; // xmm0
  __m128i v9; // xmm1
  int RenderTargetBitmap; // eax
  int (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // rcx
  int v12; // eax
  __int64 v13; // r8
  __int64 v14; // rdx
  unsigned int v15; // esi
  float v16; // xmm6_4
  float v17; // xmm7_4
  float v18; // xmm8_4
  float v19; // xmm9_4
  __m128i v20; // xmm3
  int v21; // eax
  float v22; // xmm0_4
  float v23; // xmm2_4
  float v24; // xmm3_4
  float v25; // xmm4_4
  float v26; // xmm5_4
  int v27; // eax
  int v28; // r9d
  unsigned int v29; // [rsp+28h] [rbp-59h]
  __int64 v30; // [rsp+38h] [rbp-49h] BYREF
  __int128 v31; // [rsp+40h] [rbp-41h] BYREF
  int v32; // [rsp+50h] [rbp-31h]
  int v33; // [rsp+54h] [rbp-2Dh]
  unsigned int v34; // [rsp+58h] [rbp-29h]
  __m128i v35; // [rsp+60h] [rbp-21h] BYREF
  float v36; // [rsp+70h] [rbp-11h] BYREF
  float v37; // [rsp+74h] [rbp-Dh]
  float v38; // [rsp+78h] [rbp-9h]
  float v39; // [rsp+7Ch] [rbp-5h]
  _DWORD v40[4]; // [rsp+80h] [rbp-1h] BYREF

  v30 = 0LL;
  v2 = -2147467259;
  v40[0] = *((_DWORD *)this + 20);
  v3 = *((_DWORD *)this + 21);
  v40[2] = *((_DWORD *)this + 22) + v40[0];
  v4 = (unsigned int)(v3 + *((_DWORD *)this + 23));
  v40[1] = v3;
  v40[3] = v4;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    TemplateEventDescriptor(v4, &EVTDESC_ETWGUID_RTCAPTURE_GETBITS);
  v5 = *((_QWORD *)this + 5);
  if ( v5 )
  {
    v2 = (*(__int64 (__fastcall **)(__int64, _DWORD *, _QWORD))(*(_QWORD *)v5 + 64LL))(v5, v40, *((_QWORD *)this + 19));
    if ( v2 >= 0 )
      goto LABEL_5;
  }
  if ( !*((_QWORD *)this + 8) )
  {
    v29 = 282;
    v28 = v2;
    goto LABEL_42;
  }
  v8 = _mm_cvtsi32_si128(*((_DWORD *)this + 22));
  v9 = _mm_cvtsi32_si128(*((_DWORD *)this + 23));
  v36 = 0.0;
  v37 = 0.0;
  v38 = _mm_cvtepi32_ps(v8).m128_f32[0] + 0.0;
  v39 = _mm_cvtepi32_ps(v9).m128_f32[0] + 0.0;
  RenderTargetBitmap = CaptureBitsResponse::CreateRenderTargetBitmap(this);
  v2 = RenderTargetBitmap;
  if ( RenderTargetBitmap < 0 )
  {
    v29 = 237;
LABEL_39:
    v28 = RenderTargetBitmap;
LABEL_42:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v28, v29);
    goto LABEL_5;
  }
  RenderTargetBitmap = CaptureBitsResponse::RenderForCapture(this);
  v2 = RenderTargetBitmap;
  if ( RenderTargetBitmap < 0 )
  {
    v29 = 242;
    goto LABEL_39;
  }
  v11 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 5);
  if ( !v11 || (**v11)(v11, &GUID_13a6c51a_a471_439c_9055_ad1418ff1971, &v30) < 0 )
  {
    RenderTargetBitmap = (*(__int64 (__fastcall **)(_QWORD, float *, _QWORD, _QWORD, _DWORD))(**((_QWORD **)this + 9)
                                                                                            + 96LL))(
                           *((_QWORD *)this + 9),
                           &v36,
                           *((_QWORD *)this + 19),
                           0LL,
                           0);
    v2 = RenderTargetBitmap;
    if ( RenderTargetBitmap >= 0 )
      goto LABEL_5;
    v29 = 277;
    goto LABEL_39;
  }
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v31 = 0LL;
  v12 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v30 + 280LL))(v30, &v31);
  v2 = v12;
  if ( v12 >= 0 )
  {
    v14 = v34;
    v15 = 0;
    if ( !v34 )
      goto LABEL_35;
    v16 = v39;
    v17 = v38;
    v18 = v37;
    v19 = v36;
    while ( 1 )
    {
      v20 = _mm_loadu_si128((const __m128i *)(v31 + 16LL * v15));
      v21 = -*((_DWORD *)this + 21);
      v35 = v20;
      v22 = (float)-*((_DWORD *)this + 20);
      v23 = *(float *)&v20.m128i_i32[1] + (float)v21;
      v24 = *(float *)v20.m128i_i32 + v22;
      v25 = *(float *)&v20.m128i_i32[2] + v22;
      v26 = *(float *)&v20.m128i_i32[3] + (float)v21;
      *(float *)&v35.m128i_i32[1] = v23;
      *(float *)v35.m128i_i32 = v24;
      *(float *)&v35.m128i_i32[2] = *(float *)&v20.m128i_i32[2] + v22;
      *(float *)&v35.m128i_i32[3] = v26;
      if ( v19 > v24 )
      {
        v24 = v19;
        *(float *)v35.m128i_i32 = v19;
      }
      if ( v18 > v23 )
      {
        v23 = v18;
        *(float *)&v35.m128i_i32[1] = v18;
      }
      if ( v25 > v17 )
      {
        v25 = v17;
        *(float *)&v35.m128i_i32[2] = v17;
      }
      if ( v26 > v16 )
      {
        v26 = v16;
        *(float *)&v35.m128i_i32[3] = v16;
      }
      if ( v25 <= v24 || v26 <= v23 )
      {
        v35 = 0uLL;
      }
      else
      {
        v27 = (*(__int64 (__fastcall **)(_QWORD, __m128i *, _QWORD, _QWORD, int))(**((_QWORD **)this + 9) + 96LL))(
                *((_QWORD *)this + 9),
                &v35,
                *((_QWORD *)this + 19),
                (unsigned int)(int)v24,
                (int)v23);
        v2 = v27;
        if ( v27 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v27, 0x10Cu);
          goto LABEL_35;
        }
        v16 = v39;
        v17 = v38;
        v18 = v37;
        v19 = v36;
        v14 = v34;
      }
      if ( ++v15 >= (unsigned int)v14 )
        goto LABEL_35;
    }
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xFFu);
LABEL_35:
  DynArrayImpl<1>::~DynArrayImpl<1>(&v31, v14, v13);
LABEL_5:
  v6 = v30;
  if ( v30 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    TemplateEventDescriptor(v6, &EVTDESC_ETWGUID_RTCAPTURE_Stop);
  return (unsigned int)v2;
}
