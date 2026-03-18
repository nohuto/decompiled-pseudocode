/*
 * XREFs of PsGetCurrentSilo @ 0x1404D436C
 * Callers:
 *     ExpGetProcessInformation @ 0x140409F60 (ExpGetProcessInformation.c)
 *     PsLookupProcessByProcessId @ 0x1404D42D0 (PsLookupProcessByProcessId.c)
 *     PsGetSiloIdentifier @ 0x14054B6F4 (PsGetSiloIdentifier.c)
 *     PsGetCurrentSiloObject @ 0x14063F754 (PsGetCurrentSiloObject.c)
 *     PsRootSiloInformation @ 0x14063FBD4 (PsRootSiloInformation.c)
 * Callees:
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     PspThreadSiloNoLock @ 0x1400797D4 (PspThreadSiloNoLock.c)
 */

void *PsGetCurrentSilo()
{
  struct _KTHREAD *CurrentThread; // rcx
  void *v1; // rax
  void *v2; // rbx

  CurrentThread = KeGetCurrentThread();
  v1 = (void *)PspThreadSiloNoLock((__int64)CurrentThread, (__int64)CurrentThread->Process);
  v2 = v1;
  if ( v1 )
    ObfReferenceObject(v1);
  return v2;
}
