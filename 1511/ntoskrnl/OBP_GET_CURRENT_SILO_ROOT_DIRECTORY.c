/*
 * XREFs of OBP_GET_CURRENT_SILO_ROOT_DIRECTORY @ 0x140079DA4
 * Callers:
 *     ObQueryNameStringMode @ 0x14041FE90 (ObQueryNameStringMode.c)
 *     ObpCreateSymbolicLinkName @ 0x1404BAF58 (ObpCreateSymbolicLinkName.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObfReferenceObjectWithTag @ 0x140042AE0 (ObfReferenceObjectWithTag.c)
 *     PspGetServerSiloForSilo @ 0x140077710 (PspGetServerSiloForSilo.c)
 *     PspThreadSiloNoLock @ 0x1400797D4 (PspThreadSiloNoLock.c)
 *     OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO @ 0x140079DFC (OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO.c)
 */

__int64 OBP_GET_CURRENT_SILO_ROOT_DIRECTORY()
{
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v1; // rax
  void *ServerSiloForSilo; // rax
  void *v3; // rbx
  __int64 v4; // rdi

  CurrentThread = KeGetCurrentThread();
  v1 = PspThreadSiloNoLock((__int64)CurrentThread, (__int64)CurrentThread->Process);
  ServerSiloForSilo = (void *)PspGetServerSiloForSilo(v1);
  v3 = ServerSiloForSilo;
  if ( ServerSiloForSilo )
    ObfReferenceObjectWithTag(ServerSiloForSilo, 0x746C6644u);
  v4 = OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO(v3);
  if ( v3 )
    ObfDereferenceObject(v3);
  return v4;
}
