/*
 * XREFs of RtlpValidTrustSubjectContext @ 0x180003344
 * Callers:
 *     RtlpSetSecurityObject @ 0x18005D220 (RtlpSetSecurityObject.c)
 *     RtlpNewSecurityObject @ 0x18005E688 (RtlpNewSecurityObject.c)
 * Callees:
 *     RtlSidDominatesForTrust @ 0x1800618A0 (RtlSidDominatesForTrust.c)
 */

char __fastcall RtlpValidTrustSubjectContext(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  char result; // al
  char v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = 0;
  if ( !a1 )
  {
    result = 0;
    goto LABEL_5;
  }
  *a4 = RtlSidDominatesForTrust(a1, a2, &v6);
  result = v6;
  if ( !v6 )
LABEL_5:
    *a4 = -1073741790;
  return result;
}
