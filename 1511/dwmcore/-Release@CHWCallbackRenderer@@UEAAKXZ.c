/*
 * XREFs of ?Release@CHWCallbackRenderer@@UEAAKXZ @ 0x180034BB0
 * Callers:
 *     ?Release@CHWCallbackRenderer@@W7EAAKXZ @ 0x1800BF5E0 (-Release@CHWCallbackRenderer@@W7EAAKXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

__int64 __fastcall CHWCallbackRenderer::Release(CHWCallbackRenderer *this)
{
  unsigned __int32 v1; // edi

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 4);
  if ( !v1 && this != (CHWCallbackRenderer *)-8LL )
    (*(void (__fastcall **)(char *, __int64))(*((_QWORD *)this + 1) + 16LL))((char *)this + 8, 1LL);
  return v1;
}
