/*
 * XREFs of SeImpersonateClientEx @ 0x14053C5D0
 * Callers:
 *     EtwpCreateLogFile @ 0x1404AC23C (EtwpCreateLogFile.c)
 *     NtImpersonateThread @ 0x14053C4A8 (NtImpersonateThread.c)
 *     SeImpersonateClient @ 0x1406D507C (SeImpersonateClient.c)
 * Callees:
 *     PsImpersonateClient @ 0x1404792B0 (PsImpersonateClient.c)
 */

NTSTATUS __stdcall SeImpersonateClientEx(PSECURITY_CLIENT_CONTEXT ClientContext, PETHREAD ServerThread)
{
  struct _KTHREAD *CurrentThread; // r10
  BOOLEAN DirectAccessEffectiveOnly; // r9

  CurrentThread = ServerThread;
  if ( ClientContext->DirectlyAccessClientToken )
    DirectAccessEffectiveOnly = ClientContext->DirectAccessEffectiveOnly;
  else
    DirectAccessEffectiveOnly = ClientContext->SecurityQos.EffectiveOnly;
  if ( !ServerThread )
    CurrentThread = KeGetCurrentThread();
  return PsImpersonateClient(
           CurrentThread,
           ClientContext->ClientToken,
           1u,
           DirectAccessEffectiveOnly,
           ClientContext->SecurityQos.ImpersonationLevel);
}
