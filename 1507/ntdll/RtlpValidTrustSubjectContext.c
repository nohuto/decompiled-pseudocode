/*
 * XREFs of RtlpValidTrustSubjectContext @ 0x1800D0364
 * Callers:
 *     RtlpSetSecurityObject @ 0x180047EB8 (RtlpSetSecurityObject.c)
 *     RtlpNewSecurityObject @ 0x18004B1E8 (RtlpNewSecurityObject.c)
 * Callees:
 *     RtlSidDominatesForTrust @ 0x18004E700 (RtlSidDominatesForTrust.c)
 */

bool __fastcall RtlpValidTrustSubjectContext(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  bool result; // al
  bool v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = 0;
  if ( a1 )
  {
    *a4 = RtlSidDominatesForTrust(a1, a2, &v6);
    result = v6;
    if ( v6 )
      return result;
  }
  else
  {
    result = 0;
  }
  *a4 = -1073741790;
  return result;
}
