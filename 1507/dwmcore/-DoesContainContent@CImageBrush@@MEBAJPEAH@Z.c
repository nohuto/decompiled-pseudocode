/*
 * XREFs of ?DoesContainContent@CImageBrush@@MEBAJPEAH@Z @ 0x180085810
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CImageBrush::DoesContainContent(CImageBrush *this, int *a2)
{
  __int64 v3; // rdi

  *a2 = 0;
  v3 = *((_QWORD *)this + 64);
  if ( v3 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(v3 + 8) + 152LL))(v3 + 8) )
    *a2 = 1;
  return 0LL;
}
