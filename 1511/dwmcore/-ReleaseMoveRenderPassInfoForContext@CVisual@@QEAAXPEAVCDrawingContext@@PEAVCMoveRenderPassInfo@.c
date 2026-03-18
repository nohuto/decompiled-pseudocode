/*
 * XREFs of ?ReleaseMoveRenderPassInfoForContext@CVisual@@QEAAXPEAVCDrawingContext@@PEAVCMoveRenderPassInfo@@@Z @ 0x180120C94
 * Callers:
 *     ??1CDrawingContext@@MEAA@XZ @ 0x1800438D4 (--1CDrawingContext@@MEAA@XZ.c)
 *     ??1CVisual@@MEAA@XZ @ 0x18004C96C (--1CVisual@@MEAA@XZ.c)
 *     ?PurgeOldRenderPassInfos@CVisual@@QEAAXXZ @ 0x180120A40 (-PurgeOldRenderPassInfos@CVisual@@QEAAXXZ.c)
 * Callees:
 *     ??_GCMoveRenderPassInfo@@UEAAPEAXI@Z @ 0x180115E40 (--_GCMoveRenderPassInfo@@UEAAPEAXI@Z.c)
 */

void __fastcall CVisual::ReleaseMoveRenderPassInfoForContext(
        CVisual *this,
        struct CDrawingContext *a2,
        struct CMoveRenderPassInfo *a3)
{
  struct CMoveRenderPassInfo **v3; // r9
  struct CMoveRenderPassInfo **v4; // rcx
  struct CMoveRenderPassInfo **v5; // rcx
  struct CMoveRenderPassInfo **v6; // rax

  v3 = (struct CMoveRenderPassInfo **)*((_QWORD *)a3 + 11);
  v4 = (struct CMoveRenderPassInfo **)*((_QWORD *)a3 + 12);
  if ( v3[1] != (struct CMoveRenderPassInfo *)((char *)a3 + 88)
    || *v4 != (struct CMoveRenderPassInfo *)((char *)a3 + 88) )
  {
    __fastfail(3u);
  }
  *v4 = (struct CMoveRenderPassInfo *)v3;
  v3[1] = (struct CMoveRenderPassInfo *)v4;
  --*((_DWORD *)a2 + 1424);
  v5 = (struct CMoveRenderPassInfo **)*((_QWORD *)a3 + 13);
  v6 = (struct CMoveRenderPassInfo **)*((_QWORD *)a3 + 14);
  if ( v5[1] != (struct CMoveRenderPassInfo *)((char *)a3 + 104)
    || *v6 != (struct CMoveRenderPassInfo *)((char *)a3 + 104) )
  {
    __fastfail(3u);
  }
  *v6 = (struct CMoveRenderPassInfo *)v5;
  v5[1] = (struct CMoveRenderPassInfo *)v6;
  if ( a3 )
    CMoveRenderPassInfo::`scalar deleting destructor'(a3, 1);
}
