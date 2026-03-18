/*
 * XREFs of CatError @ 0x1C00438A4
 * Callers:
 *     AMLIInitialize @ 0x1C0084CC0 (AMLIInitialize.c)
 * Callees:
 *     RtlStringCchCatA @ 0x1C0040614 (RtlStringCchCatA.c)
 *     RtlStringCchVPrintfA @ 0x1C0042564 (RtlStringCchVPrintfA.c)
 *     AMLIDebugger @ 0x1C0043858 (AMLIDebugger.c)
 *     ConPrintf @ 0x1C004392C (ConPrintf.c)
 */

__int64 CatError(const char *a1, ...)
{
  __int64 v1; // rax
  __int64 result; // rax
  va_list argList; // [rsp+48h] [rbp+10h] BYREF

  va_start(argList, a1);
  RtlStringCchCatA(byte_1C005A21C, 0x100uLL, "\n");
  v1 = -1LL;
  do
    ++v1;
  while ( byte_1C005A21C[v1] );
  RtlStringCchVPrintfA(&byte_1C005A21C[v1], 256 - v1, a1, argList);
  ConPrintf(byte_1C005A21C);
  result = ConPrintf("\n");
  if ( (gDebugger & 0x4000) != 0 )
    return AMLIDebugger();
  return result;
}
