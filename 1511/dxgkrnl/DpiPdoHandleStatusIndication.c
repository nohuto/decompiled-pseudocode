/*
 * XREFs of DpiPdoHandleStatusIndication @ 0x1C0028470
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkDiagInitializeCodePointPacket@@YAXPEAU_DXGK_DIAG_CODE_POINT_PACKET@@W4_DXGK_DIAG_CODE_POINT_TYPE@@III@Z @ 0x1C000A24C (-DxgkDiagInitializeCodePointPacket@@YAXPEAU_DXGK_DIAG_CODE_POINT_PACKET@@W4_DXGK_DIAG_CODE_POINT.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000DC2C (DpiCheckForOutstandingD3Requests.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ExFreeToNPagedLookasideList @ 0x1C0022FC4 (ExFreeToNPagedLookasideList.c)
 *     DxgkWriteDiagEntry @ 0x1C00A68F0 (DxgkWriteDiagEntry.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C00A9EA8 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00A9F1C (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiPdoHandleChildConnectionChange @ 0x1C00E2F00 (DpiPdoHandleChildConnectionChange.c)
 *     DxgkInvalidateVidPnDisplayModeListCache @ 0x1C0130500 (DxgkInvalidateVidPnDisplayModeListCache.c)
 *     MonitorRebuildMonitorModeListCache @ 0x1C0186F98 (MonitorRebuildMonitorModeListCache.c)
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
  __int64 v13; // rdx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  _QWORD *v17; // rax
  char v18; // r15
  _QWORD *v19; // rax
  int v20; // r14d
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  int v24; // [rsp+20h] [rbp-D8h]
  union _LARGE_INTEGER *v25; // [rsp+28h] [rbp-D0h]
  struct _KLOCK_QUEUE_HANDLE v26; // [rsp+40h] [rbp-B8h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-A0h] BYREF
  _DWORD v28[16]; // [rsp+70h] [rbp-88h] BYREF

  v3 = IoObject[8];
  KeEnterCriticalRegion();
  if ( *(_BYTE *)(v3 + 483) )
    DpiCheckForOutstandingD3Requests(v3);
  ExAcquireResourceSharedLite(*(PERESOURCE *)(v3 + 168), 1u);
  v6 = (__int64 **)(v3 + 2184);
  while ( 1 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v3 + 2176), &LockHandle);
    if ( *v6 == (__int64 *)v6 )
    {
      v7 = 0LL;
      *(_BYTE *)(v3 + 2200) = 0;
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
    if ( *(_DWORD *)(v3 + 236) == 2 && *(_DWORD *)(v3 + 2624) != 1 && *(_DWORD *)(v3 + 284) == 1 )
    {
      memset(v28, 0, sizeof(v28));
      DxgkDiagInitializeCodePointPacket(
        v28,
        39,
        (unsigned int)IoObject & 0xFFFF00 | v7[3] & 3,
        *((_DWORD *)v7 + 7),
        *((unsigned __int8 *)v7 + 32));
      DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v28);
      v14 = *((_DWORD *)v7 + 6);
      if ( v14 )
      {
        v15 = v14 - 1;
        if ( v15 )
        {
          v16 = v15 - 1;
          if ( !v16 )
          {
            v19 = (_QWORD *)WdLogNewEntry5_WdEvent();
            v19[3] = *((unsigned int *)v7 + 7);
            v19[4] = IoObject;
            v19[5] = *((unsigned __int8 *)v7 + 32);
            WdLogEvent5_WdEvent(v19);
            goto LABEL_31;
          }
          if ( v16 != 1 )
            goto LABEL_31;
        }
        v17 = (_QWORD *)WdLogNewEntry5_WdEvent();
        v17[3] = *((unsigned int *)v7 + 7);
        v17[4] = IoObject;
        v17[5] = *((unsigned __int8 *)v7 + 32);
        WdLogEvent5_WdEvent(v17);
        v18 = *((_BYTE *)v7 + 32);
        if ( *((_DWORD *)v7 + 6) != 1 )
        {
          v20 = *((_DWORD *)v7 + 9);
          KeAcquireInStackQueuedSpinLock(&qword_1C0047008, &v26);
          v21 = *(_QWORD *)(v3 + 1896);
          if ( v21 && v18 )
            *(_DWORD *)(v21 + 556) = v20;
          KeReleaseInStackQueuedSpinLock(&v26);
        }
        LOBYTE(v25) = 0;
        LOBYTE(v24) = 0;
        if ( !(unsigned int)DpiPdoHandleChildConnectionChange((int)IoObject, v24, v25, 1) )
        {
          _m_prefetchw((const void *)(v3 + 2292));
          if ( (_InterlockedOr((volatile signed __int32 *)(v3 + 2292), 1u) & 1) == 0 )
            IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(v3 + 152), BusRelations);
        }
      }
      else if ( *(_BYTE *)(v3 + 1091) )
      {
        LOBYTE(v13) = 1;
        if ( (int)DpiAcquireCoreSyncAccessSafe(IoObject, v13) >= 0 )
        {
          DxgkInvalidateVidPnDisplayModeListCache(*(_QWORD *)(v3 + 2544));
          MonitorRebuildMonitorModeListCache(*(struct DXGADAPTER **)(v3 + 2544));
          LOBYTE(v22) = 1;
          DpiReleaseCoreSyncAccessSafe(IoObject, v22);
        }
      }
    }
    else
    {
      v23 = WdLogNewEntry5_WdWarning(v10, v9, v11, v12);
      *(_QWORD *)(v23 + 24) = DpiPdoHandleStatusIndication;
      *(_QWORD *)(v23 + 32) = *(int *)(v3 + 236);
      WdLogEvent5_WdWarning(v23);
    }
LABEL_31:
    ExFreeToNPagedLookasideList(&Lookaside, v7);
  }
  IoFreeWorkItem(IoWorkItem);
  if ( *(_BYTE *)(v3 + 483) )
    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v3 + 24) + 64LL) + 2720LL));
  ExReleaseResourceLite(*(PERESOURCE *)(v3 + 168));
  KeLeaveCriticalRegion();
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v3 + 64), IoWorkItem, 0x20u);
}
