/*
 * XREFs of ?GetBrushRealizationInternal@CLinearGradientBrush@@UEAAJPEBUBrushContext@@PEAPEAVCMILBrush@@@Z @ 0x180120020
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??$GetGradientColorData@VCLinearGradientBrush@@@CGradientBrush@@KAJPEAVCLinearGradientBrush@@PEAVCGradientColorData@@@Z @ 0x18011FE94 (--$GetGradientColorData@VCLinearGradientBrush@@@CGradientBrush@@KAJPEAVCLinearGradientBrush@@PEA.c)
 *     ??1CGradientColorData@@QEAA@XZ @ 0x18011FF84 (--1CGradientColorData@@QEAA@XZ.c)
 *     ?GetLinearGradientRealization@CLinearGradientBrush@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCGradientColorData@@PEAVCMILBrushLinearGradient@@@Z @ 0x1801201D8 (-GetLinearGradientRealization@CLinearGradientBrush@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 *     ?ReleaseResources@CMILResourceCache@@QEAAJXZ @ 0x18014A014 (-ReleaseResources@CMILResourceCache@@QEAAJXZ.c)
 */

__int64 __fastcall CLinearGradientBrush::GetBrushRealizationInternal(
        CLinearGradientBrush *this,
        const struct BrushContext *a2,
        struct CMILBrush **a3)
{
  char *v3; // r12
  int GradientColor; // eax
  int v8; // ebx
  int LinearGradientRealization; // eax
  struct CMILBrush *v10; // rax
  __int64 v11; // rax
  char *v12; // rax
  struct CMILBrush *v13; // rax
  int v14; // eax
  __int128 v15; // xmm0
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
  GradientColor = CGradientBrush::GetGradientColorData<CLinearGradientBrush>((__int64)this, (CGradientColorData *)&v17);
  v8 = GradientColor;
  if ( GradientColor < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, GradientColor, 0x41u);
    goto LABEL_23;
  }
  if ( v20 >= 2 )
  {
    LinearGradientRealization = CLinearGradientBrush::GetLinearGradientRealization(
                                  this,
                                  (char *)a2 + 136,
                                  &v17,
                                  (char *)this + 192);
    v8 = LinearGradientRealization;
    if ( LinearGradientRealization < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, LinearGradientRealization, 0x48u);
      goto LABEL_23;
    }
    if ( this != (CLinearGradientBrush *)-192LL )
    {
      v10 = (CLinearGradientBrush *)((char *)this + 216);
LABEL_12:
      *a3 = v10;
      goto LABEL_14;
    }
    goto LABEL_11;
  }
  if ( v20 == 1 )
  {
    v11 = *((_QWORD *)this + 57);
    *((_OWORD *)this + 31) = *(_OWORD *)v17;
    (*(void (__fastcall **)(char *))(v11 + 48))((char *)this + 456);
    v8 = 0;
    if ( this != (CLinearGradientBrush *)-432LL )
    {
      v10 = (CLinearGradientBrush *)((char *)this + 456);
      goto LABEL_12;
    }
LABEL_11:
    v10 = 0LL;
    goto LABEL_12;
  }
  *a3 = 0LL;
LABEL_14:
  v12 = (char *)this + 192;
  if ( this != (CLinearGradientBrush *)-192LL )
    v12 = (char *)this + 216;
  if ( v3 == v12 )
  {
    if ( !*a3 )
      goto LABEL_21;
    v13 = (CLinearGradientBrush *)((char *)this + 432);
    if ( this != (CLinearGradientBrush *)-432LL )
      v13 = (CLinearGradientBrush *)((char *)this + 456);
    if ( *a3 == v13 )
    {
LABEL_21:
      v14 = CMILResourceCache::ReleaseResources((CLinearGradientBrush *)((char *)this + 248));
      v8 = v14;
      if ( v14 >= 0 )
        goto LABEL_24;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x6Cu);
    }
  }
LABEL_23:
  if ( v8 < 0 )
  {
    v15 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
    v25 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
    goto LABEL_26;
  }
LABEL_24:
  v15 = *(_OWORD *)((char *)a2 + 136);
LABEL_26:
  *(_OWORD *)((char *)this + 56) = v15;
  CGradientColorData::~CGradientColorData((void **)&v17);
  return (unsigned int)v8;
}
