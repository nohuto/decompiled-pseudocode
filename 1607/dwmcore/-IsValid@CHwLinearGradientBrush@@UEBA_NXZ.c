/*
 * XREFs of ?IsValid@CHwLinearGradientBrush@@UEBA_NXZ @ 0x1800188F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CHwLinearGradientBrush::IsValid(CHwLinearGradientBrush *this)
{
  _BOOL8 result; // rax

  result = 0LL;
  if ( *((_DWORD *)this + 20) )
    return *((_QWORD *)this + 12) != 0LL;
  return result;
}
