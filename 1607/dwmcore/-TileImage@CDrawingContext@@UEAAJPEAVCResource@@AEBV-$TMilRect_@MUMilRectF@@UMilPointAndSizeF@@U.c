/*
 * XREFs of ?TileImage@CDrawingContext@@UEAAJPEAVCResource@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUMilPoint2F@@M@Z @ 0x180005140
 * Callers:
 *     <none>
 * Callees:
 *     ?SetSolidColorBrush@CImmediateBrushRealizer@@QEAAXPEBU_D3DCOLORVALUE@@@Z @ 0x180020C90 (-SetSolidColorBrush@CImmediateBrushRealizer@@QEAAXPEBU_D3DCOLORVALUE@@@Z.c)
 *     ??1CLegacyMilBrushRealizer@@MEAA@XZ @ 0x18002EA8C (--1CLegacyMilBrushRealizer@@MEAA@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?BitmapResourceToD2DBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@_NPEAVCColorKey@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180064710 (-BitmapResourceToD2DBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@PEBV-$CMatrix@UBaseSamplin.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18006E9A0 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?IsBounding@CDrawingContext@@QEBA_NXZ @ 0x18006F210 (-IsBounding@CDrawingContext@@QEBA_NXZ.c)
 *     ??0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z @ 0x180097968 (--0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x180097F28 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?IsRectEmptyOrInvalid@@YA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800980B4 (-IsRectEmptyOrInvalid@@YA_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquen.c)
 *     ?D2DInterpolationModeFromMilInterpolationMode@@YA?AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapInterpolationMode@@@Z @ 0x1800AF478 (-D2DInterpolationModeFromMilInterpolationMode@@YA-AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapIn.c)
 *     ??0?$LocalMILObject@VCImmediateBrushRealizer@@@@QEAA@XZ @ 0x1800AF874 (--0-$LocalMILObject@VCImmediateBrushRealizer@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     fmodf_0 @ 0x1800BF626 (fmodf_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::TileImage(CDrawingContext *this, __int64 a2, __int64 a3, float *a4, int a5)
{
  unsigned int v6; // ebx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  float v13; // xmm10_4
  float v14; // xmm8_4
  float v15; // xmm0_4
  float v16; // xmm13_4
  float v17; // xmm0_4
  float v18; // xmm12_4
  float v19; // xmm11_4
  float v20; // xmm9_4
  float i; // xmm6_4
  float v22; // xmm3_4
  float j; // xmm7_4
  float v24; // xmm2_4
  float v25; // xmm0_4
  float v27; // xmm1_4
  bool v28; // zf
  float v29; // xmm1_4
  float v30; // xmm0_4
  float v31; // xmm0_4
  float v32; // xmm3_4
  float v33; // xmm2_4
  int v34; // ecx
  __int64 v35; // rdx
  int v36; // eax
  int v37; // edx
  __int64 v38; // r11
  int v39; // eax
  float v40; // xmm0_4
  char *v41; // r8
  int v42; // eax
  int v43; // ecx
  char *v44; // r8
  __int64 v45; // [rsp+58h] [rbp-B0h] BYREF
  struct _D3DCOLORVALUE v46; // [rsp+60h] [rbp-A8h] BYREF
  _DWORD v47[2]; // [rsp+70h] [rbp-98h] BYREF
  float v48; // [rsp+78h] [rbp-90h]
  float v49; // [rsp+7Ch] [rbp-8Ch]
  _BYTE v50[8]; // [rsp+80h] [rbp-88h] BYREF
  float Y; // [rsp+88h] [rbp-80h]
  float v52; // [rsp+8Ch] [rbp-7Ch]
  _QWORD v53[14]; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v54[64]; // [rsp+108h] [rbp+0h] BYREF

  v6 = 0;
  v45 = 0LL;
  if ( !(unsigned __int8)IsRectEmptyOrInvalid(a3)
    && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&a5) & _xmm) >= 0.0000011920929 )
  {
    v10 = CDrawingContext::ApplyRenderStateInternal(this, 0);
    v6 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x606u);
    }
    else if ( CDrawingContext::IsBounding(this) )
    {
      CRectanglesShape::CRectanglesShape((CRectanglesShape *)v54, (const struct MilRectF *)a3);
      *(_QWORD *)&v46.r = 0x3F8000003F800000LL;
      *(_QWORD *)&v46.b = 0x3F8000003F800000LL;
      LocalMILObject<CImmediateBrushRealizer>::LocalMILObject<CImmediateBrushRealizer>(v53);
      CImmediateBrushRealizer::SetSolidColorBrush((CImmediateBrushRealizer *)v53, &v46);
      if ( this )
        v41 = (char *)this + 128;
      else
        v41 = 0LL;
      v42 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *, char *, char *, _BYTE *, _QWORD, _QWORD *, _DWORD))(**((_QWORD **)this + 54) + 80LL))(
              *((_QWORD *)this + 54),
              *((_QWORD *)this + 57),
              v41,
              (char *)this + 144,
              (char *)this + 3264,
              v54,
              0LL,
              v53,
              *((_DWORD *)this + 88));
      v6 = v42;
      if ( v42 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v42, 0x617u);
      v53[0] = &CImmediateBrushRealizer::`vftable';
      CLegacyMilBrushRealizer::~CLegacyMilBrushRealizer((CLegacyMilBrushRealizer *)v53);
      CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v54);
    }
    else if ( a2 && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 48LL))(a2, 56LL) )
    {
      v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _BYTE *))(*(_QWORD *)(a2 - 8) + 112LL))(
              a2 - 8,
              0LL,
              0LL,
              v50);
      v6 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x623u);
      }
      else
      {
        v12 = CDrawingContext::BitmapResourceToD2DBitmap(this, (CCachedVisualImage *)(a2 - 8), 0LL, (__int64)&v45);
        v6 = v12;
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x629u);
        }
        else
        {
          if ( v45 )
          {
            v13 = Y;
            v14 = v52;
            v15 = fmodf_0(*a4, Y);
            v16 = v15;
            if ( v15 < 0.0 )
              v16 = v15 + v13;
            v17 = fmodf_0(a4[1], v14);
            v18 = v17;
            if ( v17 < 0.0 )
              v18 = v17 + v14;
            v19 = v13 - v16;
            if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v13 - v16)) & _xmm) < 0.0000011920929 )
              v19 = v13;
            v20 = v14 - v18;
            if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v14 - v18)) & _xmm) < 0.0000011920929 )
              v20 = v14;
            for ( i = *(float *)(a3 + 4); *(float *)(a3 + 12) > i; i = i + v25 )
            {
              v22 = *(float *)a3;
              for ( j = *(float *)a3; ; j = j + v40 )
              {
                v24 = *(float *)(a3 + 8);
                if ( v24 <= j )
                  break;
                *(float *)v47 = j;
                *(float *)&v47[1] = i;
                if ( j == v22 )
                  v27 = v19;
                else
                  v27 = v13;
                v28 = i == *(float *)(a3 + 4);
                v29 = v27 + j;
                v48 = v29;
                if ( v28 )
                  v30 = v20;
                else
                  v30 = v14;
                v31 = v30 + i;
                v49 = v31;
                if ( v24 <= v29 )
                {
                  v29 = v24;
                  v48 = v24;
                }
                if ( *(float *)(a3 + 12) <= v31 )
                {
                  v31 = *(float *)(a3 + 12);
                  v49 = v31;
                }
                if ( j == v22 )
                  v32 = v16;
                else
                  v32 = 0.0;
                v28 = i == *(float *)(a3 + 4);
                v46.r = v32;
                if ( v28 )
                  v33 = v18;
                else
                  v33 = 0.0;
                v46.g = v33;
                v46.b = (float)(v29 - j) + v32;
                v46.a = (float)(v31 - i) + v33;
                v34 = *((_DWORD *)this + 88);
                v35 = 0LL;
                if ( v34 )
                {
                  v43 = v34 - 1;
                  if ( v43 )
                  {
                    if ( v43 == 3 )
                      v35 = 2LL;
                  }
                  else
                  {
                    v35 = 1LL;
                  }
                }
                v36 = D2DInterpolationModeFromMilInterpolationMode(*((unsigned int *)this + 81), v35);
                v39 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, struct _D3DCOLORVALUE *, _DWORD *, int, int, int, int))(**((_QWORD **)this + 57) + 88LL))(
                        *((_QWORD *)this + 57),
                        v38,
                        v45,
                        &v46,
                        v47,
                        a5,
                        1,
                        v36,
                        v37);
                v6 = v39;
                if ( v39 < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v39, 0x674u);
                  goto LABEL_25;
                }
                v22 = *(float *)a3;
                if ( j == *(float *)a3 )
                  v40 = v19;
                else
                  v40 = v13;
              }
              if ( i == *(float *)(a3 + 4) )
                v25 = v20;
              else
                v25 = v14;
            }
          }
          if ( g_LockTilingTarget )
          {
            if ( this )
              v44 = (char *)this + 128;
            else
              v44 = 0LL;
            (*(void (__fastcall **)(_QWORD, _QWORD, char *))(**((_QWORD **)this + 54) + 176LL))(
              *((_QWORD *)this + 54),
              *((_QWORD *)this + 57),
              v44);
            g_LockTilingTarget = 0;
          }
        }
      }
    }
LABEL_25:
    if ( v45 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 16LL))(v45);
  }
  return v6;
}
