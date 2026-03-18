/*
 * XREFs of ?CleanupReferences@CHwLinearGradientBrush@@UEAAXXZ @ 0x180142BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
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
