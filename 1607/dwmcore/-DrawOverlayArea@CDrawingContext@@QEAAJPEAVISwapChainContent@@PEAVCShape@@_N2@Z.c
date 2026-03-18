/*
 * XREFs of ?DrawOverlayArea@CDrawingContext@@QEAAJPEAVISwapChainContent@@PEAVCShape@@_N2@Z @ 0x180122980
 * Callers:
 *     ?Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000FF20 (-Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAU_MARGINS@@H_N77PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180026AF0 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 *     ?Draw@CSurfaceBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18013A0F0 (-Draw@CSurfaceBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@.c)
 * Callees:
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800035A8 (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?GetRotation@CMILMatrix@@QEBA?AW4DXGI_MODE_ROTATION@@XZ @ 0x180015588 (-GetRotation@CMILMatrix@@QEBA-AW4DXGI_MODE_ROTATION@@XZ.c)
 *     ?GetTopByReference@CBaseMatrixStack@@IEBAPEBVCMILMatrix@@XZ @ 0x1800253C8 (-GetTopByReference@CBaseMatrixStack@@IEBAPEBVCMILMatrix@@XZ.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x18002D1DC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?DrawShape@CDrawingContext@@QEAAJPEAVCShape@@PEAVCLegacyMilBrush@@@Z @ 0x18006B5F4 (-DrawShape@CDrawingContext@@QEAAJPEAVCShape@@PEAVCLegacyMilBrush@@@Z.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x18006E110 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?CreateFromColor@CSolidColorLegacyMilBrush@@SAJPEAPEAV1@PEAVCComposition@@AEAU_D3DCOLORVALUE@@@Z @ 0x180121BD0 (-CreateFromColor@CSolidColorLegacyMilBrush@@SAJPEAPEAV1@PEAVCComposition@@AEAU_D3DCOLORVALUE@@@Z.c)
 */

__int64 __fastcall CDrawingContext::DrawOverlayArea(
        struct CComposition **this,
        struct ISwapChainContent *a2,
        struct CShape *a3,
        char a4,
        bool a5)
{
  unsigned int v5; // ebx
  char v10; // r12
  bool v11; // r15
  CMILMatrix *TopByReference; // rax
  unsigned int Rotation; // eax
  int v14; // eax
  struct _D3DCOLORVALUE v15; // xmm0
  int v16; // eax
  struct CSolidColorLegacyMilBrush *v17; // rdi
  int v18; // eax
  struct _D3DCOLORVALUE v20; // [rsp+30h] [rbp-40h] BYREF
  _DWORD v21[12]; // [rsp+40h] [rbp-30h] BYREF
  struct CSolidColorLegacyMilBrush *v22; // [rsp+A0h] [rbp+30h] BYREF

  v5 = 0;
  v22 = 0LL;
  *(struct _D3DCOLORVALUE *)&v20.r = 0LL;
  memset_0(v21, 0, 0x28uLL);
  v10 = 0;
  v11 = CCommonRegistryData::m_dwOverlayTestMode != 0;
  TopByReference = CBaseMatrixStack::GetTopByReference((CBaseMatrixStack *)(this + 67));
  Rotation = CMILMatrix::GetRotation(TopByReference);
  (*(void (__fastcall **)(struct ISwapChainContent *, _QWORD))(*(_QWORD *)a2 + 168LL))(a2, Rotation);
  if ( a4 )
  {
    if ( !a5 )
    {
      v21[0] = 4;
      v21[3] = 1;
      v14 = CDrawingContext::PushRenderOptionsInternal(
              (CDrawingContext *)this,
              0LL,
              (const struct MilRenderOptions *)v21,
              1);
      v5 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x1F81u);
        return v5;
      }
      v10 = 1;
      goto LABEL_9;
    }
  }
  else if ( !a5 )
  {
    goto LABEL_9;
  }
  if ( v11 )
    goto LABEL_10;
  if ( a4 )
    return v5;
LABEL_9:
  if ( v11 )
  {
LABEL_10:
    if ( a4 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(struct ISwapChainContent *))(*(_QWORD *)a2 + 136LL))(a2) )
      {
        if ( (*(unsigned __int8 (__fastcall **)(struct ISwapChainContent *))(*(_QWORD *)a2 + 144LL))(a2) )
          *(struct _D3DCOLORVALUE *)&v15.r = (struct _D3DCOLORVALUE)_xmm;
        else
          *(struct _D3DCOLORVALUE *)&v15.r = (struct _D3DCOLORVALUE)_xmm;
      }
      else
      {
        *(struct _D3DCOLORVALUE *)&v15.r = (struct _D3DCOLORVALUE)_xmm;
      }
      *(struct _D3DCOLORVALUE *)&v20.r = *(struct _D3DCOLORVALUE *)&v15.r;
      goto LABEL_19;
    }
    goto LABEL_18;
  }
  if ( !a4 )
LABEL_18:
    v20.a = FLOAT_1_0;
LABEL_19:
  v16 = CSolidColorLegacyMilBrush::CreateFromColor(&v22, this[3], &v20);
  v17 = v22;
  v5 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x1FB8u);
  }
  else
  {
    v18 = CDrawingContext::DrawShape((CDrawingContext *)this, a3, v22);
    v5 = v18;
    if ( v18 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x1FBAu);
  }
  if ( v10 )
    CDrawingContext::PopRenderOptionsInternal((CDrawingContext *)this, 1);
  if ( v17 )
    CMILCOMBase::InternalRelease(v17);
  return v5;
}
