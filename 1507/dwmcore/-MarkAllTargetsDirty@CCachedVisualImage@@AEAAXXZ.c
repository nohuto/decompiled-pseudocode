/*
 * XREFs of ?MarkAllTargetsDirty@CCachedVisualImage@@AEAAXXZ @ 0x1800531E4
 * Callers:
 *     ?OnChanged@CCachedVisualImage@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180052AF0 (-OnChanged@CCachedVisualImage@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ProcessUpdate@CCachedVisualImage@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CACHEDVISUALIMAGE@@@Z @ 0x180053B0C (-ProcessUpdate@CCachedVisualImage@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CACHEDVISUALIMAGE@@@Z.c)
 *     ?SetRootVisual@CCachedVisualImage@@AEAAJPEAVCVisual@@@Z @ 0x18010BA6C (-SetRootVisual@CCachedVisualImage@@AEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?Destruct@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAXXZ @ 0x180053CF8 (-Destruct@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAXXZ.c)
 *     ?IsValid@RenderTargetBitmapInfo@CCachedVisualImage@@QEAA_NXZ @ 0x180054280 (-IsValid@RenderTargetBitmapInfo@CCachedVisualImage@@QEAA_NXZ.c)
 *     ?RemoveAt@?$DynArray@URenderTargetBitmapInfo@CCachedVisualImage@@$00@@QEAAJI@Z @ 0x180056374 (-RemoveAt@-$DynArray@URenderTargetBitmapInfo@CCachedVisualImage@@$00@@QEAAJI@Z.c)
 */

void __fastcall CCachedVisualImage::MarkAllTargetsDirty(CCachedVisualImage *this)
{
  int v1; // ebx
  _QWORD *v2; // rbp
  __int64 v3; // rdi
  CCachedVisualImage::RenderTargetBitmapInfo *v4; // rsi

  v1 = *((_DWORD *)this + 42);
  if ( v1 > 0 )
  {
    v2 = (_QWORD *)((char *)this + 144);
    v3 = (unsigned int)(v1 - 1);
    do
    {
      v4 = (CCachedVisualImage::RenderTargetBitmapInfo *)(*v2 + 48 * v3);
      if ( CCachedVisualImage::RenderTargetBitmapInfo::IsValid(v4) )
      {
        *((_BYTE *)v4 + 40) = 1;
      }
      else
      {
        CCachedVisualImage::RenderTargetBitmapInfo::Destruct(v4);
        DynArray<CCachedVisualImage::RenderTargetBitmapInfo,1>::RemoveAt(v2, (unsigned int)v3);
      }
      --v1;
      v3 = (unsigned int)(v3 - 1);
    }
    while ( v1 > 0 );
  }
}
