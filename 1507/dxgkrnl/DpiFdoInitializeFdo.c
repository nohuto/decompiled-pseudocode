/*
 * XREFs of DpiFdoInitializeFdo @ 0x1C00C6170
 * Callers:
 *     DpiAddDevice @ 0x1C00C5300 (DpiAddDevice.c)
 * Callees:
 *     memset @ 0x1C0010C80 (memset.c)
 *     DpiRequestIoPowerState @ 0x1C00BC9E0 (DpiRequestIoPowerState.c)
 *     DpiQueryMiniportInterface @ 0x1C00C6840 (DpiQueryMiniportInterface.c)
 *     DpiQueryBusInterface @ 0x1C00C6960 (DpiQueryBusInterface.c)
 *     DpiFdoInitializeAdapterUniqueString @ 0x1C00C6A30 (DpiFdoInitializeAdapterUniqueString.c)
 *     DpiGetDevicePropertyDataString @ 0x1C00C6CA0 (DpiGetDevicePropertyDataString.c)
 *     DpiGetDevicePropertyString @ 0x1C00C6DF0 (DpiGetDevicePropertyString.c)
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
  __int64 v13; // rcx
  struct _DEVICE_OBJECT *v14; // rcx
  __int64 v15; // rax
  _WORD *v16; // r15
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rbx
  int MiniportInterface; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  NTSTATUS v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rcx
  SIZE_T v29; // rbx
  PVOID PoolWithTag; // rax
  _QWORD *v31; // rax
  _QWORD *v32; // rax
  _QWORD *v33; // rax
  __int64 (__usercall *v34)@<rax>(PDEVICE_OBJECT@<rcx>, DEVICE_REGISTRY_PROPERTY@<edx>, POOL_TYPE@<r8d>, __int64); // rcx
  int v35; // eax
  _QWORD *v36; // rax
  size_t v37; // r8
  _QWORD *v38; // rax
  _QWORD *v39; // rax
  void *v40; // rcx
  void *v41; // rcx
  void *v42; // rcx
  void *v43; // rcx
  void *v44; // rcx
  void *v45; // rcx
  void *ThreadHandle; // [rsp+40h] [rbp-28h] BYREF
  struct _UNICODE_STRING SymbolicLinkName; // [rsp+48h] [rbp-20h] BYREF
  PVOID Object; // [rsp+B0h] [rbp+48h] BYREF
  char v49; // [rsp+B8h] [rbp+50h]
  ULONG RequiredSize; // [rsp+C0h] [rbp+58h] BYREF
  ULONG Type; // [rsp+C8h] [rbp+60h] BYREF

  v1 = StartContext[8];
  *(_QWORD *)&SymbolicLinkName.Length = 0LL;
  SymbolicLinkName.Buffer = 0LL;
  v49 = 0;
  *(_QWORD *)(v1 + 112) = &DpiFdoDispatchInternalIoctl;
  v3 = 0;
  v4 = 0;
  *(_QWORD *)(v1 + 144) = DpiFdoDispatchSystemControl;
  v5 = 0;
  *(_QWORD *)(v1 + 320) = &DpiFdoHandleQueryInterface;
  *(_QWORD *)(v1 + 312) = &DpiFdoHandleQueryDeviceRelations;
  v6 = *(_DWORD *)(v1 + 472);
  if ( v6 )
  {
    v29 = (unsigned int)(8 * v6);
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v29, 0x74727044u);
    *(_QWORD *)(v1 + 1472) = PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_40;
    memset(PoolWithTag, 0, (unsigned int)v29);
    **(_QWORD **)(v1 + 1472) = StartContext;
    *(_DWORD *)(v1 + 1480) = 1;
  }
  DevicePropertyString = DpiGetDevicePropertyString(
                           *(PDEVICE_OBJECT *)(v1 + 152),
                           DevicePropertyDeviceDescription,
                           (POOL_TYPE)512,
                           (__int64)&RequiredSize);
  v9 = DevicePropertyString;
  if ( DevicePropertyString < 0 )
  {
    v33 = (_QWORD *)WdLogNewEntry5_WdError(v8);
    v33[3] = DpiFdoInitializeFdo;
    v34 = DpiGetDevicePropertyString;
    goto LABEL_45;
  }
  DpiGetDevicePropertyDataString(
    *(PDEVICE_OBJECT *)(v1 + 152),
    (DEVPROPKEY *)&DEVPKEY_Device_DriverVersion,
    0,
    (POOL_TYPE)512,
    v1 + 3256,
    (__int64)&RequiredSize);
  IoGetDevicePropertyData(
    *(PDEVICE_OBJECT *)(v1 + 152),
    &DEVPKEY_Device_DriverDate,
    0,
    0,
    8u,
    (PVOID)(v1 + 3264),
    &RequiredSize,
    &Type);
  IoGetDevicePropertyData(
    *(PDEVICE_OBJECT *)(v1 + 152),
    &DEVPKEY_Device_DriverRank,
    0,
    0,
    4u,
    (PVOID)(v1 + 3272),
    &RequiredSize,
    &Type);
  if ( *(_BYTE *)(v1 + 1058) )
  {
    if ( *(_BYTE *)(v1 + 448) )
    {
      MiniportInterface = DpiQueryMiniportInterface(
                            (_DWORD)StartContext,
                            (unsigned int)&GUID_DEVINTERFACE_MSBDD_FALLBACK,
                            56,
                            1,
                            -1,
                            v1 + 912);
      v9 = MiniportInterface;
      if ( MiniportInterface < 0 || !*(_QWORD *)(v1 + 944) || !*(_QWORD *)(v1 + 952) || !*(_QWORD *)(v1 + 960) )
      {
        v32 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v24, v23, v25);
        v32[5] = DpiFdoInitializeFdo;
        v32[6] = DpiQueryMiniportInterface;
        v32[3] = 275LL;
        v32[4] = 21LL;
        v32[7] = v9;
        WdLogEvent5_WdCriticalError(v32);
        goto LABEL_26;
      }
    }
  }
  v10 = IoRegisterDeviceInterface(*(PDEVICE_OBJECT *)(v1 + 152), &GUID_DISPLAY_DEVICE_ARRIVAL, 0LL, &SymbolicLinkName);
  v9 = v10;
  if ( v10 < 0 )
  {
    v33 = (_QWORD *)WdLogNewEntry5_WdError(v11);
    v33[3] = DpiFdoInitializeFdo;
    v34 = (__int64 (__usercall *)@<rax>(PDEVICE_OBJECT@<rcx>, DEVICE_REGISTRY_PROPERTY@<edx>, POOL_TYPE@<r8d>, __int64))IoRegisterDeviceInterface;
    goto LABEL_45;
  }
  v5 = 1;
  v12 = ExAllocatePoolWithTag((POOL_TYPE)512, SymbolicLinkName.MaximumLength, 0x74727044u);
  *(_QWORD *)(v1 + 1496) = v12;
  if ( v12 )
  {
    *(_WORD *)(v1 + 1490) = SymbolicLinkName.MaximumLength;
    *(_WORD *)(v1 + 1488) = SymbolicLinkName.Length;
    RtlCopyUnicodeString((PUNICODE_STRING)(v1 + 1488), &SymbolicLinkName);
    RtlFreeUnicodeString(&SymbolicLinkName);
    v5 = 0;
    *(_BYTE *)(v1 + 449) = 0;
    *(_BYTE *)(v1 + 451) = 0;
    *(_QWORD *)(v1 + 456) = 0LL;
    if ( *(_BYTE *)(v1 + 448) )
      goto LABEL_7;
    KeInitializeEvent((PRKEVENT)(v1 + 2536), SynchronizationEvent, 0);
    *(_QWORD *)(v1 + 2576) = v1 + 2568;
    *(_QWORD *)(v1 + 2568) = v1 + 2568;
    KeInitializeSpinLock((PKSPIN_LOCK)(v1 + 2672));
    KeInitializeEvent((PRKEVENT)(v1 + 2688), NotificationEvent, 1u);
    *(_BYTE *)(v1 + 451) = 1;
    *(_QWORD *)(v1 + 2712) = 0LL;
    *(_DWORD *)(v1 + 2680) = 0;
    memset((void *)(v1 + 2592), 0, 0x50uLL);
    *(_DWORD *)(v1 + 2608) = 1953656900;
    *(_DWORD *)(v1 + 2612) = 11;
    *(_DWORD *)(v1 + 2632) = 64;
    KeInitializeTimer((PKTIMER)(v1 + 2720));
    KeInitializeDpc((PRKDPC)(v1 + 2784), (PKDEFERRED_ROUTINE)DpiSuspendAdapterDpc, (PVOID)v1);
    v26 = PsCreateSystemThread(&ThreadHandle, 0x1FFFFFu, 0LL, 0LL, 0LL, DpiPowerArbiterThread, StartContext);
    v9 = v26;
    if ( v26 < 0 )
    {
      v33 = (_QWORD *)WdLogNewEntry5_WdError(v27);
      v33[3] = DpiFdoInitializeFdo;
      v34 = (__int64 (__usercall *)@<rax>(PDEVICE_OBJECT@<rcx>, DEVICE_REGISTRY_PROPERTY@<edx>, POOL_TYPE@<r8d>, __int64))PsCreateSystemThread;
    }
    else
    {
      v9 = ObReferenceObjectByHandle(ThreadHandle, 0x1FFFFFu, 0LL, 0, &Object, 0LL);
      *(_QWORD *)(v1 + 2528) = Object;
      ZwClose(ThreadHandle);
      if ( (int)v9 >= 0 )
      {
LABEL_7:
        v3 = 1;
        KeInitializeEvent((PRKEVENT)(v1 + 2304), SynchronizationEvent, 0);
        ExInitializeResourceLite((PERESOURCE)(v1 + 1936));
        LOBYTE(Object) = 1;
        *(_QWORD *)(v1 + 2152) = v1 + 2144;
        *(_QWORD *)(v1 + 2144) = v1 + 2144;
        KeInitializeSpinLock((PKSPIN_LOCK)(v1 + 2136));
        *(_BYTE *)(v1 + 2160) = 0;
        KeInitializeMutex((PRKMUTEX)(v1 + 2040), 0);
        KeInitializeMutex((PRKMUTEX)(v1 + 2192), 0);
        *(_QWORD *)(v1 + 2264) = v1 + 2256;
        *(_QWORD *)(v1 + 2256) = v1 + 2256;
        *(_QWORD *)(v1 + 2288) = v1 + 2280;
        *(_QWORD *)(v1 + 2280) = v1 + 2280;
        *(_QWORD *)(v1 + 2184) = v1 + 2176;
        *(_QWORD *)(v1 + 2176) = v1 + 2176;
        ExInitializeResourceLite((PERESOURCE)(v1 + 2400));
        v4 = 1;
        LODWORD(v9) = DpiFdoInitializeAdapterUniqueString(StartContext);
        if ( (int)v9 < 0 )
        {
LABEL_76:
          ExDeleteResourceLite((PERESOURCE)(v1 + 2400));
LABEL_77:
          if ( v3 == 1 )
            ExDeleteResourceLite((PERESOURCE)(v1 + 1936));
          goto LABEL_79;
        }
        v14 = *(struct _DEVICE_OBJECT **)(v1 + 152);
        v49 = 1;
        DpiQueryBusInterface(v14, v1 + 1504);
        DpiQueryBusInterface(*(PDEVICE_OBJECT *)(v1 + 152), v1 + 1552);
        DpiQueryMiniportInterface((_DWORD)StartContext, (unsigned int)&GUID_DEVINTERFACE_I2C, 48, 1, -1, v1 + 1600);
        v15 = *(_QWORD *)(v1 + 40);
        *(_DWORD *)(v1 + 1648) = 0;
        if ( *(_BYTE *)(v15 + 133) )
          goto LABEL_13;
        v16 = (_WORD *)(v1 + 1656);
        if ( (int)DpiQueryMiniportInterface(
                    (_DWORD)StartContext,
                    (unsigned int)&GUID_DEVINTERFACE_OPM_2,
                    112,
                    3,
                    -1,
                    v1 + 1656) >= 0 )
        {
          if ( *v16 != 112
            || (v35 = 3, *(_WORD *)(v1 + 1658) != 3)
            || !*(_QWORD *)(v1 + 1688)
            || !*(_QWORD *)(v1 + 1696)
            || !*(_QWORD *)(v1 + 1704)
            || !*(_QWORD *)(v1 + 1712)
            || !*(_QWORD *)(v1 + 1720)
            || !*(_QWORD *)(v1 + 1728)
            || !*(_QWORD *)(v1 + 1736)
            || !*(_QWORD *)(v1 + 1744)
            || !*(_QWORD *)(v1 + 1752)
            || !*(_QWORD *)(v1 + 1760) )
          {
            LODWORD(v9) = -1073741811;
            v36 = (_QWORD *)WdLogNewEntry5_WdError(v17);
            v36[3] = DpiFdoInitializeFdo;
            v36[4] = DpiQueryMiniportInterface;
            v36[5] = -1073741811LL;
            WdLogEvent5_WdError(v36);
            v37 = 112LL;
LABEL_61:
            memset(v16, 0, v37);
            v3 = (char)Object;
            goto LABEL_76;
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
                      v1 + 1656) < 0 )
          {
            if ( (int)DpiQueryMiniportInterface(
                        (_DWORD)StartContext,
                        (unsigned int)&GUID_DEVINTERFACE_OPM,
                        104,
                        1,
                        -1,
                        v1 + 1656) >= 0 )
              *(_DWORD *)(v1 + 1648) = 1;
            goto LABEL_13;
          }
          if ( *v16 != 120
            || (v35 = 2, *(_WORD *)(v1 + 1658) != 2)
            || !*(_QWORD *)(v1 + 1688)
            || !*(_QWORD *)(v1 + 1696)
            || !*(_QWORD *)(v1 + 1704)
            || !*(_QWORD *)(v1 + 1712)
            || !*(_QWORD *)(v1 + 1720)
            || !*(_QWORD *)(v1 + 1728)
            || !*(_QWORD *)(v1 + 1736)
            || !*(_QWORD *)(v1 + 1744)
            || !*(_QWORD *)(v1 + 1752)
            || !*(_QWORD *)(v1 + 1768) )
          {
            LODWORD(v9) = -1073741811;
            v39 = (_QWORD *)WdLogNewEntry5_WdError(v18);
            v39[3] = DpiFdoInitializeFdo;
            v39[4] = DpiQueryMiniportInterface;
            v39[5] = -1073741811LL;
            WdLogEvent5_WdError(v39);
            v37 = 120LL;
            goto LABEL_61;
          }
        }
        *(_DWORD *)(v1 + 1648) = v35;
LABEL_13:
        *(_DWORD *)(v1 + 1848) = -1;
        if ( !byte_1C0046C56
          || *(_DWORD *)(*(_QWORD *)(StartContext[8] + 40LL) + 28LL) < 0x4000u
          || *(_BYTE *)(*(_QWORD *)(v1 + 40) + 133LL) && !*(_BYTE *)(v1 + 1062) )
        {
          goto LABEL_25;
        }
        v16 = (_WORD *)(v1 + 1776);
        if ( (int)DpiQueryMiniportInterface(
                    (_DWORD)StartContext,
                    (unsigned int)&GUID_DEVINTERFACE_MIRACAST_DISPLAY,
                    64,
                    1,
                    -1,
                    v1 + 1776) < 0 )
        {
          memset((void *)(v1 + 1776), 0, 0x40uLL);
LABEL_25:
          v20 = StartContext[8];
          memset((void *)(v20 + 2848), 0, 0x88uLL);
          memset((void *)(v20 + 2984), 0, 0x58uLL);
          memset((void *)(v20 + 3072), 0, 0x38uLL);
          memset((void *)(v20 + 3128), 0, 0x58uLL);
          v3 = (char)Object;
          goto LABEL_26;
        }
        if ( *v16 >= 0x40u )
        {
          v19 = 1LL;
          if ( *(_WORD *)(v1 + 1778) == 1
            && *(_QWORD *)(v1 + 1808)
            && *(_QWORD *)(v1 + 1816)
            && *(_QWORD *)(v1 + 1824)
            && *(_QWORD *)(v1 + 1832) )
          {
            goto LABEL_25;
          }
        }
        LODWORD(v9) = -1073741811;
        v38 = (_QWORD *)WdLogNewEntry5_WdError(v19);
        v38[3] = DpiFdoInitializeFdo;
        v38[4] = DpiQueryMiniportInterface;
        v38[5] = -1073741811LL;
        WdLogEvent5_WdError(v38);
        v37 = 64LL;
        goto LABEL_61;
      }
      v33 = (_QWORD *)WdLogNewEntry5_WdError(v28);
      v33[3] = DpiFdoInitializeFdo;
      v34 = (__int64 (__usercall *)@<rax>(PDEVICE_OBJECT@<rcx>, DEVICE_REGISTRY_PROPERTY@<edx>, POOL_TYPE@<r8d>, __int64))ObReferenceObjectByHandle;
    }
LABEL_45:
    v33[4] = v34;
    v33[5] = v9;
    WdLogEvent5_WdError(v33);
LABEL_26:
    if ( (int)v9 >= 0 )
      return (unsigned int)v9;
    if ( v4 != 1 )
      goto LABEL_77;
    goto LABEL_76;
  }
LABEL_40:
  LODWORD(v9) = -1073741801;
  v31 = (_QWORD *)WdLogNewEntry5_WdLowResource(v13);
  v31[3] = DpiFdoInitializeFdo;
  v31[4] = ExAllocatePoolWithTag;
  v31[5] = -1073741801LL;
  WdLogEvent5_WdLowResource(v31);
LABEL_79:
  if ( *(_QWORD *)(v1 + 2528) )
    DpiRequestIoPowerState((__int64)StartContext, 6, 0LL, 0);
  if ( v5 == 1 )
    RtlFreeUnicodeString(&SymbolicLinkName);
  if ( v49 )
  {
    RtlFreeUnicodeString((PUNICODE_STRING)(v1 + 3216));
    RtlFreeUnicodeString((PUNICODE_STRING)(v1 + 3232));
  }
  v40 = *(void **)(v1 + 1920);
  *(_DWORD *)(v1 + 1904) = 0;
  if ( v40 )
  {
    ExFreePoolWithTag(v40, 0);
    *(_QWORD *)(v1 + 1920) = 0LL;
  }
  v41 = *(void **)(v1 + 1912);
  if ( v41 )
  {
    ExFreePoolWithTag(v41, 0);
    *(_QWORD *)(v1 + 1912) = 0LL;
  }
  v42 = *(void **)(v1 + 3248);
  if ( v42 )
  {
    ExFreePoolWithTag(v42, 0);
    *(_QWORD *)(v1 + 3248) = 0LL;
  }
  v43 = *(void **)(v1 + 3256);
  if ( v43 )
  {
    ExFreePoolWithTag(v43, 0);
    *(_QWORD *)(v1 + 3256) = 0LL;
  }
  v44 = *(void **)(v1 + 1472);
  if ( v44 )
  {
    ExFreePoolWithTag(v44, 0);
    *(_QWORD *)(v1 + 1472) = 0LL;
  }
  v45 = *(void **)(v1 + 1496);
  if ( v45 )
  {
    ExFreePoolWithTag(v45, 0);
    *(_QWORD *)(v1 + 1496) = 0LL;
  }
  return (unsigned int)v9;
}
