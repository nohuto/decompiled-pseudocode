/*
 * XREFs of DpiFdoHandleStartDevice @ 0x1C00CDD30
 * Callers:
 *     <none>
 * Callees:
 *     DpiEnableD3Requests @ 0x1C000B7B0 (DpiEnableD3Requests.c)
 *     WindowsQueryLicenseDWORD @ 0x1C000DB00 (WindowsQueryLicenseDWORD.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000DC2C (DpiCheckForOutstandingD3Requests.c)
 *     memmove @ 0x1C00120C0 (memmove.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     DpiReadPnpRegistryValue @ 0x1C005CD60 (DpiReadPnpRegistryValue.c)
 *     DpiFilterOutVgaResources @ 0x1C00CE2A8 (DpiFilterOutVgaResources.c)
 *     DpiDetermineResourceListSize @ 0x1C00CE494 (DpiDetermineResourceListSize.c)
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
  __int64 Status; // rsi
  __int64 v19; // rax
  PIO_SECURITY_CONTEXT SecurityContext; // rdx
  __int64 v21; // r9
  struct _UNICODE_STRING *v22; // rax
  _QWORD *v23; // rax
  int PnpRegistryValue; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rsi
  __int64 v30; // rax
  __int64 v31; // rcx
  _QWORD *v32; // rax
  _QWORD *v33; // rax
  PUNICODE_STRING v34; // rcx
  size_t v35; // r12
  PVOID PoolWithTag; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  _QWORD *v41; // rax
  int v42; // eax
  bool v43; // zf
  _DWORD *StartContext; // rax
  void *v45; // r15
  NTSTATUS v46; // eax
  __int64 v47; // rcx
  _QWORD *v48; // rax
  int v49; // eax
  void *v50; // rcx
  ULONG_PTR v52; // [rsp+40h] [rbp-79h]
  struct _UNICODE_STRING *FileName; // [rsp+48h] [rbp-71h]
  struct _UNICODE_STRING *v54; // [rsp+50h] [rbp-69h] BYREF
  __int64 v55; // [rsp+60h] [rbp-59h] BYREF
  int v56; // [rsp+68h] [rbp-51h]
  const wchar_t *v57; // [rsp+70h] [rbp-49h]
  int *v58; // [rsp+78h] [rbp-41h]
  int v59; // [rsp+80h] [rbp-39h]
  int *v60; // [rsp+88h] [rbp-31h]
  int v61; // [rsp+90h] [rbp-29h]
  __int64 v62; // [rsp+98h] [rbp-21h]
  int v63; // [rsp+A0h] [rbp-19h]
  __int64 v64; // [rsp+A8h] [rbp-11h]
  _BYTE v65[32]; // [rsp+B0h] [rbp-9h] BYREF
  void *ThreadHandle; // [rsp+128h] [rbp+6Fh] BYREF
  int v68; // [rsp+130h] [rbp+77h] BYREF
  SIZE_T NumberOfBytes; // [rsp+138h] [rbp+7Fh] BYREF

  DeviceExtension = (__int64)a1->DeviceExtension;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  LOBYTE(ThreadHandle) = 0;
  v52 = 0LL;
  FileName = 0LL;
  KeEnterCriticalRegion();
  if ( *(_BYTE *)(DeviceExtension + 483) )
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
  v68 = 1;
  v55 = 0LL;
  v57 = L"MultiMonSupport";
  v56 = 288;
  v58 = &v68;
  v59 = 67108868;
  v60 = &v68;
  v61 = 4;
  v62 = 0LL;
  v63 = 0;
  v64 = 0LL;
  memset(v65, 0, sizeof(v65));
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v55, 0LL, 0LL);
  if ( !v68 )
    v13 = 0;
  if ( v13
    || *(_DWORD *)(DeviceExtension + 16) != 1953656900
    || *(_DWORD *)(DeviceExtension + 20) != 2
    || *(_BYTE *)(DeviceExtension + 1088)
    || *(_BYTE *)(DeviceExtension + 480) )
  {
    *(_DWORD *)(DeviceExtension + 1472) = v13;
    if ( *(_BYTE *)(DeviceExtension + 1092) == 1 )
    {
      SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
      NumberOfBytes = 0LL;
      v54 = 0LL;
      if ( SecurityContext )
      {
        FileName = CurrentStackLocation->Parameters.QueryDirectory.FileName;
        v52 = (ULONG_PTR)SecurityContext;
        DpiFilterOutVgaResources(DeviceExtension, SecurityContext, &NumberOfBytes, 0LL);
        LOBYTE(v21) = 1;
        DpiFilterOutVgaResources(DeviceExtension, CurrentStackLocation->Parameters.QueryDirectory.FileName, &v54, v21);
        if ( NumberOfBytes )
        {
          v22 = v54;
          if ( v54 )
          {
            CurrentStackLocation->Parameters.WMI.ProviderId = NumberOfBytes;
            CurrentStackLocation->Parameters.QueryDirectory.FileName = v22;
            LOBYTE(ThreadHandle) = 1;
          }
        }
      }
      else
      {
        v23 = (_QWORD *)WdLogNewEntry5_WdError(v15);
        v23[3] = &DpiFdoHandleStartDevice;
        v23[4] = &DpiFdoHandleStartDevice;
        v23[5] = 0LL;
        WdLogEvent5_WdError(v23);
      }
    }
    if ( !*(_BYTE *)(DeviceExtension + 1088)
      && *(_DWORD *)(DeviceExtension + 16) == 1953656900
      && *(_DWORD *)(DeviceExtension + 20) == 2 )
    {
      PnpRegistryValue = DpiReadPnpRegistryValue((__int64)a1, L"DisableNonPOSTDevice", (char *)&NumberOfBytes, 4u, 2u);
      v29 = PnpRegistryValue;
      if ( PnpRegistryValue >= 0 )
      {
        if ( (_DWORD)NumberOfBytes )
        {
          LODWORD(Status) = -1073741823;
          v33 = (_QWORD *)WdLogNewEntry5_WdError(v26);
          v33[4] = DpiReadPnpRegistryValue;
          v33[3] = &DpiFdoHandleStartDevice;
          v33[5] = -1073741823LL;
          WdLogEvent5_WdError(v33);
          goto LABEL_51;
        }
      }
      else
      {
        v30 = WdLogNewEntry5_WdEvent(v26, v25, v27, v28);
        *(_QWORD *)(v30 + 24) = &DpiFdoHandleStartDevice;
        *(_QWORD *)(v30 + 32) = v29;
        WdLogEvent5_WdEvent(v30);
      }
    }
    IoForwardIrpSynchronously(*(PDEVICE_OBJECT *)(DeviceExtension + 160), a2);
    Status = a2->IoStatus.Status;
    if ( (int)Status < 0 )
    {
      v32 = (_QWORD *)WdLogNewEntry5_WdError(v31);
      v32[4] = IoForwardIrpSynchronously;
      v32[3] = &DpiFdoHandleStartDevice;
      v32[5] = Status;
      WdLogEvent5_WdError(v32);
      goto LABEL_50;
    }
    v34 = CurrentStackLocation->Parameters.QueryDirectory.FileName;
    if ( v34 )
    {
      DpiDetermineResourceListSize(v34, &NumberOfBytes);
      v35 = (unsigned int)NumberOfBytes;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x74727044u);
      *(_QWORD *)(DeviceExtension + 1104) = PoolWithTag;
      if ( !PoolWithTag )
      {
LABEL_31:
        LODWORD(Status) = -1073741801;
        v41 = (_QWORD *)WdLogNewEntry5_WdLowResource(v38, v37, v39, v40);
        v41[4] = ExAllocatePoolWithTag;
        v41[3] = &DpiFdoHandleStartDevice;
        v41[5] = -1073741801LL;
        WdLogEvent5_WdLowResource(v41);
        goto LABEL_51;
      }
      memmove(PoolWithTag, CurrentStackLocation->Parameters.QueryDirectory.FileName, v35);
      if ( (_BYTE)ThreadHandle == 1 )
      {
        ExFreePoolWithTag(CurrentStackLocation->Parameters.Create.SecurityContext, 0);
        ExFreePoolWithTag(CurrentStackLocation->Parameters.QueryDirectory.FileName, 0);
        CurrentStackLocation->Parameters.WMI.ProviderId = v52;
        CurrentStackLocation->Parameters.QueryDirectory.FileName = FileName;
      }
    }
    *(_DWORD *)(DeviceExtension + 4LL * (*(_DWORD *)(DeviceExtension + 276) & 7) + 244) = *(_DWORD *)(DeviceExtension + 240);
    v42 = *(_DWORD *)(DeviceExtension + 236);
    ++*(_DWORD *)(DeviceExtension + 276);
    v43 = *(_DWORD *)(DeviceExtension + 16) == 1953656900;
    *(_DWORD *)(DeviceExtension + 240) = v42;
    *(_DWORD *)(DeviceExtension + 236) = 1;
    if ( v43 && *(_DWORD *)(DeviceExtension + 20) == 2 )
    {
      if ( *(_BYTE *)(DeviceExtension + 1477) )
      {
        byte_1C0046D11 = 1;
LABEL_40:
        if ( byte_1C0046D10 || byte_1C0046D12 )
          KeSetEvent(&Event, 0, 0);
LABEL_43:
        if ( byte_1C0046D30 && !*(_BYTE *)(DeviceExtension + 1095) )
        {
          StartContext = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x74727044u);
          v45 = StartContext;
          if ( !StartContext )
            goto LABEL_31;
          *StartContext = 2;
          *((_QWORD *)StartContext + 1) = 0LL;
          v46 = PsCreateSystemThread(&ThreadHandle, 0x1FFFFFu, 0LL, 0LL, 0LL, DpiFdoStartAdapterThread, StartContext);
          Status = v46;
          if ( v46 < 0 )
          {
            v48 = (_QWORD *)WdLogNewEntry5_WdError(v47);
            v48[4] = PsCreateSystemThread;
            v48[3] = &DpiFdoHandleStartDevice;
            v48[5] = Status;
            WdLogEvent5_WdError(v48);
            ExFreePoolWithTag(v45, 0x74727044u);
            goto LABEL_50;
          }
          ZwClose(ThreadHandle);
        }
        *(_DWORD *)(DeviceExtension + 284) = 1;
        *(_DWORD *)(DeviceExtension + 280) = 1;
        PoSetPowerState(a1, DevicePowerState, (POWER_STATE)1);
LABEL_50:
        if ( (int)Status >= 0 )
          goto LABEL_55;
        goto LABEL_51;
      }
      byte_1C0046D12 = 1;
    }
    if ( !byte_1C0046D11 )
      goto LABEL_43;
    goto LABEL_40;
  }
  LODWORD(Status) = -1071774664;
  v19 = WdLogNewEntry5_WdWarning(v15, v14, v16, v17);
  *(_QWORD *)(v19 + 24) = &DpiFdoHandleStartDevice;
  *(_QWORD *)(v19 + 32) = *(_QWORD *)(DeviceExtension + 24);
  WdLogEvent5_WdWarning(v19);
LABEL_51:
  if ( *(_DWORD *)(DeviceExtension + 236) == 1 )
  {
    v49 = *(_DWORD *)(DeviceExtension + 240);
    --*(_DWORD *)(DeviceExtension + 276);
    *(_DWORD *)(DeviceExtension + 236) = v49;
    *(_DWORD *)(DeviceExtension + 240) = *(_DWORD *)(DeviceExtension
                                                   + 4LL * (*(_DWORD *)(DeviceExtension + 276) & 7)
                                                   + 244);
  }
  v50 = *(void **)(DeviceExtension + 1104);
  if ( v50 )
  {
    ExFreePoolWithTag(v50, 0);
    *(_QWORD *)(DeviceExtension + 1104) = 0LL;
  }
LABEL_55:
  if ( *(_BYTE *)(DeviceExtension + 483) )
    DpiEnableD3Requests(*(_QWORD *)(DeviceExtension + 24));
  ExReleaseResourceLite(*(PERESOURCE *)(DeviceExtension + 168));
  KeLeaveCriticalRegion();
  a2->IoStatus.Status = Status;
  IofCompleteRequest(a2, 1);
  return (unsigned int)Status;
}
