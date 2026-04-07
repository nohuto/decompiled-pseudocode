/*
 * XREFs of ?AddCubic@CCubicBezierChopper@CThemeAnimationScheduleHelper@@UEAAJNMMMM@Z @ 0x18008D740
 * Callers:
 *     <none>
 * Callees:
 *     ?ContinueTo@CCubicBezierChopper@CThemeAnimationScheduleHelper@@QEAAJNN@Z @ 0x18008DA04 (-ContinueTo@CCubicBezierChopper@CThemeAnimationScheduleHelper@@QEAAJNN@Z.c)
 */

__int64 __fastcall CThemeAnimationScheduleHelper::CCubicBezierChopper::AddCubic(
        CThemeAnimationScheduleHelper::CCubicBezierChopper *this,
        double a2,
        float a3,
        float a4,
        float a5,
        float a6)
{
  __int64 result; // rax

  result = 0LL;
  if ( a5 != 0.0 || a6 != 0.0 )
    return 2147500037LL;
  if ( *((_BYTE *)this + 121) )
    result = CThemeAnimationScheduleHelper::CCubicBezierChopper::ContinueTo(this, a2, a3);
  *((double *)this + 13) = a2;
  *((float *)this + 28) = a3;
  *((float *)this + 29) = a4;
  *((_BYTE *)this + 121) = 1;
  return result;
}
