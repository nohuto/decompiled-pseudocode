/*
 * XREFs of _strtoui64_0 @ 0x1C0024C9E
 * Callers:
 *     ConvertToInteger @ 0x1C0020E10 (ConvertToInteger.c)
 *     DebugExpr @ 0x1C00433B8 (DebugExpr.c)
 *     DebugInPort @ 0x1C0043560 (DebugInPort.c)
 *     DebugOutPort @ 0x1C00437F0 (DebugOutPort.c)
 *     DebugRunMethod @ 0x1C0043910 (DebugRunMethod.c)
 *     IsNumber @ 0x1C0043C90 (IsNumber.c)
 *     DbgParseOneArg @ 0x1C00497E8 (DbgParseOneArg.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned __int64 __cdecl strtoui64_0(const char *String, char **EndPtr, int Radix)
{
  return _strtoui64(String, EndPtr, Radix);
}
