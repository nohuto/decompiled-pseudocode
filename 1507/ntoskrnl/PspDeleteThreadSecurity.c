/*
 * XREFs of PspDeleteThreadSecurity @ 0x1405051B4
 * Callers:
 *     PspThreadDelete @ 0x140504F18 (PspThreadDelete.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 */

LONG_PTR __fastcall PspDeleteThreadSecurity(__int64 a1)
{
  LONG_PTR result; // rax
  void *v3; // rcx

  result = *(unsigned int *)(a1 + 1724);
  if ( (result & 8) != 0 )
  {
    result = ObfDereferenceObject((PVOID)(*(_QWORD *)(a1 + 1624) & 0xFFFFFFFFFFFFFFF8uLL));
    v3 = *(void **)(a1 + 1888);
    if ( v3 )
    {
      result = ObfDereferenceObject(v3);
      *(_QWORD *)(a1 + 1888) = 0LL;
    }
    _InterlockedAnd((volatile signed __int32 *)(a1 + 1724), 0xFFFFFFF7);
  }
  *(_QWORD *)(a1 + 1624) = 0LL;
  return result;
}
