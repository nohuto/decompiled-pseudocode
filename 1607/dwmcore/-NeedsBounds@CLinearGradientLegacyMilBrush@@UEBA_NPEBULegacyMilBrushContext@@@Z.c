/*
 * XREFs of ?NeedsBounds@CLinearGradientLegacyMilBrush@@UEBA_NPEBULegacyMilBrushContext@@@Z @ 0x1800177C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLinearGradientLegacyMilBrush::NeedsBounds(
        CLinearGradientLegacyMilBrush *this,
        const struct LegacyMilBrushContext *a2)
{
  __int64 result; // rax

  if ( *((_DWORD *)this + 45) == 1 )
    return 1LL;
  result = 0LL;
  if ( *((_QWORD *)this + 21) )
    return 1LL;
  return result;
}
