/*
 * XREFs of ?RenderLayer@CColorTransformLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18012F648
 * Callers:
 *     ?RestoreState@CColorTransformLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18012FA20 (-RestoreState@CColorTransformLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800035A8 (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?FillEffect@CDrawingContext@@AEAAJPEAUID2D1Effect@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUD2D_POINT_2F@@_N@Z @ 0x180004788 (-FillEffect@CDrawingContext@@AEAAJPEAUID2D1Effect@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x18006E110 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     TemplateEventDescriptor @ 0x1800BCF6C (TemplateEventDescriptor.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CColorTransformLayer::RenderLayer(CColorTransformLayer *this, struct CDrawingContext *a2)
{
  __m128i v4; // xmm0
  __m128i v5; // xmm1
  __int64 v6; // rcx
  __m128i v7; // xmm0
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // eax
  int v11; // eax
  __m128 *v12; // rax
  __int64 v13; // rcx
  __m128 v14; // xmm2
  __m128 v15; // xmm3
  __m128 v16; // xmm7
  __m128 v17; // xmm4
  __m128 v18; // xmm5
  __m128 v19; // xmm6
  int v20; // eax
  int v21; // eax
  int v22; // eax
  __int64 v23; // rcx
  __int64 v25; // [rsp+30h] [rbp-D0h] BYREF
  int v26; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v27; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v28[2]; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD v29[40]; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD v30[4]; // [rsp+F0h] [rbp-10h] BYREF
  _DWORD v31[15]; // [rsp+100h] [rbp+0h] BYREF
  unsigned __int32 v32; // [rsp+13Ch] [rbp+3Ch]
  __int32 v33; // [rsp+140h] [rbp+40h]
  unsigned __int32 v34; // [rsp+144h] [rbp+44h]
  unsigned __int32 v35; // [rsp+148h] [rbp+48h]
  unsigned __int32 v36; // [rsp+14Ch] [rbp+4Ch]

  v27 = 0LL;
  memset_0(v29, 0, 0x28uLL);
  v4 = _mm_cvtsi32_si128(*((_DWORD *)this + 4));
  v5 = _mm_cvtsi32_si128(*((_DWORD *)this + 5));
  v6 = *((_QWORD *)this + 1);
  v25 = 0LL;
  v30[0] = 0;
  v30[1] = 0;
  v28[0] = _mm_cvtepi32_ps(v4).m128_u32[0];
  v7 = _mm_cvtsi32_si128(*((_DWORD *)this + 7));
  v28[1] = _mm_cvtepi32_ps(v5).m128_u32[0];
  *(float *)&v30[2] = (float)*((int *)this + 6);
  v30[3] = _mm_cvtepi32_ps(v7).m128_u32[0];
  v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 112LL))(v6, &v27);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x6Bu);
  }
  else
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(**((_QWORD **)a2 + 57) + 240LL))(
            *((_QWORD *)a2 + 57),
            1LL,
            &v25);
    v9 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x70u);
    }
    else
    {
      v29[0] = 10;
      v29[1] = -16777216;
      v29[2] = 1;
      v11 = CDrawingContext::PushRenderOptionsInternal(a2, 0LL, (const struct MilRenderOptions *)v29, 1);
      v9 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x81u);
      }
      else
      {
        v12 = (__m128 *)*((_QWORD *)this + 14);
        v13 = *((_QWORD *)this + 1);
        v14 = v12[7];
        v15 = v12[8];
        v16 = v12[12];
        v17 = v12[9];
        v18 = v12[10];
        v19 = v12[11];
        v31[0] = v14.m128_i32[0];
        v31[1] = _mm_shuffle_ps(v14, v14, 85).m128_u32[0];
        v31[4] = _mm_shuffle_ps(v15, v15, 85).m128_u32[0];
        v31[8] = _mm_shuffle_ps(v17, v17, 170).m128_u32[0];
        v31[11] = _mm_shuffle_ps(v18, v18, 85).m128_u32[0];
        v31[2] = _mm_shuffle_ps(v14, v14, 170).m128_u32[0];
        v31[14] = _mm_shuffle_ps(v19, v19, 85).m128_u32[0];
        v31[5] = _mm_shuffle_ps(v15, v15, 170).m128_u32[0];
        v31[7] = v17.m128_i32[0];
        v31[10] = v18.m128_i32[0];
        v31[13] = v19.m128_i32[0];
        v33 = v16.m128_i32[0];
        v31[3] = _mm_shuffle_ps(v14, v14, 255).m128_u32[0];
        v31[6] = _mm_shuffle_ps(v15, v15, 255).m128_u32[0];
        v31[9] = _mm_shuffle_ps(v17, v17, 255).m128_u32[0];
        v31[12] = _mm_shuffle_ps(v18, v18, 255).m128_u32[0];
        v34 = _mm_shuffle_ps(v16, v16, 85).m128_u32[0];
        v35 = _mm_shuffle_ps(v16, v16, 170).m128_u32[0];
        v36 = _mm_shuffle_ps(v16, v16, 255).m128_u32[0];
        v32 = _mm_shuffle_ps(v19, v19, 170).m128_u32[0];
        if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v13 + 32LL))(v13) == 3 )
        {
          v32 = 0;
          v36 = LODWORD(FLOAT_1_0);
        }
        v20 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _DWORD *, int))(*(_QWORD *)v25 + 72LL))(
                v25,
                0LL,
                0LL,
                v31,
                80);
        v9 = v20;
        if ( v20 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0xAEu);
        }
        else
        {
          v26 = 2;
          v21 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, int *, int))(*(_QWORD *)v25 + 72LL))(
                  v25,
                  1LL,
                  0LL,
                  &v26,
                  4);
          v9 = v21;
          if ( v21 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0xB3u);
          }
          else
          {
            (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v25 + 112LL))(v25, 0LL, v27, 1LL);
            if ( g_LockAndReadLayer )
              (*(void (__fastcall **)(_QWORD, _QWORD, char *))(**((_QWORD **)this + 1) + 176LL))(
                *((_QWORD *)this + 1),
                *((_QWORD *)a2 + 57),
                (char *)a2 + 128);
            v22 = CDrawingContext::FillEffect(a2, v25, (__int64)v30, (__int64)v28);
            v9 = v22;
            if ( v22 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0xCBu);
            }
            else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
            {
              TemplateEventDescriptor(v23, &EVTDESC_ETWGUID_LAYEREVENT_EndExternalLayer_Stop);
            }
          }
        }
        CDrawingContext::PopRenderOptionsInternal(a2, 1);
      }
    }
  }
  if ( v27 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  if ( v25 )
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v25 + 112LL))(v25, 0LL, 0LL, 1LL);
  return v9;
}
