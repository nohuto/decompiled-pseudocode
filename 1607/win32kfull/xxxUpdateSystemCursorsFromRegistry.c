/*
 * XREFs of xxxUpdateSystemCursorsFromRegistry @ 0x1C008F1B8
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C0068630 (xxxSystemParametersInfo.c)
 *     xxxUpdatePerUserSystemParameters @ 0x1C009190C (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     xxxUpdateSystemCursorFromRegistry @ 0x1C008F1E4 (xxxUpdateSystemCursorFromRegistry.c)
 */

__int64 __fastcall xxxUpdateSystemCursorsFromRegistry(__int64 a1)
{
  int i; // ebx
  __int64 result; // rax

  for ( i = 0; i < 17; ++i )
    result = xxxUpdateSystemCursorFromRegistry(a1, (unsigned int)i);
  return result;
}
