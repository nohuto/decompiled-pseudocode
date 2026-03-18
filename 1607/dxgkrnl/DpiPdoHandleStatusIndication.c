/*
 * XREFs of DpiPdoHandleStatusIndication @ 0x1C002F8D0
 * Callers:
 *     <none>
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x1C000EA98 (DpiCheckForOutstandingD3Requests.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ExFreeToNPagedLookasideList @ 0x1C0029B04 (ExFreeToNPagedLookasideList.c)
 *     DxgkWriteDiagEntry @ 0x1C00C0600 (DxgkWriteDiagEntry.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C00C1EE4 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00C1F58 (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiPdoHandleChildConnectionChange @ 0x1C00EF2B8 (DpiPdoHandleChildConnectionChange.c)
 *     DxgkInvalidateVidPnDisplayModeListCache @ 0x1C0149BE0 (DxgkInvalidateVidPnDisplayModeListCache.c)
 *     MonitorRebuildMonitorModeListCache @ 0x1C01B0908 (MonitorRebuildMonitorModeListCache.c)
 */

void __fastcall DpiPdoHandleStatusIndication(_QWORD *IoObject, PVOID Context, PIO_WORKITEM IoWorkItem)
{
  __int64 v3; // rbx
  __int64 **v6; // rsi
  __int64 *v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // ecx
  int v14; // eax
  __int64 v15; // rdx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  _QWORD *v19; // rax
  char v20; // r12
  _QWORD *v21; // rax
  int v22; // r15d
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  int v26; // [rsp+20h] [rbp-79h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-59h] BYREF
  struct _KLOCK_QUEUE_HANDLE v28; // [rsp+58h] [rbp-41h] BYREF
  _QWORD v29[8]; // [rsp+70h] [rbp-29h] BYREF

  v3 = IoObject[8];
  KeEnterCriticalRegion();
  if ( *(_BYTE *)(v3 + 483) )
    DpiCheckForOutstandingD3Requests(v3);
  ExAcquireResourceSharedLite(*(PERESOURCE *)(v3 + 168), 1u);
  v6 = (__int64 **)(v3 + 3328);
  while ( 1 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v3 + 3320), &LockHandle);
    if ( *v6 == (__int64 *)v6 )
    {
      v7 = 0LL;
      *(_BYTE *)(v3 + 3344) = 0;
    }
    else
    {
      v7 = *v6;
      v8 = **v6;
      if ( (__int64 **)(*v6)[1] != v6 || *(__int64 **)(v8 + 8) != v7 )
        __fastfail(3u);
      *v6 = (__int64 *)v8;
      *(_QWORD *)(v8 + 8) = v6;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( !v7 )
      break;
    if ( *(_DWORD *)(v3 + 236) == 2 && *(_DWORD *)(v3 + 3768) != 1 && *(_DWORD *)(v3 + 284) == 1 )
    {
      memset(v29, 0, sizeof(v29));
      v13 = *((_DWORD *)v7 + 6);
      memset(&v29[1], 0, 36);
      v29[0] = 0x4000000006LL;
      LODWORD(v29[7]) = *((_DWORD *)v7 + 7);
      v14 = *((unsigned __int8 *)v7 + 32);
      HIDWORD(v29[6]) = (unsigned int)IoObject & 0xFFFF00 | v13 & 3;
      HIDWORD(v29[7]) = v14;
      LODWORD(v29[6]) = 39;
      DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v29);
      v16 = *((_DWORD *)v7 + 6);
      if ( v16 )
      {
        v17 = v16 - 1;
        if ( v17 )
        {
          v18 = v17 - 1;
          if ( !v18 )
          {
            v21 = (_QWORD *)WdLogNewEntry5_WdEvent();
            v21[3] = *((unsigned int *)v7 + 7);
            v21[4] = IoObject;
            v21[5] = *((unsigned __int8 *)v7 + 32);
            WdLogEvent5_WdEvent(v21);
            goto LABEL_31;
          }
          if ( v18 != 1 )
            goto LABEL_31;
        }
        v19 = (_QWORD *)WdLogNewEntry5_WdEvent();
        v19[3] = *((unsigned int *)v7 + 7);
        v19[4] = IoObject;
        v19[5] = *((unsigned __int8 *)v7 + 32);
        WdLogEvent5_WdEvent(v19);
        v20 = *((_BYTE *)v7 + 32);
        if ( *((_DWORD *)v7 + 6) != 1 )
        {
          v22 = *((_DWORD *)v7 + 9);
          KeAcquireInStackQueuedSpinLock(&qword_1C00571C8, &v28);
          v23 = *(_QWORD *)(v3 + 3040);
          if ( v23 && v20 )
            *(_DWORD *)(v23 + 684) = v22;
          KeReleaseInStackQueuedSpinLock(&v28);
        }
        LOBYTE(v26) = 0;
        if ( !(unsigned int)DpiPdoHandleChildConnectionChange((_DWORD)IoObject, v26, 0, 1u, (__int64)(v7 + 5)) )
        {
          _m_prefetchw((const void *)(v3 + 3436));
          if ( (_InterlockedOr((volatile signed __int32 *)(v3 + 3436), 1u) & 1) == 0 )
            IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(v3 + 152), BusRelations);
        }
      }
      else if ( *(_BYTE *)(v3 + 1139) )
      {
        LOBYTE(v15) = 1;
        if ( (int)DpiAcquireCoreSyncAccessSafe(IoObject, v15) >= 0 )
        {
          DxgkInvalidateVidPnDisplayModeListCache(*(_QWORD *)(v3 + 3688));
          MonitorRebuildMonitorModeListCache(*(struct DXGADAPTER **)(v3 + 3688));
          LOBYTE(v24) = 1;
          DpiReleaseCoreSyncAccessSafe(IoObject, v24);
        }
      }
    }
    else
    {
      v25 = WdLogNewEntry5_WdWarning(v10, v9, v11, v12);
      *(_QWORD *)(v25 + 24) = *(int *)(v3 + 236);
      WdLogEvent5_WdWarning(v25);
    }
LABEL_31:
    ExFreeToNPagedLookasideList(&Lookaside, v7);
  }
  IoFreeWorkItem(IoWorkItem);
  if ( *(_BYTE *)(v3 + 483) )
    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v3 + 24) + 64LL) + 3872LL));
  ExReleaseResourceLite(*(PERESOURCE *)(v3 + 168));
  KeLeaveCriticalRegion();
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v3 + 64), IoWorkItem, 0x20u);
}
