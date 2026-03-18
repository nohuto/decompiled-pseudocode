/*
 * XREFs of ?IsLastPresentComposed@CHwFullScreenRenderTarget@@UEAA_NXZ @ 0x18014F840
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

bool __fastcall CHwFullScreenRenderTarget::IsLastPresentComposed(CHwFullScreenRenderTarget *this)
{
  __int64 v1; // rdi

  v1 = *((_QWORD *)this + 4);
  if ( v1 )
    return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v1 + 160LL))(*((_QWORD *)this + 4));
  else
    return 0;
}
