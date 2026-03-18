/*
 * XREFs of DereferenceW32Thread @ 0x1C00888E0
 * Callers:
 *     FreeW32Thread @ 0x1C01016C4 (FreeW32Thread.c)
 * Callees:
 *     <none>
 */

LONG_PTR __fastcall DereferenceW32Thread(__int64 a1)
{
  void *v1; // rbx

  v1 = *(void **)a1;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 8), 0xFFFFFFFF) == 1 )
    UserDeleteW32Thread();
  return ObfDereferenceObject(v1);
}
