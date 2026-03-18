/*
 * XREFs of DpiFdoHandleStartDevice @ 0x1C00D7A80
 * Callers:
 *     <none>
 * Callees:
 *     DpiEnableD3Requests @ 0x1C0005A7C (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000C824 (DpiCheckForOutstandingD3Requests.c)
 *     WindowsQueryLicenseDWORD @ 0x1C000E908 (WindowsQueryLicenseDWORD.c)
 *     memmove @ 0x1C0010940 (memmove.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     DpiReadPnpRegistryValue @ 0x1C00CE800 (DpiReadPnpRegistryValue.c)
 *     DpiFilterOutVgaResources @ 0x1C00D7E0C (DpiFilterOutVgaResources.c)
 *     DpiDetermineResourceListSize @ 0x1C00D7FF8 (DpiDetermineResourceListSize.c)
 */

__int64 __fastcall DpiFdoHandleStartDevice(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  __int64 DeviceExtension; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r12
  __int64 v12; // rax
  int v13; // esi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  int PnpRegistryValue; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 Status; // rsi
  PUNICODE_STRING v27; // rcx
  bool v28; // zf
  PIO_SECURITY_CONTEXT SecurityContext; // rdx
  __int64 v31; // r9
  struct _UNICODE_STRING *v32; // rax
  unsigned int v33; // r12d
  PVOID PoolWithTag; // rax
  __int64 v35; // rcx
  __int64 v36; // rax
  void *v37; // rcx
  _QWORD *v38; // rax
  _QWORD *v39; // rax
  _QWORD *v40; // rax
  void *v41; // rcx
  _QWORD *v42; // rax
  NTSTATUS v43; // eax
  __int64 v44; // rcx
  ULONG_PTR v45; // [rsp+40h] [rbp-79h]
  struct _UNICODE_STRING *FileName; // [rsp+48h] [rbp-71h]
  struct _UNICODE_STRING *v47; // [rsp+50h] [rbp-69h] BYREF
  __int64 v48; // [rsp+60h] [rbp-59h] BYREF
  int v49; // [rsp+68h] [rbp-51h]
  const wchar_t *v50; // [rsp+70h] [rbp-49h]
  int *v51; // [rsp+78h] [rbp-41h]
  int v52; // [rsp+80h] [rbp-39h]
  int *v53; // [rsp+88h] [rbp-31h]
  int v54; // [rsp+90h] [rbp-29h]
  __int64 v55; // [rsp+98h] [rbp-21h]
  int v56; // [rsp+A0h] [rbp-19h]
  __int64 v57; // [rsp+A8h] [rbp-11h]
  _BYTE v58[32]; // [rsp+B0h] [rbp-9h] BYREF
  void *ThreadHandle; // [rsp+128h] [rbp+6Fh] BYREF
  int v61; // [rsp+130h] [rbp+77h] BYREF
  SIZE_T NumberOfBytes; // [rsp+138h] [rbp+7Fh] BYREF

  DeviceExtension = (__int64)a1->DeviceExtension;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  LOBYTE(ThreadHandle) = 0;
  v45 = 0LL;
  FileName = 0LL;
  KeEnterCriticalRegion();
  if ( *(_BYTE *)(DeviceExtension + 451) )
    DpiCheckForOutstandingD3Requests(DeviceExtension);
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(DeviceExtension + 168), 1u);
  v6 = WindowsQueryLicenseDWORD(v5, &NumberOfBytes);
  v11 = v6;
  if ( v6 < 0 )
  {
    v13 = 1;
    v12 = WdLogNewEntry5_WdEvent(v8, v7, v9, v10);
    *(_QWORD *)(v12 + 32) = v11;
  }
  else
  {
    v12 = WdLogNewEntry5_WdEvent(v8, v7, v9, v10);
    v13 = NumberOfBytes;
    *(_QWORD *)(v12 + 32) = (unsigned int)NumberOfBytes;
  }
  *(_QWORD *)(v12 + 24) = &DpiFdoHandleStartDevice;
  WdLogEvent5_WdEvent(v12);
  v61 = 1;
  v48 = 0LL;
  v50 = L"MultiMonSupport";
  v49 = 288;
  v51 = &v61;
  v52 = 67108868;
  v53 = &v61;
  v54 = 4;
  v55 = 0LL;
  v56 = 0;
  v57 = 0LL;
  memset(v58, 0, sizeof(v58));
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v48, 0LL, 0LL);
  if ( !v61 )
    v13 = 0;
  if ( v13
    || *(_DWORD *)(DeviceExtension + 16) != 1953656900
    || *(_DWORD *)(DeviceExtension + 20) != 2
    || *(_BYTE *)(DeviceExtension + 1056)
    || *(_BYTE *)(DeviceExtension + 448) )
  {
    *(_DWORD *)(DeviceExtension + 1432) = v13;
    if ( *(_BYTE *)(DeviceExtension + 1059) == 1 )
    {
      SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
      NumberOfBytes = 0LL;
      v47 = 0LL;
      if ( SecurityContext )
      {
        FileName = CurrentStackLocation->Parameters.QueryDirectory.FileName;
        v45 = (ULONG_PTR)SecurityContext;
        DpiFilterOutVgaResources(DeviceExtension, SecurityContext, &NumberOfBytes, 0LL);
        LOBYTE(v31) = 1;
        DpiFilterOutVgaResources(DeviceExtension, CurrentStackLocation->Parameters.QueryDirectory.FileName, &v47, v31);
        if ( NumberOfBytes )
        {
          v32 = v47;
          if ( v47 )
          {
            CurrentStackLocation->Parameters.WMI.ProviderId = NumberOfBytes;
            CurrentStackLocation->Parameters.QueryDirectory.FileName = v32;
            LOBYTE(ThreadHandle) = 1;
          }
        }
      }
      else
      {
        v38 = (_QWORD *)WdLogNewEntry5_WdError(v15);
        v38[3] = &DpiFdoHandleStartDevice;
        v38[4] = &DpiFdoHandleStartDevice;
        v38[5] = 0LL;
        WdLogEvent5_WdError(v38);
      }
    }
    if ( !*(_BYTE *)(DeviceExtension + 1056)
      && *(_DWORD *)(DeviceExtension + 16) == 1953656900
      && *(_DWORD *)(DeviceExtension + 20) == 2 )
    {
      PnpRegistryValue = DpiReadPnpRegistryValue((__int64)a1, L"DisableNonPOSTDevice", (char *)&NumberOfBytes, 4u, 2);
      v23 = PnpRegistryValue;
      if ( PnpRegistryValue >= 0 )
      {
        if ( (_DWORD)NumberOfBytes )
        {
          LODWORD(Status) = -1073741823;
          v39 = (_QWORD *)WdLogNewEntry5_WdError(v20);
          v39[4] = DpiReadPnpRegistryValue;
          v39[3] = &DpiFdoHandleStartDevice;
          v39[5] = -1073741823LL;
          WdLogEvent5_WdError(v39);
          goto LABEL_44;
        }
      }
      else
      {
        v24 = WdLogNewEntry5_WdEvent(v20, v19, v21, v22);
        *(_QWORD *)(v24 + 24) = &DpiFdoHandleStartDevice;
        *(_QWORD *)(v24 + 32) = v23;
        WdLogEvent5_WdEvent(v24);
      }
    }
    IoForwardIrpSynchronously(*(PDEVICE_OBJECT *)(DeviceExtension + 160), a2);
    Status = a2->IoStatus.Status;
    if ( (int)Status < 0 )
    {
      v40 = (_QWORD *)WdLogNewEntry5_WdError(v25);
      v41 = IoForwardIrpSynchronously;
      goto LABEL_59;
    }
    v27 = CurrentStackLocation->Parameters.QueryDirectory.FileName;
    if ( v27 )
    {
      DpiDetermineResourceListSize(v27, &NumberOfBytes);
      v33 = NumberOfBytes;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x74727044u);
      *(_QWORD *)(DeviceExtension + 1064) = PoolWithTag;
      if ( !PoolWithTag )
      {
        LODWORD(Status) = -1073741801;
        v42 = (_QWORD *)WdLogNewEntry5_WdLowResource(v35);
        v42[4] = ExAllocatePoolWithTag;
        v42[3] = &DpiFdoHandleStartDevice;
        v42[5] = -1073741801LL;
        WdLogEvent5_WdLowResource(v42);
        goto LABEL_44;
      }
      memmove(PoolWithTag, CurrentStackLocation->Parameters.QueryDirectory.FileName, v33);
      if ( (_BYTE)ThreadHandle == 1 )
      {
        ExFreePoolWithTag(CurrentStackLocation->Parameters.Create.SecurityContext, 0);
        ExFreePoolWithTag(CurrentStackLocation->Parameters.QueryDirectory.FileName, 0);
        CurrentStackLocation->Parameters.WMI.ProviderId = v45;
        CurrentStackLocation->Parameters.QueryDirectory.FileName = FileName;
      }
    }
    v28 = *(_DWORD *)(DeviceExtension + 16) == 1953656900;
    *(_DWORD *)(DeviceExtension + 240) = *(_DWORD *)(DeviceExtension + 236);
    *(_DWORD *)(DeviceExtension + 236) = 1;
    if ( v28 && *(_DWORD *)(DeviceExtension + 20) == 2 )
    {
      if ( *(_BYTE *)(DeviceExtension + 1437) )
      {
        byte_1C0046C91 = 1;
        goto LABEL_36;
      }
      byte_1C0046C92 = 1;
    }
    if ( !byte_1C0046C91 )
    {
LABEL_21:
      if ( !byte_1C0046CB0 )
      {
LABEL_22:
        *(_DWORD *)(DeviceExtension + 248) = 1;
        *(_DWORD *)(DeviceExtension + 244) = 1;
        PoSetPowerState(a1, DevicePowerState, (POWER_STATE)1);
        goto LABEL_23;
      }
      if ( *(_BYTE *)(DeviceExtension + 1062) )
      {
        byte_1C0046C93 = 1;
        goto LABEL_22;
      }
      v43 = PsCreateSystemThread(
              &ThreadHandle,
              0x1FFFFFu,
              0LL,
              0LL,
              0LL,
              (PKSTART_ROUTINE)DpiFdoStartAdapterThread,
              (PVOID)2);
      Status = v43;
      if ( v43 >= 0 )
      {
        ZwClose(ThreadHandle);
        goto LABEL_22;
      }
      v40 = (_QWORD *)WdLogNewEntry5_WdError(v44);
      v41 = PsCreateSystemThread;
LABEL_59:
      v40[3] = &DpiFdoHandleStartDevice;
      v40[4] = v41;
      v40[5] = Status;
      WdLogEvent5_WdError(v40);
LABEL_23:
      if ( (int)Status >= 0 )
        goto LABEL_24;
      goto LABEL_44;
    }
LABEL_36:
    if ( byte_1C0046C90 || byte_1C0046C92 )
      KeSetEvent(&Event, 0, 0);
    goto LABEL_21;
  }
  LODWORD(Status) = -1071774664;
  v36 = WdLogNewEntry5_WdWarning(v15, v14, v16, v17);
  *(_QWORD *)(v36 + 24) = &DpiFdoHandleStartDevice;
  *(_QWORD *)(v36 + 32) = *(_QWORD *)(DeviceExtension + 24);
  WdLogEvent5_WdWarning(v36);
LABEL_44:
  if ( *(_DWORD *)(DeviceExtension + 236) == 1 )
    *(_DWORD *)(DeviceExtension + 236) = *(_DWORD *)(DeviceExtension + 240);
  v37 = *(void **)(DeviceExtension + 1064);
  if ( v37 )
  {
    ExFreePoolWithTag(v37, 0);
    *(_QWORD *)(DeviceExtension + 1064) = 0LL;
  }
LABEL_24:
  if ( *(_BYTE *)(DeviceExtension + 451) )
    DpiEnableD3Requests(*(_QWORD *)(DeviceExtension + 24));
  ExReleaseResourceLite(*(PERESOURCE *)(DeviceExtension + 168));
  KeLeaveCriticalRegion();
  a2->IoStatus.Status = Status;
  IofCompleteRequest(a2, 1);
  return (unsigned int)Status;
}
