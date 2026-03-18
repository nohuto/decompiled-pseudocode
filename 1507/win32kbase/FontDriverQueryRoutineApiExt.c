/*
 * XREFs of FontDriverQueryRoutineApiExt @ 0x1C00844A0
 * Callers:
 *     <none>
 * Callees:
 *     IsFontDriverQueryRoutineSupported_0 @ 0x1C0001968 (IsFontDriverQueryRoutineSupported_0.c)
 *     FontDriverQueryRoutine_0 @ 0x1C0001970 (FontDriverQueryRoutine_0.c)
 */

__int64 FontDriverQueryRoutineApiExt()
{
  __int64 result; // rax

  result = IsFontDriverQueryRoutineSupported_0();
  if ( (int)result >= 0 )
    return FontDriverQueryRoutine_0();
  return result;
}
