/*
 * XREFs of RtlpCopyLegacyContext @ 0x14002065C
 * Callers:
 *     RtlpCopyExtendedContext @ 0x1400205A0 (RtlpCopyExtendedContext.c)
 *     KeCopyContextFromUmsContext @ 0x14069AC94 (KeCopyContextFromUmsContext.c)
 *     KeCopyContextToUmsContext @ 0x14069B0A8 (KeCopyContextToUmsContext.c)
 *     KeUpdatePrimaryThreadContext @ 0x14069B328 (KeUpdatePrimaryThreadContext.c)
 *     RtlCopyContext @ 0x1406CFE94 (RtlCopyContext.c)
 * Callees:
 *     RtlpCopyLegacyContextAmd64 @ 0x1400208CC (RtlpCopyLegacyContextAmd64.c)
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
