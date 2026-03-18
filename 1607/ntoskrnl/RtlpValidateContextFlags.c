/*
 * XREFs of RtlpValidateContextFlags @ 0x1400F4A20
 * Callers:
 *     RtlpCopyExtendedContext @ 0x1400F31F8 (RtlpCopyExtendedContext.c)
 *     RtlGetExtendedContextLength @ 0x1400F4858 (RtlGetExtendedContextLength.c)
 *     RtlInitializeExtendedContext @ 0x1400F490C (RtlInitializeExtendedContext.c)
 *     RtlpReadExtendedContext @ 0x140517E70 (RtlpReadExtendedContext.c)
 *     RtlpSanitizeContextFlags @ 0x1405187CC (RtlpSanitizeContextFlags.c)
 *     RtlpWow64SanitizeContextFlags @ 0x140518E30 (RtlpWow64SanitizeContextFlags.c)
 *     RtlpWriteExtendedContext @ 0x140518E70 (RtlpWriteExtendedContext.c)
 *     RtlCopyContext @ 0x14068C174 (RtlCopyContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpValidateContextFlags(int a1, int *a2)
{
  int v2; // r9d

  if ( (a1 & 0x27FFFF80) != 0x10000
    && (a1 & 0x27FFFFA0) != 0x100000
    && (((a1 & 0x7FFFFF0) - 0x200000) & 0xFFDFFFFF) != 0 )
  {
    return 3221225485LL;
  }
  v2 = 1;
  if ( (a1 & 0x100040) == 1048640 || (a1 & 0x10040) == 65600 )
  {
    if ( !MEMORY[0xFFFFF780000003D8] )
      return 3221225659LL;
    v2 = 3;
  }
  if ( a2 )
    *a2 = v2;
  return 0LL;
}
