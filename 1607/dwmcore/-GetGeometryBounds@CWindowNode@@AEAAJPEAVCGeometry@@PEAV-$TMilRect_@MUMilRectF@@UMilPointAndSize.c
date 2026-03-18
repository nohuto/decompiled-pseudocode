/*
 * XREFs of ?GetGeometryBounds@CWindowNode@@AEAAJPEAVCGeometry@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180140104
 * Callers:
 *     ?ProcessSetDxClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETDXCLIP@@@Z @ 0x18002601C (-ProcessSetDxClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETDXCLIP@@@Z.c)
 * Callees:
 *     ?GetShapeDataNoRef@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z @ 0x18002CBC0 (-GetShapeDataNoRef@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowNode::GetGeometryBounds(const struct D2D_SIZE_F *a1, CGeometry *a2, __int64 a3)
{
  struct CShape *v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0LL;
  CGeometry::GetShapeDataNoRef(a2, a1 + 24, &v5);
  (*(void (__fastcall **)(struct CShape *, __int64, _QWORD))(*(_QWORD *)v5 + 24LL))(v5, a3, 0LL);
  return 0LL;
}
