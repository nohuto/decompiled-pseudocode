/*
 * XREFs of ?GetBrushRealizationInternal@CLinearGradientLegacyMilBrush@@UEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBrush@@@Z @ 0x180013A30
 * Callers:
 *     <none>
 * Callees:
 *     ??$GetGradientColorData@VCLinearGradientLegacyMilBrush@@@CGradientLegacyMilBrush@@KAJPEAVCLinearGradientLegacyMilBrush@@PEAVCGradientColorData@@@Z @ 0x1800136B0 (--$GetGradientColorData@VCLinearGradientLegacyMilBrush@@@CGradientLegacyMilBrush@@KAJPEAVCLinear.c)
 *     ?GetLinearGradientRealization@CLinearGradientLegacyMilBrush@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCGradientColorData@@PEAVCMILBrushLinearGradient@@@Z @ 0x180013E48 (-GetLinearGradientRealization@CLinearGradientLegacyMilBrush@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UM.c)
 *     ??1CGradientColorData@@QEAA@XZ @ 0x180014DE8 (--1CGradientColorData@@QEAA@XZ.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?ReleaseResources@CMILResourceCache@@QEAAJXZ @ 0x1801585C4 (-ReleaseResources@CMILResourceCache@@QEAAJXZ.c)
 */

__int64 __fastcall CLinearGradientLegacyMilBrush::GetBrushRealizationInternal(
        CLinearGradientLegacyMilBrush *this,
        const struct LegacyMilBrushContext *a2,
        struct CMILBrush **a3)
{
  char *v3; // r12
  int GradientColor; // eax
  int v8; // ebx
  int LinearGradientRealization; // eax
  struct CMILBrush *v10; // rax
  char *v11; // rax
  __int128 v12; // xmm0
  __int64 v14; // rax
  struct CMILBrush *v15; // rax
  int v16; // eax
  __int128 v17; // [rsp+30h] [rbp-39h] BYREF
  int v18; // [rsp+40h] [rbp-29h]
  int v19; // [rsp+44h] [rbp-25h]
  unsigned int v20; // [rsp+48h] [rbp-21h]
  __int128 v21; // [rsp+50h] [rbp-19h]
  int v22; // [rsp+60h] [rbp-9h]
  int v23; // [rsp+64h] [rbp-5h]
  int v24; // [rsp+68h] [rbp-1h]
  __int128 v25; // [rsp+70h] [rbp+7h]

  v3 = (char *)*a3;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v17 = 0LL;
  v21 = 0LL;
  GradientColor = CGradientLegacyMilBrush::GetGradientColorData<CLinearGradientLegacyMilBrush>(
                    (__int64)this,
                    (CGradientColorData *)&v17);
  v8 = GradientColor;
  if ( GradientColor < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, GradientColor, 0x41u);
    goto LABEL_10;
  }
  if ( v20 >= 2 )
  {
    LinearGradientRealization = CLinearGradientLegacyMilBrush::GetLinearGradientRealization(
                                  this,
                                  (char *)a2 + 136,
                                  &v17,
                                  (char *)this + 192);
    v8 = LinearGradientRealization;
    if ( LinearGradientRealization < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, LinearGradientRealization, 0x48u);
      goto LABEL_10;
    }
    if ( this != (CLinearGradientLegacyMilBrush *)-192LL )
    {
      v10 = (CLinearGradientLegacyMilBrush *)((char *)this + 216);
LABEL_6:
      *a3 = v10;
      goto LABEL_7;
    }
LABEL_13:
    v10 = 0LL;
    goto LABEL_6;
  }
  if ( v20 == 1 )
  {
    v14 = *((_QWORD *)this + 57);
    *((_OWORD *)this + 31) = *(_OWORD *)v17;
    (*(void (__fastcall **)(char *))(v14 + 48))((char *)this + 456);
    v8 = 0;
    if ( this != (CLinearGradientLegacyMilBrush *)-432LL )
    {
      v10 = (CLinearGradientLegacyMilBrush *)((char *)this + 456);
      goto LABEL_6;
    }
    goto LABEL_13;
  }
  *a3 = 0LL;
LABEL_7:
  v11 = (char *)this + 192;
  if ( this != (CLinearGradientLegacyMilBrush *)-192LL )
    v11 = (char *)this + 216;
  if ( v3 == v11 )
  {
    if ( !*a3 )
      goto LABEL_24;
    v15 = (CLinearGradientLegacyMilBrush *)((char *)this + 432);
    if ( this != (CLinearGradientLegacyMilBrush *)-432LL )
      v15 = (CLinearGradientLegacyMilBrush *)((char *)this + 456);
    if ( *a3 == v15 )
    {
LABEL_24:
      v16 = CMILResourceCache::ReleaseResources((CLinearGradientLegacyMilBrush *)((char *)this + 248));
      v8 = v16;
      if ( v16 >= 0 )
        goto LABEL_11;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x6Cu);
    }
  }
LABEL_10:
  if ( v8 < 0 )
  {
    v12 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
    v25 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
    goto LABEL_12;
  }
LABEL_11:
  v12 = *(_OWORD *)((char *)a2 + 136);
LABEL_12:
  *(_OWORD *)((char *)this + 56) = v12;
  CGradientColorData::~CGradientColorData((CGradientColorData *)&v17);
  return (unsigned int)v8;
}
