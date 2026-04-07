/*
 * XREFs of ?IsWithinRange@CCubicBezierChopper@CThemeAnimationScheduleHelper@@QEAA_NNNN@Z @ 0x18008F274
 * Callers:
 *     ?ContinueTo@CCubicBezierChopper@CThemeAnimationScheduleHelper@@QEAAJNN@Z @ 0x18008EB64 (-ContinueTo@CCubicBezierChopper@CThemeAnimationScheduleHelper@@QEAAJNN@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CThemeAnimationScheduleHelper::CCubicBezierChopper::IsWithinRange(
        CThemeAnimationScheduleHelper::CCubicBezierChopper *this,
        double a2,
        double a3,
        double a4)
{
  bool v4; // cf

  if ( COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a4 - a2) & _xmm) < 0.0001
    || COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a4 - a3) & _xmm) < 0.0001 )
  {
    return 1;
  }
  if ( a3 > a2 )
  {
    if ( a4 >= a2 )
    {
      v4 = a3 < a4;
      return !v4;
    }
    return 0;
  }
  if ( a2 <= a3 )
    return a4 == a2;
  if ( a4 < a3 )
    return 0;
  v4 = a2 < a4;
  return !v4;
}
