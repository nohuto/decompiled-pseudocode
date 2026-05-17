/*
 * XREFs of RtlAddAccessDeniedAce @ 0x180085940
 * Callers:
 *     <none>
 * Callees:
 *     RtlpAddKnownAce @ 0x180019524 (RtlpAddKnownAce.c)
 */

__int64 __fastcall RtlAddAccessDeniedAce(char *a1, unsigned int a2, int a3, unsigned __int8 *Src)
{
  return RtlpAddKnownAce(a1, a2, 0, a3, Src, 1);
}
