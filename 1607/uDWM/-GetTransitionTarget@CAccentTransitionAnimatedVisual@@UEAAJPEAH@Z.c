/*
 * XREFs of ?GetTransitionTarget@CAccentTransitionAnimatedVisual@@UEAAJPEAH@Z @ 0x1800964E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAccentTransitionAnimatedVisual::GetTransitionTarget(CAccentTransitionAnimatedVisual *this, int *a2)
{
  int v2; // r8d
  __int64 result; // rax

  v2 = *((_DWORD *)this + 8);
  result = 0LL;
  if ( !v2 )
    return 2147942487LL;
  *a2 = v2;
  return result;
}
