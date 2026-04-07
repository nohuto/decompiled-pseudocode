/*
 * XREFs of ?DisconnectFromParent@CAtlasedImage@@QEAAXXZ @ 0x18002C378
 * Callers:
 *     ?RedrawVisual@CButton@@AEAAJXZ @ 0x18001ED00 (-RedrawVisual@CButton@@AEAAJXZ.c)
 *     ??1CButton@@MEAA@XZ @ 0x18001F5E8 (--1CButton@@MEAA@XZ.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180028AC0 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?RemoveAtlasImage@CAtlasedRectsVisual@@QEAAXPEAVCAtlasedImage@@@Z @ 0x180020400 (-RemoveAtlasImage@CAtlasedRectsVisual@@QEAAXPEAVCAtlasedImage@@@Z.c)
 */

void __fastcall CAtlasedImage::DisconnectFromParent(CAtlasedRectsVisual **this)
{
  if ( this[10] )
    CAtlasedRectsVisual::RemoveAtlasImage(this[10], (struct CAtlasedImage *)this);
}
