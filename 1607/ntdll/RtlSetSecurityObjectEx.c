/*
 * XREFs of RtlSetSecurityObjectEx @ 0x180090C70
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSetSecurityObject @ 0x180003850 (RtlpSetSecurityObject.c)
 */

__int64 __fastcall RtlSetSecurityObjectEx(__int64 a1, __int64 a2, _BOOL8 a3, char a4, __int64 a5, void *a6)
{
  __int64 v7; // [rsp+28h] [rbp-20h]

  return RtlpSetSecurityObject(a1, a1, a2, a3, a4, v7, a5, a6);
}
