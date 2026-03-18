/*
 * XREFs of ?RemoveTargetsForSnapshot@CCachedVisualImage@@AEAAXPEAVIBitmapSource@@@Z @ 0x18005B114
 * Callers:
 *     ?Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z @ 0x18005B684 (-Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Destruct@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAXXZ @ 0x18005BBF0 (-Destruct@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAXXZ.c)
 *     ?RemoveAt@?$DynArray@URenderTargetBitmapInfo@CCachedVisualImage@@$00@@QEAAJI@Z @ 0x18005CAE0 (-RemoveAt@-$DynArray@URenderTargetBitmapInfo@CCachedVisualImage@@$00@@QEAAJI@Z.c)
 */

void __fastcall CCachedVisualImage::RemoveTargetsForSnapshot(CCachedVisualImage *this, struct IBitmapSource *a2)
{
  int v3; // esi
  _QWORD *v4; // r15
  __int64 v5; // rbp
  CCachedVisualImage::RenderTargetBitmapInfo *v6; // r14
  struct IBitmapSource *v7; // rdi
  struct IBitmapSource *v8; // [rsp+50h] [rbp+8h] BYREF

  v8 = 0LL;
  v3 = *((_DWORD *)this + 42);
  if ( v3 > 0 )
  {
    v4 = (_QWORD *)((char *)this + 144);
    v5 = (unsigned int)(v3 - 1);
    do
    {
      v6 = (CCachedVisualImage::RenderTargetBitmapInfo *)(*v4 + 48 * v5);
      (*(void (__fastcall **)(_QWORD *, struct IBitmapSource **))(**((_QWORD **)v6 + 1) + 176LL))(
        *((_QWORD **)v6 + 1),
        &v8);
      v7 = v8;
      if ( v8 != a2 )
      {
        CCachedVisualImage::RenderTargetBitmapInfo::Destruct(v6);
        DynArray<CCachedVisualImage::RenderTargetBitmapInfo,1>::RemoveAt(v4, (unsigned int)v5);
        v7 = v8;
      }
      if ( v7 )
      {
        (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)v7 + 16LL))(v7);
        v8 = 0LL;
      }
      --v3;
      v5 = (unsigned int)(v5 - 1);
    }
    while ( v3 > 0 );
  }
}
