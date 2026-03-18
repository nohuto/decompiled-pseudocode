/*
 * XREFs of PspConvertSiloToServerSilo @ 0x14063FFCC
 * Callers:
 *     NtSetInformationJobObject @ 0x1404855D8 (NtSetInformationJobObject.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140079E5C (PsIsCurrentThreadInServerSilo.c)
 *     PspQueueDeferredWorkAndWait @ 0x1401343C4 (PspQueueDeferredWorkAndWait.c)
 *     ZwOpenDirectoryObject @ 0x140151120 (ZwOpenDirectoryObject.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     PspTerminateAllProcessesInJobHierarchy @ 0x1404879CC (PspTerminateAllProcessesInJobHierarchy.c)
 *     PspAllocateMonitorContextArrayServerSilo @ 0x14054A288 (PspAllocateMonitorContextArrayServerSilo.c)
 *     ObGetRootDirectoryNameByPointer @ 0x140630A1C (ObGetRootDirectoryNameByPointer.c)
 *     PspDeleteServerSiloGlobals @ 0x1406402E4 (PspDeleteServerSiloGlobals.c)
 */

__int64 __fastcall PspConvertSiloToServerSilo(PRKEVENT Event)
{
  char *PoolWithTag; // rax
  char *v4; // rbx
  int MonitorContextArrayServerSilo; // esi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rax
  int v8; // eax
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+20h] [rbp-38h] BYREF

  if ( PsIsCurrentThreadInServerSilo() )
    return 3221225569LL;
  if ( *(_QWORD *)(*(_QWORD *)&Event[52].Header.Lock + 128LL) )
    return 3221225485LL;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x80uLL, 0x476C6953u);
  v4 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x80uLL);
  *(_DWORD *)v4 = -1;
  *((_DWORD *)v4 + 28) = 0;
  *((_DWORD *)v4 + 29) = 259;
  MonitorContextArrayServerSilo = PspAllocateMonitorContextArrayServerSilo((__int64)v4);
  if ( MonitorContextArrayServerSilo < 0 )
    goto LABEL_8;
  MonitorContextArrayServerSilo = ObGetRootDirectoryNameByPointer((__int64)Event, (UNICODE_STRING *)(v4 + 8));
  if ( MonitorContextArrayServerSilo < 0 )
    goto LABEL_8;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)(v4 + 8);
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  MonitorContextArrayServerSilo = ZwOpenDirectoryObject((PHANDLE)v4 + 3, 0x2000000u, &ObjectAttributes);
  if ( MonitorContextArrayServerSilo < 0 )
    goto LABEL_8;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)&Event[52].Header.Lock, 1u);
  v7 = *(_QWORD *)&Event[52].Header.Lock;
  if ( *(_QWORD *)(v7 + 136) )
  {
    ExReleaseResourceLite(*(PERESOURCE *)&Event[52].Header.Lock);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    MonitorContextArrayServerSilo = -1073741791;
LABEL_8:
    PspDeleteServerSiloGlobals(v4);
    return (unsigned int)MonitorContextArrayServerSilo;
  }
  *(_QWORD *)(v7 + 136) = v4;
  ExReleaseResourceLite(*(PERESOURCE *)&Event[52].Header.Lock);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  v8 = PspQueueDeferredWorkAndWait((__int64 (__fastcall *)(__int64))PspInitializeServerSiloDeferred, (__int64)Event);
  if ( v8 >= 0 )
    return 0LL;
  PspTerminateAllProcessesInJobHierarchy(Event, v8, 0);
  return 3221226341LL;
}
