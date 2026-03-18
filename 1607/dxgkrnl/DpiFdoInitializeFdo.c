/*
 * XREFs of DpiFdoInitializeFdo @ 0x1C00EB240
 * Callers:
 *     DpiAddDevice @ 0x1C00EA390 (DpiAddDevice.c)
 * Callees:
 *     memset @ 0x1C00127C0 (memset.c)
 *     DpiRequestIoPowerState @ 0x1C00E0898 (DpiRequestIoPowerState.c)
 *     DpiQueryMiniportInterface @ 0x1C00EBA80 (DpiQueryMiniportInterface.c)
 *     DpiQueryBusInterface @ 0x1C00EBB88 (DpiQueryBusInterface.c)
 *     DpiFdoInitializeAdapterUniqueString @ 0x1C00EBC54 (DpiFdoInitializeAdapterUniqueString.c)
 *     DpiGetDevicePropertyDataString @ 0x1C00EBEA4 (DpiGetDevicePropertyDataString.c)
 *     DpiGetDevicePropertyString @ 0x1C00EBFE8 (DpiGetDevicePropertyString.c)
 */

__int64 __fastcall DpiFdoInitializeFdo(_QWORD *StartContext)
{
  __int64 v1; // rbx
  char v2; // r14
  char v3; // r12
  char v4; // si
  char v5; // r13
  int v7; // eax
  struct _DEVICE_OBJECT *v8; // rcx
  int DevicePropertyString; // eax
  __int64 v10; // rcx
  __int64 v11; // rdi
  NTSTATUS v12; // eax
  PVOID v13; // rax
  __int64 v14; // rcx
  int v15; // r14d
  __int64 v16; // rcx
  __int64 v17; // rax
  _WORD *v18; // r14
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // r8
  int MiniportInterface; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  NTSTATUS v28; // eax
  __int64 v29; // rcx
  int v30; // eax
  SIZE_T v31; // rdi
  PVOID PoolWithTag; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rax
  _QWORD *v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  NTSTATUS v39; // eax
  NTSTATUS v40; // eax
  NTSTATUS v41; // eax
  NTSTATUS v42; // eax
  __int64 v43; // rax
  __int64 v44; // rax
  size_t v45; // r8
  __int64 v46; // rax
  __int64 v47; // rax
  void *v48; // rcx
  void *v49; // rcx
  void *v50; // rcx
  void *v51; // rcx
  void *v52; // rcx
  void *v53; // rcx
  void *v54; // rcx
  void *v55; // rcx
  void *v56; // rcx
  void *v57; // rcx
  ULONG Type; // [rsp+40h] [rbp-38h] BYREF
  void *ThreadHandle; // [rsp+48h] [rbp-30h] BYREF
  PVOID Object; // [rsp+50h] [rbp-28h] BYREF
  struct _UNICODE_STRING SymbolicLinkName; // [rsp+58h] [rbp-20h] BYREF
  char v62; // [rsp+D0h] [rbp+58h]
  ULONG RequiredSize; // [rsp+D8h] [rbp+60h] BYREF

  v1 = StartContext[8];
  *(_QWORD *)&SymbolicLinkName.Length = 0LL;
  v2 = 0;
  SymbolicLinkName.Buffer = 0LL;
  v3 = 0;
  v62 = 0;
  *(_QWORD *)(v1 + 112) = &DpiFdoDispatchInternalIoctl;
  v4 = 0;
  v5 = 0;
  *(_QWORD *)(v1 + 144) = DpiFdoDispatchSystemControl;
  *(_QWORD *)(v1 + 352) = &DpiFdoHandleQueryInterface;
  *(_QWORD *)(v1 + 344) = &DpiFdoHandleQueryDeviceRelations;
  v7 = *(_DWORD *)(v1 + 504);
  if ( v7 )
  {
    v31 = (unsigned int)(8 * v7);
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v31, 0x74727044u);
    *(_QWORD *)(v1 + 2592) = PoolWithTag;
    if ( !PoolWithTag )
    {
      LODWORD(v11) = -1073741801;
      v34 = WdLogNewEntry5_WdLowResource(v33);
      *(_QWORD *)(v34 + 24) = -1073741801LL;
      WdLogEvent5_WdLowResource(v34);
      goto LABEL_121;
    }
    memset(PoolWithTag, 0, v31);
    **(_QWORD **)(v1 + 2592) = StartContext;
    *(_DWORD *)(v1 + 2600) = 1;
  }
  v8 = *(struct _DEVICE_OBJECT **)(v1 + 152);
  *(_DWORD *)(v1 + 3312) = -1;
  DevicePropertyString = DpiGetDevicePropertyString(
                           v8,
                           DevicePropertyDeviceDescription,
                           (POOL_TYPE)512,
                           (__int64)&RequiredSize);
  v11 = DevicePropertyString;
  if ( DevicePropertyString < 0 )
    goto LABEL_61;
  DpiGetDevicePropertyDataString(
    *(PDEVICE_OBJECT *)(v1 + 152),
    (DEVPROPKEY *)&DEVPKEY_Device_DriverVersion,
    v1 + 4472,
    (__int64)&RequiredSize);
  IoGetDevicePropertyData(
    *(PDEVICE_OBJECT *)(v1 + 152),
    &DEVPKEY_Device_DriverDate,
    0,
    0,
    8u,
    (PVOID)(v1 + 4480),
    &RequiredSize,
    &Type);
  IoGetDevicePropertyData(
    *(PDEVICE_OBJECT *)(v1 + 152),
    &DEVPKEY_Device_DriverRank,
    0,
    0,
    4u,
    (PVOID)(v1 + 4488),
    &RequiredSize,
    &Type);
  if ( *(_BYTE *)(v1 + 1139) )
  {
    if ( *(_BYTE *)(v1 + 480) )
    {
      MiniportInterface = DpiQueryMiniportInterface(
                            (_DWORD)StartContext,
                            (unsigned int)&GUID_DEVINTERFACE_MSBDD_FALLBACK,
                            56,
                            1);
      v11 = MiniportInterface;
      if ( MiniportInterface < 0 || !*(_QWORD *)(v1 + 976) || !*(_QWORD *)(v1 + 984) || !*(_QWORD *)(v1 + 992) )
      {
        v36 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v26, v25, v27);
        v36[3] = 275LL;
        v36[4] = 21LL;
        v36[5] = v11;
        WdLogEvent5_WdCriticalError(v36);
        goto LABEL_29;
      }
    }
  }
  v12 = IoRegisterDeviceInterface(*(PDEVICE_OBJECT *)(v1 + 152), &GUID_DISPLAY_DEVICE_ARRIVAL, 0LL, &SymbolicLinkName);
  v11 = v12;
  if ( v12 < 0 )
  {
LABEL_61:
    v35 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v35 + 24) = v11;
    WdLogEvent5_WdError(v35);
    goto LABEL_29;
  }
  v5 = 1;
  v13 = ExAllocatePoolWithTag((POOL_TYPE)512, SymbolicLinkName.MaximumLength, 0x74727044u);
  *(_QWORD *)(v1 + 2616) = v13;
  if ( v13 )
  {
    *(_WORD *)(v1 + 2610) = SymbolicLinkName.MaximumLength;
    *(_WORD *)(v1 + 2608) = SymbolicLinkName.Length;
    RtlCopyUnicodeString((PUNICODE_STRING)(v1 + 2608), &SymbolicLinkName);
    RtlFreeUnicodeString(&SymbolicLinkName);
    v5 = 0;
    v15 = DpiQueryMiniportInterface((_DWORD)StartContext, (unsigned int)&GUID_DXGKDDI_GPU_PARTITION_INTERFACE, 128, 1);
    v16 = 120LL;
    if ( v15 < 0 )
    {
LABEL_7:
      memset((void *)(v1 + 4656), 0, 0x80uLL);
      memset((void *)(v1 + 4528), 0, 0x78uLL);
      memset((void *)(v1 + 4792), 0, 0x30uLL);
      goto LABEL_8;
    }
    if ( *(_QWORD *)(v1 + 4720)
      && *(_QWORD *)(v1 + 4744)
      && *(_QWORD *)(v1 + 4696)
      && *(_QWORD *)(v1 + 4704)
      && *(_QWORD *)(v1 + 4712)
      && *(_QWORD *)(v1 + 4728)
      && *(_QWORD *)(v1 + 4736)
      && *(_QWORD *)(v1 + 4752)
      && *(_QWORD *)(v1 + 4760)
      && *(_QWORD *)(v1 + 4768)
      && *(_QWORD *)(v1 + 4776)
      && *(_QWORD *)(v1 + 4688) )
    {
      v15 = DpiQueryMiniportInterface((_DWORD)StartContext, (unsigned int)&GUID_DXGKDDI_SRIOV_INTERFACE, 120, 1);
      if ( v15 < 0 )
        goto LABEL_7;
      if ( *(_QWORD *)(v1 + 4560)
        && *(_QWORD *)(v1 + 4568)
        && *(_QWORD *)(v1 + 4576)
        && *(_QWORD *)(v1 + 4584)
        && *(_QWORD *)(v1 + 4592)
        && *(_QWORD *)(v1 + 4600)
        && *(_QWORD *)(v1 + 4608)
        && *(_QWORD *)(v1 + 4616)
        && *(_QWORD *)(v1 + 4624)
        && *(_QWORD *)(v1 + 4640)
        && *(_QWORD *)(v1 + 4632) )
      {
        v15 = DpiQueryMiniportInterface(
                (_DWORD)StartContext,
                (unsigned int)&GUID_DXGKDDI_MITIGABLE_DEVICE_INTERFACE,
                48,
                1);
        if ( v15 < 0 )
        {
          v15 = 0;
        }
        else if ( !*(_QWORD *)(v1 + 4824) || !*(_QWORD *)(v1 + 4832) )
        {
          goto LABEL_91;
        }
        *(_BYTE *)(v1 + 4648) = 1;
        *(_BYTE *)(v1 + 4520) = 1;
        *(_BYTE *)(v1 + 4784) = 1;
        *(_BYTE *)(v1 + 57) = 1;
        *(_QWORD *)(v1 + 120) = DpiFdoDispatchIoctl;
        *(_QWORD *)(v1 + 96) = &DpiFdoDispatchCleanupAndClose;
LABEL_8:
        v4 = 0;
        if ( v15 >= 0 )
        {
          v39 = IoRegisterDeviceInterface(
                  *(PDEVICE_OBJECT *)(v1 + 152),
                  &GUID_DEVINTERFACE_GPU_PARTITIONING_DEVICE,
                  0LL,
                  (PUNICODE_STRING)(v1 + 2624));
          v11 = v39;
          if ( v39 < 0 )
            goto LABEL_98;
          v40 = IoRegisterDeviceInterface(
                  *(PDEVICE_OBJECT *)(v1 + 152),
                  &GUID_DEVINTERFACE_VIRTUALIZABLE_DEVICE,
                  0LL,
                  (PUNICODE_STRING)(v1 + 2640));
          v11 = v40;
          if ( v40 < 0 )
            goto LABEL_98;
          v41 = IoRegisterDeviceInterface(
                  *(PDEVICE_OBJECT *)(v1 + 152),
                  &GUID_MITIGABLE_DEVICE_INTERFACE,
                  0LL,
                  (PUNICODE_STRING)(v1 + 2656));
          v11 = v41;
          if ( v41 < 0 )
            goto LABEL_98;
          v42 = IoRegisterDeviceInterface(
                  *(PDEVICE_OBJECT *)(v1 + 152),
                  &GUID_SRIOV_DEVICE_INTERFACE_STANDARD,
                  0LL,
                  (PUNICODE_STRING)(v1 + 2672));
          v11 = v42;
          if ( v42 < 0 )
            goto LABEL_98;
        }
        *(_BYTE *)(v1 + 481) = 0;
        *(_BYTE *)(v1 + 483) = 0;
        *(_QWORD *)(v1 + 488) = 0LL;
        if ( !*(_BYTE *)(v1 + 480) )
        {
          KeInitializeEvent((PRKEVENT)(v1 + 3720), SynchronizationEvent, 0);
          *(_QWORD *)(v1 + 3760) = v1 + 3752;
          *(_QWORD *)(v1 + 3752) = v1 + 3752;
          KeInitializeSpinLock((PKSPIN_LOCK)(v1 + 3864));
          KeInitializeEvent((PRKEVENT)(v1 + 3880), NotificationEvent, 1u);
          KeInitializeEvent((PRKEVENT)(v1 + 3904), NotificationEvent, 1u);
          *(_BYTE *)(v1 + 483) = 1;
          *(_QWORD *)(v1 + 3928) = 0LL;
          *(_DWORD *)(v1 + 3872) = 0;
          memset((void *)(v1 + 3776), 0, 0x58uLL);
          *(_DWORD *)(v1 + 3792) = 1953656900;
          *(_DWORD *)(v1 + 3796) = 11;
          *(_DWORD *)(v1 + 3816) = 64;
          KeInitializeTimer((PKTIMER)(v1 + 3936));
          KeInitializeDpc((PRKDPC)(v1 + 4000), (PKDEFERRED_ROUTINE)DpiSuspendAdapterDpc, (PVOID)v1);
          v28 = PsCreateSystemThread(&ThreadHandle, 0x1FFFFFu, 0LL, 0LL, 0LL, DpiPowerArbiterThread, StartContext);
          v11 = v28;
          if ( v28 < 0
            || (v11 = ObReferenceObjectByHandle(ThreadHandle, 0x1FFFFFu, 0LL, 0, &Object, 0LL),
                *(_QWORD *)(v1 + 3712) = Object,
                ZwClose(ThreadHandle),
                (int)v11 < 0) )
          {
LABEL_98:
            v43 = WdLogNewEntry5_WdError(v29);
            *(_QWORD *)(v43 + 24) = v11;
            WdLogEvent5_WdError(v43);
            v3 = 0;
LABEL_29:
            if ( (int)v11 >= 0 )
              return (unsigned int)v11;
            if ( v4 != 1 )
              goto LABEL_118;
            goto LABEL_117;
          }
        }
        KeInitializeEvent((PRKEVENT)(v1 + 3488), SynchronizationEvent, 0);
        ExInitializeResourceLite((PERESOURCE)(v1 + 3120));
        v3 = 1;
        *(_QWORD *)(v1 + 3336) = v1 + 3328;
        *(_QWORD *)(v1 + 3328) = v1 + 3328;
        KeInitializeSpinLock((PKSPIN_LOCK)(v1 + 3320));
        *(_BYTE *)(v1 + 3344) = 0;
        *(_QWORD *)(v1 + 4912) = v1 + 4904;
        *(_QWORD *)(v1 + 4904) = v1 + 4904;
        KeInitializeSpinLock((PKSPIN_LOCK)(v1 + 4920));
        IoCsqInitialize(
          (PIO_CSQ)(v1 + 4840),
          (PIO_CSQ_INSERT_IRP)DpiPendingIrpCancelQueueInsert,
          (PIO_CSQ_REMOVE_IRP)DpiPendingIrpCancelQueueRemove,
          (PIO_CSQ_PEEK_NEXT_IRP)DpiPendingIrpCancelQueuePick,
          (PIO_CSQ_ACQUIRE_LOCK)DpiPendingIrpCancelQueueAcquireLock,
          (PIO_CSQ_RELEASE_LOCK)DpiPendingIrpCancelQueueReleaseLock,
          (PIO_CSQ_COMPLETE_CANCELED_IRP)DpiPendingIrpCancelQueueComplete);
        KeInitializeMutex((PRKMUTEX)(v1 + 3224), 0);
        KeInitializeMutex((PRKMUTEX)(v1 + 3376), 0);
        *(_QWORD *)(v1 + 3448) = v1 + 3440;
        *(_QWORD *)(v1 + 3440) = v1 + 3440;
        *(_QWORD *)(v1 + 3472) = v1 + 3464;
        *(_QWORD *)(v1 + 3464) = v1 + 3464;
        *(_QWORD *)(v1 + 3368) = v1 + 3360;
        *(_QWORD *)(v1 + 3360) = v1 + 3360;
        ExInitializeResourceLite((PERESOURCE)(v1 + 3584));
        v4 = 1;
        LODWORD(v11) = DpiFdoInitializeAdapterUniqueString(StartContext);
        if ( (int)v11 < 0 )
        {
LABEL_117:
          ExDeleteResourceLite((PERESOURCE)(v1 + 3584));
LABEL_118:
          if ( v3 == 1 )
            ExDeleteResourceLite((PERESOURCE)(v1 + 3120));
          goto LABEL_120;
        }
        v62 = 1;
        DpiQueryBusInterface(*(PDEVICE_OBJECT *)(v1 + 152), v1 + 2688);
        DpiQueryBusInterface(*(PDEVICE_OBJECT *)(v1 + 152), v1 + 2736);
        DpiQueryMiniportInterface((_DWORD)StartContext, (unsigned int)&GUID_DEVINTERFACE_I2C, 48, 1);
        v17 = *(_QWORD *)(v1 + 40);
        *(_DWORD *)(v1 + 2832) = 0;
        if ( *(_BYTE *)(v17 + 133) && !*(_BYTE *)(v1 + 1143) )
          goto LABEL_16;
        v18 = (_WORD *)(v1 + 2840);
        if ( (int)DpiQueryMiniportInterface((_DWORD)StartContext, (unsigned int)&GUID_DEVINTERFACE_OPM_2, 112, 3) >= 0 )
        {
          if ( *v18 != 112
            || (v30 = 3, *(_WORD *)(v1 + 2842) != 3)
            || !*(_QWORD *)(v1 + 2872)
            || !*(_QWORD *)(v1 + 2880)
            || !*(_QWORD *)(v1 + 2888)
            || !*(_QWORD *)(v1 + 2896)
            || !*(_QWORD *)(v1 + 2904)
            || !*(_QWORD *)(v1 + 2912)
            || !*(_QWORD *)(v1 + 2920)
            || !*(_QWORD *)(v1 + 2928)
            || !*(_QWORD *)(v1 + 2936)
            || !*(_QWORD *)(v1 + 2944) )
          {
            LODWORD(v11) = -1073741811;
            v44 = WdLogNewEntry5_WdError(v19);
            *(_QWORD *)(v44 + 24) = -1073741811LL;
            WdLogEvent5_WdError(v44);
            v45 = 112LL;
LABEL_102:
            memset(v18, 0, v45);
            goto LABEL_117;
          }
        }
        else
        {
          if ( (int)DpiQueryMiniportInterface((_DWORD)StartContext, (unsigned int)&GUID_DEVINTERFACE_OPM_2_JTP, 120, 2) < 0 )
          {
            if ( (int)DpiQueryMiniportInterface((_DWORD)StartContext, (unsigned int)&GUID_DEVINTERFACE_OPM, 104, 1) >= 0 )
              *(_DWORD *)(v1 + 2832) = 1;
LABEL_16:
            *(_DWORD *)(v1 + 3032) = -1;
            if ( !byte_1C0056E96 || *(_DWORD *)(*(_QWORD *)(StartContext[8] + 40LL) + 28LL) < 0x4000u )
              goto LABEL_26;
            if ( *(_BYTE *)(*(_QWORD *)(v1 + 40) + 133LL) && !*(_BYTE *)(v1 + 1143) )
            {
LABEL_28:
              memset((void *)(StartContext[8] + 4064LL), 0, 0x170uLL);
              goto LABEL_29;
            }
            v18 = (_WORD *)(v1 + 2960);
            if ( (int)DpiQueryMiniportInterface(
                        (_DWORD)StartContext,
                        (unsigned int)&GUID_DEVINTERFACE_MIRACAST_DISPLAY,
                        64,
                        1) < 0 )
            {
              memset((void *)(v1 + 2960), 0, 0x40uLL);
              goto LABEL_26;
            }
            if ( *v18 >= 0x40u
              && *(_WORD *)(v1 + 2962) == 1
              && *(_QWORD *)(v1 + 2992)
              && *(_QWORD *)(v1 + 3000)
              && *(_QWORD *)(v1 + 3008)
              && *(_QWORD *)(v1 + 3016) )
            {
LABEL_26:
              if ( *(_BYTE *)(v1 + 1143) )
              {
                *(_QWORD *)(v1 + 104) = &DpiFdoDispatchCreate;
                *(_QWORD *)(v1 + 96) = &DpiFdoDispatchCleanupAndClose;
              }
              goto LABEL_28;
            }
            LODWORD(v11) = -1073741811;
            v46 = WdLogNewEntry5_WdError(v21);
            *(_QWORD *)(v46 + 24) = -1073741811LL;
            WdLogEvent5_WdError(v46);
            v45 = 64LL;
            goto LABEL_102;
          }
          if ( *v18 != 120
            || (v30 = 2, *(_WORD *)(v1 + 2842) != 2)
            || !*(_QWORD *)(v1 + 2872)
            || !*(_QWORD *)(v1 + 2880)
            || !*(_QWORD *)(v1 + 2888)
            || !*(_QWORD *)(v1 + 2896)
            || !*(_QWORD *)(v1 + 2904)
            || !*(_QWORD *)(v1 + 2912)
            || !*(_QWORD *)(v1 + 2920)
            || !*(_QWORD *)(v1 + 2928)
            || !*(_QWORD *)(v1 + 2936)
            || !*(_QWORD *)(v1 + 2952) )
          {
            LODWORD(v11) = -1073741811;
            v47 = WdLogNewEntry5_WdError(v20);
            *(_QWORD *)(v47 + 24) = -1073741811LL;
            WdLogEvent5_WdError(v47);
            v45 = 120LL;
            goto LABEL_102;
          }
        }
        *(_DWORD *)(v1 + 2832) = v30;
        goto LABEL_16;
      }
    }
LABEL_91:
    LODWORD(v11) = -1073741823;
    v38 = WdLogNewEntry5_WdError(v16);
    *(_QWORD *)(v38 + 24) = -1073741823LL;
    WdLogEvent5_WdError(v38);
LABEL_120:
    v2 = v62;
    goto LABEL_121;
  }
  LODWORD(v11) = -1073741801;
  v37 = WdLogNewEntry5_WdLowResource(v14);
  *(_QWORD *)(v37 + 24) = -1073741801LL;
  WdLogEvent5_WdLowResource(v37);
LABEL_121:
  if ( *(_QWORD *)(v1 + 3712) )
    DpiRequestIoPowerState((__int64)StartContext, 7, v22, 0);
  if ( v5 == 1 )
    RtlFreeUnicodeString(&SymbolicLinkName);
  if ( v2 )
  {
    RtlFreeUnicodeString((PUNICODE_STRING)(v1 + 4432));
    RtlFreeUnicodeString((PUNICODE_STRING)(v1 + 4448));
  }
  v48 = *(void **)(v1 + 3104);
  *(_DWORD *)(v1 + 3088) = 0;
  if ( v48 )
  {
    ExFreePoolWithTag(v48, 0);
    *(_QWORD *)(v1 + 3104) = 0LL;
  }
  v49 = *(void **)(v1 + 3096);
  if ( v49 )
  {
    ExFreePoolWithTag(v49, 0);
    *(_QWORD *)(v1 + 3096) = 0LL;
  }
  v50 = *(void **)(v1 + 4464);
  if ( v50 )
  {
    ExFreePoolWithTag(v50, 0);
    *(_QWORD *)(v1 + 4464) = 0LL;
  }
  v51 = *(void **)(v1 + 4472);
  if ( v51 )
  {
    ExFreePoolWithTag(v51, 0);
    *(_QWORD *)(v1 + 4472) = 0LL;
  }
  v52 = *(void **)(v1 + 2592);
  if ( v52 )
  {
    ExFreePoolWithTag(v52, 0);
    *(_QWORD *)(v1 + 2592) = 0LL;
  }
  v53 = *(void **)(v1 + 2616);
  if ( v53 )
  {
    ExFreePoolWithTag(v53, 0);
    *(_QWORD *)(v1 + 2616) = 0LL;
  }
  v54 = *(void **)(v1 + 2632);
  if ( v54 )
  {
    ExFreePoolWithTag(v54, 0);
    *(_QWORD *)(v1 + 2632) = 0LL;
  }
  v55 = *(void **)(v1 + 2648);
  if ( v55 )
  {
    ExFreePoolWithTag(v55, 0);
    *(_QWORD *)(v1 + 2648) = 0LL;
  }
  v56 = *(void **)(v1 + 2664);
  if ( v56 )
  {
    ExFreePoolWithTag(v56, 0);
    *(_QWORD *)(v1 + 2664) = 0LL;
  }
  v57 = *(void **)(v1 + 2680);
  if ( v57 )
  {
    ExFreePoolWithTag(v57, 0);
    *(_QWORD *)(v1 + 2680) = 0LL;
  }
  return (unsigned int)v11;
}
