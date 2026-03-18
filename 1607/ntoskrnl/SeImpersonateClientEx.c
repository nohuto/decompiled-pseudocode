/*
 * XREFs of SeImpersonateClientEx @ 0x1404D0BAC
 * Callers:
 *     EtwpCreateLogFile @ 0x140494518 (EtwpCreateLogFile.c)
 *     NtImpersonateThread @ 0x1404D0A84 (NtImpersonateThread.c)
 *     SeImpersonateClient @ 0x140692630 (SeImpersonateClient.c)
 * Callees:
 *     PsImpersonateClient @ 0x14050F3C0 (PsImpersonateClient.c)
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
