/*
 * XREFs of ?NeedsBounds@CLinearGradientBrush@@UEBA_NPEBUBrushContext@@@Z @ 0x1800F9BF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLinearGradientBrush::NeedsBounds(CLinearGradientBrush *this, const struct BrushContext *a2)
{
  __int64 result; // rax

  if ( *((_DWORD *)this + 27) == 1 )
    return 1LL;
  result = 0LL;
  if ( *((_QWORD *)this + 12) )
    return 1LL;
  return result;
}
