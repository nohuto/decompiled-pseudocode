/*
 * XREFs of ?ResetAdvancedDirectFlipState@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAXXZ @ 0x18015DC40
 * Callers:
 *     <none>
 * Callees:
 *     ?ResetRestoreBufferResources@CDxHandleAdvancedDirectFlipBitmapRealization@@QEAAXXZ @ 0x18015DC68 (-ResetRestoreBufferResources@CDxHandleAdvancedDirectFlipBitmapRealization@@QEAAXXZ.c)
 */

void __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::ResetAdvancedDirectFlipState(
        CDxHandleAdvancedDirectFlipBitmapRealization *this)
{
  CDxHandleAdvancedDirectFlipBitmapRealization::ResetRestoreBufferResources((CDxHandleAdvancedDirectFlipBitmapRealization *)((char *)this - 472));
  *((_BYTE *)this + 32) = 0;
}
