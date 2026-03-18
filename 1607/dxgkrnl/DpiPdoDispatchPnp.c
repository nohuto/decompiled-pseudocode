/*
 * XREFs of DpiPdoDispatchPnp @ 0x1C00D8440
 * Callers:
 *     <none>
 * Callees:
 *     DpiEnableD3Requests @ 0x1C000C484 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000EA98 (DpiCheckForOutstandingD3Requests.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C00C1EE4 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00C1F58 (DpiAcquireCoreSyncAccessSafe.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1C00DF65C (DxgkAcquireAdapterDdiSync.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1C00DF68C (DxgkReleaseAdapterDdiSync.c)
 *     DpiTestQueryInterface @ 0x1C00EA2B4 (DpiTestQueryInterface.c)
 *     ?DpiBrightnessQueryInterface@@YAJPEAU_DEVICE_OBJECT@@PEAU_QUERY_INTERFACE@@@Z @ 0x1C00EA314 (-DpiBrightnessQueryInterface@@YAJPEAU_DEVICE_OBJECT@@PEAU_QUERY_INTERFACE@@@Z.c)
 *     DpiDxgkDdiQueryInterface @ 0x1C00EBAF8 (DpiDxgkDdiQueryInterface.c)
 *     DpiPdoHandleStopDevice @ 0x1C019C000 (DpiPdoHandleStopDevice.c)
 */

__int64 __fastcall DpiPdoDispatchPnp(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  __int64 v4; // rbx
  int Status; // edi
  UCHAR MinorFunction; // cl
  __int64 (__fastcall *v8)(__int64); // rax
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  __int64 v13; // r12
  __int64 v14; // r13
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  bool v19; // zf
  int v20; // eax
  int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rax
  struct _IO_REMOVE_LOCK *v25; // rcx
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rax
  _QUERY_INTERFACE v29; // [rsp+20h] [rbp-30h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v4 = *(_QWORD *)(a1 + 64);
  Status = -1073741637;
  MinorFunction = CurrentStackLocation->MinorFunction;
  if ( MinorFunction < 0x18u )
  {
    v8 = *(__int64 (__fastcall **)(__int64))(v4 + 8LL * MinorFunction + 288);
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
      v19 = *(_QWORD *)(v13 + 256) == 0LL;
      v29.InterfaceType = CurrentStackLocation->Parameters.QueryInterface.InterfaceType;
      v29.Size = CurrentStackLocation->Parameters.QueryInterface.Size;
      v29.Version = CurrentStackLocation->Parameters.QueryInterface.Version;
      v29.Interface = CurrentStackLocation->Parameters.QueryInterface.Interface;
      v29.InterfaceSpecificData = CurrentStackLocation->Parameters.CreatePipe.Parameters;
      v29.DeviceUid = *(_DWORD *)(v4 + 504);
      if ( v19 )
        goto LABEL_21;
      if ( (int)DpiAcquireCoreSyncAccessSafe(a1, 1) >= 0 )
      {
        Status = DpiBrightnessQueryInterface(*(PVOID *)(v4 + 32), &v29);
        if ( Status == -1073741198 )
        {
          DxgkAcquireAdapterDdiSync(*(_QWORD *)(v14 + 3688), 1LL);
          Status = DpiDxgkDdiQueryInterface(v13, *(_QWORD *)(v4 + 48), &v29);
          DxgkReleaseAdapterDdiSync(*(_QWORD *)(v14 + 3688));
        }
        DpiReleaseCoreSyncAccessSafe(a1, 1);
      }
      if ( Status == -1073741637 )
LABEL_21:
        Status = DpiTestQueryInterface(a1, &v29);
      if ( Status >= 0 )
      {
        CurrentStackLocation->Parameters.WMI.ProviderId = (ULONG_PTR)v29.InterfaceType;
        CurrentStackLocation->Parameters.QueryInterface.Size = v29.Size;
        CurrentStackLocation->Parameters.QueryInterface.Version = v29.Version;
        CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart = (LONGLONG)v29.Interface;
        CurrentStackLocation->Parameters.CreatePipe.Parameters = (PNAMED_PIPE_CREATE_PARAMETERS)v29.InterfaceSpecificData;
      }
LABEL_4:
      if ( Status != -1073741637 )
        goto LABEL_5;
LABEL_6:
      Status = a2->IoStatus.Status;
      goto LABEL_5;
    }
    v15 = MinorFunction - 1;
    if ( !v15 )
    {
      KeEnterCriticalRegion();
      if ( *(_BYTE *)(v4 + 483) )
        DpiCheckForOutstandingD3Requests(v4);
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v4 + 168), 1u);
      *(_DWORD *)(v4 + 4LL * (*(_DWORD *)(v4 + 276) & 7) + 244) = *(_DWORD *)(v4 + 240);
      v21 = *(_DWORD *)(v4 + 236);
      ++*(_DWORD *)(v4 + 276);
      *(_DWORD *)(v4 + 236) = 5;
      goto LABEL_37;
    }
    v16 = v15 - 1;
    if ( !v16 )
    {
      if ( *(_DWORD *)(v4 + 240) == 2 )
        DpiPdoHandleStopDevice(a1);
      v25 = (struct _IO_REMOVE_LOCK *)(v4 + 64);
      if ( *(_BYTE *)(v4 + 509) )
      {
        IoReleaseRemoveLockEx(v25, a2, 0x20u);
      }
      else
      {
        IoReleaseRemoveLockAndWaitEx(v25, a2, 0x20u);
        IoQueueWorkItem(*(PIO_WORKITEM *)(v4 + 952), DpiPdoDestroyPdo, DelayedWorkQueue, 0LL);
      }
      v26 = *(_DWORD *)(v4 + 276) & 7;
      *(_DWORD *)(v4 + 4 * v26 + 244) = *(_DWORD *)(v4 + 240);
      v27 = *(_DWORD *)(v4 + 236);
      ++*(_DWORD *)(v4 + 276);
      *(_DWORD *)(v4 + 240) = v27;
      *(_DWORD *)(v4 + 236) = 7;
      v28 = WdLogNewEntry5_WdEvent(v26);
      *(_QWORD *)(v28 + 24) = a1;
      WdLogEvent5_WdEvent(v28);
      goto LABEL_24;
    }
    v17 = v16 - 1;
    if ( v17 )
    {
      v18 = v17 - 2;
      if ( !v18 )
      {
        KeEnterCriticalRegion();
        if ( *(_BYTE *)(v4 + 483) )
          DpiCheckForOutstandingD3Requests(v4);
        ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v4 + 168), 1u);
        *(_DWORD *)(v4 + 4LL * (*(_DWORD *)(v4 + 276) & 7) + 244) = *(_DWORD *)(v4 + 240);
        v21 = *(_DWORD *)(v4 + 236);
        ++*(_DWORD *)(v4 + 276);
        *(_DWORD *)(v4 + 236) = 3;
        goto LABEL_37;
      }
      if ( v18 != 1 )
        goto LABEL_12;
      KeEnterCriticalRegion();
      if ( *(_BYTE *)(v4 + 483) )
        DpiCheckForOutstandingD3Requests(v4);
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v4 + 168), 1u);
      v19 = *(_DWORD *)(v4 + 236) == 3;
    }
    else
    {
      KeEnterCriticalRegion();
      if ( *(_BYTE *)(v4 + 483) )
        DpiCheckForOutstandingD3Requests(v4);
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v4 + 168), 1u);
      v19 = *(_DWORD *)(v4 + 236) == 5;
    }
    if ( !v19 )
    {
LABEL_38:
      Status = 0;
      goto LABEL_40;
    }
    v20 = *(_DWORD *)(v4 + 240);
    --*(_DWORD *)(v4 + 276);
    *(_DWORD *)(v4 + 236) = v20;
    v21 = *(_DWORD *)(v4 + 4LL * (*(_DWORD *)(v4 + 276) & 7) + 244);
LABEL_37:
    *(_DWORD *)(v4 + 240) = v21;
    goto LABEL_38;
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
  if ( *(_BYTE *)(v4 + 483) )
    DpiCheckForOutstandingD3Requests(v4);
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v4 + 168), 1u);
  Status = 0;
  v22 = *(_DWORD *)(v4 + 276) & 7;
  *(_DWORD *)(v4 + 4 * v22 + 244) = *(_DWORD *)(v4 + 240);
  v23 = *(_DWORD *)(v4 + 236);
  ++*(_DWORD *)(v4 + 276);
  *(_DWORD *)(v4 + 240) = v23;
  *(_DWORD *)(v4 + 236) = 6;
  v24 = WdLogNewEntry5_WdEvent(v22);
  *(_QWORD *)(v24 + 24) = a1;
  WdLogEvent5_WdEvent(v24);
LABEL_40:
  if ( *(_BYTE *)(v4 + 483) )
    DpiEnableD3Requests(*(_QWORD *)(v4 + 24));
  ExReleaseResourceLite(*(PERESOURCE *)(v4 + 168));
  KeLeaveCriticalRegion();
LABEL_5:
  a2->IoStatus.Status = Status;
  IofCompleteRequest(a2, 0);
  return (unsigned int)Status;
}
