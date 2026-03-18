/*
 * XREFs of ?RenderBlackImage@CWindowNode@@AEAAJPEAVCDrawingContext@@@Z @ 0x180106284
 * Callers:
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18007B490 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18000D558 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?DrawShape@CDrawingContext@@QEAAJPEAVCShape@@PEAVCBrush@@@Z @ 0x18002DA28 (-DrawShape@CDrawingContext@@QEAAJPEAVCShape@@PEAVCBrush@@@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180030950 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180070B90 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ??_ECRectangleShape@@UEAAPEAXI@Z @ 0x180078C90 (--_ECRectangleShape@@UEAAPEAXI@Z.c)
 *     ??0CRectangleShape@@QEAA@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180078D28 (--0CRectangleShape@@QEAA@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquenes.c)
 *     ?Set@CRectangleShape@@QEAAXAEBUMilRectF@@@Z @ 0x180078D54 (-Set@CRectangleShape@@QEAAXAEBUMilRectF@@@Z.c)
 *     ??1CRectangleShape@@UEAA@XZ @ 0x1800790B4 (--1CRectangleShape@@UEAA@XZ.c)
 *     ??0CRectangleShape@@QEAA@MMMM@Z @ 0x180079110 (--0CRectangleShape@@QEAA@MMMM@Z.c)
 *     ?GetSpriteClipShape@CWindowNode@@AEAAJPEAPEAVCShape@@@Z @ 0x180079C3C (-GetSpriteClipShape@CWindowNode@@AEAAJPEAPEAVCShape@@@Z.c)
 *     ?GetRenderBounds@CWindowNode@@AEBAJPEAVIImageSource@@PEAVCShape@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N3@Z @ 0x18007C46C (-GetRenderBounds@CWindowNode@@AEBAJPEAVIImageSource@@PEAVCShape@@PEAV-$TMilRect_@MUMilRectF@@UMi.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?CreateFromColor@CSolidColorBrush@@SAJPEAPEAV1@PEAVCComposition@@AEAU_D3DCOLORVALUE@@@Z @ 0x1800F19A4 (-CreateFromColor@CSolidColorBrush@@SAJPEAPEAV1@PEAVCComposition@@AEAU_D3DCOLORVALUE@@@Z.c)
 *     ?GetDxClipShapeNoRef@CWindowNode@@AEBAPEAVCShape@@XZ @ 0x180105094 (-GetDxClipShapeNoRef@CWindowNode@@AEBAPEAVCShape@@XZ.c)
 *     ?CopyRectangle@CRectangleShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18014A2E8 (-CopyRectangle@CRectangleShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CWindowNode::RenderBlackImage(CWindowNode *this, struct CDrawingContext *a2)
{
  float v2; // xmm6_4
  CDrawingContext *v3; // r12
  float v4; // xmm8_4
  float v6; // xmm7_4
  void (__fastcall ***v7)(_QWORD, __int64); // r14
  float v8; // xmm9_4
  CRectangleShape *v9; // r13
  struct CRectangleShape *v10; // rsi
  int v11; // eax
  unsigned int v12; // edi
  int v13; // eax
  CRectangleShape *v14; // rax
  CRectangleShape *v15; // rax
  int SpriteClipShape; // eax
  int RenderBounds; // eax
  const struct CMILMatrix *v18; // rdx
  int v19; // eax
  int v20; // eax
  struct CRectangleShape *v21; // r12
  int v22; // eax
  struct CShape *DxClipShapeNoRef; // rax
  int v24; // eax
  unsigned int v26; // [rsp+28h] [rbp-99h]
  char v27; // [rsp+38h] [rbp-89h] BYREF
  char v28; // [rsp+39h] [rbp-88h] BYREF
  void (__fastcall ***v29)(_QWORD, __int64); // [rsp+40h] [rbp-81h] BYREF
  struct CShape *v30; // [rsp+48h] [rbp-79h] BYREF
  struct CRectangleShape *v31; // [rsp+50h] [rbp-71h] BYREF
  struct CSolidColorBrush *v32; // [rsp+58h] [rbp-69h] BYREF
  float v33; // [rsp+60h] [rbp-61h] BYREF
  float v34; // [rsp+64h] [rbp-5Dh]
  float v35; // [rsp+68h] [rbp-59h]
  float v36; // [rsp+6Ch] [rbp-55h]
  _BYTE v37[32]; // [rsp+70h] [rbp-51h] BYREF
  struct _D3DCOLORVALUE v38; // [rsp+90h] [rbp-31h] BYREF

  v2 = *((float *)this + 39);
  v3 = a2;
  v4 = *((float *)this + 41);
  v6 = *((float *)this + 40);
  v7 = 0LL;
  v8 = *((float *)this + 42);
  v9 = 0LL;
  v32 = 0LL;
  v10 = 0LL;
  v30 = a2;
  v33 = v2;
  v35 = v4;
  v34 = v6;
  v36 = v8;
  *(struct _D3DCOLORVALUE *)&v38.r = (struct _D3DCOLORVALUE)_xmm;
  v29 = 0LL;
  v31 = 0LL;
  v11 = CDrawingContext::ApplyRenderStateInternal(a2, 0);
  v12 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x11F6u);
    return v12;
  }
  v13 = CSolidColorBrush::CreateFromColor(&v32, *((struct CComposition **)this + 2), &v38);
  v12 = v13;
  if ( v13 < 0 )
  {
    v26 = 4605;
LABEL_48:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, v26);
    goto LABEL_49;
  }
  v14 = (CRectangleShape *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                      + 8LL))(
                             WPF::g_pProcessHeap,
                             32LL);
  if ( v14 )
  {
    v15 = CRectangleShape::CRectangleShape(v14, (const struct MilRectF *)&v33);
    v8 = v36;
    v10 = v15;
    v4 = v35;
    v6 = v34;
    v2 = v33;
  }
  if ( !v10 )
  {
    v12 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x1205u);
    goto LABEL_49;
  }
  if ( *((_QWORD *)this + 130) )
  {
    CRectangleShape::CRectangleShape((CRectangleShape *)v37, 0.0, 0.0, 0.0, 0.0);
    SpriteClipShape = CWindowNode::GetSpriteClipShape(this, &v30);
    v12 = SpriteClipShape;
    if ( SpriteClipShape < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, SpriteClipShape, 0x1213u);
LABEL_12:
      CRectangleShape::~CRectangleShape((CRectangleShape *)v37);
      goto LABEL_49;
    }
    RenderBounds = CWindowNode::GetRenderBounds(this, *((_QWORD *)this + 130), v30, (__int64)&v38, &v28, &v27);
    v12 = RenderBounds;
    if ( RenderBounds < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, RenderBounds, 0x1219u);
      goto LABEL_12;
    }
    CRectangleShape::Set((CRectangleShape *)v37, (const struct MilRectF *)&v38);
    if ( !v28 || v27 )
    {
      v20 = CShape::Combine((__int64)v37, 0LL, (__int64)v30, 0LL, 1, &v29);
      v12 = v20;
      if ( v20 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0x1226u);
        CRectangleShape::~CRectangleShape((CRectangleShape *)v37);
LABEL_22:
        v7 = v29;
        goto LABEL_49;
      }
      (**(void (__fastcall ***)(struct CRectangleShape *, __int64))v10)(v10, 1LL);
      v10 = (struct CRectangleShape *)v29;
      v7 = 0LL;
      v29 = 0LL;
    }
    else
    {
      (**(void (__fastcall ***)(struct CRectangleShape *, __int64))v10)(v10, 1LL);
      v19 = CRectangleShape::CopyRectangle((CRectangleShape *)v37, v18, &v31);
      v12 = v19;
      if ( v19 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x1234u);
        CRectangleShape::~CRectangleShape((CRectangleShape *)v37);
        v9 = v31;
        goto LABEL_49;
      }
      v10 = v31;
    }
    CRectangleShape::~CRectangleShape((CRectangleShape *)v37);
  }
  else
  {
    v13 = CWindowNode::GetSpriteClipShape(this, &v31);
    v12 = v13;
    if ( v13 < 0 )
    {
      v26 = 4673;
      goto LABEL_48;
    }
    v21 = v31;
    if ( v31 )
    {
      v13 = (*(__int64 (__fastcall **)(struct CRectangleShape *, float *, _QWORD))(*(_QWORD *)v31 + 24LL))(
              v31,
              &v33,
              0LL);
      v12 = v13;
      if ( v13 < 0 )
      {
        v26 = 4678;
        goto LABEL_48;
      }
      if ( v2 > v33 || v35 > v4 || v6 > v34 || v36 > v8 )
      {
        v22 = CShape::Combine((__int64)v10, 0LL, (__int64)v21, 0LL, 1, &v29);
        v12 = v22;
        if ( v22 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0x1254u);
          goto LABEL_22;
        }
        (**(void (__fastcall ***)(struct CRectangleShape *, __int64))v10)(v10, 1LL);
        v10 = (struct CRectangleShape *)v29;
        v7 = 0LL;
        v29 = 0LL;
      }
    }
    v3 = v30;
  }
  if ( *((_QWORD *)this + 150) || *((_QWORD *)this + 147) )
  {
    DxClipShapeNoRef = CWindowNode::GetDxClipShapeNoRef(this);
    v24 = CShape::Combine((__int64)v10, 0LL, (__int64)DxClipShapeNoRef, 0LL, 0, &v29);
    v12 = v24;
    if ( v24 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, 0x126Bu);
      goto LABEL_22;
    }
    if ( v10 )
      (**(void (__fastcall ***)(struct CRectangleShape *, __int64))v10)(v10, 1LL);
    v10 = (struct CRectangleShape *)v29;
    v7 = 0LL;
  }
  v13 = CDrawingContext::DrawShape(v3, v10, v32);
  v12 = v13;
  if ( v13 < 0 )
  {
    v26 = 4724;
    goto LABEL_48;
  }
LABEL_49:
  if ( v32 )
    CMILCOMBase::InternalRelease(v32);
  if ( v10 )
    (**(void (__fastcall ***)(struct CRectangleShape *, __int64))v10)(v10, 1LL);
  if ( v7 )
    (**v7)(v7, 1LL);
  if ( v9 )
    CRectangleShape::`vector deleting destructor'(v9, 1);
  return v12;
}
