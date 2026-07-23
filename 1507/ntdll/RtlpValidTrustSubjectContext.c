/*
 * XREFs of RtlpValidTrustSubjectContext @ 0x1800D0364
 * Callers:
 *     RtlpSetSecurityObject @ 0x180047EB8 (RtlpSetSecurityObject.c)
 *     RtlpNewSecurityObject @ 0x18004B1E8 (RtlpNewSecurityObject.c)
 * Callees:
 *     RtlSidDominatesForTrust @ 0x18004E700 (RtlSidDominatesForTrust.c)
 */

BOOLEAN __fastcall RtlpValidTrustSubjectContext(void *a1, void *a2, __int64 a3, NTSTATUS *a4)
{
  BOOLEAN result; // al
  BOOLEAN DominatesTrust; // [rsp+40h] [rbp+18h] BYREF

  DominatesTrust = 0;
  if ( a1 )
  {
    *a4 = RtlSidDominatesForTrust(a1, a2, &DominatesTrust);
    result = DominatesTrust;
    if ( DominatesTrust )
      return result;
  }
  else
  {
    result = 0;
  }
  *a4 = -1073741790;
  return result;
}
