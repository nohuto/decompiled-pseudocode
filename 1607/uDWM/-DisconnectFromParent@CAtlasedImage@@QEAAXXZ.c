/*
 * XREFs of ?DisconnectFromParent@CAtlasedImage@@QEAAXXZ @ 0x18002BC00
 * Callers:
 *     ?RedrawVisual@CButton@@AEAAJXZ @ 0x18001BB64 (-RedrawVisual@CButton@@AEAAJXZ.c)
 *     ??1CButton@@MEAA@XZ @ 0x18001C3E8 (--1CButton@@MEAA@XZ.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180025DA0 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?RemoveAtlasImage@CAtlasedRectsVisual@@QEAAXPEAVCAtlasedImage@@@Z @ 0x18001D1F8 (-RemoveAtlasImage@CAtlasedRectsVisual@@QEAAXPEAVCAtlasedImage@@@Z.c)
 */

void __fastcall CAtlasedImage::DisconnectFromParent(CAtlasedRectsVisual **this)
{
  if ( this[10] )
    CAtlasedRectsVisual::RemoveAtlasImage(this[10], (struct CAtlasedImage *)this);
}
