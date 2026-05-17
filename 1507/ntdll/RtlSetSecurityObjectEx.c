/*
 * XREFs of RtlSetSecurityObjectEx @ 0x180047790
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSetSecurityObject @ 0x180047EB8 (RtlpSetSecurityObject.c)
 */

__int64 __fastcall RtlSetSecurityObjectEx(int a1, int a2, int a3, char a4)
{
  return RtlpSetSecurityObject(a1, a1, a2, a3, a4);
}
