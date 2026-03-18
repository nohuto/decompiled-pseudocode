/*
 * XREFs of ?TileImage@CDrawingContext@@UEAAJPEAVCResource@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUMilPoint2F@@M@Z @ 0x1800110F0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsBounding@CDrawingContext@@QEBA_NXZ @ 0x180022D18 (-IsBounding@CDrawingContext@@QEBA_NXZ.c)
 *     ?BitmapResourceToD2DBitmap@CDrawingContext@@AEAAJPEAVIBitmapResource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@_NPEAVCColorKey@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180023530 (-BitmapResourceToD2DBitmap@CDrawingContext@@AEAAJPEAVIBitmapResource@@PEBV-$CMatrix@UBaseSamplin.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180030950 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsRectEmptyOrInvalid@@YA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180076CCC (-IsRectEmptyOrInvalid@@YA_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquen.c)
 *     ?Set@CRectangleShape@@QEAAXAEBUMilRectF@@@Z @ 0x180078D54 (-Set@CRectangleShape@@QEAAXAEBUMilRectF@@@Z.c)
 *     ??1CRectangleShape@@UEAA@XZ @ 0x1800790B4 (--1CRectangleShape@@UEAA@XZ.c)
 *     ??0CRectangleShape@@QEAA@MMMM@Z @ 0x180079110 (--0CRectangleShape@@QEAA@MMMM@Z.c)
 *     ??1CBrushRealizer@@MEAA@XZ @ 0x180081448 (--1CBrushRealizer@@MEAA@XZ.c)
 *     ?SetSolidColorBrush@CImmediateBrushRealizer@@QEAAXPEBU_D3DCOLORVALUE@@@Z @ 0x180084240 (-SetSolidColorBrush@CImmediateBrushRealizer@@QEAAXPEBU_D3DCOLORVALUE@@@Z.c)
 *     ??0?$LocalMILObject@VCImmediateBrushRealizer@@@@QEAA@XZ @ 0x180085114 (--0-$LocalMILObject@VCImmediateBrushRealizer@@@@QEAA@XZ.c)
 *     ?GetD2DInterpolationMode@CDrawingContext@@IEBA?AW4D2D1_INTERPOLATION_MODE@@XZ @ 0x180097AB0 (-GetD2DInterpolationMode@CDrawingContext@@IEBA-AW4D2D1_INTERPOLATION_MODE@@XZ.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     fmodf_0 @ 0x180099B96 (fmodf_0.c)
 */

__int64 __fastcall CDrawingContext::TileImage(CDrawingContext *this, __int64 a2, __int64 a3, float *a4, int a5)
{
  char *v5; // r13
  unsigned int v7; // esi
  int v11; // eax
  int v12; // eax
  int v13; // eax
  float v14; // xmm10_4
  float v15; // xmm8_4
  float v16; // xmm0_4
  float v17; // xmm13_4
  float v18; // xmm0_4
  float v19; // xmm12_4
  float v20; // xmm11_4
  float v21; // xmm9_4
  float i; // xmm6_4
  float v24; // xmm3_4
  float j; // xmm7_4
  float v26; // xmm2_4
  float v27; // xmm1_4
  bool v28; // zf
  float v29; // xmm1_4
  float v30; // xmm0_4
  float v31; // xmm0_4
  float v32; // xmm3_4
  float v33; // xmm2_4
  int v34; // ecx
  int v35; // r12d
  __int64 v36; // rsi
  enum D2D1_INTERPOLATION_MODE D2DInterpolationMode; // eax
  __int64 v38; // r8
  int v39; // eax
  float v40; // xmm0_4
  char *v41; // r12
  int v42; // eax
  float v43; // xmm0_4
  int v44; // ecx
  char *v45; // r14
  __int64 v46; // [rsp+58h] [rbp-B0h] BYREF
  struct _D3DCOLORVALUE v47; // [rsp+60h] [rbp-A8h] BYREF
  _DWORD v48[2]; // [rsp+70h] [rbp-98h] BYREF
  float v49; // [rsp+78h] [rbp-90h]
  float v50; // [rsp+7Ch] [rbp-8Ch]
  _BYTE v51[8]; // [rsp+80h] [rbp-88h] BYREF
  float Y; // [rsp+88h] [rbp-80h]
  float v53; // [rsp+8Ch] [rbp-7Ch]
  _QWORD v54[14]; // [rsp+A8h] [rbp-60h] BYREF

  v5 = 0LL;
  v46 = 0LL;
  v7 = 0;
  if ( !(unsigned __int8)IsRectEmptyOrInvalid(a3)
    && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&a5) & _xmm) >= 0.0000011920929 )
  {
    v11 = CDrawingContext::ApplyRenderStateInternal(this, 0);
    v7 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x5FDu);
    }
    else if ( CDrawingContext::IsBounding(this) )
    {
      CRectangleShape::CRectangleShape((CRectangleShape *)v51, 0.0, 0.0, 0.0, 0.0);
      *(_QWORD *)&v47.r = 0x3F8000003F800000LL;
      *(_QWORD *)&v47.b = 0x3F8000003F800000LL;
      LocalMILObject<CImmediateBrushRealizer>::LocalMILObject<CImmediateBrushRealizer>(v54);
      CImmediateBrushRealizer::SetSolidColorBrush((CImmediateBrushRealizer *)v54, &v47);
      CRectangleShape::Set((CRectangleShape *)v51, (const struct MilRectF *)a3);
      v41 = (char *)this + 56;
      if ( !this )
        v41 = 0LL;
      v42 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *, char *, char *, _BYTE *, _QWORD, _QWORD *, _DWORD))(**((_QWORD **)this + 44) + 80LL))(
              *((_QWORD *)this + 44),
              *((_QWORD *)this + 47),
              v41,
              (char *)this + 72,
              (char *)this + 2784,
              v51,
              0LL,
              v54,
              *((_DWORD *)this + 68));
      v7 = v42;
      if ( v42 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v42, 0x610u);
      v54[0] = &CImmediateBrushRealizer::`vftable';
      CBrushRealizer::~CBrushRealizer((CBrushRealizer *)v54);
      CRectangleShape::~CRectangleShape((CRectangleShape *)v51);
    }
    else if ( a2 && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 48LL))(a2, 51LL) )
    {
      v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _BYTE *))(*(_QWORD *)(a2 - 8) + 184LL))(
              a2 - 8,
              0LL,
              0LL,
              v51);
      v7 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x61Cu);
      }
      else
      {
        v13 = CDrawingContext::BitmapResourceToD2DBitmap(this, a2 - 8, 0LL, 0LL, 0LL, &v46);
        v7 = v13;
        if ( v13 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x623u);
        }
        else
        {
          if ( v46 )
          {
            v14 = Y;
            v15 = v53;
            v16 = fmodf_0(*a4, Y);
            v17 = v16;
            if ( v16 < 0.0 )
              v17 = v16 + v14;
            v18 = fmodf_0(a4[1], v15);
            v19 = v18;
            if ( v18 < 0.0 )
              v19 = v18 + v15;
            v20 = v14 - v17;
            if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v14 - v17)) & _xmm) < 0.0000011920929 )
              v20 = v14;
            v21 = v15 - v19;
            if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v15 - v19)) & _xmm) < 0.0000011920929 )
              v21 = v15;
            for ( i = *(float *)(a3 + 4); *(float *)(a3 + 12) > i; i = i + v43 )
            {
              v24 = *(float *)a3;
              for ( j = *(float *)a3; ; j = j + v40 )
              {
                v26 = *(float *)(a3 + 8);
                if ( v26 <= j )
                  break;
                *(float *)v48 = j;
                *(float *)&v48[1] = i;
                if ( j == v24 )
                  v27 = v20;
                else
                  v27 = v14;
                v28 = i == *(float *)(a3 + 4);
                v29 = v27 + j;
                v49 = v29;
                if ( v28 )
                  v30 = v21;
                else
                  v30 = v15;
                v31 = v30 + i;
                v50 = v31;
                if ( v26 <= v29 )
                {
                  v29 = v26;
                  v49 = v26;
                }
                if ( *(float *)(a3 + 12) <= v31 )
                {
                  v31 = *(float *)(a3 + 12);
                  v50 = v31;
                }
                if ( j == v24 )
                  v32 = v17;
                else
                  v32 = 0.0;
                v28 = i == *(float *)(a3 + 4);
                v47.r = v32;
                if ( v28 )
                  v33 = v19;
                else
                  v33 = 0.0;
                v47.g = v33;
                v47.b = (float)(v29 - j) + v32;
                v47.a = (float)(v31 - i) + v33;
                if ( this )
                  v5 = (char *)this + 56;
                v34 = *((_DWORD *)this + 68);
                v35 = 0;
                if ( v34 )
                {
                  v44 = v34 - 1;
                  if ( v44 )
                  {
                    if ( v44 == 3 )
                      v35 = 2;
                  }
                  else
                  {
                    v35 = 1;
                  }
                }
                v36 = *((_QWORD *)this + 47);
                D2DInterpolationMode = CDrawingContext::GetD2DInterpolationMode(this);
                v39 = (*(__int64 (__fastcall **)(__int64, char *, __int64, struct _D3DCOLORVALUE *, _DWORD *, int, int, enum D2D1_INTERPOLATION_MODE, int))(v38 + 88))(
                        v36,
                        v5,
                        v46,
                        &v47,
                        v48,
                        a5,
                        1,
                        D2DInterpolationMode,
                        v35);
                v5 = 0LL;
                v7 = v39;
                if ( v39 < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v39, 0x66Eu);
                  goto LABEL_21;
                }
                v24 = *(float *)a3;
                if ( j == *(float *)a3 )
                  v40 = v20;
                else
                  v40 = v14;
              }
              if ( i == *(float *)(a3 + 4) )
                v43 = v21;
              else
                v43 = v15;
            }
          }
          if ( g_LockTilingTarget )
          {
            v45 = (char *)this + 56;
            if ( !this )
              v45 = 0LL;
            (*(void (__fastcall **)(_QWORD, _QWORD, char *))(**((_QWORD **)this + 44) + 168LL))(
              *((_QWORD *)this + 44),
              *((_QWORD *)this + 47),
              v45);
            g_LockTilingTarget = 0;
          }
        }
      }
    }
LABEL_21:
    if ( v46 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 16LL))(v46);
  }
  return v7;
}
