/*
 * XREFs of RtlpValidateContextFlags @ 0x1400F2870
 * Callers:
 *     RtlpCopyExtendedContext @ 0x1400F1048 (RtlpCopyExtendedContext.c)
 *     RtlGetExtendedContextLength @ 0x1400F26A8 (RtlGetExtendedContextLength.c)
 *     RtlInitializeExtendedContext @ 0x1400F275C (RtlInitializeExtendedContext.c)
 *     RtlpReadExtendedContext @ 0x1404FB260 (RtlpReadExtendedContext.c)
 *     RtlpSanitizeContextFlags @ 0x1404FBBBC (RtlpSanitizeContextFlags.c)
 *     RtlpWow64SanitizeContextFlags @ 0x1404FC220 (RtlpWow64SanitizeContextFlags.c)
 *     RtlpWriteExtendedContext @ 0x1404FC260 (RtlpWriteExtendedContext.c)
 *     RtlCopyContext @ 0x14068C258 (RtlCopyContext.c)
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
