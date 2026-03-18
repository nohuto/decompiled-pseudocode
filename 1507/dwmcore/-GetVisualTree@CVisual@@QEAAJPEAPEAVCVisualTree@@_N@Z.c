/*
 * XREFs of ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z @ 0x180035B14
 * Callers:
 *     ?EnsureVisualTree@CHwndBitmap@@AEAAJXZ @ 0x180011EC0 (-EnsureVisualTree@CHwndBitmap@@AEAAJXZ.c)
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x1800299D8 (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?EnsureVisualTree@CCachedVisualImage@@AEAAJXZ @ 0x180053254 (-EnsureVisualTree@CCachedVisualImage@@AEAAJXZ.c)
 *     ?Target_CaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_TARGET_CAPTUREBITS@@@Z @ 0x18006885C (-Target_CaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_TARGE.c)
 *     ?SetRoot@CRenderTarget@@QEAAJPEAVCVisual@@@Z @ 0x1800927AC (-SetRoot@CRenderTarget@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Channel_VisualCaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_CHANNEL_VISUALCAPTUREBITS@@@Z @ 0x1800E2778 (-Channel_VisualCaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCM.c)
 *     ?RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z @ 0x1800EF214 (-RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z.c)
 * Callees:
 *     ?Create@CVisualTree@@KAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z @ 0x18005FBC0 (-Create@CVisualTree@@KAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CVisual::GetVisualTree(CVisual *this, struct CVisualTree **a2)
{
  struct CVisualTree **v2; // rdi
  unsigned int v3; // ebx
  __int64 v4; // rax
  int v7; // eax

  v2 = (struct CVisualTree **)((char *)this + 320);
  v3 = 0;
  v4 = *((_QWORD *)this + 40);
  if ( v4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    *a2 = *v2;
  }
  else
  {
    v7 = CVisualTree::Create(*((struct CComposition **)this + 2), this, v2);
    v3 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR(0x14u, &dword_18016AB2C, 1u, v7, 0xBD9u);
    else
      *a2 = *v2;
  }
  return v3;
}
