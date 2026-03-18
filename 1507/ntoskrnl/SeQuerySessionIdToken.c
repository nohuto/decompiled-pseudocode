/*
 * XREFs of SeQuerySessionIdToken @ 0x14052FB1C
 * Callers:
 *     PspAllocateProcess @ 0x140468798 (PspAllocateProcess.c)
 *     SeQueryInformationToken @ 0x140481E90 (SeQueryInformationToken.c)
 *     NtQueryInformationToken @ 0x140482E10 (NtQueryInformationToken.c)
 *     PnpGetCallerSessionId @ 0x14067E2AC (PnpGetCallerSessionId.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 */

NTSTATUS __stdcall SeQuerySessionIdToken(PACCESS_TOKEN Token, PULONG SessionId)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v5; // rcx
  __int16 v6; // ax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
  *SessionId = *((_DWORD *)Token + 30);
  ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
  v5 = KeGetCurrentThread();
  v6 = v5->KernelApcDisable + 1;
  v5->KernelApcDisable = v6;
  if ( !v6
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v5->ApcState.ApcListHead[0].Flink != &v5->152
    && !v5->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return 0;
}
