/*
 * XREFs of RtlNewSecurityObject @ 0x1800870D0
 * Callers:
 *     RtlCreateUserSecurityObject @ 0x1800D48F0 (RtlCreateUserSecurityObject.c)
 *     RtlNewInstanceSecurityObject @ 0x1800D4970 (RtlNewInstanceSecurityObject.c)
 * Callees:
 *     RtlpNewSecurityObject @ 0x180044AD8 (RtlpNewSecurityObject.c)
 */

__int64 __fastcall RtlNewSecurityObject(__int64 a1, _BYTE *a2, _QWORD *a3, char a4, void *a5, __int64 a6)
{
  return RtlpNewSecurityObject(a1, a2, a3, 0LL, 0, a4, 0, a5, a6, 0LL);
}
