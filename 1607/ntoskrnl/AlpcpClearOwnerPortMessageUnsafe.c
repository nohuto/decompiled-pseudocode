/*
 * XREFs of AlpcpClearOwnerPortMessageUnsafe @ 0x1404EDE64
 * Callers:
 *     AlpcMessageDestroyProcedure @ 0x140448980 (AlpcMessageDestroyProcedure.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 */

LONG_PTR __fastcall AlpcpClearOwnerPortMessageUnsafe(__int64 a1)
{
  void *v2; // rcx
  LONG_PTR result; // rax

  v2 = *(void **)(a1 + 24);
  if ( v2 )
  {
    if ( (*(_DWORD *)(a1 + 40) & 0x1000) != 0 )
      result = ObfDereferenceObject(v2);
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  return result;
}
