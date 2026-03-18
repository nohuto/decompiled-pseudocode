/*
 * XREFs of DpiPdoDispatchPnp @ 0x1C00C3B20
 * Callers:
 *     <none>
 * Callees:
 *     DpiEnableD3Requests @ 0x1C000B7B0 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000DC2C (DpiCheckForOutstandingD3Requests.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C00A9EA8 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00A9F1C (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiTestQueryInterface @ 0x1C00D23C0 (DpiTestQueryInterface.c)
 *     ?DpiBrightnessQueryInterface@@YAJPEAU_DEVICE_OBJECT@@PEAU_QUERY_INTERFACE@@@Z @ 0x1C00D2420 (-DpiBrightnessQueryInterface@@YAJPEAU_DEVICE_OBJECT@@PEAU_QUERY_INTERFACE@@@Z.c)
 *     DpiDxgkDdiQueryInterface @ 0x1C00D3B38 (DpiDxgkDdiQueryInterface.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1C00E25D8 (DxgkReleaseAdapterDdiSync.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1C00E2694 (DxgkAcquireAdapterDdiSync.c)
 *     DpiPdoHandleStopDevice @ 0x1C0172370 (DpiPdoHandleStopDevice.c)
 */

__int64 __fastcall DpiPdoDispatchPnp(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  __int64 v4; // rbx
  int Status; // edi
  UCHAR MinorFunction; // cl
  __int64 (__fastcall *v8)(__int64); // rax
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  bool v13; // zf
  int v14; // eax
  int v15; // eax
  struct _IO_REMOVE_LOCK *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rax
  __int64 v23; // r12
  __int64 v24; // r13
  int v25; // ecx
  int v26; // ecx
  int v27; // ecx
  __int64 v28; // rcx
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  _QUERY_INTERFACE v35; // [rsp+20h] [rbp-30h] BYREF

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
      goto LABEL_56;
    }
  }
  if ( MinorFunction > 8u )
  {
    v25 = MinorFunction - 10;
    if ( !v25 )
      goto LABEL_55;
    v26 = v25 - 1;
    if ( v26 )
    {
      v27 = v26 - 11;
      if ( !v27 )
      {
        Status = -1073741823;
        goto LABEL_58;
      }
      if ( v27 == 1 )
      {
        KeEnterCriticalRegion();
        if ( *(_BYTE *)(v4 + 483) )
          DpiCheckForOutstandingD3Requests(v4);
        ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v4 + 168), 1u);
        Status = 0;
        v28 = *(_DWORD *)(v4 + 276) & 7;
        *(_DWORD *)(v4 + 4 * v28 + 244) = *(_DWORD *)(v4 + 240);
        v29 = *(_DWORD *)(v4 + 236);
        ++*(_DWORD *)(v4 + 276);
        *(_DWORD *)(v4 + 240) = v29;
        *(_DWORD *)(v4 + 236) = 6;
        v33 = WdLogNewEntry5_WdEvent(v28, v30, v31, v32);
        *(_QWORD *)(v33 + 24) = &DpiPdoDispatchPnp;
        *(_QWORD *)(v33 + 32) = a1;
        WdLogEvent5_WdEvent(v33);
        goto LABEL_18;
      }
      goto LABEL_55;
    }
LABEL_33:
    Status = 0;
    goto LABEL_58;
  }
  if ( MinorFunction == 8 )
  {
    v23 = *(_QWORD *)(v4 + 40);
    v24 = *(_QWORD *)(*(_QWORD *)(v4 + 32) + 64LL);
    if ( a2->IoStatus.Status != -1073741637 )
    {
LABEL_57:
      Status = a2->IoStatus.Status;
      goto LABEL_58;
    }
    v13 = *(_QWORD *)(v23 + 256) == 0LL;
    v35.InterfaceType = CurrentStackLocation->Parameters.QueryInterface.InterfaceType;
    v35.Size = CurrentStackLocation->Parameters.QueryInterface.Size;
    v35.Version = CurrentStackLocation->Parameters.QueryInterface.Version;
    v35.Interface = CurrentStackLocation->Parameters.QueryInterface.Interface;
    v35.InterfaceSpecificData = CurrentStackLocation->Parameters.CreatePipe.Parameters;
    v35.DeviceUid = *(_DWORD *)(v4 + 504);
    if ( v13 )
      goto LABEL_44;
    if ( (int)DpiAcquireCoreSyncAccessSafe(a1, 1) >= 0 )
    {
      Status = DpiBrightnessQueryInterface(*(PVOID *)(v4 + 32), &v35);
      if ( Status == -1073741198 )
      {
        DxgkAcquireAdapterDdiSync(*(_QWORD *)(v24 + 2544), 1LL);
        Status = DpiDxgkDdiQueryInterface(v23, *(_QWORD *)(v4 + 48), &v35);
        DxgkReleaseAdapterDdiSync(*(_QWORD *)(v24 + 2544));
      }
      DpiReleaseCoreSyncAccessSafe(a1, 1);
    }
    if ( Status == -1073741637 )
LABEL_44:
      Status = DpiTestQueryInterface(a1, &v35);
    if ( Status >= 0 )
    {
      CurrentStackLocation->Parameters.WMI.ProviderId = (ULONG_PTR)v35.InterfaceType;
      CurrentStackLocation->Parameters.QueryInterface.Size = v35.Size;
      CurrentStackLocation->Parameters.QueryInterface.Version = v35.Version;
      CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart = (LONGLONG)v35.Interface;
      CurrentStackLocation->Parameters.CreatePipe.Parameters = (PNAMED_PIPE_CREATE_PARAMETERS)v35.InterfaceSpecificData;
    }
    goto LABEL_56;
  }
  v9 = MinorFunction - 1;
  if ( !v9 )
  {
    KeEnterCriticalRegion();
    if ( *(_BYTE *)(v4 + 483) )
      DpiCheckForOutstandingD3Requests(v4);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v4 + 168), 1u);
    *(_DWORD *)(v4 + 4LL * (*(_DWORD *)(v4 + 276) & 7) + 244) = *(_DWORD *)(v4 + 240);
    v15 = *(_DWORD *)(v4 + 236);
    ++*(_DWORD *)(v4 + 276);
    *(_DWORD *)(v4 + 236) = 5;
    goto LABEL_16;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    if ( *(_DWORD *)(v4 + 240) == 2 )
      DpiPdoHandleStopDevice(a1);
    v16 = (struct _IO_REMOVE_LOCK *)(v4 + 64);
    if ( *(_BYTE *)(v4 + 509) )
    {
      IoReleaseRemoveLockEx(v16, a2, 0x20u);
    }
    else
    {
      IoReleaseRemoveLockAndWaitEx(v16, a2, 0x20u);
      IoQueueWorkItem(*(PIO_WORKITEM *)(v4 + 952), DpiPdoDestroyPdo, DelayedWorkQueue, 0LL);
    }
    v20 = *(_DWORD *)(v4 + 276) & 7;
    *(_DWORD *)(v4 + 4 * v20 + 244) = *(_DWORD *)(v4 + 240);
    v21 = *(_DWORD *)(v4 + 236);
    ++*(_DWORD *)(v4 + 276);
    *(_DWORD *)(v4 + 240) = v21;
    *(_DWORD *)(v4 + 236) = 7;
    v22 = WdLogNewEntry5_WdEvent(v20, v17, v18, v19);
    *(_QWORD *)(v22 + 24) = &DpiPdoDispatchPnp;
    *(_QWORD *)(v22 + 32) = a1;
    WdLogEvent5_WdEvent(v22);
    goto LABEL_33;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    KeEnterCriticalRegion();
    if ( *(_BYTE *)(v4 + 483) )
      DpiCheckForOutstandingD3Requests(v4);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v4 + 168), 1u);
    v13 = *(_DWORD *)(v4 + 236) == 5;
    goto LABEL_14;
  }
  v12 = v11 - 2;
  if ( !v12 )
  {
    KeEnterCriticalRegion();
    if ( *(_BYTE *)(v4 + 483) )
      DpiCheckForOutstandingD3Requests(v4);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v4 + 168), 1u);
    *(_DWORD *)(v4 + 4LL * (*(_DWORD *)(v4 + 276) & 7) + 244) = *(_DWORD *)(v4 + 240);
    v15 = *(_DWORD *)(v4 + 236);
    ++*(_DWORD *)(v4 + 276);
    *(_DWORD *)(v4 + 236) = 3;
    goto LABEL_16;
  }
  if ( v12 == 1 )
  {
    KeEnterCriticalRegion();
    if ( *(_BYTE *)(v4 + 483) )
      DpiCheckForOutstandingD3Requests(v4);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v4 + 168), 1u);
    v13 = *(_DWORD *)(v4 + 236) == 3;
LABEL_14:
    if ( !v13 )
    {
LABEL_17:
      Status = 0;
LABEL_18:
      if ( *(_BYTE *)(v4 + 483) )
        DpiEnableD3Requests(*(_QWORD *)(v4 + 24));
      ExReleaseResourceLite(*(PERESOURCE *)(v4 + 168));
      KeLeaveCriticalRegion();
      goto LABEL_58;
    }
    v14 = *(_DWORD *)(v4 + 240);
    --*(_DWORD *)(v4 + 276);
    *(_DWORD *)(v4 + 236) = v14;
    v15 = *(_DWORD *)(v4 + 4LL * (*(_DWORD *)(v4 + 276) & 7) + 244);
LABEL_16:
    *(_DWORD *)(v4 + 240) = v15;
    goto LABEL_17;
  }
LABEL_55:
  Status = a2->IoStatus.Status;
LABEL_56:
  if ( Status == -1073741637 )
    goto LABEL_57;
LABEL_58:
  a2->IoStatus.Status = Status;
  IofCompleteRequest(a2, 0);
  return (unsigned int)Status;
}
