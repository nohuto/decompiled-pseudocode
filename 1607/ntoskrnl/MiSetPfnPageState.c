/*
 * XREFs of MiSetPfnPageState @ 0x1401F2E18
 * Callers:
 *     MiUpdateLargePageSectionPfn @ 0x1401E59A4 (MiUpdateLargePageSectionPfn.c)
 * Callees:
 *     <none>
 */

void __fastcall MiSetPfnPageState(__int64 a1, char a2)
{
  *(_BYTE *)(a1 + 34) ^= (*(_BYTE *)(a1 + 34) ^ a2) & 7;
}
