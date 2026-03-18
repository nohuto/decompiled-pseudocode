/*
 * XREFs of FontDriverQueryRoutineApiExt @ 0x1C00828C0
 * Callers:
 *     <none>
 * Callees:
 *     IsFontDriverQueryRoutineSupported_0 @ 0x1C0001978 (IsFontDriverQueryRoutineSupported_0.c)
 *     FontDriverQueryRoutine_0 @ 0x1C0001980 (FontDriverQueryRoutine_0.c)
 */

__int64 FontDriverQueryRoutineApiExt()
{
  __int64 result; // rax

  result = IsFontDriverQueryRoutineSupported_0();
  if ( (int)result >= 0 )
    return FontDriverQueryRoutine_0();
  return result;
}
