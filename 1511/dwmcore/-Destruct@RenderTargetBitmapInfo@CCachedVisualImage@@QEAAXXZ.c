/*
 * XREFs of ?Destruct@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAXXZ @ 0x18005BBF0
 * Callers:
 *     ?RemoveTargetsForSnapshot@CCachedVisualImage@@AEAAXPEAVIBitmapSource@@@Z @ 0x18005B114 (-RemoveTargetsForSnapshot@CCachedVisualImage@@AEAAXPEAVIBitmapSource@@@Z.c)
 *     ?RemoveInvalidTargets@CCachedVisualImage@@AEAA_NII@Z @ 0x18005B1D0 (-RemoveInvalidTargets@CCachedVisualImage@@AEAA_NII@Z.c)
 *     ?RemoveAllTargets@CCachedVisualImage@@AEAA_NXZ @ 0x18005B298 (-RemoveAllTargets@CCachedVisualImage@@AEAA_NXZ.c)
 *     ?MarkAllTargetsDirty@CCachedVisualImage@@AEAAXXZ @ 0x18005B308 (-MarkAllTargetsDirty@CCachedVisualImage@@AEAAXXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

void __fastcall CCachedVisualImage::RenderTargetBitmapInfo::Destruct(CCachedVisualImage::RenderTargetBitmapInfo *this)
{
  __int64 v1; // rsi
  __int64 v3; // rbp
  __int64 v4; // rsi
  __int64 v5; // rsi

  v1 = *((_QWORD *)this + 2);
  if ( v1 )
  {
    v3 = *(_QWORD *)this ? *(_QWORD *)this + 56LL : 0LL;
    (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v1 + 32LL))(*((_QWORD *)this + 2), v3);
    v4 = *((_QWORD *)this + 2);
    if ( v4 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 16LL))(*((_QWORD *)this + 2));
      *((_QWORD *)this + 2) = 0LL;
    }
  }
  v5 = *((_QWORD *)this + 1);
  if ( v5 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v5 + 16LL))(*((_QWORD *)this + 1));
    *((_QWORD *)this + 1) = 0LL;
  }
}
