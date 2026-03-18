/*
 * XREFs of PsSetSiloObjectServerPropertyByPointer @ 0x14024411C
 * Callers:
 *     NtSetInformationJobObject @ 0x140417C04 (NtSetInformationJobObject.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14000D2F0 (ExQueueWorkItem.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140016968 (PsIsCurrentThreadInServerSilo.c)
 *     ObfReferenceObjectWithTag @ 0x14004E670 (ObfReferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ZwOpenDirectoryObject @ 0x14017FAF0 (ZwOpenDirectoryObject.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x14046D4B8 (SeSinglePrivilegeCheck.c)
 *     PspAllocateMonitorContextArrayServerSilo @ 0x1405C0030 (PspAllocateMonitorContextArrayServerSilo.c)
 *     ObGetRootDirectoryNameByPointer @ 0x1406AEB94 (ObGetRootDirectoryNameByPointer.c)
 *     PspInitializeServerSiloDeferred @ 0x1406C1E74 (PspInitializeServerSiloDeferred.c)
 *     PspServerSiloDelete @ 0x1406C2868 (PspServerSiloDelete.c)
 */

__int64 __fastcall PsSetSiloObjectServerPropertyByPointer(char *Object, _DWORD *a2)
{
  KPROCESSOR_MODE PreviousMode; // bl
  NTSTATUS MonitorContextArrayServerSilo; // ebx
  char *PoolWithTag; // rax
  char *v7; // rsi
  char *v8; // rcx
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v10; // rcx
  __int16 v11; // ax
  struct _KTHREAD *v12; // rax
  struct _KTHREAD *v13; // rcx
  __int16 v14; // ax
  struct _WORK_QUEUE_ITEM WorkItem; // [rsp+38h] [rbp-39h] BYREF
  __int16 Objecta; // [rsp+58h] [rbp-19h] BYREF
  char v18; // [rsp+5Ah] [rbp-17h]
  int v19; // [rsp+5Ch] [rbp-15h]
  _QWORD v20[4]; // [rsp+60h] [rbp-11h] BYREF
  NTSTATUS v21; // [rsp+80h] [rbp+Fh]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp+17h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PsIsCurrentThreadInServerSilo() || !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
  {
    return (unsigned int)-1073741727;
  }
  else
  {
    if ( *((_QWORD *)Object + 19) )
      return (unsigned int)-1073741811;
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x80uLL, 0x476C6953u);
    v7 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    memset(PoolWithTag, 0, 0x80uLL);
    *(_DWORD *)v7 = -1;
    MonitorContextArrayServerSilo = PspAllocateMonitorContextArrayServerSilo(v7);
    v8 = Object;
    if ( MonitorContextArrayServerSilo < 0 )
    {
LABEL_9:
      PspServerSiloDelete(v8);
      return (unsigned int)MonitorContextArrayServerSilo;
    }
    MonitorContextArrayServerSilo = ObGetRootDirectoryNameByPointer(Object, v7 + 8);
    if ( MonitorContextArrayServerSilo < 0
      || (ObjectAttributes.Length = 48,
          ObjectAttributes.RootDirectory = 0LL,
          ObjectAttributes.Attributes = 576,
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL,
          ObjectAttributes.ObjectName = (PUNICODE_STRING)(v7 + 8),
          MonitorContextArrayServerSilo = ZwOpenDirectoryObject((PHANDLE)v7 + 3, 0x2000000u, &ObjectAttributes),
          MonitorContextArrayServerSilo < 0) )
    {
      v8 = Object;
      goto LABEL_9;
    }
    *((_DWORD *)v7 + 29) = *a2;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    ExAcquireResourceExclusiveLite((PERESOURCE)(Object + 48), 1u);
    if ( *((_QWORD *)Object + 32) )
    {
      PspServerSiloDelete(Object);
      MonitorContextArrayServerSilo = -1073741791;
    }
    else
    {
      *((_QWORD *)Object + 32) = v7;
      *((_DWORD *)v7 + 28) = 1;
      ObfReferenceObjectWithTag(Object, 0x746C6644u);
    }
    ExReleaseResourceLite((PERESOURCE)(Object + 48));
    v10 = KeGetCurrentThread();
    v11 = v10->SpecialApcDisable + 1;
    v10->SpecialApcDisable = v11;
    if ( !v11 && ($CD287064E7C9F7953DE243E927CFCB99 *)v10->ApcState.ApcListHead[0].Flink != &v10->152 )
      KiCheckForKernelApcDelivery();
    if ( MonitorContextArrayServerSilo >= 0 )
    {
      if ( KeGetCurrentThread()->ApcState.Process == PsInitialSystemProcess )
      {
        MonitorContextArrayServerSilo = PspInitializeServerSiloDeferred(Object);
      }
      else
      {
        Objecta = 1;
        v20[1] = v20;
        v18 = 6;
        v20[0] = v20;
        v19 = 0;
        v20[2] = PspInitializeServerSiloDeferred;
        WorkItem.WorkerRoutine = (void (__fastcall *)(void *))PspDeferredWorkerRoutine;
        WorkItem.Parameter = &Objecta;
        v20[3] = Object;
        v21 = 0;
        WorkItem.List.Flink = 0LL;
        ExQueueWorkItem(&WorkItem, DelayedWorkQueue);
        KeWaitForSingleObject(&Objecta, UserRequest, 0, 0, 0LL);
        MonitorContextArrayServerSilo = v21;
      }
      if ( MonitorContextArrayServerSilo < 0 )
      {
        v12 = KeGetCurrentThread();
        --v12->SpecialApcDisable;
        ExAcquireResourceExclusiveLite((PERESOURCE)(Object + 48), 1u);
        *((_DWORD *)v7 + 28) = 3;
        ExReleaseResourceLite((PERESOURCE)(Object + 48));
        v13 = KeGetCurrentThread();
        v14 = v13->SpecialApcDisable + 1;
        v13->SpecialApcDisable = v14;
        if ( !v14 && ($CD287064E7C9F7953DE243E927CFCB99 *)v13->ApcState.ApcListHead[0].Flink != &v13->152 )
          KiCheckForKernelApcDelivery();
        ObfDereferenceObjectWithTag(Object, 0x746C6644u);
      }
    }
  }
  return (unsigned int)MonitorContextArrayServerSilo;
}
