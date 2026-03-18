/*
 * XREFs of DpiPdoDispatchPnp @ 0x1C005E640
 * Callers:
 *     <none>
 * Callees:
 *     DpiEnableD3Requests @ 0x1C0005A7C (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000C824 (DpiCheckForOutstandingD3Requests.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C0061D64 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C0061DDC (DpiAcquireCoreSyncAccessSafe.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1C00BBA54 (DxgkAcquireAdapterDdiSync.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1C00BBBBC (DxgkReleaseAdapterDdiSync.c)
 *     DpiTestQueryInterface @ 0x1C00C5230 (DpiTestQueryInterface.c)
 *     ?DpiBrightnessQueryInterface@@YAJPEAU_DEVICE_OBJECT@@PEAU_QUERY_INTERFACE@@@Z @ 0x1C00C5290 (-DpiBrightnessQueryInterface@@YAJPEAU_DEVICE_OBJECT@@PEAU_QUERY_INTERFACE@@@Z.c)
 *     DpiDxgkDdiQueryInterface @ 0x1C00C68C8 (DpiDxgkDdiQueryInterface.c)
 *     DpiPdoHandleStopDevice @ 0x1C016DB60 (DpiPdoHandleStopDevice.c)
 */

__int64 __fastcall DpiPdoDispatchPnp(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  __int64 v4; // rbx
  IRP *v5; // rsi
  int Status; // edi
  UCHAR MinorFunction; // cl
  __int64 (__fastcall *v8)(__int64); // rax
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  __int64 v13; // r12
  __int64 v14; // r13
  __int64 v15; // rdx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  bool v20; // zf
  __int64 v21; // rax
  struct _IO_REMOVE_LOCK *v22; // rcx
  __int64 v23; // rax
  _QUERY_INTERFACE v24; // [rsp+20h] [rbp-30h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v4 = *(_QWORD *)(a1 + 64);
  v5 = a2;
  Status = -1073741637;
  MinorFunction = CurrentStackLocation->MinorFunction;
  if ( MinorFunction < 0x18u )
  {
    v8 = *(__int64 (__fastcall **)(__int64))(v4 + 8LL * MinorFunction + 256);
    if ( v8 )
    {
      Status = v8(a1);
      goto LABEL_4;
    }
  }
  if ( MinorFunction <= 8u )
  {
    if ( MinorFunction == 8 )
    {
      v13 = *(_QWORD *)(v4 + 40);
      v14 = *(_QWORD *)(*(_QWORD *)(v4 + 32) + 64LL);
      if ( a2->IoStatus.Status != -1073741637 )
        goto LABEL_6;
      v20 = *(_QWORD *)(v13 + 256) == 0LL;
      v24.InterfaceType = CurrentStackLocation->Parameters.QueryInterface.InterfaceType;
      v24.Size = CurrentStackLocation->Parameters.QueryInterface.Size;
      v24.Version = CurrentStackLocation->Parameters.QueryInterface.Version;
      v24.Interface = CurrentStackLocation->Parameters.QueryInterface.Interface;
      v24.InterfaceSpecificData = CurrentStackLocation->Parameters.CreatePipe.Parameters;
      v24.DeviceUid = *(_DWORD *)(v4 + 472);
      if ( v20 )
        goto LABEL_21;
      LOBYTE(a2) = 1;
      if ( (int)DpiAcquireCoreSyncAccessSafe(a1, a2) >= 0 )
      {
        Status = DpiBrightnessQueryInterface(*(PVOID *)(v4 + 32), &v24);
        if ( Status == -1073741198 )
        {
          DxgkAcquireAdapterDdiSync(*(_QWORD *)(v14 + 2504), 1LL);
          Status = DpiDxgkDdiQueryInterface(v13, *(_QWORD *)(v4 + 48), &v24);
          DxgkReleaseAdapterDdiSync(*(_QWORD *)(v14 + 2504));
        }
        LOBYTE(v15) = 1;
        DpiReleaseCoreSyncAccessSafe(a1, v15);
      }
      if ( Status == -1073741637 )
LABEL_21:
        Status = DpiTestQueryInterface(a1, &v24);
      if ( Status >= 0 )
      {
        CurrentStackLocation->Parameters.WMI.ProviderId = (ULONG_PTR)v24.InterfaceType;
        CurrentStackLocation->Parameters.QueryInterface.Size = v24.Size;
        CurrentStackLocation->Parameters.QueryInterface.Version = v24.Version;
        CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart = (LONGLONG)v24.Interface;
        CurrentStackLocation->Parameters.CreatePipe.Parameters = (PNAMED_PIPE_CREATE_PARAMETERS)v24.InterfaceSpecificData;
      }
LABEL_4:
      if ( Status != -1073741637 )
        goto LABEL_5;
LABEL_6:
      Status = v5->IoStatus.Status;
      goto LABEL_5;
    }
    v16 = MinorFunction - 1;
    if ( !v16 )
    {
      KeEnterCriticalRegion();
      if ( *(_BYTE *)(v4 + 451) )
        DpiCheckForOutstandingD3Requests(v4);
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v4 + 168), 1u);
      *(_DWORD *)(v4 + 240) = *(_DWORD *)(v4 + 236);
      *(_DWORD *)(v4 + 236) = 5;
      goto LABEL_37;
    }
    v17 = v16 - 1;
    if ( !v17 )
    {
      if ( *(_DWORD *)(v4 + 240) == 2 )
        DpiPdoHandleStopDevice(a1);
      v22 = (struct _IO_REMOVE_LOCK *)(v4 + 64);
      if ( *(_BYTE *)(v4 + 477) )
      {
        IoReleaseRemoveLockEx(v22, v5, 0x20u);
      }
      else
      {
        IoReleaseRemoveLockAndWaitEx(v22, v5, 0x20u);
        IoQueueWorkItem(*(PIO_WORKITEM *)(v4 + 920), DpiPdoDestroyPdo, DelayedWorkQueue, 0LL);
      }
      *(_DWORD *)(v4 + 240) = *(_DWORD *)(v4 + 236);
      *(_DWORD *)(v4 + 236) = 7;
      v23 = WdLogNewEntry5_WdEvent();
      *(_QWORD *)(v23 + 24) = &DpiPdoDispatchPnp;
      *(_QWORD *)(v23 + 32) = a1;
      WdLogEvent5_WdEvent(v23);
      goto LABEL_24;
    }
    v18 = v17 - 1;
    if ( v18 )
    {
      v19 = v18 - 2;
      if ( !v19 )
      {
        KeEnterCriticalRegion();
        if ( *(_BYTE *)(v4 + 451) )
          DpiCheckForOutstandingD3Requests(v4);
        ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v4 + 168), 1u);
        *(_DWORD *)(v4 + 240) = *(_DWORD *)(v4 + 236);
        *(_DWORD *)(v4 + 236) = 3;
        goto LABEL_37;
      }
      if ( v19 != 1 )
        goto LABEL_12;
      KeEnterCriticalRegion();
      if ( *(_BYTE *)(v4 + 451) )
        DpiCheckForOutstandingD3Requests(v4);
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v4 + 168), 1u);
      v20 = *(_DWORD *)(v4 + 236) == 3;
    }
    else
    {
      KeEnterCriticalRegion();
      if ( *(_BYTE *)(v4 + 451) )
        DpiCheckForOutstandingD3Requests(v4);
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v4 + 168), 1u);
      v20 = *(_DWORD *)(v4 + 236) == 5;
    }
    if ( v20 )
      *(_DWORD *)(v4 + 236) = *(_DWORD *)(v4 + 240);
LABEL_37:
    Status = 0;
    goto LABEL_39;
  }
  v10 = MinorFunction - 10;
  if ( !v10 )
  {
LABEL_12:
    Status = a2->IoStatus.Status;
    goto LABEL_4;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
LABEL_24:
    Status = 0;
    goto LABEL_5;
  }
  v12 = v11 - 11;
  if ( !v12 )
  {
    Status = -1073741823;
    goto LABEL_5;
  }
  if ( v12 != 1 )
    goto LABEL_12;
  KeEnterCriticalRegion();
  if ( *(_BYTE *)(v4 + 451) )
    DpiCheckForOutstandingD3Requests(v4);
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v4 + 168), 1u);
  Status = 0;
  *(_DWORD *)(v4 + 240) = *(_DWORD *)(v4 + 236);
  *(_DWORD *)(v4 + 236) = 6;
  v21 = WdLogNewEntry5_WdEvent();
  *(_QWORD *)(v21 + 24) = &DpiPdoDispatchPnp;
  *(_QWORD *)(v21 + 32) = a1;
  WdLogEvent5_WdEvent(v21);
LABEL_39:
  if ( *(_BYTE *)(v4 + 451) )
    DpiEnableD3Requests(*(_QWORD *)(v4 + 24));
  ExReleaseResourceLite(*(PERESOURCE *)(v4 + 168));
  KeLeaveCriticalRegion();
LABEL_5:
  v5->IoStatus.Status = Status;
  IofCompleteRequest(v5, 0);
  return (unsigned int)Status;
}
