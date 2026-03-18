/*
 * XREFs of ?EnsureDrawingContextFrame@CContentBounder@@AEAAJXZ @ 0x18004AF38
 * Callers:
 *     ?GetBounds@CRenderData@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18004E930 (-GetBounds@CRenderData@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UM.c)
 * Callees:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x18002D1DC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEAV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0DF@@@2PEAVCHwndRenderTarget@@@Z @ 0x18006C640 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEAV-$CMatrix@UPageIn.c)
 *     ?Create@CSwRenderTargetGetBounds@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800B419C (-Create@CSwRenderTargetGetBounds@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800B8530 (-Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CContentBounder::EnsureDrawingContextFrame(CContentBounder *this)
{
  struct CDrawingContext **v1; // rdi
  __int64 v3; // rax
  struct IRenderTarget *v4; // rdx
  int v5; // eax
  int v6; // ebx
  struct CComposition *v8; // rbp
  CMILCOMBase **v9; // r14
  int v10; // eax
  int v11; // eax

  v1 = (struct CDrawingContext **)((char *)this + 8);
  if ( *((_QWORD *)this + 1) )
    goto LABEL_2;
  v8 = *(struct CComposition **)this;
  v9 = (CMILCOMBase **)((char *)this + 16);
  v10 = CSwRenderTargetGetBounds::Create(*(struct CComposition **)this, (struct CSwRenderTargetGetBounds **)this + 2);
  v6 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x71u);
  }
  else
  {
    v11 = CDrawingContext::Create(v8, v1);
    v6 = v11;
    if ( v11 >= 0 )
      goto LABEL_8;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x72u);
  }
  if ( *v1 )
  {
    CMILCOMBase::InternalRelease((struct CDrawingContext *)((char *)*v1 + 8));
    *v1 = 0LL;
  }
  if ( *v9 )
  {
    CMILCOMBase::InternalRelease(*v9);
    *v9 = 0LL;
  }
LABEL_8:
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x94u);
    return (unsigned int)v6;
  }
LABEL_2:
  v3 = *((_QWORD *)this + 2);
  if ( v3 )
    v4 = (struct IRenderTarget *)(v3 + 16);
  else
    v4 = 0LL;
  v5 = CDrawingContext::BeginFrame(*v1, v4, 0, 0LL, 0LL, 0, 0LL);
  v6 = v5;
  if ( v5 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xA0u);
  return (unsigned int)v6;
}
