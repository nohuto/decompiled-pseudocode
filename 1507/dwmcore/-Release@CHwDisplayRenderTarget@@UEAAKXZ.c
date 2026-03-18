/*
 * XREFs of ?Release@CHwDisplayRenderTarget@@UEAAKXZ @ 0x180044530
 * Callers:
 *     ?Release@CHwDisplayRenderTarget@@WHI@EAAKXZ @ 0x18009AD00 (-Release@CHwDisplayRenderTarget@@WHI@EAAKXZ.c)
 *     ?Release@CHwDisplayRenderTarget@@WLA@EAAKXZ @ 0x18009AD10 (-Release@CHwDisplayRenderTarget@@WLA@EAAKXZ.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
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
