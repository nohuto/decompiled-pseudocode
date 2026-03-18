/*
 * XREFs of DpIndicateChildStatus @ 0x1C0029560
 * Callers:
 *     DpiMiracastTearDownAssociation @ 0x1C002CA34 (DpiMiracastTearDownAssociation.c)
 * Callees:
 *     IsInternalVideoOutput @ 0x1C000B478 (IsInternalVideoOutput.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1C0029AD0 (ExAllocateFromNPagedLookasideList.c)
 *     ExFreeToNPagedLookasideList @ 0x1C0029B04 (ExFreeToNPagedLookasideList.c)
 *     Template_pqqtq @ 0x1C0029B4C (Template_pqqtq.c)
 */

__int64 __fastcall DpIndicateChildStatus(PDEVICE_OBJECT DeviceObject, int *a2)
{
  __int64 v2; // rdi
  char *DeviceExtension; // rsi
  _QWORD *v4; // r14
  char v5; // r12
  bool v6; // r15
  _OWORD *v9; // r15
  int v10; // r8d
  int v11; // edx
  __int64 v12; // rax
  bool v14; // zf
  int v15; // ecx
  char *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  KSPIN_LOCK *v19; // rcx
  PVOID *v20; // rcx
  PIO_WORKITEM WorkItem; // rax
  __int64 v22; // rcx
  struct _IO_WORKITEM *v23; // rbx
  __int64 v24; // rax
  NTSTATUS v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  __int64 v31; // rax
  KSPIN_LOCK *v32; // rcx
  __int64 v33; // rcx
  _QWORD *v34; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-39h] BYREF
  _QWORD v36[8]; // [rsp+68h] [rbp-19h] BYREF

  LODWORD(v2) = 0;
  DeviceExtension = 0LL;
  v4 = 0LL;
  v5 = 0;
  v6 = 0;
  if ( !DeviceObject || !a2 )
  {
    LODWORD(v2) = -1073741811;
    v31 = WdLogNewEntry5_WdError(DeviceObject);
    *(_QWORD *)(v31 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v31);
    goto LABEL_46;
  }
  DeviceExtension = (char *)DeviceObject->DeviceExtension;
  if ( !DeviceExtension || *((_DWORD *)DeviceExtension + 4) != 1953656900 || *((_DWORD *)DeviceExtension + 5) != 2 )
    goto LABEL_12;
  v9 = v36;
  memset(v36, 0, sizeof(v36));
  EtwActivityIdControl(3u, (LPGUID)&v36[1]);
  v11 = *a2;
  v36[7] = MEMORY[0xFFFFF78000000014];
  LODWORD(v36[4]) = v11;
  LODWORD(v36[3]) = 12;
  if ( *((_QWORD *)DeviceExtension + 620) )
    v9 = (_OWORD *)*((_QWORD *)DeviceExtension + 620);
  if ( v11 == 3 )
  {
    if ( DeviceExtension[1143] && *((_DWORD *)DeviceExtension + 758) == -1 )
    {
      if ( IsInternalVideoOutput(a2[3]) )
        goto LABEL_12;
      v14 = (_DWORD)DeviceObject == 15;
    }
    else
    {
      if ( !*((_QWORD *)DeviceExtension + 380) )
      {
        LODWORD(v2) = -1073741637;
        v12 = WdLogNewEntry5_WdError(DeviceObject);
        *(_QWORD *)(v12 + 24) = -1073741637LL;
        goto LABEL_13;
      }
      if ( *((_DWORD *)DeviceExtension + 758) != a2[1] || IsInternalVideoOutput(a2[3]) )
      {
LABEL_12:
        LODWORD(v2) = -1073741811;
        v12 = WdLogNewEntry5_WdError(DeviceObject);
        *(_QWORD *)(v12 + 24) = -1073741811LL;
LABEL_13:
        WdLogEvent5_WdError(v12);
        return (unsigned int)v2;
      }
      v14 = (_DWORD)DeviceObject == 16;
    }
  }
  else
  {
    if ( v11 != 1 )
      goto LABEL_17;
    v14 = *((_DWORD *)DeviceExtension + 758) == a2[1];
  }
  if ( v14 )
    goto LABEL_12;
LABEL_17:
  if ( v11 == 3 )
    v15 = a2[3];
  else
    v15 = -2;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000) != 0 )
    Template_pqqtq(v15, v11, v10, (_DWORD)DeviceObject, a2[1], v11, *((_BYTE *)a2 + 8), v15);
  v16 = (char *)ExAllocateFromNPagedLookasideList(&Lookaside);
  v4 = v16;
  if ( !v16 )
  {
    LODWORD(v2) = -1073741670;
    v18 = WdLogNewEntry5_WdLowResource(v17);
    *(_QWORD *)(v18 + 24) = -1073741670LL;
    WdLogEvent5_WdLowResource(v18);
    return (unsigned int)v2;
  }
  *((_DWORD *)v16 + 4) = 1953656900;
  *((_DWORD *)v16 + 5) = 13;
  *(_OWORD *)(v16 + 24) = *(_OWORD *)a2;
  *(_OWORD *)(v16 + 40) = *v9;
  *(_OWORD *)(v16 + 56) = v9[1];
  *(_OWORD *)(v16 + 72) = v9[2];
  *(_OWORD *)(v16 + 88) = v9[3];
  v19 = (KSPIN_LOCK *)(DeviceExtension + 3320);
  if ( KeGetCurrentIrql() >= 2u )
  {
    KeAcquireInStackQueuedSpinLockAtDpcLevel(v19, &LockHandle);
  }
  else
  {
    v5 = 1;
    KeAcquireInStackQueuedSpinLock(v19, &LockHandle);
  }
  v20 = (PVOID *)*((_QWORD *)DeviceExtension + 417);
  if ( *v20 != DeviceExtension + 3328 )
    __fastfail(3u);
  v4[1] = v20;
  *v4 = DeviceExtension + 3328;
  *v20 = v4;
  *((_QWORD *)DeviceExtension + 417) = v4;
  v14 = DeviceExtension[3344] == 0;
  DeviceExtension[3344] = 1;
  v6 = v14;
  if ( v5 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  else
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( v6 )
  {
    WorkItem = IoAllocateWorkItem(DeviceObject);
    v23 = WorkItem;
    if ( !WorkItem )
    {
      LODWORD(v2) = -1073741670;
      v24 = WdLogNewEntry5_WdLowResource(v22);
      *(_QWORD *)(v24 + 24) = -1073741670LL;
      WdLogEvent5_WdLowResource(v24);
LABEL_47:
      if ( v6 )
      {
        v32 = (KSPIN_LOCK *)(DeviceExtension + 3320);
        if ( v5 )
          KeAcquireInStackQueuedSpinLock(v32, &LockHandle);
        else
          KeAcquireInStackQueuedSpinLockAtDpcLevel(v32, &LockHandle);
        v33 = *v4;
        v34 = (_QWORD *)v4[1];
        if ( *(_QWORD **)(*v4 + 8LL) != v4 || (_QWORD *)*v34 != v4 )
          __fastfail(3u);
        *v34 = v33;
        *(_QWORD *)(v33 + 8) = v34;
        DeviceExtension[3344] = 0;
        if ( v5 )
          KeReleaseInStackQueuedSpinLock(&LockHandle);
        else
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        ExFreeToNPagedLookasideList(&Lookaside, v4);
      }
      return (unsigned int)v2;
    }
    v25 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)DeviceExtension + 2, WorkItem, &File, 1u, 0x20u);
    v2 = v25;
    if ( v25 >= 0 )
    {
      IoQueueWorkItemEx(v23, DpiPdoHandleStatusIndication, DelayedWorkQueue, 0LL);
    }
    else
    {
      v30 = WdLogNewEntry5_WdWarning(v27, v26, v28, v29);
      *(_QWORD *)(v30 + 24) = v2;
      WdLogEvent5_WdWarning(v30);
      IoFreeWorkItem(v23);
    }
LABEL_46:
    if ( (int)v2 >= 0 )
      return (unsigned int)v2;
    goto LABEL_47;
  }
  return (unsigned int)v2;
}
