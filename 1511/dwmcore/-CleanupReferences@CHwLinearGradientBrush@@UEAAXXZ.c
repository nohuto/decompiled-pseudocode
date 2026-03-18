/*
 * XREFs of ?CleanupReferences@CHwLinearGradientBrush@@UEAAXXZ @ 0x180012D10
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

void __fastcall CHwLinearGradientBrush::CleanupReferences(CHwLinearGradientBrush *this)
{
  __int64 v1; // rdi

  v1 = *((_QWORD *)this + 9);
  if ( v1 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
    *((_QWORD *)this + 9) = 0LL;
  }
}
