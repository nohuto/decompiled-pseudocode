/*
 * XREFs of PbuttonToCursor @ 0x1C01CDE5C
 * Callers:
 *     GetDeviceButtons @ 0x1C01CC804 (GetDeviceButtons.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PbuttonToCursor(__int16 a1)
{
  __int64 result; // rax

  result = 0LL;
  switch ( a1 )
  {
    case '<':
      return 2LL;
    case 'B':
      return 1LL;
    case 'E':
      return 2LL;
  }
  return result;
}
