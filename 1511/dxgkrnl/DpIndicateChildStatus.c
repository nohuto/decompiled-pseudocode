/*
 * XREFs of DpIndicateChildStatus @ 0x1C0022A50
 * Callers:
 *     DpiMiracastTearDownAssociation @ 0x1C00256C4 (DpiMiracastTearDownAssociation.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x1C0022F90 (ExAllocateFromNPagedLookasideList.c)
 *     ExFreeToNPagedLookasideList @ 0x1C0022FC4 (ExFreeToNPagedLookasideList.c)
 *     Template_pqqtq @ 0x1C002300C (Template_pqqtq.c)
 */

__int64 __fastcall DpIndicateChildStatus(unsigned __int64 DeviceObject, unsigned int *a2, int a3)
{
  __int64 v3; // rsi
  char *v4; // rdi
  _QWORD *v5; // r14
  char v6; // r12
  bool v7; // bp
  struct _DEVICE_OBJECT *v9; // r15
  _QWORD *v10; // rax
  bool v12; // zf
  int v13; // edx
  char *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  _QWORD *v19; // rax
  KSPIN_LOCK *v20; // rcx
  PVOID *v21; // rdx
  PIO_WORKITEM WorkItem; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  struct _IO_WORKITEM *v27; // rbx
  _QWORD *v28; // rax
  NTSTATUS v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rax
  _QWORD *v35; // rax
  KSPIN_LOCK *v36; // rcx
  __int64 v37; // rcx
  _QWORD *v38; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-38h] BYREF

  LODWORD(v3) = 0;
  v4 = 0LL;
  v5 = 0LL;
  v6 = 0;
  v7 = 0;
  v9 = (struct _DEVICE_OBJECT *)DeviceObject;
  if ( !DeviceObject || !a2 )
  {
    LODWORD(v3) = -1073741811;
    v35 = (_QWORD *)WdLogNewEntry5_WdError(DeviceObject);
    v35[4] = 0LL;
    v35[3] = DpIndicateChildStatus;
    v35[5] = -1073741811LL;
    WdLogEvent5_WdError(v35);
    goto LABEL_39;
  }
  v4 = *(char **)(DeviceObject + 64);
  if ( !v4 || *((_DWORD *)v4 + 4) != 1953656900 || *((_DWORD *)v4 + 5) != 2 )
    goto LABEL_12;
  DeviceObject = *a2;
  if ( (_DWORD)DeviceObject == 3 )
  {
    if ( !*((_QWORD *)v4 + 237) )
    {
      LODWORD(v3) = -1073741637;
      v10 = (_QWORD *)WdLogNewEntry5_WdError(DeviceObject);
      v10[4] = 0LL;
      v10[3] = DpIndicateChildStatus;
      v10[5] = -1073741637LL;
LABEL_9:
      WdLogEvent5_WdError(v10);
      return (unsigned int)v3;
    }
    if ( *((_DWORD *)v4 + 472) != a2[1] )
    {
LABEL_12:
      LODWORD(v3) = -1073741811;
      v10 = (_QWORD *)WdLogNewEntry5_WdError(DeviceObject);
      v10[3] = DpIndicateChildStatus;
      v10[4] = 0LL;
      v10[5] = -1073741811LL;
      goto LABEL_9;
    }
    v12 = a2[3] == 0x80000000;
  }
  else
  {
    if ( (_DWORD)DeviceObject != 1 )
      goto LABEL_15;
    v12 = *((_DWORD *)v4 + 472) == a2[1];
  }
  if ( v12 )
    goto LABEL_12;
LABEL_15:
  if ( (_DWORD)DeviceObject == 3 )
    v13 = a2[3];
  else
    v13 = -2;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_pqqtq(DeviceObject, v13, a3, (_DWORD)v9, a2[1], DeviceObject, *((_BYTE *)a2 + 8), v13);
  v14 = (char *)ExAllocateFromNPagedLookasideList(&Lookaside);
  v5 = v14;
  if ( !v14 )
  {
    LODWORD(v3) = -1073741670;
    v19 = (_QWORD *)WdLogNewEntry5_WdLowResource(v16, v15, v17, v18);
    v19[3] = DpIndicateChildStatus;
    v19[4] = ExAllocateFromNPagedLookasideList;
    v19[5] = -1073741670LL;
    WdLogEvent5_WdLowResource(v19);
    return (unsigned int)v3;
  }
  *((_DWORD *)v14 + 4) = 1953656900;
  *((_DWORD *)v14 + 5) = 13;
  *(_OWORD *)(v14 + 24) = *(_OWORD *)a2;
  v20 = (KSPIN_LOCK *)(v4 + 2176);
  if ( KeGetCurrentIrql() >= 2u )
  {
    KeAcquireInStackQueuedSpinLockAtDpcLevel(v20, &LockHandle);
  }
  else
  {
    v6 = 1;
    KeAcquireInStackQueuedSpinLock(v20, &LockHandle);
  }
  v21 = (PVOID *)*((_QWORD *)v4 + 274);
  *v5 = v4 + 2184;
  v5[1] = v21;
  if ( *v21 != v4 + 2184 )
    __fastfail(3u);
  *v21 = v5;
  *((_QWORD *)v4 + 274) = v5;
  v12 = v4[2200] == 0;
  v4[2200] = 1;
  v7 = v12;
  if ( v6 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  else
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( v7 )
  {
    WorkItem = IoAllocateWorkItem(v9);
    v27 = WorkItem;
    if ( !WorkItem )
    {
      LODWORD(v3) = -1073741670;
      v28 = (_QWORD *)WdLogNewEntry5_WdLowResource(v24, v23, v25, v26);
      v28[3] = DpIndicateChildStatus;
      v28[4] = IoAllocateWorkItem;
      v28[5] = -1073741670LL;
      WdLogEvent5_WdLowResource(v28);
LABEL_40:
      if ( v7 )
      {
        v36 = (KSPIN_LOCK *)(v4 + 2176);
        if ( v6 )
          KeAcquireInStackQueuedSpinLock(v36, &LockHandle);
        else
          KeAcquireInStackQueuedSpinLockAtDpcLevel(v36, &LockHandle);
        v37 = *v5;
        v38 = (_QWORD *)v5[1];
        if ( *(_QWORD **)(*v5 + 8LL) != v5 || (_QWORD *)*v38 != v5 )
          __fastfail(3u);
        *v38 = v37;
        *(_QWORD *)(v37 + 8) = v38;
        v4[2200] = 0;
        if ( v6 )
          KeReleaseInStackQueuedSpinLock(&LockHandle);
        else
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        ExFreeToNPagedLookasideList(&Lookaside, v5);
      }
      return (unsigned int)v3;
    }
    v29 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)v4 + 2, WorkItem, &File, 1u, 0x20u);
    v3 = v29;
    if ( v29 >= 0 )
    {
      IoQueueWorkItemEx(v27, DpiPdoHandleStatusIndication, DelayedWorkQueue, 0LL);
    }
    else
    {
      v34 = WdLogNewEntry5_WdWarning(v31, v30, v32, v33);
      *(_QWORD *)(v34 + 24) = DpIndicateChildStatus;
      *(_QWORD *)(v34 + 32) = v3;
      WdLogEvent5_WdWarning(v34);
      IoFreeWorkItem(v27);
    }
LABEL_39:
    if ( (int)v3 >= 0 )
      return (unsigned int)v3;
    goto LABEL_40;
  }
  return (unsigned int)v3;
}
