/*
 * XREFs of ?GetDirectFlipPresentFlags@CHwFullScreenRenderTarget@@MEBAIXZ @ 0x18000A680
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::GetDirectFlipPresentFlags(CHwFullScreenRenderTarget *this)
{
  unsigned int v1; // ebp

  v1 = 0;
  if ( *((_QWORD *)this + 44) == (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 26) + 152LL))(*((_QWORD *)this + 26)) )
    return 2;
  return v1;
}
