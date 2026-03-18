/*
 * XREFs of ?GetID2D1InkAndInkStyle@CD2DInk@@QEAAJPEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z @ 0x18012DA5C
 * Callers:
 *     ?ProcessBasicStateUpdate@CInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INK_BASICSTATEUPDATE@@@Z @ 0x1800F509C (-ProcessBasicStateUpdate@CInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INK_BASICSTATEUPDATE@@@Z.c)
 *     ?ProcessStartPointUpdate@CInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INK_STARTPOINTUPDATE@@@Z @ 0x1800F5274 (-ProcessStartPointUpdate@CInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INK_STARTPOINTUPDATE@@@Z.c)
 *     ?ProcessSegmentCountUpdate@CInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INK_SEGMENTCOUNTUPDATE@@@Z @ 0x1800F53EC (-ProcessSegmentCountUpdate@CInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INK_SEGMENTCOUNTUPDATE@@@Z.c)
 *     ?ProcessSegmentUpdate@CInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INK_SEGMENTUPDATE@@@Z @ 0x1800F55EC (-ProcessSegmentUpdate@CInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INK_SEGMENTUPDATE@@@Z.c)
 *     ?CreateResource@CInk@@QEAAJPEAVID2DContext@@PEAPEAVCD2DInk@@@Z @ 0x18012D3B0 (-CreateResource@CInk@@QEAAJPEAVID2DContext@@PEAPEAVCD2DInk@@@Z.c)
 *     ?GetBounds@CInk@@UEAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18012D810 (-GetBounds@CInk@@UEAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMilPoint.c)
 *     ?GetD2DInk@CInk@@QEAAJPEAVID2DContext@@PEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z @ 0x18012D93C (-GetD2DInk@CInk@@QEAAJPEAVID2DContext@@PEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

__int64 __fastcall CD2DInk::GetID2D1InkAndInkStyle(CD2DInk *this, struct ID2D1Ink **a2, struct ID2D1InkStyle **a3)
{
  __int64 v6; // rdi

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 13) + 8LL))(*((_QWORD *)this + 13));
  v6 = *((_QWORD *)this + 14);
  *a2 = (struct ID2D1Ink *)*((_QWORD *)this + 13);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  *a3 = (struct ID2D1InkStyle *)*((_QWORD *)this + 14);
  return 0LL;
}
