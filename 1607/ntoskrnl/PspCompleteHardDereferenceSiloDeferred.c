/*
 * XREFs of PspCompleteHardDereferenceSiloDeferred @ 0x14067E30C
 * Callers:
 *     <none>
 * Callees:
 *     PspStorageEmptyArrayNonReadonly @ 0x1402102F4 (PspStorageEmptyArrayNonReadonly.c)
 */

LONG_PTR __fastcall PspCompleteHardDereferenceSiloDeferred(unsigned __int64 **a1)
{
  unsigned __int64 *v1; // rbx
  unsigned __int64 *v3; // rcx

  v1 = a1[161];
  if ( v1 )
  {
    PspStorageEmptyArrayNonReadonly(a1[161], 0x20u);
    v3 = (unsigned __int64 *)v1[64];
    if ( v3 )
      PspStorageEmptyArrayNonReadonly(v3, 0x100u);
  }
  return ObfDereferenceObject(a1);
}
