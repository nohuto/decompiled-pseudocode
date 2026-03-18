/*
 * XREFs of ?ProcessNotifyDirty@CGdiSpriteBitmap@@UEAAJPEAVCResourceTable@@PEBUMILCMD_GDISPRITEBITMAP_NOTIFYDIRTY@@@Z @ 0x18001B810
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CGdiSpriteBitmap::ProcessNotifyDirty(
        CGdiSpriteBitmap *this,
        struct CResourceTable *a2,
        const struct MILCMD_GDISPRITEBITMAP_NOTIFYDIRTY *a3)
{
  return CGdiSpriteBitmap::NotifyDirty(
           (CGdiSpriteBitmap *)((char *)this + 72),
           a2,
           *((_DWORD *)a3 + 2),
           *(_QWORD *)((char *)a3 + 12));
}
