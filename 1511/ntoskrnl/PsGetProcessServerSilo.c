/*
 * XREFs of PsGetProcessServerSilo @ 0x14041CF3C
 * Callers:
 *     PspExitThread @ 0x1403F0588 (PspExitThread.c)
 *     PspTerminateAllThreads @ 0x1403F2750 (PspTerminateAllThreads.c)
 *     ObpReferenceDeviceMap @ 0x14041CF70 (ObpReferenceDeviceMap.c)
 *     SepRmLsaConnectRequest @ 0x14053C6C0 (SepRmLsaConnectRequest.c)
 * Callees:
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     PspGetServerSiloForSilo @ 0x140077710 (PspGetServerSiloForSilo.c)
 *     PsGetProcessSilo @ 0x140079730 (PsGetProcessSilo.c)
 */

void *__fastcall PsGetProcessServerSilo(__int64 a1)
{
  __int64 ProcessSilo; // rax
  void *ServerSiloForSilo; // rax
  void *v3; // rbx

  ProcessSilo = PsGetProcessSilo(a1);
  ServerSiloForSilo = (void *)PspGetServerSiloForSilo(ProcessSilo);
  v3 = ServerSiloForSilo;
  if ( ServerSiloForSilo )
    ObfReferenceObject(ServerSiloForSilo);
  return v3;
}
