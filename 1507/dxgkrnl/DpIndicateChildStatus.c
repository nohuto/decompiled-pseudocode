/*
 * XREFs of DpIndicateChildStatus @ 0x1C0022B50
 * Callers:
 *     DpiMiracastTearDownAssociation @ 0x1C0025B74 (DpiMiracastTearDownAssociation.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x1C0023090 (ExAllocateFromNPagedLookasideList.c)
 *     ExFreeToNPagedLookasideList @ 0x1C00230C4 (ExFreeToNPagedLookasideList.c)
 *     Template_pqqtq @ 0x1C002310C (Template_pqqtq.c)
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
  __int64 v15; // rcx
  _QWORD *v16; // rax
  KSPIN_LOCK *v17; // rcx
  PVOID *v18; // rdx
  PIO_WORKITEM WorkItem; // rax
  __int64 v20; // rcx
  struct _IO_WORKITEM *v21; // rbx
  _QWORD *v22; // rax
  NTSTATUS v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  _QWORD *v29; // rax
  KSPIN_LOCK *v30; // rcx
  __int64 v31; // rcx
  _QWORD *v32; // rax
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
    v29 = (_QWORD *)WdLogNewEntry5_WdError(DeviceObject);
    v29[4] = 0LL;
    v29[3] = DpIndicateChildStatus;
    v29[5] = -1073741811LL;
    WdLogEvent5_WdError(v29);
    goto LABEL_39;
  }
  v4 = *(char **)(DeviceObject + 64);
  if ( !v4 || *((_DWORD *)v4 + 4) != 1953656900 || *((_DWORD *)v4 + 5) != 2 )
    goto LABEL_12;
  DeviceObject = *a2;
  if ( (_DWORD)DeviceObject == 3 )
  {
    if ( !*((_QWORD *)v4 + 232) )
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
    if ( *((_DWORD *)v4 + 462) != a2[1] )
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
    v12 = *((_DWORD *)v4 + 462) == a2[1];
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
    v16 = (_QWORD *)WdLogNewEntry5_WdLowResource(v15);
    v16[3] = DpIndicateChildStatus;
    v16[4] = ExAllocateFromNPagedLookasideList;
    v16[5] = -1073741670LL;
    WdLogEvent5_WdLowResource(v16);
    return (unsigned int)v3;
  }
  *((_DWORD *)v14 + 4) = 1953656900;
  *((_DWORD *)v14 + 5) = 13;
  *(_OWORD *)(v14 + 24) = *(_OWORD *)a2;
  v17 = (KSPIN_LOCK *)(v4 + 2136);
  if ( KeGetCurrentIrql() >= 2u )
  {
    KeAcquireInStackQueuedSpinLockAtDpcLevel(v17, &LockHandle);
  }
  else
  {
    v6 = 1;
    KeAcquireInStackQueuedSpinLock(v17, &LockHandle);
  }
  v18 = (PVOID *)*((_QWORD *)v4 + 269);
  *v5 = v4 + 2144;
  v5[1] = v18;
  if ( *v18 != v4 + 2144 )
    __fastfail(3u);
  *v18 = v5;
  *((_QWORD *)v4 + 269) = v5;
  v12 = v4[2160] == 0;
  v4[2160] = 1;
  v7 = v12;
  if ( v6 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  else
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( v7 )
  {
    WorkItem = IoAllocateWorkItem(v9);
    v21 = WorkItem;
    if ( !WorkItem )
    {
      LODWORD(v3) = -1073741670;
      v22 = (_QWORD *)WdLogNewEntry5_WdLowResource(v20);
      v22[3] = DpIndicateChildStatus;
      v22[4] = IoAllocateWorkItem;
      v22[5] = -1073741670LL;
      WdLogEvent5_WdLowResource(v22);
LABEL_40:
      if ( v7 )
      {
        v30 = (KSPIN_LOCK *)(v4 + 2136);
        if ( v6 )
          KeAcquireInStackQueuedSpinLock(v30, &LockHandle);
        else
          KeAcquireInStackQueuedSpinLockAtDpcLevel(v30, &LockHandle);
        v31 = *v5;
        v32 = (_QWORD *)v5[1];
        if ( *(_QWORD **)(*v5 + 8LL) != v5 || (_QWORD *)*v32 != v5 )
          __fastfail(3u);
        *v32 = v31;
        *(_QWORD *)(v31 + 8) = v32;
        v4[2160] = 0;
        if ( v6 )
          KeReleaseInStackQueuedSpinLock(&LockHandle);
        else
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        ExFreeToNPagedLookasideList(&Lookaside, v5);
      }
      return (unsigned int)v3;
    }
    v23 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)v4 + 2, WorkItem, &File, 1u, 0x20u);
    v3 = v23;
    if ( v23 >= 0 )
    {
      IoQueueWorkItemEx(v21, DpiPdoHandleStatusIndication, DelayedWorkQueue, 0LL);
    }
    else
    {
      v28 = WdLogNewEntry5_WdWarning(v25, v24, v26, v27);
      *(_QWORD *)(v28 + 24) = DpIndicateChildStatus;
      *(_QWORD *)(v28 + 32) = v3;
      WdLogEvent5_WdWarning(v28);
      IoFreeWorkItem(v21);
    }
LABEL_39:
    if ( (int)v3 >= 0 )
      return (unsigned int)v3;
    goto LABEL_40;
  }
  return (unsigned int)v3;
}
