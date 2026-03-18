/*
 * XREFs of ?RemoveAllTargets@CCachedVisualImage@@AEAA_NXZ @ 0x18005B298
 * Callers:
 *     ??1CCachedVisualImage@@MEAA@XZ @ 0x18005B5AC (--1CCachedVisualImage@@MEAA@XZ.c)
 *     ?GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x18005B850 (-GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z.c)
 *     ?NotifyInvalidResource@CCachedVisualImage@@UEAAXPEBVIDeviceResource@@@Z @ 0x1801271B0 (-NotifyInvalidResource@CCachedVisualImage@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?Destruct@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAXXZ @ 0x18005BBF0 (-Destruct@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAXXZ.c)
 *     ?RemoveAt@?$DynArray@URenderTargetBitmapInfo@CCachedVisualImage@@$00@@QEAAJI@Z @ 0x18005CAE0 (-RemoveAt@-$DynArray@URenderTargetBitmapInfo@CCachedVisualImage@@$00@@QEAAJI@Z.c)
 */

char __fastcall CCachedVisualImage::RemoveAllTargets(CCachedVisualImage *this)
{
  int v1; // ebx
  char v2; // di
  _QWORD *v3; // rbp
  __int64 v4; // rsi

  v1 = *((_DWORD *)this + 42);
  v2 = 0;
  if ( v1 > 0 )
  {
    v3 = (_QWORD *)((char *)this + 144);
    v2 = 1;
    v4 = (unsigned int)(v1 - 1);
    do
    {
      CCachedVisualImage::RenderTargetBitmapInfo::Destruct((CCachedVisualImage::RenderTargetBitmapInfo *)(*v3 + 48 * v4));
      DynArray<CCachedVisualImage::RenderTargetBitmapInfo,1>::RemoveAt(v3, (unsigned int)v4);
      --v1;
      v4 = (unsigned int)(v4 - 1);
    }
    while ( v1 > 0 );
  }
  return v2;
}
