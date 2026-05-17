/*
 * XREFs of RtlAddAuditAccessAce @ 0x180078780
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlAddAuditAccessAce(char *a1, unsigned int a2, int a3, unsigned __int8 *a4, char Src, char a6)
{
  int v7; // r8d

  v7 = 0;
  if ( Src )
    v7 = 64;
  if ( a6 )
    v7 |= 0x80u;
  return RtlpAddKnownAce(a1, a2, v7, a3, a4, 2);
}
