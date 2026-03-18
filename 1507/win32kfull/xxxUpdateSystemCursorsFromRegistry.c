/*
 * XREFs of xxxUpdateSystemCursorsFromRegistry @ 0x1C01360BC
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C003A8E0 (xxxSystemParametersInfo.c)
 *     xxxUpdatePerUserSystemParameters @ 0x1C0133984 (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     xxxUpdateSystemCursorFromRegistry @ 0x1C01360E8 (xxxUpdateSystemCursorFromRegistry.c)
 */

__int64 __fastcall xxxUpdateSystemCursorsFromRegistry(__int64 a1)
{
  int i; // ebx
  __int64 result; // rax

  for ( i = 0; i < 17; ++i )
    result = xxxUpdateSystemCursorFromRegistry(a1, (unsigned int)i);
  return result;
}
