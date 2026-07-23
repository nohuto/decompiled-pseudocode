/*
 * XREFs of RtlpValidateContextFlags @ 0x180076610
 * Callers:
 *     RtlInitializeExtendedContext @ 0x180076300 (RtlInitializeExtendedContext.c)
 *     RtlGetExtendedContextLength @ 0x180076420 (RtlGetExtendedContextLength.c)
 *     RtlCopyContext @ 0x18008B9E0 (RtlCopyContext.c)
 *     RtlpCopyExtendedContext @ 0x1800EB67C (RtlpCopyExtendedContext.c)
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
    if ( !MEMORY[0x7FFE03D8] )
      return 3221225659LL;
    v2 = 3;
  }
  if ( a2 )
    *a2 = v2;
  return 0LL;
}
