/*
 * XREFs of RtlSetSecurityObject @ 0x180003820
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSetSecurityObject @ 0x180003850 (RtlpSetSecurityObject.c)
 */

__int64 __fastcall RtlSetSecurityObject(int a1, int a2, int a3)
{
  return RtlpSetSecurityObject(a1, a1, a2, a3, 0);
}
