/*
 * XREFs of VerifierExAcquireResourceSharedLite @ 0x140717B74
 * Callers:
 *     <none>
 * Callees:
 *     VfDeadlockAcquireResource @ 0x140713510 (VfDeadlockAcquireResource.c)
 *     ViResourceAcquireSanityChecks @ 0x140718304 (ViResourceAcquireSanityChecks.c)
 */

char __fastcall VerifierExAcquireResourceSharedLite(ULONG_PTR a1, char a2)
{
  __int64 v4; // rdx
  char v5; // bl
  void *retaddr; // [rsp+38h] [rbp+0h]

  ViResourceAcquireSanityChecks(a1);
  LOBYTE(v4) = a2;
  v5 = pXdvExAcquireResourceSharedLite(a1, v4);
  if ( v5 )
    VfDeadlockAcquireResource(a1, 8u, (__int64)KeGetCurrentThread(), a2 == 0, retaddr);
  return v5;
}
