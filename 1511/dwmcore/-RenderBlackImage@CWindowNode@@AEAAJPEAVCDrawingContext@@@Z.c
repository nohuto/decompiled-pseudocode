/*
 * XREFs of ?RenderBlackImage@CWindowNode@@AEAAJPEAVCDrawingContext@@@Z @ 0x180123E1C
 * Callers:
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180061320 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800165BC (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?DrawShape@CDrawingContext@@QEAAJPEAVCShape@@PEAVCLegacyMilBrush@@@Z @ 0x180042E18 (-DrawShape@CDrawingContext@@QEAAJPEAVCShape@@PEAVCLegacyMilBrush@@@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180046830 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ??_ECRectangleShape@@UEAAPEAXI@Z @ 0x1800581A0 (--_ECRectangleShape@@UEAAPEAXI@Z.c)
 *     ?Set@CRectangleShape@@QEAAXAEBUMilRectF@@@Z @ 0x180058210 (-Set@CRectangleShape@@QEAAXAEBUMilRectF@@@Z.c)
 *     ??1CRectangleShape@@UEAA@XZ @ 0x1800587FC (--1CRectangleShape@@UEAA@XZ.c)
 *     ??0CRectangleShape@@QEAA@MMMM@Z @ 0x180058858 (--0CRectangleShape@@QEAA@MMMM@Z.c)
 *     ?GetDxClipShapeNoRef@CWindowNode@@AEBAPEAVCShape@@XZ @ 0x18005EE4C (-GetDxClipShapeNoRef@CWindowNode@@AEBAPEAVCShape@@XZ.c)
 *     ?GetSpriteClipShape@CWindowNode@@AEAAJPEAPEAVCShape@@@Z @ 0x18005EEA8 (-GetSpriteClipShape@CWindowNode@@AEAAJPEAPEAVCShape@@@Z.c)
 *     ?GetRenderBounds@CWindowNode@@AEBAJPEAVIImageSource@@PEAVCShape@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N3@Z @ 0x180062CA8 (-GetRenderBounds@CWindowNode@@AEBAJPEAVIImageSource@@PEAVCShape@@PEAV-$TMilRect_@MUMilRectF@@UMi.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180085DFC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?CreateFromColor@CSolidColorLegacyMilBrush@@SAJPEAPEAV1@PEAVCComposition@@AEAU_D3DCOLORVALUE@@@Z @ 0x18010B8B4 (-CreateFromColor@CSolidColorLegacyMilBrush@@SAJPEAPEAV1@PEAVCComposition@@AEAU_D3DCOLORVALUE@@@Z.c)
 *     ?CopyRectangle@CRectangleShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x180158768 (-CopyRectangle@CRectangleShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CWindowNode::RenderBlackImage(CWindowNode *this, struct CDrawingContext *a2)
{
  CDrawingContext *v2; // r12
  float v3; // xmm6_4
  float v5; // xmm8_4
  void (__fastcall ***v6)(_QWORD, __int64); // r14
  float v7; // xmm7_4
  CRectangleShape *v8; // r13
  float v9; // xmm9_4
  struct CRectangleShape *v10; // rsi
  int v11; // eax
  unsigned int v12; // edi
  int v13; // eax
  __int64 v14; // rax
  __int128 v15; // xmm0
  int SpriteClipShape; // eax
  int RenderBounds; // eax
  const struct CMILMatrix *v18; // rdx
  int v19; // eax
  int v20; // eax
  struct CRectangleShape *v21; // r12
  int v22; // eax
  struct CShape *DxClipShapeNoRef; // rax
  int v24; // eax
  unsigned int v26; // [rsp+28h] [rbp-89h]
  char v27; // [rsp+38h] [rbp-79h] BYREF
  char v28[7]; // [rsp+39h] [rbp-78h] BYREF
  void (__fastcall ***v29)(_QWORD, __int64); // [rsp+40h] [rbp-71h] BYREF
  struct CShape *v30; // [rsp+48h] [rbp-69h] BYREF
  struct CRectangleShape *v31; // [rsp+50h] [rbp-61h] BYREF
  struct CSolidColorLegacyMilBrush *v32; // [rsp+58h] [rbp-59h] BYREF
  struct _D3DCOLORVALUE v33; // [rsp+60h] [rbp-51h] BYREF
  _BYTE v34[32]; // [rsp+70h] [rbp-41h] BYREF

  v2 = a2;
  v3 = *((float *)this + 35);
  v5 = *((float *)this + 37);
  v6 = 0LL;
  v7 = *((float *)this + 36);
  v8 = 0LL;
  v9 = *((float *)this + 38);
  v10 = 0LL;
  v32 = 0LL;
  v30 = a2;
  *(struct _D3DCOLORVALUE *)&v33.r = (struct _D3DCOLORVALUE)_xmm;
  v29 = 0LL;
  v31 = 0LL;
  v11 = CDrawingContext::ApplyRenderStateInternal(a2, 0);
  v12 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x11CDu);
    return v12;
  }
  v13 = CSolidColorLegacyMilBrush::CreateFromColor(&v32, *((struct CComposition **)this + 2), &v33);
  v12 = v13;
  if ( v13 < 0 )
  {
    v26 = 4564;
LABEL_49:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, v26);
    goto LABEL_50;
  }
  v14 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
          WPF::g_pProcessHeap,
          32LL);
  v10 = (struct CRectangleShape *)v14;
  if ( v14 )
  {
    *(_QWORD *)(v14 + 24) = 0LL;
    v33.r = v3;
    v33.g = v7;
    v33.b = v5;
    v33.a = v9;
    v15 = *(__int128 *)&v33.r;
    *(_QWORD *)v14 = &CRectangleShape::`vftable';
    *(_OWORD *)(v14 + 8) = v15;
  }
  else
  {
    v10 = 0LL;
  }
  if ( !v10 )
  {
    v12 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x11DCu);
    goto LABEL_50;
  }
  if ( *((_QWORD *)this + 124) )
  {
    CRectangleShape::CRectangleShape((CRectangleShape *)v34, 0.0, 0.0, 0.0, 0.0);
    SpriteClipShape = CWindowNode::GetSpriteClipShape(this, &v30);
    v12 = SpriteClipShape;
    if ( SpriteClipShape < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, SpriteClipShape, 0x11EAu);
LABEL_13:
      CRectangleShape::~CRectangleShape((CRectangleShape *)v34);
      goto LABEL_50;
    }
    RenderBounds = CWindowNode::GetRenderBounds(this, *((_QWORD *)this + 124), v30, (__int64)&v33, v28, &v27);
    v12 = RenderBounds;
    if ( RenderBounds < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, RenderBounds, 0x11F0u);
      goto LABEL_13;
    }
    CRectangleShape::Set((CRectangleShape *)v34, (const struct MilRectF *)&v33);
    if ( !v28[0] || v27 )
    {
      v20 = CShape::Combine((__int64)v34, 0LL, (__int64)v30, 0LL, 1, &v29);
      v12 = v20;
      if ( v20 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0x11FDu);
        CRectangleShape::~CRectangleShape((CRectangleShape *)v34);
LABEL_23:
        v6 = v29;
        goto LABEL_50;
      }
      (**(void (__fastcall ***)(struct CRectangleShape *, __int64))v10)(v10, 1LL);
      v10 = (struct CRectangleShape *)v29;
      v6 = 0LL;
      v29 = 0LL;
    }
    else
    {
      (**(void (__fastcall ***)(struct CRectangleShape *, __int64))v10)(v10, 1LL);
      v19 = CRectangleShape::CopyRectangle((CRectangleShape *)v34, v18, &v31);
      v12 = v19;
      if ( v19 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x120Bu);
        CRectangleShape::~CRectangleShape((CRectangleShape *)v34);
        v8 = v31;
        goto LABEL_50;
      }
      v10 = v31;
    }
    CRectangleShape::~CRectangleShape((CRectangleShape *)v34);
  }
  else
  {
    v13 = CWindowNode::GetSpriteClipShape(this, &v31);
    v12 = v13;
    if ( v13 < 0 )
    {
      v26 = 4632;
      goto LABEL_49;
    }
    v21 = v31;
    if ( v31 )
    {
      v13 = (*(__int64 (__fastcall **)(struct CRectangleShape *, struct _D3DCOLORVALUE *, _QWORD))(*(_QWORD *)v31 + 24LL))(
              v31,
              &v33,
              0LL);
      v12 = v13;
      if ( v13 < 0 )
      {
        v26 = 4637;
        goto LABEL_49;
      }
      if ( v3 > v33.r || v33.b > v5 || v7 > v33.g || v33.a > v9 )
      {
        v22 = CShape::Combine((__int64)v10, 0LL, (__int64)v21, 0LL, 1, &v29);
        v12 = v22;
        if ( v22 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0x122Bu);
          goto LABEL_23;
        }
        (**(void (__fastcall ***)(struct CRectangleShape *, __int64))v10)(v10, 1LL);
        v10 = (struct CRectangleShape *)v29;
        v6 = 0LL;
        v29 = 0LL;
      }
    }
    v2 = v30;
  }
  if ( *((_QWORD *)this + 144) || *((_QWORD *)this + 141) )
  {
    DxClipShapeNoRef = CWindowNode::GetDxClipShapeNoRef(this);
    v24 = CShape::Combine((__int64)v10, 0LL, (__int64)DxClipShapeNoRef, 0LL, 0, &v29);
    v12 = v24;
    if ( v24 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, 0x1242u);
      goto LABEL_23;
    }
    if ( v10 )
      (**(void (__fastcall ***)(struct CRectangleShape *, __int64))v10)(v10, 1LL);
    v10 = (struct CRectangleShape *)v29;
    v6 = 0LL;
  }
  v13 = CDrawingContext::DrawShape(v2, v10, v32);
  v12 = v13;
  if ( v13 < 0 )
  {
    v26 = 4683;
    goto LABEL_49;
  }
LABEL_50:
  if ( v32 )
    CMILCOMBase::InternalRelease(v32);
  if ( v10 )
    (**(void (__fastcall ***)(struct CRectangleShape *, __int64))v10)(v10, 1LL);
  if ( v6 )
    (**v6)(v6, 1LL);
  if ( v8 )
    CRectangleShape::`vector deleting destructor'(v8, 1);
  return v12;
}
