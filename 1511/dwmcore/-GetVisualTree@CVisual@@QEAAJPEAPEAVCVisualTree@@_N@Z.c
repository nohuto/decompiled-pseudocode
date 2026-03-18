/*
 * XREFs of ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z @ 0x180048704
 * Callers:
 *     ?EnsureVisualTree@CHwndBitmap@@AEAAJXZ @ 0x18000F410 (-EnsureVisualTree@CHwndBitmap@@AEAAJXZ.c)
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x18003E644 (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?EnsureVisualTree@CCachedVisualImage@@AEAAJXZ @ 0x18005B374 (-EnsureVisualTree@CCachedVisualImage@@AEAAJXZ.c)
 *     ?Target_CaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_TARGET_CAPTUREBITS@@@Z @ 0x1800951F8 (-Target_CaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_TARGE.c)
 *     ?SetRoot@CRenderTarget@@QEAAJPEAVCVisual@@@Z @ 0x1800AD27C (-SetRoot@CRenderTarget@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Channel_VisualCaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_CHANNEL_VISUALCAPTUREBITS@@@Z @ 0x1800FB0C4 (-Channel_VisualCaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCM.c)
 *     ?RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z @ 0x180109210 (-RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CVisualTree@@KAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z @ 0x1800B126C (-Create@CVisualTree@@KAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CVisual::GetVisualTree(CVisual *this, struct CVisualTree **a2)
{
  struct CVisualTree **v2; // rdi
  unsigned int v3; // ebx
  __int64 v4; // rax
  int v7; // eax

  v2 = (struct CVisualTree **)((char *)this + 304);
  v3 = 0;
  v4 = *((_QWORD *)this + 38);
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
      MilInstrumentationCheckHR(0x14u, &dword_180178DD0, 1u, v7, 0xB3Fu);
    else
      *a2 = *v2;
  }
  return v3;
}
