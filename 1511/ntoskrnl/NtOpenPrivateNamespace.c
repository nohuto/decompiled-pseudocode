/*
 * XREFs of NtOpenPrivateNamespace @ 0x1404AA1A0
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     PsDereferenceMonitorContextServerSilo @ 0x1400775C0 (PsDereferenceMonitorContextServerSilo.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     PsGetMonitorContextServerSilo @ 0x1400C82E0 (PsGetMonitorContextServerSilo.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ObOpenObjectByPointer @ 0x140476C40 (ObOpenObjectByPointer.c)
 *     ObpLookupNamespaceEntry @ 0x1404AA3F0 (ObpLookupNamespaceEntry.c)
 *     ObpCaptureBoundaryDescriptor @ 0x1404AA488 (ObpCaptureBoundaryDescriptor.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtOpenPrivateNamespace(
        PHANDLE NamespaceHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        POBJECT_BOUNDARY_DESCRIPTOR BoundaryDescriptor)
{
  PHANDLE v5; // r14
  signed __int64 v6; // rbx
  KPROCESSOR_MODE AccessMode; // r15
  NTSTATUS result; // eax
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rsi
  signed __int64 v14; // rax
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rtt
  void *v17; // rsi
  signed __int64 v18; // rax
  unsigned __int64 v19; // rtt
  NTSTATUS v20; // ebx
  ULONG HandleAttributes; // [rsp+40h] [rbp-38h]
  int HandleAttributesa; // [rsp+40h] [rbp-38h]
  __int64 v23; // [rsp+48h] [rbp-30h] BYREF
  PVOID P; // [rsp+50h] [rbp-28h]
  HANDLE Handle; // [rsp+58h] [rbp-20h] BYREF

  v5 = NamespaceHandle;
  v6 = 0LL;
  Handle = 0LL;
  AccessMode = KeGetCurrentThread()->PreviousMode;
  HandleAttributes = 0;
  if ( AccessMode )
  {
    if ( (unsigned __int64)NamespaceHandle >= MmUserProbeAddress )
      NamespaceHandle = (PHANDLE)MmUserProbeAddress;
    *NamespaceHandle = *NamespaceHandle;
    if ( ObjectAttributes )
    {
      if ( ((unsigned __int8)ObjectAttributes & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      HandleAttributes = ObjectAttributes->Attributes;
    }
  }
  else if ( ObjectAttributes )
  {
    HandleAttributes = ObjectAttributes->Attributes;
  }
  if ( AccessMode )
    HandleAttributesa = HandleAttributes & 0x1DF2;
  else
    HandleAttributesa = HandleAttributes & 0x11FF2;
  result = ObpCaptureBoundaryDescriptor(BoundaryDescriptor);
  if ( result >= 0 )
  {
    PsGetMonitorContextServerSilo(ObSiloMonitor, (_QWORD *)0xFFFFFFFFFFFFFFFFLL, &v23);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v10 = (unsigned __int64 *)(v23 + 720);
    v11 = KeAbPreAcquire(v23 + 720, 0LL, 0LL);
    v12 = v11;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v10, 0LL) )
      ExfAcquirePushLockExclusiveEx(v10, v11, (ULONG_PTR)v10);
    if ( v12 )
      *(_BYTE *)(v12 + 26) |= 1u;
    v13 = ObpLookupNamespaceEntry(v23 + 128, P);
    ExFreePoolWithTag(P, 0x534E624Fu);
    if ( v13 && (v17 = *(void **)(v13 + 16)) != 0LL )
    {
      ObfReferenceObject(v17);
      _m_prefetchw(v10);
      v18 = *v10;
      if ( (*v10 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
        v6 = v18 - 16;
      if ( (v18 & 2) != 0 || (v19 = *v10, v19 != _InterlockedCompareExchange64((volatile signed __int64 *)v10, v6, v18)) )
        ExfReleasePushLock(v10);
      KeAbPostRelease((ULONG_PTR)v10);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      PsDereferenceMonitorContextServerSilo(v23);
      v20 = ObOpenObjectByPointer(
              v17,
              HandleAttributesa,
              0LL,
              DesiredAccess,
              ObpDirectoryObjectType,
              AccessMode,
              &Handle);
      LODWORD(v23) = v20;
      ObfDereferenceObject(v17);
      *v5 = Handle;
      return v20;
    }
    else
    {
      v14 = *v10;
      v15 = *v10 & 0xFFFFFFFFFFFFFFF0uLL;
      _m_prefetchw(v10);
      if ( v15 > 0x10 )
        v6 = v14 - 16;
      if ( (v14 & 2) != 0 || (v16 = *v10, v16 != _InterlockedCompareExchange64((volatile signed __int64 *)v10, v6, v14)) )
        ExfReleasePushLock(v10);
      KeAbPostRelease((ULONG_PTR)v10);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      PsDereferenceMonitorContextServerSilo(v23);
      return -1073741766;
    }
  }
  return result;
}
