/*
 * XREFs of ?DrawOverlayArea@CDrawingContext@@QEAAJPEAVISwapChainContent@@PEAVCShape@@_N2@Z @ 0x18010CEB8
 * Callers:
 *     ?Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000C480 (-Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAU_MARGINS@@H_N77PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x18005F160 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 *     ?Draw@CSurfaceBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180121CF0 (-Draw@CSurfaceBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@.c)
 * Callees:
 *     ?GetRotation@CBaseMatrix@@QEBA?AW4DXGI_MODE_ROTATION@@XZ @ 0x1800141C8 (-GetRotation@CBaseMatrix@@QEBA-AW4DXGI_MODE_ROTATION@@XZ.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?DrawShape@CDrawingContext@@QEAAJPEAVCShape@@PEAVCLegacyMilBrush@@@Z @ 0x180042E18 (-DrawShape@CDrawingContext@@QEAAJPEAVCShape@@PEAVCLegacyMilBrush@@@Z.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x180045EE0 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x180046ED0 (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?GetTopByReference@CBaseMatrixStack@@IEBAPEBVCBaseMatrix@@XZ @ 0x18004E794 (-GetTopByReference@CBaseMatrixStack@@IEBAPEBVCBaseMatrix@@XZ.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180085DFC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800BC8D2 (memset_0.c)
 *     ?CreateFromColor@CSolidColorLegacyMilBrush@@SAJPEAPEAV1@PEAVCComposition@@AEAU_D3DCOLORVALUE@@@Z @ 0x18010B8B4 (-CreateFromColor@CSolidColorLegacyMilBrush@@SAJPEAPEAV1@PEAVCComposition@@AEAU_D3DCOLORVALUE@@@Z.c)
 */

__int64 __fastcall CDrawingContext::DrawOverlayArea(
        struct CComposition **this,
        struct ISwapChainContent *a2,
        struct CShape *a3,
        char a4,
        bool a5)
{
  unsigned int v8; // esi
  struct CSolidColorLegacyMilBrush *v9; // r14
  __int64 v10; // rdi
  CBaseMatrix *TopByReference; // rax
  __int64 Rotation; // rbx
  bool v13; // bl
  int v14; // eax
  bool v15; // al
  struct _D3DCOLORVALUE v16; // xmm0
  int v17; // eax
  int v18; // eax
  struct _D3DCOLORVALUE v20; // [rsp+30h] [rbp-48h] BYREF
  int v21; // [rsp+40h] [rbp-38h] BYREF
  _BYTE v22[8]; // [rsp+44h] [rbp-34h] BYREF
  int v23; // [rsp+4Ch] [rbp-2Ch]
  char v24; // [rsp+C0h] [rbp+48h]
  struct CSolidColorLegacyMilBrush *v25; // [rsp+C8h] [rbp+50h] BYREF
  struct CShape *v26; // [rsp+D0h] [rbp+58h]
  bool v27; // [rsp+D8h] [rbp+60h]

  v26 = a3;
  v25 = 0LL;
  *(_QWORD *)&v20.r = 0LL;
  *(_QWORD *)&v20.b = 0LL;
  v21 = 0;
  v8 = 0;
  v9 = 0LL;
  memset_0(v22, 0, 0x28uLL);
  v10 = *(_QWORD *)a2;
  v27 = CCommonRegistryData::m_dwOverlayTestMode != 0;
  v24 = 0;
  TopByReference = CBaseMatrixStack::GetTopByReference((CBaseMatrixStack *)(this + 57));
  Rotation = (unsigned int)CBaseMatrix::GetRotation(TopByReference);
  (*(void (__fastcall **)(struct ISwapChainContent *, __int64))(v10 + 160))(a2, Rotation);
  v13 = a5;
  if ( a4 )
  {
    if ( a5 )
      goto LABEL_7;
    v21 = 4;
    v23 = 1;
    v14 = CDrawingContext::PushRenderOptionsInternal(
            (CDrawingContext *)this,
            0LL,
            (const struct MilRenderOptions *)&v21,
            1);
    v8 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x1F2Au);
      return v8;
    }
    v24 = 1;
  }
  if ( !v13 )
  {
    v15 = v27;
    goto LABEL_11;
  }
LABEL_7:
  v15 = v27;
  if ( v27 )
    goto LABEL_12;
  if ( !a4 )
  {
LABEL_11:
    if ( !v15 )
    {
      if ( a4 )
        goto LABEL_21;
      goto LABEL_20;
    }
LABEL_12:
    if ( a4 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(struct ISwapChainContent *))(*(_QWORD *)a2 + 128LL))(a2) )
      {
        if ( (*(unsigned __int8 (__fastcall **)(struct ISwapChainContent *))(*(_QWORD *)a2 + 136LL))(a2) )
          *(struct _D3DCOLORVALUE *)&v16.r = (struct _D3DCOLORVALUE)_xmm;
        else
          *(struct _D3DCOLORVALUE *)&v16.r = (struct _D3DCOLORVALUE)_xmm;
      }
      else
      {
        *(struct _D3DCOLORVALUE *)&v16.r = (struct _D3DCOLORVALUE)_xmm;
      }
      *(struct _D3DCOLORVALUE *)&v20.r = *(struct _D3DCOLORVALUE *)&v16.r;
LABEL_21:
      v17 = CSolidColorLegacyMilBrush::CreateFromColor(&v25, this[3], &v20);
      v8 = v17;
      if ( v17 >= 0 )
      {
        v9 = v25;
        v18 = CDrawingContext::DrawShape((CDrawingContext *)this, v26, v25);
        v8 = v18;
        if ( v18 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x1F63u);
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x1F61u);
        v9 = v25;
      }
      goto LABEL_25;
    }
LABEL_20:
    v20.a = FLOAT_1_0;
    goto LABEL_21;
  }
LABEL_25:
  if ( v24 )
    CDrawingContext::PopRenderOptionsInternal((CDrawingContext *)this, 1);
  if ( v9 )
    CMILCOMBase::InternalRelease(v9);
  return v8;
}
