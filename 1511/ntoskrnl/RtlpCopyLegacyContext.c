/*
 * XREFs of RtlpCopyLegacyContext @ 0x14002B31C
 * Callers:
 *     RtlpCopyExtendedContext @ 0x14002B260 (RtlpCopyExtendedContext.c)
 *     KeCopyContextFromUmsContext @ 0x14061C110 (KeCopyContextFromUmsContext.c)
 *     KeCopyContextToUmsContext @ 0x14061C524 (KeCopyContextToUmsContext.c)
 *     KeUpdatePrimaryThreadContext @ 0x14061C7A4 (KeUpdatePrimaryThreadContext.c)
 *     RtlCopyContext @ 0x14064CDA0 (RtlCopyContext.c)
 * Callees:
 *     RtlpCopyLegacyContextAmd64 @ 0x14002B580 (RtlpCopyLegacyContextAmd64.c)
 */

__int64 __fastcall RtlpCopyLegacyContext(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax

  if ( (a3 & 0x10000) != 0 )
    return RtlpCopyLegacyContextX86();
  if ( (a3 & 0x100000) != 0 )
    return RtlpCopyLegacyContextAmd64();
  if ( (a3 & 0x200000) != 0 )
    return RtlpCopyLegacyContextArm();
  if ( (a3 & 0x400000) != 0 )
    return RtlpCopyLegacyContextArm64();
  return result;
}
