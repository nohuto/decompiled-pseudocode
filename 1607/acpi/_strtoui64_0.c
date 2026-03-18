/*
 * XREFs of _strtoui64_0 @ 0x1C002BC6E
 * Callers:
 *     ConvertToInteger @ 0x1C0027AE4 (ConvertToInteger.c)
 *     DebugExpr @ 0x1C005AA88 (DebugExpr.c)
 *     DebugInPort @ 0x1C005AC30 (DebugInPort.c)
 *     DebugOutPort @ 0x1C005AEC0 (DebugOutPort.c)
 *     DebugRunMethod @ 0x1C005AFE0 (DebugRunMethod.c)
 *     IsNumber @ 0x1C005B360 (IsNumber.c)
 *     DbgParseOneArg @ 0x1C00612C0 (DbgParseOneArg.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned __int64 __cdecl strtoui64_0(const char *String, char **EndPtr, int Radix)
{
  return _strtoui64(String, EndPtr, Radix);
}
