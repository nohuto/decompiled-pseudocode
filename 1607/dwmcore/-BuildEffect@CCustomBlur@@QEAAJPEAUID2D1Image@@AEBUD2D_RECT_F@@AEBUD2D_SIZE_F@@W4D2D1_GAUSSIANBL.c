/*
 * XREFs of ?BuildEffect@CCustomBlur@@QEAAJPEAUID2D1Image@@AEBUD2D_RECT_F@@AEBUD2D_SIZE_F@@W4D2D1_GAUSSIANBLUR_OPTIMIZATION@@AEBUD2D_VECTOR_2F@@PEAU6@@Z @ 0x180169844
 * Callers:
 *     ?RenderExternalEffect@CEffectBrush@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x18013C680 (-RenderExternalEffect@CEffectBrush@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIn.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?SetInputEffect@ID2D1Effect@@QEAAXIPEAU1@H@Z @ 0x18014CCFC (-SetInputEffect@ID2D1Effect@@QEAAXIPEAU1@H@Z.c)
 */

__int64 __fastcall CCustomBlur::BuildEffect(
        CCustomBlur *this,
        struct ID2D1Image *a2,
        const struct D2D_RECT_F *a3,
        const struct D2D_SIZE_F *a4,
        enum D2D1_GAUSSIANBLUR_OPTIMIZATION a5,
        const struct D2D_VECTOR_2F *a6,
        struct D2D_VECTOR_2F *a7)
{
  __int64 v7; // xmm1_8
  float v10; // xmm1_4
  float v11; // xmm0_4
  int v12; // eax
  unsigned int v13; // ebx
  int v14; // eax
  float v15; // xmm7_4
  float v16; // xmm1_4
  float v17; // xmm2_4
  float v18; // xmm1_4
  int v19; // eax
  int v20; // eax
  char *v21; // r15
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  BOOL v28; // [rsp+38h] [rbp-51h] BYREF
  __int64 v29; // [rsp+40h] [rbp-49h] BYREF
  __int64 v30; // [rsp+48h] [rbp-41h] BYREF
  __int128 v31; // [rsp+50h] [rbp-39h] BYREF

  v7 = (__int64)*a4;
  v31 = (__int128)*a3;
  v29 = (__int64)*a6;
  *a7 = (struct D2D_VECTOR_2F)_mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  v30 = v7;
  if ( a6->x == 1.0 || *(float *)&v30 <= *((float *)&CCustomBlur::k_optimizations + 5 * a5 + 2) )
  {
    v10 = *(float *)&v29;
  }
  else
  {
    v10 = *(float *)&v29 * 2.0;
    a7->x = 0.25;
    *(float *)&v29 = v10;
  }
  if ( a6->y == 1.0 || *((float *)&v30 + 1) <= *((float *)&CCustomBlur::k_optimizations + 5 * a5 + 2) )
  {
    v11 = *((float *)&v29 + 1);
  }
  else
  {
    v11 = *((float *)&v29 + 1) * 2.0;
    a7->y = 0.25;
    *((float *)&v29 + 1) = v11;
  }
  if ( v10 == 1.0 && v11 == 1.0 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(**((_QWORD **)this + 5) + 112LL))(
      *((_QWORD *)this + 5),
      0LL,
      0LL,
      1LL);
    ID2D1Effect::SetInputEffect(*((ID2D1Effect **)this + 3), 0, 0LL);
    (*(void (__fastcall **)(_QWORD, _QWORD, struct ID2D1Image *, __int64))(**((_QWORD **)this + 3) + 112LL))(
      *((_QWORD *)this + 3),
      0LL,
      a2,
      1LL);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, struct ID2D1Image *, __int64))(**((_QWORD **)this + 5) + 112LL))(
      *((_QWORD *)this + 5),
      0LL,
      a2,
      1LL);
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(**((_QWORD **)this + 3) + 112LL))(
      *((_QWORD *)this + 3),
      0LL,
      0LL,
      1LL);
    ID2D1Effect::SetInputEffect(*((ID2D1Effect **)this + 3), 0, *((struct ID2D1Effect **)this + 5));
    v12 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, char *, int))(**((_QWORD **)this + 5) + 72LL))(
            *((_QWORD *)this + 5),
            2LL,
            0LL,
            (char *)&CCustomBlur::k_optimizations + 20 * a5 + 16,
            4);
    v13 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x8Au);
      return v13;
    }
    v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64 *, int))(**((_QWORD **)this + 5) + 72LL))(
            *((_QWORD *)this + 5),
            0LL,
            0LL,
            &v29,
            8);
    v13 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x8Bu);
      return v13;
    }
    *((float *)&v30 + 1) = *((float *)&v30 + 1) * *((float *)&v29 + 1);
    *(float *)&v30 = *(float *)&v30 * *(float *)&v29;
    v15 = (float)(*((float *)&v31 + 1) * *((float *)&v29 + 1)) + 1.0;
    *(float *)&v31 = (float)(*(float *)&v31 * *(float *)&v29) + 1.0;
    *((float *)&v31 + 2) = (float)(*((float *)&v31 + 2) * *(float *)&v29) - 1.0;
    *((float *)&v31 + 3) = (float)(*((float *)&v31 + 3) * *((float *)&v29 + 1)) - 1.0;
    *((float *)&v31 + 1) = v15;
    v16 = *((float *)&v31 + 3) - v15;
    if ( (float)(*((float *)&v31 + 2) - *(float *)&v31) < 0.0 )
    {
      v17 = (float)(*((float *)&v31 + 2) - *(float *)&v31) * 0.5;
      *((float *)&v31 + 2) = *((float *)&v31 + 2) - v17;
      *(float *)&v31 = v17 + *(float *)&v31;
    }
    if ( v16 < 0.0 )
    {
      v18 = v16 * 0.5;
      *((float *)&v31 + 3) = *((float *)&v31 + 3) - v18;
      *((float *)&v31 + 1) = v18 + v15;
    }
  }
  v19 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int128 *, int))(**((_QWORD **)this + 3) + 72LL))(
          *((_QWORD *)this + 3),
          0LL,
          0LL,
          &v31,
          16);
  v13 = v19;
  if ( v19 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0xB2u);
  }
  else
  {
    v20 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64 *, int))(**((_QWORD **)this + 6) + 72LL))(
            *((_QWORD *)this + 6),
            0LL,
            0LL,
            &v30,
            4);
    v13 = v20;
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0xB4u);
    }
    else
    {
      v21 = (char *)&CCustomBlur::k_optimizations + 20 * a5;
      v22 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, char *, int))(**((_QWORD **)this + 6) + 72LL))(
              *((_QWORD *)this + 6),
              2LL,
              0LL,
              v21 + 12,
              4);
      v13 = v22;
      if ( v22 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0xB5u);
      }
      else
      {
        v28 = a6->x != *(float *)&v29;
        v23 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, BOOL *, int))(**((_QWORD **)this + 6) + 72LL))(
                *((_QWORD *)this + 6),
                3LL,
                0LL,
                &v28,
                4);
        v13 = v23;
        if ( v23 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0xB8u);
        }
        else
        {
          v24 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, char *, int))(**((_QWORD **)this + 7) + 72LL))(
                  *((_QWORD *)this + 7),
                  0LL,
                  0LL,
                  (char *)&v30 + 4,
                  4);
          v13 = v24;
          if ( v24 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, 0xBAu);
          }
          else
          {
            v25 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, char *, int))(**((_QWORD **)this + 7) + 72LL))(
                    *((_QWORD *)this + 7),
                    2LL,
                    0LL,
                    v21 + 12,
                    4);
            v13 = v25;
            if ( v25 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, 0xBBu);
            }
            else
            {
              v28 = a6->y != *((float *)&v29 + 1);
              v26 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, BOOL *, int))(**((_QWORD **)this + 7) + 72LL))(
                      *((_QWORD *)this + 7),
                      3LL,
                      0LL,
                      &v28,
                      4);
              v13 = v26;
              if ( v26 < 0 )
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, 0xBEu);
            }
          }
        }
      }
    }
  }
  return v13;
}
