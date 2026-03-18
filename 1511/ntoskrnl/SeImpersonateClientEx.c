/*
 * XREFs of SeImpersonateClientEx @ 0x1404C71E8
 * Callers:
 *     NtImpersonateThread @ 0x1404C70C0 (NtImpersonateThread.c)
 *     EtwpCreateLogFile @ 0x1404CA224 (EtwpCreateLogFile.c)
 *     SeImpersonateClient @ 0x140653354 (SeImpersonateClient.c)
 * Callees:
 *     PsImpersonateClient @ 0x1404264E0 (PsImpersonateClient.c)
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
