/*
 * XREFs of ?RenderBlackImage@CWindowNode@@AEAAJPEAVCDrawingContext@@@Z @ 0x180140714
 * Callers:
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180027F90 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180001748 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?GetDxClipShapeNoRef@CWindowNode@@AEBAPEAVCShape@@XZ @ 0x1800266EC (-GetDxClipShapeNoRef@CWindowNode@@AEBAPEAVCShape@@XZ.c)
 *     ?GetSpriteClipShape@CWindowNode@@AEAAJPEAPEAVCShape@@@Z @ 0x180026748 (-GetSpriteClipShape@CWindowNode@@AEAAJPEAPEAVCShape@@@Z.c)
 *     ?GetRenderBounds@CWindowNode@@AEBAJPEAVIImageSource@@PEAVCShape@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N3@Z @ 0x180028FEC (-GetRenderBounds@CWindowNode@@AEBAJPEAVIImageSource@@PEAVCShape@@PEAV-$TMilRect_@MUMilRectF@@UMi.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x18002D1DC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?DrawShape@CDrawingContext@@QEAAJPEAVCShape@@PEAVCLegacyMilBrush@@@Z @ 0x18006B5F4 (-DrawShape@CDrawingContext@@QEAAJPEAVCShape@@PEAVCLegacyMilBrush@@@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18006E9A0 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?BuildFromRectFs@CRectanglesShape@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x180097924 (-BuildFromRectFs@CRectanglesShape@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     ??0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z @ 0x180097968 (--0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z.c)
 *     ?SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z @ 0x1800979B0 (-SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z.c)
 *     ??_GCRectanglesShape@@UEAAPEAXI@Z @ 0x180097E80 (--_GCRectanglesShape@@UEAAPEAXI@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x180097F28 (--1CRectanglesShape@@UEAA@XZ.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?CreateFromColor@CSolidColorLegacyMilBrush@@SAJPEAPEAV1@PEAVCComposition@@AEAU_D3DCOLORVALUE@@@Z @ 0x180121BD0 (-CreateFromColor@CSolidColorLegacyMilBrush@@SAJPEAPEAV1@PEAVCComposition@@AEAU_D3DCOLORVALUE@@@Z.c)
 */

__int64 __fastcall CWindowNode::RenderBlackImage(CWindowNode *this, struct CDrawingContext *a2)
{
  __int128 v4; // xmm0
  CRectanglesShape *v5; // rdi
  CRectanglesShape *v6; // r14
  CRectanglesShape *v7; // rsi
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // eax
  CRectanglesShape *v11; // rax
  int SpriteClipShape; // eax
  int RenderBounds; // eax
  __int64 v14; // rdx
  __int64 v15; // rax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  __int64 v19; // r12
  int v20; // eax
  __int64 v21; // rdx
  int v22; // eax
  struct CShape *DxClipShapeNoRef; // rax
  __int64 v24; // rdx
  int v25; // eax
  int v26; // eax
  char v28; // [rsp+30h] [rbp-69h] BYREF
  char v29[7]; // [rsp+31h] [rbp-68h] BYREF
  CRectanglesShape *v30; // [rsp+38h] [rbp-61h] BYREF
  struct CSolidColorLegacyMilBrush *v31; // [rsp+40h] [rbp-59h] BYREF
  struct _D3DCOLORVALUE v32; // [rsp+48h] [rbp-51h] BYREF
  __int128 v33; // [rsp+58h] [rbp-41h] BYREF
  void **v34; // [rsp+70h] [rbp-29h] BYREF
  _BYTE *v35; // [rsp+78h] [rbp-21h]
  _BYTE *v36; // [rsp+80h] [rbp-19h]
  int v37; // [rsp+88h] [rbp-11h]
  __int64 v38; // [rsp+8Ch] [rbp-Dh]
  _BYTE v39[16]; // [rsp+98h] [rbp-1h] BYREF
  __int64 v40; // [rsp+A8h] [rbp+Fh]

  v31 = 0LL;
  *(struct _D3DCOLORVALUE *)&v32.r = (struct _D3DCOLORVALUE)_xmm;
  v4 = *((_OWORD *)this + 14);
  v30 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v33 = v4;
  v7 = 0LL;
  v8 = CDrawingContext::ApplyRenderStateInternal(a2, 0);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x11C4u);
    goto LABEL_51;
  }
  v10 = CSolidColorLegacyMilBrush::CreateFromColor(&v31, *((struct CComposition **)this + 2), &v32);
  v9 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x11CBu);
    goto LABEL_51;
  }
  v11 = (CRectanglesShape *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                       + 8LL))(
                              WPF::g_pProcessHeap,
                              64LL);
  if ( v11 )
    v5 = CRectanglesShape::CRectanglesShape(v11, (const struct MilRectF *)&v33);
  if ( !v5 )
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x11D3u);
    goto LABEL_51;
  }
  if ( *((_QWORD *)this + 100) )
  {
    v40 = 0LL;
    v34 = &CRectanglesShape::`vftable';
    v35 = v39;
    v36 = v39;
    v37 = 1;
    v38 = 1LL;
    SpriteClipShape = CWindowNode::GetSpriteClipShape((struct D2D_SIZE_F *)this, (struct CShape **)&v32);
    v9 = SpriteClipShape;
    if ( SpriteClipShape < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, SpriteClipShape, 0x11E1u);
      goto LABEL_27;
    }
    RenderBounds = CWindowNode::GetRenderBounds(
                     this,
                     *((_QWORD *)this + 100),
                     *(CShape **)&v32.r,
                     (__int64)&v33,
                     &v28,
                     v29);
    v9 = RenderBounds;
    if ( RenderBounds < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, RenderBounds, 0x11E7u);
      goto LABEL_27;
    }
    CRectanglesShape::SetSingleRect((CRectanglesShape *)&v34, (const struct MilRectF *)&v33);
    if ( !v28 || v29[0] )
    {
      v17 = CShape::Combine((__int64)&v34, v14, *(__int64 *)&v32.r, 0LL, 1, &v30);
      v9 = v17;
      if ( v17 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x11F4u);
        CRectanglesShape::~CRectanglesShape((CRectanglesShape *)&v34);
        goto LABEL_24;
      }
      (**(void (__fastcall ***)(CRectanglesShape *, __int64))v5)(v5, 1LL);
      v5 = v30;
      v6 = 0LL;
      v30 = 0LL;
    }
    else
    {
      (**(void (__fastcall ***)(CRectanglesShape *, __int64))v5)(v5, 1LL);
      v15 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
              WPF::g_pProcessHeap,
              64LL);
      v7 = (CRectanglesShape *)v15;
      if ( v15 )
      {
        *(_QWORD *)v15 = &CRectanglesShape::`vftable';
        *(_QWORD *)(v15 + 8) = v15 + 40;
        *(_QWORD *)(v15 + 16) = v15 + 40;
        *(_DWORD *)(v15 + 24) = 1;
        *(_QWORD *)(v15 + 28) = 1LL;
        *(_QWORD *)(v15 + 56) = 0LL;
      }
      else
      {
        v7 = 0LL;
      }
      if ( !v7 )
      {
        v9 = -2147024882;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x1200u);
LABEL_27:
        CRectanglesShape::~CRectanglesShape((CRectanglesShape *)&v34);
        goto LABEL_51;
      }
      v16 = CRectanglesShape::BuildFromRectFs(v7, (__int64)v35, HIDWORD(v38));
      v9 = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x1202u);
        goto LABEL_27;
      }
      v5 = v7;
      v7 = 0LL;
    }
    CRectanglesShape::~CRectanglesShape((CRectanglesShape *)&v34);
  }
  else
  {
    v18 = CWindowNode::GetSpriteClipShape((struct D2D_SIZE_F *)this, (struct CShape **)&v32);
    v9 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x120Fu);
      goto LABEL_51;
    }
    v19 = *(_QWORD *)&v32.r;
    if ( *(_QWORD *)&v32.r )
    {
      v20 = (*(__int64 (__fastcall **)(_QWORD, struct _D3DCOLORVALUE *, _QWORD))(**(_QWORD **)&v32.r + 24LL))(
              *(_QWORD *)&v32.r,
              &v32,
              0LL);
      v9 = v20;
      if ( v20 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0x1214u);
        goto LABEL_51;
      }
      if ( *(float *)&v33 > v32.r
        || v32.b > *((float *)&v33 + 2)
        || *((float *)&v33 + 1) > v32.g
        || v32.a > *((float *)&v33 + 3) )
      {
        v22 = CShape::Combine((__int64)v5, v21, v19, 0LL, 1, &v30);
        v9 = v22;
        if ( v22 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0x1222u);
          goto LABEL_24;
        }
        (**(void (__fastcall ***)(CRectanglesShape *, __int64))v5)(v5, 1LL);
        v5 = v30;
        v6 = 0LL;
        v30 = 0LL;
      }
    }
  }
  if ( *((_QWORD *)this + 120) || *((_QWORD *)this + 117) )
  {
    DxClipShapeNoRef = CWindowNode::GetDxClipShapeNoRef(this);
    v25 = CShape::Combine((__int64)v5, v24, (__int64)DxClipShapeNoRef, 0LL, 0, &v30);
    v9 = v25;
    if ( v25 >= 0 )
    {
      if ( v5 )
        (**(void (__fastcall ***)(CRectanglesShape *, __int64))v5)(v5, 1LL);
      v5 = v30;
      v6 = 0LL;
      goto LABEL_45;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, 0x1239u);
LABEL_24:
    v6 = v30;
    goto LABEL_51;
  }
LABEL_45:
  v26 = CDrawingContext::DrawShape(a2, v5, v31);
  v9 = v26;
  if ( v26 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, 0x1242u);
LABEL_51:
  if ( v31 )
    CMILCOMBase::InternalRelease(v31);
  if ( v5 )
    (**(void (__fastcall ***)(CRectanglesShape *, __int64))v5)(v5, 1LL);
  if ( v6 )
    (**(void (__fastcall ***)(CRectanglesShape *, __int64))v6)(v6, 1LL);
  if ( v7 )
    CRectanglesShape::`scalar deleting destructor'(v7, 1);
  return v9;
}
