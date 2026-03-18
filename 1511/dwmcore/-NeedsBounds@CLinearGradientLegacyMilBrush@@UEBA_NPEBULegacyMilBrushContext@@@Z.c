/*
 * XREFs of ?NeedsBounds@CLinearGradientLegacyMilBrush@@UEBA_NPEBULegacyMilBrushContext@@@Z @ 0x180013B40
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

  if ( *((_DWORD *)this + 27) == 1 )
    return 1LL;
  result = 0LL;
  if ( *((_QWORD *)this + 12) )
    return 1LL;
  return result;
}
