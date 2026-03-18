/*
 * XREFs of DpiFdoHandleStartDevice @ 0x1C00F8A00
 * Callers:
 *     <none>
 * Callees:
 *     DpiEnableD3Requests @ 0x1C000C484 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000EA98 (DpiCheckForOutstandingD3Requests.c)
 *     WindowsQueryLicenseDWORD @ 0x1C0010180 (WindowsQueryLicenseDWORD.c)
 *     memmove @ 0x1C0012480 (memmove.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     DpiReadPnpRegistryValue @ 0x1C00D90C0 (DpiReadPnpRegistryValue.c)
 *     DpiFilterOutVgaResources @ 0x1C00F8FAC (DpiFilterOutVgaResources.c)
 *     DpiDetermineResourceListSize @ 0x1C00F9190 (DpiDetermineResourceListSize.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z @ 0x1C014D450 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z.c)
 */

__int64 __fastcall DpiFdoHandleStartDevice(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  __int64 DeviceExtension; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  char v4; // r12
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // r15
  __int64 v10; // rax
  int v11; // esi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  int PnpRegistryValue; // eax
  __int64 v17; // rcx
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 Status; // rsi
  PUNICODE_STRING v22; // rcx
  int v23; // eax
  void *v24; // rdx
  PIO_SECURITY_CONTEXT SecurityContext; // rdx
  __int64 v27; // r9
  struct _UNICODE_STRING *v28; // rax
  unsigned int v29; // r15d
  PVOID PoolWithTag; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  int v33; // eax
  void *v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  _DWORD *StartContext; // rax
  void *v39; // r14
  __int64 v40; // rax
  NTSTATUS SystemThread; // eax
  __int64 v42; // rcx
  __int64 v43; // rax
  PIRP v44; // rax
  ULONG_PTR v45; // [rsp+40h] [rbp-69h]
  struct _UNICODE_STRING *FileName; // [rsp+48h] [rbp-61h]
  __int64 v47; // [rsp+50h] [rbp-59h] BYREF
  int v48; // [rsp+58h] [rbp-51h]
  const wchar_t *v49; // [rsp+60h] [rbp-49h]
  int *v50; // [rsp+68h] [rbp-41h]
  int v51; // [rsp+70h] [rbp-39h]
  int *v52; // [rsp+78h] [rbp-31h]
  int v53; // [rsp+80h] [rbp-29h]
  __int64 v54; // [rsp+88h] [rbp-21h]
  int v55; // [rsp+90h] [rbp-19h]
  _BYTE v56[40]; // [rsp+98h] [rbp-11h] BYREF
  int v58; // [rsp+118h] [rbp+6Fh] BYREF
  SIZE_T NumberOfBytes; // [rsp+120h] [rbp+77h] BYREF
  struct _UNICODE_STRING *v60; // [rsp+128h] [rbp+7Fh] BYREF

  DeviceExtension = (__int64)a1->DeviceExtension;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v4 = 0;
  v45 = 0LL;
  FileName = 0LL;
  KeEnterCriticalRegion();
  if ( *(_BYTE *)(DeviceExtension + 483) )
    DpiCheckForOutstandingD3Requests(DeviceExtension);
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(DeviceExtension + 168), 1u);
  v7 = WindowsQueryLicenseDWORD(v6, &NumberOfBytes);
  v9 = v7;
  if ( v7 < 0 )
  {
    v11 = 1;
    v10 = WdLogNewEntry5_WdEvent(v8);
    *(_QWORD *)(v10 + 24) = v9;
  }
  else
  {
    v10 = WdLogNewEntry5_WdEvent(v8);
    v11 = NumberOfBytes;
    *(_QWORD *)(v10 + 24) = (unsigned int)NumberOfBytes;
  }
  WdLogEvent5_WdEvent(v10);
  v58 = 1;
  v47 = 0LL;
  v49 = L"MultiMonSupport";
  v48 = 288;
  v50 = &v58;
  v51 = 67108868;
  v52 = &v58;
  v53 = 4;
  v54 = 0LL;
  v55 = 0;
  memset(v56, 0, sizeof(v56));
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v47, 0LL, 0LL);
  if ( !v58 )
    v11 = 0;
  if ( !v11
    && *(_DWORD *)(DeviceExtension + 16) == 1953656900
    && *(_DWORD *)(DeviceExtension + 20) == 2
    && !*(_BYTE *)(DeviceExtension + 1136)
    && !*(_BYTE *)(DeviceExtension + 480) )
  {
    LODWORD(Status) = -1071774664;
    v32 = WdLogNewEntry5_WdWarning(v13, v12, v14, v15);
    *(_QWORD *)(v32 + 24) = *(_QWORD *)(DeviceExtension + 24);
    WdLogEvent5_WdWarning(v32);
    goto LABEL_47;
  }
  *(_DWORD *)(DeviceExtension + 2552) = v11;
  if ( *(_BYTE *)(DeviceExtension + 1140) == 1 )
  {
    SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
    NumberOfBytes = 0LL;
    v60 = 0LL;
    if ( SecurityContext )
    {
      FileName = CurrentStackLocation->Parameters.QueryDirectory.FileName;
      v45 = (ULONG_PTR)SecurityContext;
      DpiFilterOutVgaResources(DeviceExtension, SecurityContext, &NumberOfBytes, 0LL);
      LOBYTE(v27) = 1;
      DpiFilterOutVgaResources(DeviceExtension, CurrentStackLocation->Parameters.QueryDirectory.FileName, &v60, v27);
      if ( NumberOfBytes )
      {
        v28 = v60;
        if ( v60 )
        {
          CurrentStackLocation->Parameters.WMI.ProviderId = NumberOfBytes;
          v4 = 1;
          CurrentStackLocation->Parameters.QueryDirectory.FileName = v28;
        }
      }
    }
    else
    {
      v35 = WdLogNewEntry5_WdError(v13);
      *(_QWORD *)(v35 + 24) = 0LL;
      WdLogEvent5_WdError(v35);
    }
  }
  if ( !*(_BYTE *)(DeviceExtension + 1136)
    && *(_DWORD *)(DeviceExtension + 16) == 1953656900
    && *(_DWORD *)(DeviceExtension + 20) == 2 )
  {
    PnpRegistryValue = DpiReadPnpRegistryValue((__int64)a1, L"DisableNonPOSTDevice", (char *)&NumberOfBytes, 4u, 2u);
    v18 = PnpRegistryValue;
    if ( PnpRegistryValue >= 0 )
    {
      if ( (_DWORD)NumberOfBytes )
      {
        LODWORD(Status) = -1073741823;
        v36 = WdLogNewEntry5_WdError(v17);
        *(_QWORD *)(v36 + 24) = -1073741823LL;
        WdLogEvent5_WdError(v36);
        goto LABEL_47;
      }
    }
    else
    {
      v19 = WdLogNewEntry5_WdEvent(v17);
      *(_QWORD *)(v19 + 24) = v18;
      WdLogEvent5_WdEvent(v19);
    }
  }
  IoForwardIrpSynchronously(*(PDEVICE_OBJECT *)(DeviceExtension + 160), a2);
  Status = a2->IoStatus.Status;
  if ( (int)Status < 0 )
  {
    v37 = WdLogNewEntry5_WdError(v20);
    *(_QWORD *)(v37 + 24) = Status;
    WdLogEvent5_WdError(v37);
    goto LABEL_23;
  }
  v22 = CurrentStackLocation->Parameters.QueryDirectory.FileName;
  if ( v22 )
  {
    DpiDetermineResourceListSize(v22, &NumberOfBytes);
    v29 = NumberOfBytes;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x74727044u);
    *(_QWORD *)(DeviceExtension + 1152) = PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_61;
    memmove(PoolWithTag, CurrentStackLocation->Parameters.QueryDirectory.FileName, v29);
    if ( v4 == 1 )
    {
      ExFreePoolWithTag(CurrentStackLocation->Parameters.Create.SecurityContext, 0);
      ExFreePoolWithTag(CurrentStackLocation->Parameters.QueryDirectory.FileName, 0);
      CurrentStackLocation->Parameters.WMI.ProviderId = v45;
      CurrentStackLocation->Parameters.QueryDirectory.FileName = FileName;
    }
  }
  *(_DWORD *)(DeviceExtension + 4LL * (*(_DWORD *)(DeviceExtension + 276) & 7) + 244) = *(_DWORD *)(DeviceExtension + 240);
  v23 = *(_DWORD *)(DeviceExtension + 236);
  ++*(_DWORD *)(DeviceExtension + 276);
  *(_DWORD *)(DeviceExtension + 240) = v23;
  *(_DWORD *)(DeviceExtension + 236) = 1;
  if ( *(_DWORD *)(DeviceExtension + 16) != 1953656900 || *(_DWORD *)(DeviceExtension + 20) != 2 )
  {
LABEL_20:
    if ( !byte_1C0056ED1 )
      goto LABEL_21;
    goto LABEL_39;
  }
  if ( !*(_BYTE *)(DeviceExtension + 2557) )
  {
    byte_1C0056ED2 = 1;
    goto LABEL_20;
  }
  byte_1C0056ED1 = 1;
LABEL_39:
  if ( byte_1C0056ED0 || byte_1C0056ED2 )
    KeSetEvent(&Event, 0, 0);
LABEL_21:
  if ( !byte_1C0056EF0 || *(_BYTE *)(DeviceExtension + 1143) )
    goto LABEL_22;
  StartContext = ExAllocatePoolWithTag(PagedPool, 0x46CuLL, 0x74727044u);
  v39 = StartContext;
  if ( !StartContext )
  {
LABEL_61:
    LODWORD(Status) = -1073741801;
    v40 = WdLogNewEntry5_WdLowResource(v31);
    *(_QWORD *)(v40 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v40);
    goto LABEL_47;
  }
  *StartContext = 2;
  *((_WORD *)StartContext + 2) = 0;
  StartContext[26] = 0;
  SystemThread = PsCreateSystemThread(
                   (PHANDLE)&NumberOfBytes,
                   0x1FFFFFu,
                   0LL,
                   0LL,
                   0LL,
                   (PKSTART_ROUTINE)DpiFdoStartAdapterThread,
                   StartContext);
  Status = SystemThread;
  if ( SystemThread >= 0 )
  {
    ZwClose((HANDLE)NumberOfBytes);
LABEL_22:
    *(_DWORD *)(DeviceExtension + 284) = 1;
    *(_DWORD *)(DeviceExtension + 280) = 1;
    PoSetPowerState(a1, DevicePowerState, (POWER_STATE)1);
    goto LABEL_23;
  }
  v43 = WdLogNewEntry5_WdError(v42);
  *(_QWORD *)(v43 + 24) = Status;
  WdLogEvent5_WdError(v43);
  ExFreePoolWithTag(v39, 0x74727044u);
LABEL_23:
  if ( (int)Status < 0 )
  {
LABEL_47:
    if ( *(_DWORD *)(DeviceExtension + 236) == 1 )
    {
      v33 = *(_DWORD *)(DeviceExtension + 240);
      --*(_DWORD *)(DeviceExtension + 276);
      *(_DWORD *)(DeviceExtension + 236) = v33;
      *(_DWORD *)(DeviceExtension + 240) = *(_DWORD *)(DeviceExtension
                                                     + 4LL * (*(_DWORD *)(DeviceExtension + 276) & 7)
                                                     + 244);
    }
    v34 = *(void **)(DeviceExtension + 1152);
    if ( v34 )
    {
      ExFreePoolWithTag(v34, 0);
      *(_QWORD *)(DeviceExtension + 1152) = 0LL;
    }
    DxgCreateLiveDumpWithWdLogs(
      0x193u,
      0x802uLL,
      (int)Status,
      *(int *)(DeviceExtension + 236),
      *(int *)(DeviceExtension + 240));
    goto LABEL_27;
  }
  if ( *(_DWORD *)(DeviceExtension + 16) == 1953656900 && *(_DWORD *)(DeviceExtension + 20) == 2 )
  {
    v24 = *(void **)(DeviceExtension + 4928);
    if ( v24 )
    {
      v44 = IoCsqRemoveNextIrp((PIO_CSQ)(DeviceExtension + 4840), v24);
      *(_QWORD *)(DeviceExtension + 4928) = 0LL;
      if ( v44 )
      {
        *(_BYTE *)(DeviceExtension + 4952) = 1;
        v44->IoStatus.Status = 0;
        v44->IoStatus.Information = 0LL;
        IofCompleteRequest(v44, 0);
      }
    }
  }
LABEL_27:
  if ( *(_BYTE *)(DeviceExtension + 483) )
    DpiEnableD3Requests(*(_QWORD *)(DeviceExtension + 24));
  ExReleaseResourceLite(*(PERESOURCE *)(DeviceExtension + 168));
  KeLeaveCriticalRegion();
  a2->IoStatus.Status = Status;
  IofCompleteRequest(a2, 1);
  return (unsigned int)Status;
}
