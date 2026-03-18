/*
 * XREFs of EtwpIsGuidAllowed @ 0x1404D3364
 * Callers:
 *     EtwpAddRegEntryToGroup @ 0x1404D1618 (EtwpAddRegEntryToGroup.c)
 *     EtwpIsRegEntryAllowed @ 0x1404D5198 (EtwpIsRegEntryAllowed.c)
 * Callees:
 *     bsearch @ 0x140172700 (bsearch.c)
 */

bool __fastcall EtwpIsGuidAllowed(const void **a1, const void *a2)
{
  return !*(_WORD *)a1 || bsearch(a2, a1[1], *(unsigned __int16 *)a1, 0x10uLL, EtwpCompareGuid) == 0LL;
}
