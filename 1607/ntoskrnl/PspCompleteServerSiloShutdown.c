/*
 * XREFs of PspCompleteServerSiloShutdown @ 0x14067E440
 * Callers:
 *     PspTerminateProcessesJobCallback @ 0x140456F78 (PspTerminateProcessesJobCallback.c)
 * Callees:
 *     ObfReferenceObject @ 0x140069BE0 (ObfReferenceObject.c)
 *     PsGetServerSiloGlobals @ 0x140076730 (PsGetServerSiloGlobals.c)
 *     PsGetServerSiloState @ 0x1400AE2D8 (PsGetServerSiloState.c)
 */

void __fastcall PspCompleteServerSiloShutdown(__int64 a1)
{
  void *v2; // rcx
  char *ServerSiloGlobals; // rax

  if ( (unsigned int)PsGetServerSiloState(a1) != 3 )
    NT_ASSERT("PsGetServerSiloState(ServerSilo) == SERVERSILO_TERMINATING");
  ObfReferenceObject(v2);
  ServerSiloGlobals = (char *)PsGetServerSiloGlobals(a1);
  *((_QWORD *)ServerSiloGlobals + 130) = 0LL;
  *((_QWORD *)ServerSiloGlobals + 132) = PspCompleteServerSiloShutdownDeferred;
  *((_QWORD *)ServerSiloGlobals + 133) = a1;
  ExQueueWorkItem((PWORK_QUEUE_ITEM)(ServerSiloGlobals + 1040), DelayedWorkQueue);
}
