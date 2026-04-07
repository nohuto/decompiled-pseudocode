/*
 * XREFs of ?DisconnectFromParent@CAtlasedImage@@QEAAXXZ @ 0x180029368
 * Callers:
 *     ?RedrawVisual@CButton@@AEAAJXZ @ 0x18001A070 (-RedrawVisual@CButton@@AEAAJXZ.c)
 *     ??1CButton@@MEAA@XZ @ 0x18001AA58 (--1CButton@@MEAA@XZ.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180023350 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?RemoveAtlasImage@CAtlasedRectsVisual@@QEAAXPEAVCAtlasedImage@@@Z @ 0x18001ABBC (-RemoveAtlasImage@CAtlasedRectsVisual@@QEAAXPEAVCAtlasedImage@@@Z.c)
 */

void __fastcall CAtlasedImage::DisconnectFromParent(CAtlasedRectsVisual **this)
{
  if ( this[10] )
    CAtlasedRectsVisual::RemoveAtlasImage(this[10], (struct CAtlasedImage *)this);
}
