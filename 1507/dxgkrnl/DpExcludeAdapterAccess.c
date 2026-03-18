/*
 * XREFs of DpExcludeAdapterAccess @ 0x1C0165F00
 * Callers:
 *     <none>
 * Callees:
 *     DxgkIsAdapterCoreSyncAcquired @ 0x1C0129E94 (DxgkIsAdapterCoreSyncAcquired.c)
 */

__int64 __fastcall DpExcludeAdapterAccess(PDEVICE_OBJECT DeviceObject, int a2, __int64 a3, __int64 a4)
{
  _QWORD *PoolWithTag; // r14
  PIO_WORKITEM WorkItem; // r15
  PVOID DeviceExtension; // rbp
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rdi
  _QWORD *v14; // rax
  _QWORD *v15; // rax
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rcx
  _QWORD *v19; // rax
  __int64 v20; // rcx
  _QWORD *v21; // rax
  NTSTATUS v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  _QWORD *v28; // rax
  struct _KEVENT Event; // [rsp+30h] [rbp-48h] BYREF

  PoolWithTag = 0LL;
  WorkItem = 0LL;
  if ( !DeviceObject || !a3 )
  {
    LODWORD(v13) = -1073741811;
    v28 = (_QWORD *)WdLogNewEntry5_WdError(DeviceObject);
    v28[4] = 0LL;
    v28[3] = DpExcludeAdapterAccess;
    v28[5] = -1073741811LL;
    WdLogEvent5_WdError(v28);
LABEL_34:
    if ( (int)v13 >= 0 )
      return (unsigned int)v13;
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
    goto LABEL_37;
  }
  DeviceExtension = DeviceObject->DeviceExtension;
  if ( !DeviceExtension
    || *((_DWORD *)DeviceExtension + 4) != 1953656900
    || (v11 = 2LL, *((_DWORD *)DeviceExtension + 5) != 2) )
  {
    v12 = -1073741811LL;
    goto LABEL_31;
  }
  if ( KeGetCurrentIrql() )
  {
    v12 = -1073741811LL;
    LODWORD(v13) = -1073741811;
    if ( *(_DWORD *)(*((_QWORD *)DeviceExtension + 5) + 28LL) >= 0x2003u )
    {
      v14 = (_QWORD *)WdLogNewEntry5_WdCriticalError(DeviceObject, 2LL, a3);
      v14[3] = 275LL;
      v14[4] = 21LL;
      v14[5] = DpExcludeAdapterAccess;
      v14[6] = 0LL;
      v14[7] = -1073741811LL;
      WdLogEvent5_WdCriticalError(v14);
    }
    v15 = (_QWORD *)WdLogNewEntry5_WdError(DeviceObject);
    goto LABEL_10;
  }
  v16 = *((_DWORD *)DeviceExtension + 646);
  if ( v16 == 1 || v16 == 4 )
  {
    v12 = -1073741661LL;
LABEL_31:
    LODWORD(v13) = v12;
    v15 = (_QWORD *)WdLogNewEntry5_WdError(DeviceObject);
LABEL_10:
    v15[3] = DpExcludeAdapterAccess;
    v15[4] = 0LL;
    v15[5] = v12;
LABEL_11:
    WdLogEvent5_WdError(v15);
    return (unsigned int)v13;
  }
  if ( (a2 & 2) != 0 && ((a2 & 1) != 0 || !DxgkIsAdapterCoreSyncAcquired(*((DXGADAPTER **)DeviceExtension + 313), 2)) )
  {
    LODWORD(v13) = -1073741637;
    v15 = (_QWORD *)WdLogNewEntry5_WdError(DeviceObject);
    v15[3] = DpExcludeAdapterAccess;
    v15[4] = 0LL;
    v15[5] = -1073741637LL;
    goto LABEL_11;
  }
  if ( (a2 & 4) != 0 && (!*((_QWORD *)DeviceExtension + 192) || !*((_QWORD *)DeviceExtension + 193)) )
  {
    LODWORD(v13) = -1073741637;
    v17 = WdLogNewEntry5_WdWarning(DeviceObject, v11, a3, a4);
    *(_QWORD *)(v17 + 24) = DpExcludeAdapterAccess;
    *(_QWORD *)(v17 + 32) = DeviceExtension;
    WdLogEvent5_WdWarning(v17);
    return (unsigned int)v13;
  }
  WorkItem = IoAllocateWorkItem(DeviceObject);
  if ( !WorkItem )
  {
    LODWORD(v13) = -1073741670;
    v19 = (_QWORD *)WdLogNewEntry5_WdLowResource(v18);
    v19[3] = DpExcludeAdapterAccess;
    v19[4] = IoAllocateWorkItem;
    v19[5] = -1073741670LL;
    WdLogEvent5_WdLowResource(v19);
    return (unsigned int)v13;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x74727044u);
  if ( PoolWithTag )
  {
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    *PoolWithTag = a3;
    PoolWithTag[1] = a4;
    *((_DWORD *)PoolWithTag + 4) = a2;
    PoolWithTag[3] = (unsigned __int64)&Event & -(__int64)((a2 & 2) != 0);
    v22 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)DeviceExtension + 2, WorkItem, &byte_1C00E2920, 1u, 0x20u);
    v13 = v22;
    if ( v22 >= 0 )
    {
      IoQueueWorkItemEx(WorkItem, DpiFdoExcludeAdapterAccess, DelayedWorkQueue, PoolWithTag);
      if ( (a2 & 2) != 0 )
        LODWORD(v13) = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    }
    else
    {
      v27 = WdLogNewEntry5_WdWarning(v24, v23, v25, v26);
      *(_QWORD *)(v27 + 24) = DpExcludeAdapterAccess;
      *(_QWORD *)(v27 + 32) = v13;
      WdLogEvent5_WdWarning(v27);
    }
    goto LABEL_34;
  }
  LODWORD(v13) = -1073741801;
  v21 = (_QWORD *)WdLogNewEntry5_WdLowResource(v20);
  v21[4] = ExAllocatePoolWithTag;
  v21[3] = DpExcludeAdapterAccess;
  v21[5] = -1073741801LL;
  WdLogEvent5_WdLowResource(v21);
LABEL_37:
  if ( WorkItem )
    IoFreeWorkItem(WorkItem);
  return (unsigned int)v13;
}
