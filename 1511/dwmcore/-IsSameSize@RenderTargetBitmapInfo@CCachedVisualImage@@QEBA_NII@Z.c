/*
 * XREFs of ?IsSameSize@RenderTargetBitmapInfo@CCachedVisualImage@@QEBA_NII@Z @ 0x18005C088
 * Callers:
 *     ?RemoveInvalidTargets@CCachedVisualImage@@AEAA_NII@Z @ 0x18005B1D0 (-RemoveInvalidTargets@CCachedVisualImage@@AEAA_NII@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
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
