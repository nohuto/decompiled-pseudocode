/*
 * XREFs of ?ResetAdvancedDirectFlipState@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAXXZ @ 0x18014F180
 * Callers:
 *     <none>
 * Callees:
 *     ?ResetRestoreBufferResources@CDxHandleAdvancedDirectFlipBitmapRealization@@QEAAXXZ @ 0x18014F1A8 (-ResetRestoreBufferResources@CDxHandleAdvancedDirectFlipBitmapRealization@@QEAAXXZ.c)
 */

void __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::ResetAdvancedDirectFlipState(
        CDxHandleAdvancedDirectFlipBitmapRealization *this)
{
  CDxHandleAdvancedDirectFlipBitmapRealization::ResetRestoreBufferResources((CDxHandleAdvancedDirectFlipBitmapRealization *)((char *)this - 472));
  *((_BYTE *)this + 32) = 0;
}
