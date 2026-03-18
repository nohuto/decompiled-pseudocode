/*
 * XREFs of RtlpValidateContextFlags @ 0x14002B50C
 * Callers:
 *     RtlpCopyExtendedContext @ 0x14002B260 (RtlpCopyExtendedContext.c)
 *     RtlGetExtendedContextLength @ 0x14002B348 (RtlGetExtendedContextLength.c)
 *     RtlInitializeExtendedContext @ 0x14002B3FC (RtlInitializeExtendedContext.c)
 *     RtlpReadExtendedContext @ 0x1403F00B0 (RtlpReadExtendedContext.c)
 *     RtlpSanitizeContextFlags @ 0x1403F035C (RtlpSanitizeContextFlags.c)
 *     RtlpWriteExtendedContext @ 0x1404A4F08 (RtlpWriteExtendedContext.c)
 *     RtlpWow64SanitizeContextFlags @ 0x1404A5384 (RtlpWow64SanitizeContextFlags.c)
 *     RtlCopyContext @ 0x14064CDA0 (RtlCopyContext.c)
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
