/*
 * XREFs of ?IsMouseDevice@@YAHGG@Z @ 0x1C01025A4
 * Callers:
 *     _GetRegisteredRawInputDevices @ 0x1C01D5938 (_GetRegisteredRawInputDevices.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsMouseDevice(__int16 a1, __int16 a2)
{
  __int64 result; // rax

  result = 1LL;
  if ( a1 != 1 || a2 != 2 )
    return 0LL;
  return result;
}
