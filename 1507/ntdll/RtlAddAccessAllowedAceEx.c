/*
 * XREFs of RtlAddAccessAllowedAceEx @ 0x180070FC0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpAddKnownAce @ 0x180020084 (RtlpAddKnownAce.c)
 */

__int64 __fastcall RtlAddAccessAllowedAceEx(char *a1, unsigned int a2, int a3, int a4, unsigned __int8 *Src)
{
  return RtlpAddKnownAce(a1, a2, a3, a4, Src, 0);
}
