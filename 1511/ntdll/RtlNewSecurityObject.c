/*
 * XREFs of RtlNewSecurityObject @ 0x18005D1A0
 * Callers:
 *     RtlCreateUserSecurityObject @ 0x1800CC600 (RtlCreateUserSecurityObject.c)
 *     RtlNewInstanceSecurityObject @ 0x1800CCA10 (RtlNewInstanceSecurityObject.c)
 * Callees:
 *     RtlpNewSecurityObject @ 0x18005E688 (RtlpNewSecurityObject.c)
 */

__int64 __fastcall RtlNewSecurityObject(int a1, int a2, int a3, char a4, __int64 a5, __int64 a6)
{
  return RtlpNewSecurityObject(a1, a2, a3, 0, 0, a4, 0, a5, a6, 0LL);
}
