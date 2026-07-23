/*
 * XREFs of PsReferenceSiloContext @ 0x1400B2488
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LONG_PTR __fastcall PsReferenceSiloContext(void *a1)
{
  return ObfReferenceObjectWithTag(a1, 0x746C6644u);
}
