/*
 * XREFs of RtlAddAuditAccessAceEx @ 0x180088A30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlAddAuditAccessAceEx(
        char *a1,
        unsigned int a2,
        int a3,
        int a4,
        unsigned __int8 *a5,
        char a6,
        char a7)
{
  if ( a6 )
    a3 |= 0x40u;
  if ( a7 )
    a3 |= 0x80u;
  return RtlpAddKnownAce(a1, a2, a3, a4, a5, 2);
}
