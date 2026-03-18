/*
 * XREFs of PspCompleteServerSiloShutdownDeferred @ 0x14067E3A8
 * Callers:
 *     <none>
 * Callees:
 *     PsDetachSiloFromCurrentThread @ 0x140009D20 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x140009D40 (PsAttachSiloToCurrentThread.c)
 *     ExAcquireResourceSharedLite @ 0x1400685B0 (ExAcquireResourceSharedLite.c)
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     PsGetServerSiloGlobals @ 0x1400766B0 (PsGetServerSiloGlobals.c)
 *     SepDeReferenceLogonSessionDirect @ 0x140080760 (SepDeReferenceLogonSessionDirect.c)
 *     PspSendJobNotification @ 0x1400AC040 (PspSendJobNotification.c)
 *     PsGetServerSiloState @ 0x1400B0120 (PsGetServerSiloState.c)
 *     PspUnlockJob @ 0x140468EB0 (PspUnlockJob.c)
 *     EtwShutdown @ 0x1405314F0 (EtwShutdown.c)
 *     PspTerminateSiloSubsystemProcesses @ 0x14067EEF4 (PspTerminateSiloSubsystemProcesses.c)
 *     PspNotifyServerSiloTermination @ 0x1406812DC (PspNotifyServerSiloTermination.c)
 *     SepDeleteUnreferencedLogonSessionsInSilo @ 0x140693740 (SepDeleteUnreferencedLogonSessionsInSilo.c)
 */

LONG_PTR __fastcall PspCompleteServerSiloShutdownDeferred(__int64 a1)
{
  void *ServerSiloGlobals; // rdi
  void *v3; // rcx
  void *v4; // rcx
  __int64 v5; // rbx
  void *v6; // rcx
  void *v7; // rcx
  _QWORD *v8; // rcx
  _QWORD *v9; // rcx
  void *v10; // rcx
  struct _KTHREAD *CurrentThread; // rbx
  int v12; // edi

  ServerSiloGlobals = PsGetServerSiloGlobals(a1);
  if ( (unsigned int)PsGetServerSiloState(a1) != 3 )
    NT_ASSERT("PsGetServerSiloState(Silo) == SERVERSILO_TERMINATING");
  PspTerminateSiloSubsystemProcesses();
  v3 = (void *)*((_QWORD *)ServerSiloGlobals + 108);
  if ( v3 )
  {
    ObfDereferenceObject(v3);
    *((_QWORD *)ServerSiloGlobals + 108) = 0LL;
  }
  v4 = (void *)*((_QWORD *)ServerSiloGlobals + 109);
  if ( v4 )
  {
    ObfDereferenceObject(v4);
    *((_QWORD *)ServerSiloGlobals + 109) = 0LL;
  }
  PspNotifyServerSiloTermination(a1);
  v5 = PsAttachSiloToCurrentThread(a1);
  EtwShutdown(0);
  PsDetachSiloFromCurrentThread(v5);
  v6 = (void *)*((_QWORD *)ServerSiloGlobals + 94);
  if ( v6 )
  {
    ObfDereferenceObject(v6);
    *((_QWORD *)ServerSiloGlobals + 94) = 0LL;
  }
  v7 = (void *)*((_QWORD *)ServerSiloGlobals + 95);
  if ( v7 )
  {
    ObfDereferenceObject(v7);
    *((_QWORD *)ServerSiloGlobals + 95) = 0LL;
  }
  v8 = (_QWORD *)*((_QWORD *)ServerSiloGlobals + 92);
  if ( v8 )
  {
    SepDeReferenceLogonSessionDirect(v8);
    *((_QWORD *)ServerSiloGlobals + 92) = 0LL;
  }
  v9 = (_QWORD *)*((_QWORD *)ServerSiloGlobals + 93);
  if ( v9 )
  {
    SepDeReferenceLogonSessionDirect(v9);
    *((_QWORD *)ServerSiloGlobals + 93) = 0LL;
  }
  SepDeleteUnreferencedLogonSessionsInSilo(a1);
  v10 = (void *)*((_QWORD *)ServerSiloGlobals + 107);
  if ( v10 )
  {
    ObfDereferenceObject(v10);
    *((_QWORD *)ServerSiloGlobals + 107) = 0LL;
  }
  CurrentThread = KeGetCurrentThread();
  v12 = *((_DWORD *)ServerSiloGlobals + 249);
  if ( CurrentThread )
    --CurrentThread->SpecialApcDisable;
  ExAcquireResourceSharedLite((PERESOURCE)(a1 + 56), 1u);
  if ( *(_QWORD *)(a1 + 456) && (*(_DWORD *)(a1 + 876) & 0x2000) != 0 )
    PspSendJobNotification(a1, 13LL, v12, 0);
  PspUnlockJob(a1, (__int64)CurrentThread);
  return ObfDereferenceObject((PVOID)a1);
}
