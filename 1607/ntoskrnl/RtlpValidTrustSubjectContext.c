/*
 * XREFs of RtlpValidTrustSubjectContext @ 0x140130EE0
 * Callers:
 *     RtlpNewSecurityObject @ 0x14041AE00 (RtlpNewSecurityObject.c)
 * Callees:
 *     RtlSidDominatesForTrust @ 0x1400D1B40 (RtlSidDominatesForTrust.c)
 */

BOOLEAN __fastcall RtlpValidTrustSubjectContext(void *a1, void *a2, __int64 a3, NTSTATUS *a4)
{
  BOOLEAN result; // al
  BOOLEAN DominatesTrust; // [rsp+40h] [rbp+18h] BYREF

  DominatesTrust = 0;
  if ( !a1 )
  {
    result = 0;
    goto LABEL_5;
  }
  *a4 = RtlSidDominatesForTrust(a1, a2, &DominatesTrust);
  result = DominatesTrust;
  if ( !DominatesTrust )
LABEL_5:
    *a4 = -1073741790;
  return result;
}
