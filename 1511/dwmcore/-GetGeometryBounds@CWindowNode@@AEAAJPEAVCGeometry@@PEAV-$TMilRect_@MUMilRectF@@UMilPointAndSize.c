/*
 * XREFs of ?GetGeometryBounds@CWindowNode@@AEAAJPEAVCGeometry@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801237A4
 * Callers:
 *     ?ProcessSetDxClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETDXCLIP@@@Z @ 0x18005E4E8 (-ProcessSetDxClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETDXCLIP@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?GetShapeDataNoRef@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z @ 0x1800644A8 (-GetShapeDataNoRef@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z.c)
 */

__int64 __fastcall CWindowNode::GetGeometryBounds(__int64 a1, const struct D2DMatrix **a2, __int64 a3)
{
  struct CShape *v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0LL;
  CGeometry::GetShapeDataNoRef(a2, (const struct D2D_SIZE_F *)(a1 + 132), &v5);
  (*(void (__fastcall **)(struct CShape *, __int64, _QWORD))(*(_QWORD *)v5 + 24LL))(v5, a3, 0LL);
  return 0LL;
}
