/*
 * XREFs of ?Release@CHwDisplayRenderTarget@@UEAAKXZ @ 0x18007FEE0
 * Callers:
 *     ?Release@CHwDisplayRenderTarget@@WHI@EAAKXZ @ 0x1800BD9A0 (-Release@CHwDisplayRenderTarget@@WHI@EAAKXZ.c)
 *     ?Release@CHwDisplayRenderTarget@@WLA@EAAKXZ @ 0x1800BD9B0 (-Release@CHwDisplayRenderTarget@@WLA@EAAKXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::Release(CHwDisplayRenderTarget *this)
{
  unsigned __int32 v1; // edi

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 32);
  if ( !v1 )
  {
    --*((_DWORD *)this + 32);
    (*(void (__fastcall **)(char *, __int64))(*((_QWORD *)this + 15) + 24LL))((char *)this + 120, 1LL);
  }
  return v1;
}
