/*
 * XREFs of ?TileImage@CDrawingContext@@UEAAJPEAVCResource@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUMilPoint2F@@M@Z @ 0x18000EB90
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?IsCloseRealZero@@YAHMM@Z @ 0x180035D90 (-IsCloseRealZero@@YAHMM@Z.c)
 *     ?IsBounding@CDrawingContext@@QEBA_NXZ @ 0x180037068 (-IsBounding@CDrawingContext@@QEBA_NXZ.c)
 *     ?BitmapResourceToD2DBitmap@CDrawingContext@@AEAAJPEAVIBitmapResource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@_NPEAVCColorKey@@PEAPEAUID2D1Bitmap1@@@Z @ 0x1800378DC (-BitmapResourceToD2DBitmap@CDrawingContext@@AEAAJPEAVIBitmapResource@@PEBV-$CMatrix@UBaseSamplin.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180046830 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?Set@CRectangleShape@@QEAAXAEBUMilRectF@@@Z @ 0x180058210 (-Set@CRectangleShape@@QEAAXAEBUMilRectF@@@Z.c)
 *     ??1CRectangleShape@@UEAA@XZ @ 0x1800587FC (--1CRectangleShape@@UEAA@XZ.c)
 *     ??0CRectangleShape@@QEAA@MMMM@Z @ 0x180058858 (--0CRectangleShape@@QEAA@MMMM@Z.c)
 *     ?IsRectEmptyOrInvalid@@YA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18005C308 (-IsRectEmptyOrInvalid@@YA_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquen.c)
 *     ??1CLegacyMilBrushRealizer@@MEAA@XZ @ 0x18008A57C (--1CLegacyMilBrushRealizer@@MEAA@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?D2DInterpolationModeFromMilInterpolationMode@@YA?AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapInterpolationMode@@@Z @ 0x1800AC040 (-D2DInterpolationModeFromMilInterpolationMode@@YA-AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapIn.c)
 *     ??0?$LocalMILObject@VCImmediateBrushRealizer@@@@QEAA@XZ @ 0x1800AC364 (--0-$LocalMILObject@VCImmediateBrushRealizer@@@@QEAA@XZ.c)
 *     ?SetSolidColorBrush@CImmediateBrushRealizer@@QEAAXPEBU_D3DCOLORVALUE@@@Z @ 0x1800AC4BC (-SetSolidColorBrush@CImmediateBrushRealizer@@QEAAXPEBU_D3DCOLORVALUE@@@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     fmodf_0 @ 0x1800BC896 (fmodf_0.c)
 */

__int64 __fastcall CDrawingContext::TileImage(CDrawingContext *this, __int64 a2, __int64 a3, float *a4, float a5)
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
  int v36; // eax
  int v37; // eax
  float v38; // xmm0_4
  float v39; // xmm0_4
  char *v40; // r12
  int v41; // eax
  int v42; // ecx
  char *v43; // r14
  __int64 v44; // [rsp+58h] [rbp-B0h] BYREF
  struct _D3DCOLORVALUE v45; // [rsp+60h] [rbp-A8h] BYREF
  _DWORD v46[2]; // [rsp+70h] [rbp-98h] BYREF
  float v47; // [rsp+78h] [rbp-90h]
  float v48; // [rsp+7Ch] [rbp-8Ch]
  _BYTE v49[8]; // [rsp+80h] [rbp-88h] BYREF
  float Y; // [rsp+88h] [rbp-80h]
  float v51; // [rsp+8Ch] [rbp-7Ch]
  _QWORD v52[14]; // [rsp+A8h] [rbp-60h] BYREF

  v5 = 0LL;
  v44 = 0LL;
  v7 = 0;
  if ( !(unsigned __int8)IsRectEmptyOrInvalid(a3) && !(unsigned int)IsCloseRealZero(a5, 0.0000011920929) )
  {
    v11 = CDrawingContext::ApplyRenderStateInternal(this, 0);
    v7 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x604u);
    }
    else if ( CDrawingContext::IsBounding(this) )
    {
      CRectangleShape::CRectangleShape((CRectangleShape *)v49, 0.0, 0.0, 0.0, 0.0);
      *(_QWORD *)&v45.r = 0x3F8000003F800000LL;
      *(_QWORD *)&v45.b = 0x3F8000003F800000LL;
      LocalMILObject<CImmediateBrushRealizer>::LocalMILObject<CImmediateBrushRealizer>(v52);
      CImmediateBrushRealizer::SetSolidColorBrush((CImmediateBrushRealizer *)v52, &v45);
      CRectangleShape::Set((CRectangleShape *)v49, (const struct MilRectF *)a3);
      v40 = (char *)this + 56;
      if ( !this )
        v40 = 0LL;
      v41 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *, char *, char *, _BYTE *, _QWORD, _QWORD *, _DWORD))(**((_QWORD **)this + 44) + 80LL))(
              *((_QWORD *)this + 44),
              *((_QWORD *)this + 47),
              v40,
              (char *)this + 72,
              (char *)this + 2816,
              v49,
              0LL,
              v52,
              *((_DWORD *)this + 68));
      v7 = v41;
      if ( v41 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v41, 0x617u);
      v52[0] = &CImmediateBrushRealizer::`vftable';
      CLegacyMilBrushRealizer::~CLegacyMilBrushRealizer((CLegacyMilBrushRealizer *)v52);
      CRectangleShape::~CRectangleShape((CRectangleShape *)v49);
    }
    else if ( a2 && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 48LL))(a2, 55LL) )
    {
      v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _BYTE *))(*(_QWORD *)(a2 - 8) + 112LL))(
              a2 - 8,
              0LL,
              0LL,
              v49);
      v7 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x623u);
      }
      else
      {
        v13 = CDrawingContext::BitmapResourceToD2DBitmap(this, (CBitmapResource *)(a2 - 8), 0LL, (__int64)&v44);
        v7 = v13;
        if ( v13 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x62Au);
        }
        else
        {
          if ( v44 )
          {
            v14 = Y;
            v15 = v51;
            v16 = fmodf_0(*a4, Y);
            v17 = v16;
            if ( v16 < 0.0 )
              v17 = v16 + v14;
            v18 = fmodf_0(a4[1], v15);
            v19 = v18;
            if ( v18 < 0.0 )
              v19 = v18 + v15;
            v20 = v14 - v17;
            if ( (unsigned int)IsCloseRealZero(v14 - v17, 0.0000011920929) )
              v20 = v14;
            v21 = v15 - v19;
            if ( (unsigned int)IsCloseRealZero(v15 - v19, 0.0000011920929) )
              v21 = v15;
            for ( i = *(float *)(a3 + 4); *(float *)(a3 + 12) > i; i = i + v39 )
            {
              v24 = *(float *)a3;
              for ( j = *(float *)a3; ; j = j + v38 )
              {
                v26 = *(float *)(a3 + 8);
                if ( v26 <= j )
                  break;
                *(float *)v46 = j;
                *(float *)&v46[1] = i;
                if ( j == v24 )
                  v27 = v20;
                else
                  v27 = v14;
                v28 = i == *(float *)(a3 + 4);
                v29 = v27 + j;
                v47 = v29;
                if ( v28 )
                  v30 = v21;
                else
                  v30 = v15;
                v31 = v30 + i;
                v48 = v31;
                if ( v26 <= v29 )
                {
                  v29 = v26;
                  v47 = v26;
                }
                if ( *(float *)(a3 + 12) <= v31 )
                {
                  v31 = *(float *)(a3 + 12);
                  v48 = v31;
                }
                if ( j == v24 )
                  v32 = v17;
                else
                  v32 = 0.0;
                v28 = i == *(float *)(a3 + 4);
                v45.r = v32;
                if ( v28 )
                  v33 = v19;
                else
                  v33 = 0.0;
                v45.g = v33;
                v45.b = (float)(v29 - j) + v32;
                v45.a = (float)(v31 - i) + v33;
                if ( this )
                  v5 = (char *)this + 56;
                v34 = *((_DWORD *)this + 68);
                v35 = 0;
                if ( v34 )
                {
                  v42 = v34 - 1;
                  if ( v42 )
                  {
                    if ( v42 == 3 )
                      v35 = 2;
                  }
                  else
                  {
                    v35 = 1;
                  }
                }
                v36 = D2DInterpolationModeFromMilInterpolationMode(*((unsigned int *)this + 61));
                v37 = (*(__int64 (__fastcall **)(_QWORD, char *, __int64, struct _D3DCOLORVALUE *, _DWORD *, _DWORD, int, int, int))(**((_QWORD **)this + 47) + 88LL))(
                        *((_QWORD *)this + 47),
                        v5,
                        v44,
                        &v45,
                        v46,
                        LODWORD(a5),
                        1,
                        v36,
                        v35);
                v5 = 0LL;
                v7 = v37;
                if ( v37 < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v37, 0x675u);
                  goto LABEL_21;
                }
                v24 = *(float *)a3;
                if ( j == *(float *)a3 )
                  v38 = v20;
                else
                  v38 = v14;
              }
              if ( i == *(float *)(a3 + 4) )
                v39 = v21;
              else
                v39 = v15;
            }
          }
          if ( g_LockTilingTarget )
          {
            v43 = (char *)this + 56;
            if ( !this )
              v43 = 0LL;
            (*(void (__fastcall **)(_QWORD, _QWORD, char *))(**((_QWORD **)this + 44) + 168LL))(
              *((_QWORD *)this + 44),
              *((_QWORD *)this + 47),
              v43);
            g_LockTilingTarget = 0;
          }
        }
      }
    }
LABEL_21:
    if ( v44 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
  }
  return v7;
}
