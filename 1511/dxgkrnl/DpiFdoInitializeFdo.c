/*
 * XREFs of DpiFdoInitializeFdo @ 0x1C00D3310
 * Callers:
 *     DpiAddDevice @ 0x1C00D2490 (DpiAddDevice.c)
 * Callees:
 *     memset @ 0x1C0012400 (memset.c)
 *     DpiRequestIoPowerState @ 0x1C00CB040 (DpiRequestIoPowerState.c)
 *     DpiQueryMiniportInterface @ 0x1C00D3AB0 (DpiQueryMiniportInterface.c)
 *     DpiQueryBusInterface @ 0x1C00D3BD0 (DpiQueryBusInterface.c)
 *     DpiFdoInitializeAdapterUniqueString @ 0x1C00D3CA0 (DpiFdoInitializeAdapterUniqueString.c)
 *     DpiGetDevicePropertyDataString @ 0x1C00D3F10 (DpiGetDevicePropertyDataString.c)
 *     DpiGetDevicePropertyString @ 0x1C00D4060 (DpiGetDevicePropertyString.c)
 */

__int64 __fastcall DpiFdoInitializeFdo(_QWORD *StartContext)
{
  __int64 v1; // rdi
  char v3; // r15
  char v4; // r13
  char v5; // r12
  int v6; // eax
  int DevicePropertyString; // eax
  __int64 v8; // rcx
  __int64 v9; // rsi
  NTSTATUS v10; // eax
  __int64 v11; // rcx
  PVOID v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  struct _DEVICE_OBJECT *v17; // rcx
  __int64 v18; // rax
  _WORD *v19; // r15
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rbx
  int MiniportInterface; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  NTSTATUS v29; // eax
  __int64 v30; // rcx
  __int64 v31; // rcx
  int v32; // eax
  SIZE_T v33; // rbx
  PVOID PoolWithTag; // rax
  _QWORD *v35; // rax
  _QWORD *v36; // rax
  __int64 (__usercall *v37)@<rax>(PDEVICE_OBJECT@<rcx>, DEVICE_REGISTRY_PROPERTY@<edx>, POOL_TYPE@<r8d>, __int64); // rcx
  _QWORD *v38; // rax
  _QWORD *v39; // rax
  size_t v40; // r8
  _QWORD *v41; // rax
  void *v42; // rcx
  void *v43; // rcx
  void *v44; // rcx
  void *v45; // rcx
  void *v46; // rcx
  void *v47; // rcx
  _QWORD *v48; // rax
  void *ThreadHandle; // [rsp+40h] [rbp-28h] BYREF
  struct _UNICODE_STRING SymbolicLinkName; // [rsp+48h] [rbp-20h] BYREF
  PVOID Object; // [rsp+B0h] [rbp+48h] BYREF
  char v52; // [rsp+B8h] [rbp+50h]
  ULONG RequiredSize; // [rsp+C0h] [rbp+58h] BYREF
  ULONG Type; // [rsp+C8h] [rbp+60h] BYREF

  v1 = StartContext[8];
  *(_QWORD *)&SymbolicLinkName.Length = 0LL;
  SymbolicLinkName.Buffer = 0LL;
  v52 = 0;
  *(_QWORD *)(v1 + 112) = &DpiFdoDispatchInternalIoctl;
  v3 = 0;
  v4 = 0;
  *(_QWORD *)(v1 + 144) = DpiFdoDispatchSystemControl;
  v5 = 0;
  *(_QWORD *)(v1 + 352) = &DpiFdoHandleQueryInterface;
  *(_QWORD *)(v1 + 344) = DpiFdoHandleQueryDeviceRelations;
  v6 = *(_DWORD *)(v1 + 504);
  if ( v6 )
  {
    v33 = (unsigned int)(8 * v6);
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v33, 0x74727044u);
    *(_QWORD *)(v1 + 1512) = PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_56;
    memset(PoolWithTag, 0, (unsigned int)v33);
    **(_QWORD **)(v1 + 1512) = StartContext;
    *(_DWORD *)(v1 + 1520) = 1;
  }
  DevicePropertyString = DpiGetDevicePropertyString(
                           *(PDEVICE_OBJECT *)(v1 + 152),
                           DevicePropertyDeviceDescription,
                           (POOL_TYPE)512,
                           (__int64)&RequiredSize);
  v9 = DevicePropertyString;
  if ( DevicePropertyString < 0 )
  {
    v36 = (_QWORD *)WdLogNewEntry5_WdError(v8);
    v36[3] = DpiFdoInitializeFdo;
    v37 = DpiGetDevicePropertyString;
    goto LABEL_62;
  }
  DpiGetDevicePropertyDataString(
    *(PDEVICE_OBJECT *)(v1 + 152),
    (DEVPROPKEY *)&DEVPKEY_Device_DriverVersion,
    0,
    (POOL_TYPE)512,
    v1 + 3320,
    (__int64)&RequiredSize);
  IoGetDevicePropertyData(
    *(PDEVICE_OBJECT *)(v1 + 152),
    &DEVPKEY_Device_DriverDate,
    0,
    0,
    8u,
    (PVOID)(v1 + 3328),
    &RequiredSize,
    &Type);
  IoGetDevicePropertyData(
    *(PDEVICE_OBJECT *)(v1 + 152),
    &DEVPKEY_Device_DriverRank,
    0,
    0,
    4u,
    (PVOID)(v1 + 3336),
    &RequiredSize,
    &Type);
  if ( *(_BYTE *)(v1 + 1091) )
  {
    if ( *(_BYTE *)(v1 + 480) )
    {
      MiniportInterface = DpiQueryMiniportInterface(
                            (_DWORD)StartContext,
                            (unsigned int)&GUID_DEVINTERFACE_MSBDD_FALLBACK,
                            56,
                            1,
                            -1,
                            v1 + 944);
      v9 = MiniportInterface;
      if ( MiniportInterface < 0 || !*(_QWORD *)(v1 + 976) || !*(_QWORD *)(v1 + 984) || !*(_QWORD *)(v1 + 992) )
      {
        v38 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v27, v26, v28);
        v38[5] = DpiFdoInitializeFdo;
        v38[6] = DpiQueryMiniportInterface;
        v38[3] = 275LL;
        v38[4] = 21LL;
        v38[7] = v9;
        WdLogEvent5_WdCriticalError(v38);
        goto LABEL_26;
      }
    }
  }
  v10 = IoRegisterDeviceInterface(*(PDEVICE_OBJECT *)(v1 + 152), &GUID_DISPLAY_DEVICE_ARRIVAL, 0LL, &SymbolicLinkName);
  v9 = v10;
  if ( v10 < 0 )
  {
    v36 = (_QWORD *)WdLogNewEntry5_WdError(v11);
    v36[3] = DpiFdoInitializeFdo;
    v37 = (__int64 (__usercall *)@<rax>(PDEVICE_OBJECT@<rcx>, DEVICE_REGISTRY_PROPERTY@<edx>, POOL_TYPE@<r8d>, __int64))IoRegisterDeviceInterface;
    goto LABEL_62;
  }
  v5 = 1;
  v12 = ExAllocatePoolWithTag((POOL_TYPE)512, SymbolicLinkName.MaximumLength, 0x74727044u);
  *(_QWORD *)(v1 + 1536) = v12;
  if ( v12 )
  {
    *(_WORD *)(v1 + 1530) = SymbolicLinkName.MaximumLength;
    *(_WORD *)(v1 + 1528) = SymbolicLinkName.Length;
    RtlCopyUnicodeString((PUNICODE_STRING)(v1 + 1528), &SymbolicLinkName);
    RtlFreeUnicodeString(&SymbolicLinkName);
    v5 = 0;
    *(_BYTE *)(v1 + 481) = 0;
    *(_BYTE *)(v1 + 483) = 0;
    *(_QWORD *)(v1 + 488) = 0LL;
    if ( *(_BYTE *)(v1 + 480) )
      goto LABEL_7;
    KeInitializeEvent((PRKEVENT)(v1 + 2576), SynchronizationEvent, 0);
    *(_QWORD *)(v1 + 2616) = v1 + 2608;
    *(_QWORD *)(v1 + 2608) = v1 + 2608;
    KeInitializeSpinLock((PKSPIN_LOCK)(v1 + 2712));
    KeInitializeEvent((PRKEVENT)(v1 + 2728), NotificationEvent, 1u);
    KeInitializeEvent((PRKEVENT)(v1 + 2752), NotificationEvent, 1u);
    *(_BYTE *)(v1 + 483) = 1;
    *(_QWORD *)(v1 + 2776) = 0LL;
    *(_DWORD *)(v1 + 2720) = 0;
    memset((void *)(v1 + 2632), 0, 0x50uLL);
    *(_DWORD *)(v1 + 2648) = 1953656900;
    *(_DWORD *)(v1 + 2652) = 11;
    *(_DWORD *)(v1 + 2672) = 64;
    KeInitializeTimer((PKTIMER)(v1 + 2784));
    KeInitializeDpc((PRKDPC)(v1 + 2848), (PKDEFERRED_ROUTINE)DpiSuspendAdapterDpc, (PVOID)v1);
    v29 = PsCreateSystemThread(&ThreadHandle, 0x1FFFFFu, 0LL, 0LL, 0LL, DpiPowerArbiterThread, StartContext);
    v9 = v29;
    if ( v29 < 0 )
    {
      v36 = (_QWORD *)WdLogNewEntry5_WdError(v30);
      v36[3] = DpiFdoInitializeFdo;
      v37 = (__int64 (__usercall *)@<rax>(PDEVICE_OBJECT@<rcx>, DEVICE_REGISTRY_PROPERTY@<edx>, POOL_TYPE@<r8d>, __int64))PsCreateSystemThread;
    }
    else
    {
      v9 = ObReferenceObjectByHandle(ThreadHandle, 0x1FFFFFu, 0LL, 0, &Object, 0LL);
      *(_QWORD *)(v1 + 2568) = Object;
      ZwClose(ThreadHandle);
      if ( (int)v9 >= 0 )
      {
LABEL_7:
        KeInitializeEvent((PRKEVENT)(v1 + 2344), SynchronizationEvent, 0);
        ExInitializeResourceLite((PERESOURCE)(v1 + 1976));
        LOBYTE(Object) = 1;
        *(_QWORD *)(v1 + 2192) = v1 + 2184;
        *(_QWORD *)(v1 + 2184) = v1 + 2184;
        KeInitializeSpinLock((PKSPIN_LOCK)(v1 + 2176));
        *(_BYTE *)(v1 + 2200) = 0;
        KeInitializeMutex((PRKMUTEX)(v1 + 2080), 0);
        KeInitializeMutex((PRKMUTEX)(v1 + 2232), 0);
        *(_QWORD *)(v1 + 2304) = v1 + 2296;
        *(_QWORD *)(v1 + 2296) = v1 + 2296;
        *(_QWORD *)(v1 + 2328) = v1 + 2320;
        *(_QWORD *)(v1 + 2320) = v1 + 2320;
        *(_QWORD *)(v1 + 2224) = v1 + 2216;
        *(_QWORD *)(v1 + 2216) = v1 + 2216;
        ExInitializeResourceLite((PERESOURCE)(v1 + 2440));
        v4 = 1;
        LODWORD(v9) = DpiFdoInitializeAdapterUniqueString(StartContext);
        if ( (int)v9 < 0 )
        {
LABEL_66:
          v3 = (char)Object;
LABEL_67:
          ExDeleteResourceLite((PERESOURCE)(v1 + 2440));
LABEL_68:
          if ( v3 == 1 )
            ExDeleteResourceLite((PERESOURCE)(v1 + 1976));
          goto LABEL_70;
        }
        v17 = *(struct _DEVICE_OBJECT **)(v1 + 152);
        v52 = 1;
        DpiQueryBusInterface(v17, v1 + 1544);
        DpiQueryBusInterface(*(PDEVICE_OBJECT *)(v1 + 152), v1 + 1592);
        DpiQueryMiniportInterface((_DWORD)StartContext, (unsigned int)&GUID_DEVINTERFACE_I2C, 48, 1, -1, v1 + 1640);
        v18 = *(_QWORD *)(v1 + 40);
        *(_DWORD *)(v1 + 1688) = 0;
        if ( *(_BYTE *)(v18 + 133) )
          goto LABEL_13;
        v19 = (_WORD *)(v1 + 1696);
        if ( (int)DpiQueryMiniportInterface(
                    (_DWORD)StartContext,
                    (unsigned int)&GUID_DEVINTERFACE_OPM_2,
                    112,
                    3,
                    -1,
                    v1 + 1696) >= 0 )
        {
          if ( *v19 != 112
            || (v32 = 3, *(_WORD *)(v1 + 1698) != 3)
            || !*(_QWORD *)(v1 + 1728)
            || !*(_QWORD *)(v1 + 1736)
            || !*(_QWORD *)(v1 + 1744)
            || !*(_QWORD *)(v1 + 1752)
            || !*(_QWORD *)(v1 + 1760)
            || !*(_QWORD *)(v1 + 1768)
            || !*(_QWORD *)(v1 + 1776)
            || !*(_QWORD *)(v1 + 1784)
            || !*(_QWORD *)(v1 + 1792)
            || !*(_QWORD *)(v1 + 1800) )
          {
            LODWORD(v9) = -1073741811;
            v39 = (_QWORD *)WdLogNewEntry5_WdError(v20);
            v39[3] = DpiFdoInitializeFdo;
            v39[4] = DpiQueryMiniportInterface;
            v39[5] = -1073741811LL;
            WdLogEvent5_WdError(v39);
            v40 = 112LL;
LABEL_65:
            memset(v19, 0, v40);
            goto LABEL_66;
          }
        }
        else
        {
          if ( (int)DpiQueryMiniportInterface(
                      (_DWORD)StartContext,
                      (unsigned int)&GUID_DEVINTERFACE_OPM_2_JTP,
                      120,
                      2,
                      -1,
                      v1 + 1696) < 0 )
          {
            if ( (int)DpiQueryMiniportInterface(
                        (_DWORD)StartContext,
                        (unsigned int)&GUID_DEVINTERFACE_OPM,
                        104,
                        1,
                        -1,
                        v1 + 1696) >= 0 )
              *(_DWORD *)(v1 + 1688) = 1;
LABEL_13:
            *(_DWORD *)(v1 + 1888) = -1;
            if ( !byte_1C0046CD6 || *(_DWORD *)(*(_QWORD *)(StartContext[8] + 40LL) + 28LL) < 0x4000u )
              goto LABEL_23;
            if ( *(_BYTE *)(*(_QWORD *)(v1 + 40) + 133LL) && !*(_BYTE *)(v1 + 1095) )
            {
LABEL_25:
              v23 = StartContext[8];
              memset((void *)(v23 + 2912), 0, 0x88uLL);
              memset((void *)(v23 + 3048), 0, 0x58uLL);
              memset((void *)(v23 + 3136), 0, 0x38uLL);
              memset((void *)(v23 + 3192), 0, 0x58uLL);
              v3 = (char)Object;
              goto LABEL_26;
            }
            v19 = (_WORD *)(v1 + 1816);
            if ( (int)DpiQueryMiniportInterface(
                        (_DWORD)StartContext,
                        (unsigned int)&GUID_DEVINTERFACE_MIRACAST_DISPLAY,
                        64,
                        1,
                        -1,
                        v1 + 1816) < 0 )
            {
              memset((void *)(v1 + 1816), 0, 0x40uLL);
              goto LABEL_23;
            }
            if ( *v19 >= 0x40u )
            {
              v22 = 1LL;
              if ( *(_WORD *)(v1 + 1818) == 1
                && *(_QWORD *)(v1 + 1848)
                && *(_QWORD *)(v1 + 1856)
                && *(_QWORD *)(v1 + 1864)
                && *(_QWORD *)(v1 + 1872) )
              {
LABEL_23:
                if ( *(_BYTE *)(v1 + 1095) )
                {
                  *(_QWORD *)(v1 + 104) = &DpiFdoDispatchCreate;
                  *(_QWORD *)(v1 + 96) = &DpiFdoDispatchCleanupAndClose;
                }
                goto LABEL_25;
              }
            }
            LODWORD(v9) = -1073741811;
            v41 = (_QWORD *)WdLogNewEntry5_WdError(v22);
            v41[3] = DpiFdoInitializeFdo;
            v41[4] = DpiQueryMiniportInterface;
            v41[5] = -1073741811LL;
            WdLogEvent5_WdError(v41);
            v40 = 64LL;
            goto LABEL_65;
          }
          if ( *v19 != 120
            || (v32 = 2, *(_WORD *)(v1 + 1698) != 2)
            || !*(_QWORD *)(v1 + 1728)
            || !*(_QWORD *)(v1 + 1736)
            || !*(_QWORD *)(v1 + 1744)
            || !*(_QWORD *)(v1 + 1752)
            || !*(_QWORD *)(v1 + 1760)
            || !*(_QWORD *)(v1 + 1768)
            || !*(_QWORD *)(v1 + 1776)
            || !*(_QWORD *)(v1 + 1784)
            || !*(_QWORD *)(v1 + 1792)
            || !*(_QWORD *)(v1 + 1808) )
          {
            LODWORD(v9) = -1073741811;
            v48 = (_QWORD *)WdLogNewEntry5_WdError(v21);
            v48[3] = DpiFdoInitializeFdo;
            v48[4] = DpiQueryMiniportInterface;
            v48[5] = -1073741811LL;
            WdLogEvent5_WdError(v48);
            v40 = 120LL;
            goto LABEL_65;
          }
        }
        *(_DWORD *)(v1 + 1688) = v32;
        goto LABEL_13;
      }
      v36 = (_QWORD *)WdLogNewEntry5_WdError(v31);
      v36[3] = DpiFdoInitializeFdo;
      v37 = (__int64 (__usercall *)@<rax>(PDEVICE_OBJECT@<rcx>, DEVICE_REGISTRY_PROPERTY@<edx>, POOL_TYPE@<r8d>, __int64))ObReferenceObjectByHandle;
    }
LABEL_62:
    v36[4] = v37;
    v36[5] = v9;
    WdLogEvent5_WdError(v36);
LABEL_26:
    if ( (int)v9 >= 0 )
      return (unsigned int)v9;
    if ( v4 != 1 )
      goto LABEL_68;
    goto LABEL_67;
  }
LABEL_56:
  LODWORD(v9) = -1073741801;
  v35 = (_QWORD *)WdLogNewEntry5_WdLowResource(v14, v13, v15, v16);
  v35[3] = DpiFdoInitializeFdo;
  v35[4] = ExAllocatePoolWithTag;
  v35[5] = -1073741801LL;
  WdLogEvent5_WdLowResource(v35);
LABEL_70:
  if ( *(_QWORD *)(v1 + 2568) )
    DpiRequestIoPowerState((__int64)StartContext, 7, 0LL, 0);
  if ( v5 == 1 )
    RtlFreeUnicodeString(&SymbolicLinkName);
  if ( v52 )
  {
    RtlFreeUnicodeString((PUNICODE_STRING)(v1 + 3280));
    RtlFreeUnicodeString((PUNICODE_STRING)(v1 + 3296));
  }
  v42 = *(void **)(v1 + 1960);
  *(_DWORD *)(v1 + 1944) = 0;
  if ( v42 )
  {
    ExFreePoolWithTag(v42, 0);
    *(_QWORD *)(v1 + 1960) = 0LL;
  }
  v43 = *(void **)(v1 + 1952);
  if ( v43 )
  {
    ExFreePoolWithTag(v43, 0);
    *(_QWORD *)(v1 + 1952) = 0LL;
  }
  v44 = *(void **)(v1 + 3312);
  if ( v44 )
  {
    ExFreePoolWithTag(v44, 0);
    *(_QWORD *)(v1 + 3312) = 0LL;
  }
  v45 = *(void **)(v1 + 3320);
  if ( v45 )
  {
    ExFreePoolWithTag(v45, 0);
    *(_QWORD *)(v1 + 3320) = 0LL;
  }
  v46 = *(void **)(v1 + 1512);
  if ( v46 )
  {
    ExFreePoolWithTag(v46, 0);
    *(_QWORD *)(v1 + 1512) = 0LL;
  }
  v47 = *(void **)(v1 + 1536);
  if ( v47 )
  {
    ExFreePoolWithTag(v47, 0);
    *(_QWORD *)(v1 + 1536) = 0LL;
  }
  return (unsigned int)v9;
}
