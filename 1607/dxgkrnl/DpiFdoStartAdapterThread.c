/*
 * XREFs of DpiFdoStartAdapterThread @ 0x1C00EC3D0
 * Callers:
 *     DpiSessionCreateCallback @ 0x1C00DB7F4 (DpiSessionCreateCallback.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C000BB0C (-AcquireMiniportListMutex@@YAXXZ.c)
 *     DpiEnableD3Requests @ 0x1C000C484 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000EA98 (DpiCheckForOutstandingD3Requests.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?Free@?$AUTO_FREE_POOL@PEAUIDD_COMPLETION_CONTEXT@@@@QEAAXXZ @ 0x1C002F5F0 (-Free@-$AUTO_FREE_POOL@PEAUIDD_COMPLETION_CONTEXT@@@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DpiAcquirePostDisplayInfoFromBgfx @ 0x1C00E3564 (DpiAcquirePostDisplayInfoFromBgfx.c)
 *     DpiFdoStartAdapter @ 0x1C00E981C (DpiFdoStartAdapter.c)
 *     DxgkFinishPnPTransition @ 0x1C00FA90C (DxgkFinishPnPTransition.c)
 *     ?StartPnPTransition@DXGSESSIONMGR@@QEAAJXZ @ 0x1C00FAC28 (-StartPnPTransition@DXGSESSIONMGR@@QEAAJXZ.c)
 *     DpiPnpEnableVga @ 0x1C00FC574 (DpiPnpEnableVga.c)
 *     DpiPnpNotifyGdi @ 0x1C00FC830 (DpiPnpNotifyGdi.c)
 *     DpiDisableMsBddFallbackDriver @ 0x1C01961C8 (DpiDisableMsBddFallbackDriver.c)
 *     DpiEnableMsBddFallbackDriver @ 0x1C0196380 (DpiEnableMsBddFallbackDriver.c)
 *     DpiGetDeviceInstanceId @ 0x1C0196658 (DpiGetDeviceInstanceId.c)
 *     DpiLdaStartAdapterInChain @ 0x1C019DF8C (DpiLdaStartAdapterInChain.c)
 */

void __fastcall DpiFdoStartAdapterThread(WCHAR *StartContext)
{
  __int64 v2; // rcx
  NTSTATUS v3; // r12d
  bool v4; // r13
  char v5; // si
  bool v6; // r14
  PVOID v7; // r15
  struct DXGGLOBAL *Global; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // ecx
  _QWORD *v12; // rax
  char v13; // r14
  _QWORD *v14; // r15
  __int64 v15; // rsi
  bool v16; // bl
  char *v17; // rcx
  unsigned int v18; // edx
  struct _DEVICE_OBJECT *v19; // rcx
  int v20; // eax
  char v21; // r14
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // eax
  char v25; // r13
  __int64 v26; // rax
  __int64 v27; // rax
  PVOID PoolWithTag; // rbx
  __int64 v29; // rcx
  __int64 v30; // rax
  NTSTATUS DevicePropertyData; // eax
  __int64 v32; // rcx
  struct _DEVICE_OBJECT *v33; // rcx
  unsigned int Timeout; // [rsp+28h] [rbp-99h]
  PVOID Data; // [rsp+30h] [rbp-91h]
  char v36; // [rsp+48h] [rbp-79h]
  char v37; // [rsp+49h] [rbp-78h] BYREF
  char v38; // [rsp+4Ah] [rbp-77h]
  char v39; // [rsp+4Bh] [rbp-76h]
  char v40; // [rsp+4Ch] [rbp-75h]
  unsigned int v41; // [rsp+50h] [rbp-71h]
  void *v42; // [rsp+58h] [rbp-69h] BYREF
  PVOID P; // [rsp+60h] [rbp-61h]
  int v44; // [rsp+68h] [rbp-59h]
  unsigned int started; // [rsp+6Ch] [rbp-55h]
  ULONG RequiredSize; // [rsp+70h] [rbp-51h] BYREF
  ULONG Type; // [rsp+74h] [rbp-4Dh] BYREF
  void *v48; // [rsp+78h] [rbp-49h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+80h] [rbp-41h] BYREF
  UNICODE_STRING String1; // [rsp+90h] [rbp-31h] BYREF
  _QWORD v51[8]; // [rsp+A8h] [rbp-19h] BYREF

  memset(v51, 0, sizeof(v51));
  EtwActivityIdControl(3u, (LPGUID)&v51[1]);
  v2 = 0LL;
  v3 = 0;
  P = 0LL;
  v4 = 0;
  v38 = 0;
  LOBYTE(v44) = 0;
  v51[7] = MEMORY[0xFFFFF78000000014];
  LODWORD(v51[3]) = 7;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  if ( StartContext )
  {
    v24 = *(_DWORD *)StartContext;
    v7 = StartContext;
    P = StartContext;
    v25 = v24;
    v6 = (v24 & 2) != 0;
    v5 = v24 & 1;
    LOBYTE(v24) = (v24 & 8) != 0;
    v36 = v5;
    v39 = v6;
    v44 = v24;
    v4 = (v25 & 4) != 0;
    if ( v4 )
    {
      StartContext[51] = 0;
      RtlInitUnicodeString(&DestinationString, StartContext + 2);
    }
  }
  else
  {
    v5 = 1;
    v36 = 1;
    v6 = 1;
    v39 = 1;
    v7 = 0LL;
  }
  if ( byte_1C0056E9B )
  {
    v26 = WdLogNewEntry5_WdEvent(v2);
    *(_QWORD *)(v26 + 24) = 0LL;
    WdLogEvent5_WdEvent(v26);
    goto LABEL_48;
  }
  Global = DXGGLOBAL::GetGlobal(v2);
  started = DXGSESSIONMGR::StartPnPTransition(*((DXGSESSIONMGR **)Global + 69));
  if ( v6 )
  {
    _InterlockedCompareExchange(&dword_1C0057170, 5, 4);
    LOBYTE(v9) = 1;
    DpiPnpEnableVga(0LL, v9, 0LL, v51);
  }
  AcquireMiniportListMutex();
  v10 = qword_1C00570C8;
  if ( !qword_1C00570C8 )
  {
    v27 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v27 + 24) = -1073741823LL;
    WdLogEvent5_WdError(v27);
    v10 = qword_1C00570C8;
  }
  if ( v5 )
  {
    byte_1C0056EF0 = 1;
    if ( v10 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(v10 + 64) + 976LL))(*(_QWORD *)(*(_QWORD *)(v10 + 64) + 48LL));
    DpiAcquirePostDisplayInfoFromBgfx(dword_1C00570D0, 1, 1);
    dword_1C0057170 = 1;
  }
  else
  {
    if ( !v6 )
      goto LABEL_59;
    if ( (unsigned int)(dword_1C0057170 - 4) <= 1 )
      DpiDisableMsBddFallbackDriver(v51);
  }
  v11 = 0;
  if ( !v6 )
LABEL_59:
    v11 = 1;
  v12 = (_QWORD *)qword_1C0056EB8;
  v13 = v44;
  v41 = v11;
  do
  {
    v14 = v12;
    v40 = v11 == 0;
    if ( (_QWORD *)*v12 == v12 )
      goto LABEL_41;
    do
    {
      if ( v4 )
      {
        if ( !*((_BYTE *)v14 + 134) )
          goto LABEL_39;
      }
      else if ( *((_BYTE *)v14 + 134) )
      {
        goto LABEL_39;
      }
      KeWaitForSingleObject(v14 + 9, Executive, 0, 0, 0LL);
      v15 = v14[7];
      if ( *(_QWORD *)v15 != v15 )
      {
        while ( 1 )
        {
          if ( *(_DWORD *)(v15 + 16) == 1953656900 && *(_DWORD *)(v15 + 20) == 4 )
            goto LABEL_37;
          if ( !v4 )
          {
            v16 = 1;
LABEL_22:
            KeEnterCriticalRegion();
            if ( *(_BYTE *)(v15 + 483) )
              DpiCheckForOutstandingD3Requests(v15);
            ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v15 + 168), 1u);
            if ( v40 == *(_BYTE *)(v15 + 1136) && *(_DWORD *)(v15 + 236) == 1 && !*(_BYTE *)(v15 + 232) && (!v4 || v16) )
            {
              v37 = 0;
              v17 = 0LL;
              v18 = 0;
              if ( P && *((_DWORD *)P + 26) )
              {
                v17 = (char *)P + 108;
                v18 = *((_DWORD *)P + 26);
              }
              Data = v17;
              v19 = *(struct _DEVICE_OBJECT **)(v15 + 24);
              Timeout = v18;
              LOBYTE(v18) = v36;
              if ( *(_DWORD *)(v15 + 504) )
                v20 = DpiLdaStartAdapterInChain(
                        (_DWORD)v19,
                        v18,
                        (unsigned int)&v37,
                        (unsigned int)v51,
                        Timeout,
                        (__int64)Data);
              else
                v20 = DpiFdoStartAdapter(v19, v36, (__int64)&v37, (__int64)v51, Timeout, (__int64)Data);
              v3 = v20;
              if ( v20 != 1075708986 )
              {
                if ( v20 < 0 )
                {
                  v33 = *(struct _DEVICE_OBJECT **)(v15 + 152);
                  *(_BYTE *)(v15 + 232) = 1;
                  IoInvalidateDeviceState(v33);
                }
                else
                {
                  v38 |= v37;
                }
              }
            }
            if ( *(_BYTE *)(v15 + 483) )
              DpiEnableD3Requests(*(_QWORD *)(v15 + 24));
            ExReleaseResourceLite(*(PERESOURCE *)(v15 + 168));
            KeLeaveCriticalRegion();
            goto LABEL_37;
          }
          RequiredSize = 0;
          v42 = 0LL;
          if ( !v13 )
            break;
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x64uLL, 0x74727044u);
          AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v42);
          v42 = PoolWithTag;
          v48 = 0LL;
          AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v48);
          if ( PoolWithTag )
          {
            DevicePropertyData = IoGetDevicePropertyData(
                                   *(PDEVICE_OBJECT *)(v15 + 152),
                                   &DEVPKEY_Device_InstanceId,
                                   0,
                                   0,
                                   0x64u,
                                   PoolWithTag,
                                   &RequiredSize,
                                   &Type);
LABEL_69:
            v3 = DevicePropertyData;
            if ( DevicePropertyData >= 0 )
            {
              RtlInitUnicodeString(&String1, (PCWSTR)PoolWithTag);
              v16 = RtlCompareUnicodeString(&String1, &DestinationString, 1u) == 0;
              AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v42);
              goto LABEL_22;
            }
            v30 = WdLogNewEntry5_WdError(v32);
            *(_QWORD *)(v30 + 24) = v3;
            goto LABEL_66;
          }
          v3 = -1073741801;
          v30 = WdLogNewEntry5_WdError(v29);
LABEL_66:
          WdLogEvent5_WdError(v30);
          AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v42);
LABEL_37:
          v15 = *(_QWORD *)v15;
          if ( *(_QWORD *)v15 == v14[7] )
            goto LABEL_38;
        }
        DevicePropertyData = DpiGetDeviceInstanceId(*(PDEVICE_OBJECT *)(v15 + 152));
        PoolWithTag = v42;
        goto LABEL_69;
      }
LABEL_38:
      KeReleaseMutex((PRKMUTEX)(v14 + 9), 0);
      v12 = (_QWORD *)qword_1C0056EB8;
LABEL_39:
      v14 = (_QWORD *)*v14;
    }
    while ( (_QWORD *)*v14 != v12 );
    v11 = v41;
LABEL_41:
    v41 = ++v11;
  }
  while ( v11 < 2 );
  v21 = v39;
  if ( v39 && (unsigned int)(dword_1C0057170 - 1) <= 1 )
    DpiEnableMsBddFallbackDriver(v51);
  _InterlockedExchange64(&qword_1C0056EC8, 0LL);
  KeReleaseMutex(Mutex, 0);
  if ( v38 == 1 )
  {
    LOBYTE(v22) = 1;
    DpiPnpNotifyGdi(0LL, v22, started, v51);
  }
  else if ( v21 )
  {
    LOBYTE(v22) = 1;
    LOBYTE(v23) = 1;
    DpiPnpEnableVga(v23, v22, started, v51);
  }
  else
  {
    DxgkFinishPnPTransition(0xFFFFFFFF);
  }
  v5 = v36;
  v7 = P;
LABEL_48:
  if ( v7 )
    ExFreePoolWithTag(v7, 0x74727044u);
  if ( !v5 )
    PsTerminateSystemThread(v3);
}
