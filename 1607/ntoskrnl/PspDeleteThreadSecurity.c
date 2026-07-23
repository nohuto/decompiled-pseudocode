/*
 * XREFs of PspDeleteThreadSecurity @ 0x14051BFEC
 * Callers:
 *     PspThreadDelete @ 0x14051BBB8 (PspThreadDelete.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 */

LONG_PTR __fastcall PspDeleteThreadSecurity(__int64 a1)
{
  LONG_PTR result; // rax
  void *v3; // rcx

  result = *(unsigned int *)(a1 + 1728);
  if ( (result & 8) != 0 )
  {
    result = ObfDereferenceObject((PVOID)(*(_QWORD *)(a1 + 1632) & 0xFFFFFFFFFFFFFFF8uLL));
    v3 = *(void **)(a1 + 1896);
    if ( v3 )
    {
      result = ObfDereferenceObject(v3);
      *(_QWORD *)(a1 + 1896) = 0LL;
    }
    _InterlockedAnd((volatile signed __int32 *)(a1 + 1728), 0xFFFFFFF7);
  }
  *(_QWORD *)(a1 + 1632) = 0LL;
  return result;
}
