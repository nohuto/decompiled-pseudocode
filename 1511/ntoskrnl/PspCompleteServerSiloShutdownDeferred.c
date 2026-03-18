/*
 * XREFs of PspCompleteServerSiloShutdownDeferred @ 0x14063FEE0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     PsGetServerSiloGlobals @ 0x140102754 (PsGetServerSiloGlobals.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     RtlFreeAnsiString @ 0x140445624 (RtlFreeAnsiString.c)
 *     PspNotifyServerSiloTermination @ 0x1406406EC (PspNotifyServerSiloTermination.c)
 *     PspTerminateSiloSubsystemProcesses @ 0x140640B1C (PspTerminateSiloSubsystemProcesses.c)
 *     PspSendSiloTerminationNotification @ 0x140642548 (PspSendSiloTerminationNotification.c)
 */

LONG_PTR __fastcall PspCompleteServerSiloShutdownDeferred(__int64 a1)
{
  char *ServerSiloGlobals; // rbx
  void *v3; // rcx
  void *v4; // rcx
  struct _KTHREAD *CurrentThread; // rax
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx

  ServerSiloGlobals = (char *)PsGetServerSiloGlobals((_QWORD *)a1);
  PspTerminateSiloSubsystemProcesses(a1);
  v3 = (void *)*((_QWORD *)ServerSiloGlobals + 5);
  if ( v3 )
  {
    ObfDereferenceObject(v3);
    *((_QWORD *)ServerSiloGlobals + 5) = 0LL;
  }
  v4 = (void *)*((_QWORD *)ServerSiloGlobals + 6);
  if ( v4 )
  {
    ObfDereferenceObject(v4);
    *((_QWORD *)ServerSiloGlobals + 6) = 0LL;
  }
  PspNotifyServerSiloTermination(a1, 0LL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 1248), 1u);
  *((_DWORD *)ServerSiloGlobals + 28) = 4;
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 1248));
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  v6 = (void *)*((_QWORD *)ServerSiloGlobals + 3);
  if ( v6 )
  {
    ZwClose(v6);
    *((_QWORD *)ServerSiloGlobals + 3) = 0LL;
  }
  RtlFreeAnsiString((PUNICODE_STRING)(ServerSiloGlobals + 8));
  v7 = (void *)*((_QWORD *)ServerSiloGlobals + 7);
  if ( v7 )
  {
    ObfDereferenceObject(v7);
    *((_QWORD *)ServerSiloGlobals + 7) = 0LL;
  }
  v8 = (void *)*((_QWORD *)ServerSiloGlobals + 15);
  if ( v8 )
  {
    ObfDereferenceObject(v8);
    *((_QWORD *)ServerSiloGlobals + 15) = 0LL;
  }
  PspSendSiloTerminationNotification(a1, *((unsigned int *)ServerSiloGlobals + 29));
  return ObfDereferenceObject((PVOID)a1);
}
