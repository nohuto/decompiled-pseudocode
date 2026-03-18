/*
 * XREFs of xxxUpdateSystemCursorsFromRegistry @ 0x1C01240B4
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C012420C (xxxUpdatePerUserSystemParameters.c)
 *     xxxSystemParametersInfo @ 0x1C0126360 (xxxSystemParametersInfo.c)
 * Callees:
 *     xxxUpdateSystemCursorFromRegistry @ 0x1C01232FC (xxxUpdateSystemCursorFromRegistry.c)
 */

__int64 __fastcall xxxUpdateSystemCursorsFromRegistry(__int64 a1)
{
  signed int i; // ebx
  __int64 result; // rax

  for ( i = 0; i < 17; ++i )
    result = xxxUpdateSystemCursorFromRegistry(a1, i);
  return result;
}
