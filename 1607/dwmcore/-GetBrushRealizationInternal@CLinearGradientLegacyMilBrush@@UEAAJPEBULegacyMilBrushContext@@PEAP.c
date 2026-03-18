/*
 * XREFs of ?GetBrushRealizationInternal@CLinearGradientLegacyMilBrush@@UEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBrush@@@Z @ 0x1800176B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetLinearGradientRealization@CLinearGradientLegacyMilBrush@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCGradientColorData@@PEAVCMILBrushLinearGradient@@@Z @ 0x180017C9C (-GetLinearGradientRealization@CLinearGradientLegacyMilBrush@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UM.c)
 *     ??$GetGradientColorData@VCLinearGradientLegacyMilBrush@@@CGradientLegacyMilBrush@@KAJPEAVCLinearGradientLegacyMilBrush@@PEAVCGradientColorData@@@Z @ 0x180017E94 (--$GetGradientColorData@VCLinearGradientLegacyMilBrush@@@CGradientLegacyMilBrush@@KAJPEAVCLinear.c)
 *     ??1CGradientColorData@@QEAA@XZ @ 0x180018128 (--1CGradientColorData@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseResources@CMILResourceCache@@QEAAJXZ @ 0x1801879C0 (-ReleaseResources@CMILResourceCache@@QEAAJXZ.c)
 */

__int64 __fastcall CLinearGradientLegacyMilBrush::GetBrushRealizationInternal(
        CLinearGradientLegacyMilBrush *this,
        const struct LegacyMilBrushContext *a2,
        struct CMILBrush **a3)
{
  char *v3; // r12
  int GradientColor; // eax
  int v8; // edi
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
  GradientColor = CGradientLegacyMilBrush::GetGradientColorData<CLinearGradientLegacyMilBrush>(this, &v17);
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
                                  (char *)a2 + 144,
                                  &v17,
                                  (char *)this + 232);
    v8 = LinearGradientRealization;
    if ( LinearGradientRealization < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, LinearGradientRealization, 0x48u);
      goto LABEL_10;
    }
    if ( this != (CLinearGradientLegacyMilBrush *)-232LL )
    {
      v10 = (CLinearGradientLegacyMilBrush *)((char *)this + 256);
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
    v14 = *((_QWORD *)this + 62);
    *(_OWORD *)((char *)this + 536) = *(_OWORD *)v17;
    (*(void (**)(void))(v14 + 48))();
    v8 = 0;
    if ( this != (CLinearGradientLegacyMilBrush *)-472LL )
    {
      v10 = (CLinearGradientLegacyMilBrush *)((char *)this + 496);
      goto LABEL_6;
    }
    goto LABEL_13;
  }
  *a3 = 0LL;
LABEL_7:
  v11 = (char *)this + 232;
  if ( this != (CLinearGradientLegacyMilBrush *)-232LL )
    v11 = (char *)this + 256;
  if ( v3 == v11 )
  {
    if ( !*a3 )
      goto LABEL_23;
    v15 = (CLinearGradientLegacyMilBrush *)((char *)this + 472);
    if ( this != (CLinearGradientLegacyMilBrush *)-472LL )
      v15 = (CLinearGradientLegacyMilBrush *)((char *)this + 496);
    if ( *a3 == v15 )
    {
LABEL_23:
      v16 = CMILResourceCache::ReleaseResources((CLinearGradientLegacyMilBrush *)((char *)this + 288));
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
  v12 = *((_OWORD *)a2 + 9);
LABEL_12:
  *((_OWORD *)this + 8) = v12;
  CGradientColorData::~CGradientColorData((CGradientColorData *)&v17);
  return (unsigned int)v8;
}
