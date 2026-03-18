/*
 * XREFs of DpExcludeAdapterAccess @ 0x1C016A430
 * Callers:
 *     <none>
 * Callees:
 *     DxgkIsAdapterCoreSyncAcquired @ 0x1C0130524 (DxgkIsAdapterCoreSyncAcquired.c)
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
  int v16; // ebx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  _QWORD *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  _QWORD *v27; // rax
  NTSTATUS v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  _QWORD *v34; // rax
  struct _KEVENT Event; // [rsp+30h] [rbp-48h] BYREF

  PoolWithTag = 0LL;
  WorkItem = 0LL;
  if ( !DeviceObject || !a3 )
  {
    LODWORD(v13) = -1073741811;
    v34 = (_QWORD *)WdLogNewEntry5_WdError(DeviceObject);
    v34[4] = 0LL;
    v34[3] = DpExcludeAdapterAccess;
    v34[5] = -1073741811LL;
    WdLogEvent5_WdError(v34);
LABEL_33:
    if ( (int)v13 >= 0 )
      return (unsigned int)v13;
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
    goto LABEL_36;
  }
  DeviceExtension = DeviceObject->DeviceExtension;
  if ( !DeviceExtension
    || *((_DWORD *)DeviceExtension + 4) != 1953656900
    || (v11 = 2LL, *((_DWORD *)DeviceExtension + 5) != 2) )
  {
    v12 = -1073741811LL;
    goto LABEL_30;
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
  if ( ((*((_DWORD *)DeviceExtension + 656) - 1) & 0xFFFFFFFB) == 0 )
  {
    v12 = -1073741661LL;
LABEL_30:
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
  v16 = a2 & 2;
  if ( (a2 & 2) != 0 && ((a2 & 1) != 0 || !DxgkIsAdapterCoreSyncAcquired(*((DXGADAPTER **)DeviceExtension + 318), 2)) )
  {
    LODWORD(v13) = -1073741637;
    v15 = (_QWORD *)WdLogNewEntry5_WdError(DeviceObject);
    v15[3] = DpExcludeAdapterAccess;
    v15[4] = 0LL;
    v15[5] = -1073741637LL;
    goto LABEL_11;
  }
  if ( (a2 & 4) != 0 && (!*((_QWORD *)DeviceExtension + 197) || !*((_QWORD *)DeviceExtension + 198)) )
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
    v22 = (_QWORD *)WdLogNewEntry5_WdLowResource(v19, v18, v20, v21);
    v22[3] = DpExcludeAdapterAccess;
    v22[4] = IoAllocateWorkItem;
    v22[5] = -1073741670LL;
    WdLogEvent5_WdLowResource(v22);
    return (unsigned int)v13;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x74727044u);
  if ( PoolWithTag )
  {
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    *PoolWithTag = a3;
    PoolWithTag[1] = a4;
    *((_DWORD *)PoolWithTag + 4) = a2;
    PoolWithTag[3] = (unsigned __int64)&Event & -(__int64)(v16 != 0);
    v28 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)DeviceExtension + 2, WorkItem, &byte_1C00ED620, 1u, 0x20u);
    v13 = v28;
    if ( v28 >= 0 )
    {
      IoQueueWorkItemEx(WorkItem, DpiFdoExcludeAdapterAccess, DelayedWorkQueue, PoolWithTag);
      if ( v16 )
        LODWORD(v13) = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    }
    else
    {
      v33 = WdLogNewEntry5_WdWarning(v30, v29, v31, v32);
      *(_QWORD *)(v33 + 24) = DpExcludeAdapterAccess;
      *(_QWORD *)(v33 + 32) = v13;
      WdLogEvent5_WdWarning(v33);
    }
    goto LABEL_33;
  }
  LODWORD(v13) = -1073741801;
  v27 = (_QWORD *)WdLogNewEntry5_WdLowResource(v24, v23, v25, v26);
  v27[4] = ExAllocatePoolWithTag;
  v27[3] = DpExcludeAdapterAccess;
  v27[5] = -1073741801LL;
  WdLogEvent5_WdLowResource(v27);
LABEL_36:
  if ( WorkItem )
    IoFreeWorkItem(WorkItem);
  return (unsigned int)v13;
}
