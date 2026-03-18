/*
 * XREFs of ?IsSameSize@RenderTargetBitmapInfo@CCachedVisualImage@@QEBA_NII@Z @ 0x180054178
 * Callers:
 *     ?RemoveInvalidTargets@CCachedVisualImage@@AEAA_NII@Z @ 0x1800530AC (-RemoveInvalidTargets@CCachedVisualImage@@AEAA_NII@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

_BOOL8 __fastcall CCachedVisualImage::RenderTargetBitmapInfo::IsSameSize(
        CCachedVisualImage::RenderTargetBitmapInfo *this,
        int a2,
        int a3)
{
  _DWORD v6[4]; // [rsp+20h] [rbp-28h] BYREF

  (*(void (__fastcall **)(_QWORD, _DWORD *))(**((_QWORD **)this + 1) + 72LL))(*((_QWORD *)this + 1), v6);
  return v6[2] - v6[0] == a2 && v6[3] - v6[1] == a3;
}
