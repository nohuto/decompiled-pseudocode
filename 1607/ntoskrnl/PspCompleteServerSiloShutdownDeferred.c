/*
 * XREFs of PspCompleteServerSiloShutdownDeferred @ 0x14067E48C
 * Callers:
 *     <none>
 * Callees:
 *     PsDetachSiloFromCurrentThread @ 0x1400098A0 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x1400098C0 (PsAttachSiloToCurrentThread.c)
 *     ExAcquireResourceSharedLite @ 0x140068130 (ExAcquireResourceSharedLite.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     PsGetServerSiloGlobals @ 0x140076730 (PsGetServerSiloGlobals.c)
 *     SepDeReferenceLogonSessionDirect @ 0x1400807E0 (SepDeReferenceLogonSessionDirect.c)
 *     PspSendJobNotification @ 0x1400AA5A8 (PspSendJobNotification.c)
 *     PsGetServerSiloState @ 0x1400AE2D8 (PsGetServerSiloState.c)
 *     PspUnlockJob @ 0x140467D80 (PspUnlockJob.c)
 *     EtwShutdown @ 0x140531A30 (EtwShutdown.c)
 *     PspTerminateSiloSubsystemProcesses @ 0x14067EFD8 (PspTerminateSiloSubsystemProcesses.c)
 *     PspNotifyServerSiloTermination @ 0x1406813C0 (PspNotifyServerSiloTermination.c)
 *     SepDeleteUnreferencedLogonSessionsInSilo @ 0x140693824 (SepDeleteUnreferencedLogonSessionsInSilo.c)
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
