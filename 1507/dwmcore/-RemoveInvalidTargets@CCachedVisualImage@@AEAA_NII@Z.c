/*
 * XREFs of ?RemoveInvalidTargets@CCachedVisualImage@@AEAA_NII@Z @ 0x1800530AC
 * Callers:
 *     ?FindExistingRenderTargetAndRemoveInvalid@CCachedVisualImage@@AEAAPEAURenderTargetBitmapInfo@1@U_LUID@@VDisplayId@@II@Z @ 0x180052D9C (-FindExistingRenderTargetAndRemoveInvalid@CCachedVisualImage@@AEAAPEAURenderTargetBitmapInfo@1@U.c)
 *     ?GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x180053790 (-GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z.c)
 * Callees:
 *     ?Destruct@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAXXZ @ 0x180053CF8 (-Destruct@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAXXZ.c)
 *     ?IsSameSize@RenderTargetBitmapInfo@CCachedVisualImage@@QEBA_NII@Z @ 0x180054178 (-IsSameSize@RenderTargetBitmapInfo@CCachedVisualImage@@QEBA_NII@Z.c)
 *     ?IsValid@RenderTargetBitmapInfo@CCachedVisualImage@@QEAA_NXZ @ 0x180054280 (-IsValid@RenderTargetBitmapInfo@CCachedVisualImage@@QEAA_NXZ.c)
 *     ?RemoveAt@?$DynArray@URenderTargetBitmapInfo@CCachedVisualImage@@$00@@QEAAJI@Z @ 0x180056374 (-RemoveAt@-$DynArray@URenderTargetBitmapInfo@CCachedVisualImage@@$00@@QEAAJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

char __fastcall CCachedVisualImage::RemoveInvalidTargets(CCachedVisualImage *this, unsigned int a2, unsigned int a3)
{
  char v3; // r15
  char v4; // r12
  int v5; // esi
  _QWORD *v6; // r13
  __int64 v7; // r14
  CCachedVisualImage::RenderTargetBitmapInfo *v8; // rbp

  v3 = 0;
  v4 = CComposition::s_cHwProtectedEntities && !CComposition::s_bHwProtectionTempDisabled;
  v5 = *((_DWORD *)this + 42);
  if ( v5 > 0 )
  {
    v6 = (_QWORD *)((char *)this + 144);
    v7 = (unsigned int)(v5 - 1);
    do
    {
      v8 = (CCachedVisualImage::RenderTargetBitmapInfo *)(*v6 + 48 * v7);
      if ( !CCachedVisualImage::RenderTargetBitmapInfo::IsValid(v8)
        || v4 != (*(unsigned __int8 (__fastcall **)(_QWORD *))(**((_QWORD **)v8 + 1) + 160LL))(*((_QWORD **)v8 + 1))
        || !CCachedVisualImage::RenderTargetBitmapInfo::IsSameSize(v8, a2, a3) )
      {
        CCachedVisualImage::RenderTargetBitmapInfo::Destruct(v8);
        DynArray<CCachedVisualImage::RenderTargetBitmapInfo,1>::RemoveAt(v6, (unsigned int)v7);
        v3 = 1;
      }
      --v5;
      v7 = (unsigned int)(v7 - 1);
    }
    while ( v5 > 0 );
  }
  return v3;
}
