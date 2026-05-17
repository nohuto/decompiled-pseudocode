/*
 * XREFs of RtlUShortAdd @ 0x1800CEE84
 * Callers:
 *     RtlpCreateServerAcl @ 0x1800CFDE8 (RtlpCreateServerAcl.c)
 *     RtlAddResourceAttributeAce @ 0x1800D05F0 (RtlAddResourceAttributeAce.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlUShortAdd(unsigned __int16 a1, __int16 a2, _WORD *a3)
{
  if ( (unsigned __int16)(a2 + a1) < a1 )
  {
    *a3 = -1;
    return 3221225621LL;
  }
  else
  {
    *a3 = a2 + a1;
    return 0LL;
  }
}
