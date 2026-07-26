/*
 * XREFs of ndisIfSetCompartmentJobObject @ 0x1C00BFF44
 * Callers:
 *     NdisSetJobObjectCompartmentId @ 0x1C00D17B0 (NdisSetJobObjectCompartmentId.c)
 * Callees:
 *     <none>
 */

LONG_PTR __fastcall ndisIfSetCompartmentJobObject(__int64 a1, void *a2)
{
  void *v4; // rcx
  LONG_PTR result; // rax

  v4 = *(void **)(a1 + 1704);
  if ( v4 )
  {
    result = ObfDereferenceObject(v4);
    *(_QWORD *)(a1 + 1704) = 0LL;
  }
  if ( a2 )
  {
    result = ObfReferenceObject(a2);
    *(_QWORD *)(a1 + 1704) = a2;
  }
  return result;
}
