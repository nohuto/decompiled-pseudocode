/*
 * XREFs of ?IsKeyboardDevice@@YAHGG@Z @ 0x1C00E215C
 * Callers:
 *     _GetRegisteredRawInputDevices @ 0x1C01CC858 (_GetRegisteredRawInputDevices.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsKeyboardDevice(__int16 a1, __int16 a2)
{
  __int64 result; // rax

  result = 1LL;
  if ( a2 != 6 || a1 != 1 )
    return 0LL;
  return result;
}
