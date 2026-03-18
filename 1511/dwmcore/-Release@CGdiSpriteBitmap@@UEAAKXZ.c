/*
 * XREFs of ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x180086280
 * Callers:
 *     ?Release@CGdiSpriteBitmap@@W7EAAKXZ @ 0x1800BD460 (-Release@CGdiSpriteBitmap@@W7EAAKXZ.c)
 *     ?Release@CGdiSpriteBitmap@@WBA@EAAKXZ @ 0x1800BD470 (-Release@CGdiSpriteBitmap@@WBA@EAAKXZ.c)
 *     ?Release@CGdiSpriteBitmap@@WEI@EAAKXZ @ 0x1800BD480 (-Release@CGdiSpriteBitmap@@WEI@EAAKXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

__int64 __fastcall CGdiSpriteBitmap::Release(CGdiSpriteBitmap *this)
{
  unsigned __int32 v1; // edi

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 6);
  if ( !v1 )
  {
    --*((_DWORD *)this + 6);
    (*(void (__fastcall **)(char *, __int64))(*((_QWORD *)this + 2) + 24LL))((char *)this + 16, 1LL);
  }
  return v1;
}
