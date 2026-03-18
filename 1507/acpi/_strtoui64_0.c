/*
 * XREFs of _strtoui64_0 @ 0x1C002362E
 * Callers:
 *     ConvertToInteger @ 0x1C0020850 (ConvertToInteger.c)
 *     DebugExpr @ 0x1C0043998 (DebugExpr.c)
 *     DebugInPort @ 0x1C0043B40 (DebugInPort.c)
 *     DebugOutPort @ 0x1C0043DD0 (DebugOutPort.c)
 *     DebugRunMethod @ 0x1C0043EF0 (DebugRunMethod.c)
 *     IsNumber @ 0x1C0044270 (IsNumber.c)
 *     DbgParseOneArg @ 0x1C0049ED8 (DbgParseOneArg.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned __int64 __cdecl strtoui64_0(const char *String, char **EndPtr, int Radix)
{
  return _strtoui64(String, EndPtr, Radix);
}
