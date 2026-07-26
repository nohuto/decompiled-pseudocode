/*
 * XREFs of ndisAddDevice @ 0x1C00E1708
 * Callers:
 *     ndisPnPAddDevice @ 0x1C009AE5C (ndisPnPAddDevice.c)
 * Callees:
 *     ?NdisTraceLoggingDeviceAdded@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_TRACEFORMAT_FAILURE_REASON@@PEAUNDIS_ADDDEVICE_PARAMETERS@@JPEBG@Z @ 0x1C00181C4 (-NdisTraceLoggingDeviceAdded@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_TRACEFORMAT_FAILURE_REASON@@PEAUNDI.c)
 *     TraceLoggingProviderEnabled @ 0x1C001860C (TraceLoggingProviderEnabled.c)
 *     ndisLogMiniportEvent @ 0x1C00194EC (ndisLogMiniportEvent.c)
 *     ndisIfFindInterfaceByInterfaceGuid @ 0x1C001B354 (ndisIfFindInterfaceByInterfaceGuid.c)
 *     ndisIfUpdateInterfaceOnAddDevice @ 0x1C001F998 (ndisIfUpdateInterfaceOnAddDevice.c)
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 *     WPP_SF_qq @ 0x1C0026510 (WPP_SF_qq.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0026F40 (memset.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 *     Template_qqq @ 0x1C003EA28 (Template_qqq.c)
 *     NdisConvertNdisStatusToNtStatus @ 0x1C0049D00 (NdisConvertNdisStatusToNtStatus.c)
 *     WPP_SF_Zq @ 0x1C004A150 (WPP_SF_Zq.c)
 *     WPP_SF_qZ @ 0x1C004B56C (WPP_SF_qZ.c)
 *     Template_z @ 0x1C005B8AC (Template_z.c)
 *     ndisReferencePackage @ 0x1C00950DC (ndisReferencePackage.c)
 *     ndisDereferencePackage @ 0x1C009512C (ndisDereferencePackage.c)
 *     ?Initialize@BindEngine@Ndis@@QEAAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0097984 (-Initialize@BindEngine@Ndis@@QEAAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisIfRemoveIfBlockMiniportAssociation @ 0x1C009880C (ndisIfRemoveIfBlockMiniportAssociation.c)
 *     ndisMDeleteMiniportBlockOnRemove @ 0x1C00989B0 (ndisMDeleteMiniportBlockOnRemove.c)
 *     ndisMInvokeRemoveDevice @ 0x1C0098CC8 (ndisMInvokeRemoveDevice.c)
 *     ndisMInvokeAddDevice @ 0x1C009A3E8 (ndisMInvokeAddDevice.c)
 *     ndisAllocateEventLog @ 0x1C009B1B0 (ndisAllocateEventLog.c)
 *     ndisSetDeviceNames @ 0x1C009B348 (ndisSetDeviceNames.c)
 *     ndisCreateAdapterInstanceName @ 0x1C009B3B0 (ndisCreateAdapterInstanceName.c)
 *     ndisCreateSecurityDescriptor @ 0x1C009B5F0 (ndisCreateSecurityDescriptor.c)
 *     ndisAllocateDefaultQueue @ 0x1C009BB30 (ndisAllocateDefaultQueue.c)
 *     ndisMFindNumaDistances @ 0x1C009C244 (ndisMFindNumaDistances.c)
 *     ?ndisPDReadKeywords@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C009C75C (-ndisPDReadKeywords@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisQueryDeviceFlags @ 0x1C009C954 (ndisQueryDeviceFlags.c)
 *     ndisInitializeConfiguration @ 0x1C009D18C (ndisInitializeConfiguration.c)
 *     ndisReadRssKeywords @ 0x1C009D6E0 (ndisReadRssKeywords.c)
 *     ??4?$KPtr@UKString@Rtl@@U?$KDeletePtr@UKString@Rtl@@@@@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C00A2144 (--4-$KPtr@UKString@Rtl@@U-$KDeletePtr@UKString@Rtl@@@@@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A2A24 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A2A70 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C00A4F78 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ndisNotifyBindFailureOnUnboundProtocols @ 0x1C00A6800 (ndisNotifyBindFailureOnUnboundProtocols.c)
 *     ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00A8460 (-Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z.c)
 *     ndisMInitializeMiniportBlock @ 0x1C00A94B4 (ndisMInitializeMiniportBlock.c)
 *     ndisQueryReferenceBusInterface @ 0x1C00CD450 (ndisQueryReferenceBusInterface.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00DD09C (-ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

__int64 __fastcall ndisAddDevice(
        PDRIVER_OBJECT DriverObject,
        PDEVICE_OBJECT Pdo,
        const WCHAR **a3,
        __int64 a4,
        _QWORD *a5)
{
  int DevicePropertyData; // edi
  char *DeviceExtension; // rbx
  const struct _TlgProvider_t *InterfaceByInterfaceGuid; // r12
  UCHAR v11; // dl
  TraceLoggingHProvider v12; // rcx
  ULONGLONG v13; // r8
  PVOID v14; // r15
  UCHAR v15; // dl
  const struct _TlgProvider_t *v16; // rcx
  ULONGLONG v17; // r8
  struct _NDIS_M_DRIVER_BLOCK *DriverObjectExtension; // r15
  int v19; // esi
  KIRQL v20; // al
  struct _NDIS_M_DRIVER_BLOCK *i; // r14
  unsigned int v22; // ecx
  signed int v23; // r12d
  PDEVICE_OBJECT v24; // rdx
  _DEVICE_OBJECT *v25; // r14
  _QWORD *EventLog; // rax
  _DEVICE_OBJECT *v27; // r12
  PVOID v28; // rax
  __int64 v29; // rax
  _UNICODE_STRING *v30; // rcx
  NTSTATUS SymbolicLink; // eax
  __int64 v32; // rcx
  __int64 v33; // rax
  const UNICODE_STRING *v34; // rcx
  __int64 **v35; // r14
  void *v36; // rdi
  PVOID v37; // rax
  int v38; // eax
  Ndis::BindEngine *v39; // rcx
  KIRQL v40; // si
  int updated; // eax
  char v42; // r15
  enum Ndis::ReadBindingsOptions::Flags v43; // r8d
  KIRQL v44; // al
  char *PoolWithTag; // r14
  void *v47; // rcx
  ULONG v48; // eax
  _NDIS_WDF_CX_DRIVER_BLOCK *v49; // rbx
  _DEVICE_OBJECT *v50; // rax
  void *v51; // rcx
  struct _NDIS_MINIPORT_BLOCK *v52; // rdx
  _DWORD *v53; // rax
  __int64 v54; // rax
  _UNICODE_STRING *v55; // rcx
  NTSTATUS v56; // eax
  _DEVICE_OBJECT *v57; // rcx
  signed __int32 v58[8]; // [rsp+0h] [rbp-100h] BYREF
  ULONG Size[2]; // [rsp+20h] [rbp-E0h]
  char v60; // [rsp+40h] [rbp-C0h]
  PDEVICE_OBJECT v61; // [rsp+48h] [rbp-B8h]
  char v62; // [rsp+50h] [rbp-B0h]
  char v63; // [rsp+51h] [rbp-AFh]
  char v64; // [rsp+52h] [rbp-AEh]
  char v65; // [rsp+53h] [rbp-ADh]
  char v66; // [rsp+54h] [rbp-ACh]
  const struct _TlgProvider_t *v67; // [rsp+58h] [rbp-A8h]
  PDEVICE_OBJECT DeviceObject; // [rsp+60h] [rbp-A0h] BYREF
  ULONG RequiredSize; // [rsp+68h] [rbp-98h] BYREF
  PVOID P; // [rsp+70h] [rbp-90h]
  _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-88h] BYREF
  ULONG Type; // [rsp+88h] [rbp-78h] BYREF
  _UNICODE_STRING String; // [rsp+90h] [rbp-70h] BYREF
  PDRIVER_OBJECT DriverObjecta; // [rsp+A0h] [rbp-60h]
  PDEVICE_OBJECT TargetDevice; // [rsp+A8h] [rbp-58h]
  PVOID v76; // [rsp+B0h] [rbp-50h] BYREF
  const WCHAR **v77; // [rsp+B8h] [rbp-48h]
  _NDIS_WDF_CX_DRIVER_BLOCK *CxBlock; // [rsp+C0h] [rbp-40h]
  _QWORD *v79; // [rsp+C8h] [rbp-38h]
  _QWORD v80[20]; // [rsp+D0h] [rbp-30h] BYREF
  GUID InterfaceClassGuid; // [rsp+170h] [rbp+70h] BYREF
  _WORD v82[20]; // [rsp+180h] [rbp+80h] BYREF
  _WORD v83[32]; // [rsp+1A8h] [rbp+A8h] BYREF

  v77 = a3;
  TargetDevice = Pdo;
  DriverObjecta = DriverObject;
  v79 = a5;
  DeviceObject = 0LL;
  v67 = 0LL;
  DevicePropertyData = -1073741823;
  v60 = 0;
  DeviceExtension = 0LL;
  v64 = 0;
  InterfaceByInterfaceGuid = 0LL;
  v76 = 0LL;
  InterfaceClassGuid = GUID_DEVINTERFACE_NET;
  memset(v82, 0, sizeof(v82));
  memset(v83, 0, 60);
  v62 = 0;
  v63 = 0;
  v65 = 0;
  v66 = 0;
  P = 0LL;
  RequiredSize = 0;
  if ( (unsigned __int8)byte_1C0083714 >= 4u )
    WPP_SF_q(0x41u, &WPP_6d2291d8c38fd3ff1a6681445a412419_Traceguids, (__int64)Pdo);
  ndisReferencePackage((__int64)&ndisPkgs);
  if ( TraceLoggingProviderEnabled(v12, v11, v13) )
  {
    DevicePropertyData = IoGetDevicePropertyData(
                           Pdo,
                           &DEVPKEY_Device_InstanceId,
                           0,
                           0,
                           RequiredSize,
                           0LL,
                           &RequiredSize,
                           &Type);
    if ( DevicePropertyData == -1073741789 )
    {
      P = ExAllocatePoolWithTag(NonPagedPoolNx, RequiredSize, 0x7473444Eu);
      v14 = P;
      if ( P )
      {
        DevicePropertyData = IoGetDevicePropertyData(
                               Pdo,
                               &DEVPKEY_Device_InstanceId,
                               0,
                               0,
                               RequiredSize,
                               P,
                               &RequiredSize,
                               &Type);
        if ( DevicePropertyData < 0 )
        {
          ExFreePoolWithTag(v14, 0x7473444Eu);
          P = 0LL;
        }
      }
    }
  }
  if ( !*(_BYTE *)(a4 + 56)
    || (DriverObjectExtension = (struct _NDIS_M_DRIVER_BLOCK *)IoGetDriverObjectExtension(
                                                                 DriverObject,
                                                                 (PVOID)0x4E494944)) == 0LL )
  {
    DriverObjectExtension = (struct _NDIS_M_DRIVER_BLOCK *)IoGetDriverObjectExtension(DriverObject, (PVOID)0x4E4D4944);
    if ( !DriverObjectExtension )
      DriverObjectExtension = (struct _NDIS_M_DRIVER_BLOCK *)IoGetDriverObjectExtension(DriverObject, (PVOID)0x4E494944);
  }
  v19 = 1;
  if ( !DriverObjectExtension )
  {
    DevicePropertyData = -1073741670;
LABEL_83:
    v25 = 0LL;
    goto LABEL_84;
  }
  v20 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
  for ( i = ndisMiniDriverList; i && i != DriverObjectExtension; i = i->NextDriver )
    ;
  KeReleaseSpinLock(&ndisMiniDriverListLock, v20);
  v19 = 2;
  if ( i != DriverObjectExtension )
    goto LABEL_83;
  v19 = 3;
  if ( DriverObjectExtension->MajorNdisVersion >= 6u && !*(_BYTE *)(a4 + 24) )
  {
    DevicePropertyData = -1073741491;
    goto LABEL_83;
  }
  v19 = 4;
  v22 = (*(unsigned __int16 *)(*(_QWORD *)(a4 + 40) + 8LL) + 5507) & 0xFFFFFFF8;
  *(_DWORD *)&String.Length = 2621440;
  *(_DWORD *)&DestinationString.Length = 3932160;
  v23 = v22 + 8 * ndisMaxNumberOfProcessors;
  String.Buffer = v82;
  DestinationString.Buffer = v83;
  RtlCopyUnicodeString(&DestinationString, &ndisFdoDeviceStr);
  if ( (DriverObjectExtension->Flags & 0x40) == 0 )
  {
    DevicePropertyData = RtlIntegerToUnicodeString(
                           _InterlockedIncrement((volatile signed __int32 *)&ndisFdoIndex),
                           0xAu,
                           &String);
    if ( !DevicePropertyData )
    {
      DevicePropertyData = RtlAppendUnicodeStringToString(&DestinationString, &String);
      if ( !DevicePropertyData )
      {
        v19 = 5;
        DevicePropertyData = IoCreateDevice(DriverObjecta, v23, &DestinationString, 0x17u, 0x100u, 0, &DeviceObject);
        if ( DevicePropertyData >= 0 )
        {
          v19 = 6;
          v24 = TargetDevice;
          DeviceObject->Flags |= 0x10u;
          v24->Flags &= ~0x80u;
          DeviceObject->Flags |= 0x2000u;
          v61 = IoAttachDeviceToDeviceStack(DeviceObject, v24);
          v25 = v61;
          if ( v61 )
          {
            DeviceExtension = (char *)DeviceObject->DeviceExtension;
            ndisMInitializeMiniportBlock((__int64)DriverObjectExtension, (__int64)DeviceExtension, v23);
            goto LABEL_24;
          }
          DevicePropertyData = -1073741823;
          InterfaceByInterfaceGuid = 0LL;
LABEL_84:
          v42 = 0;
          goto LABEL_67;
        }
      }
    }
    goto LABEL_98;
  }
  v66 = 1;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPool, v23, 0x4E666457u);
  if ( !PoolWithTag )
  {
    DevicePropertyData = -1073741823;
    v25 = 0LL;
LABEL_91:
    InterfaceByInterfaceGuid = 0LL;
    v42 = 0;
    goto LABEL_67;
  }
  v47 = *(void **)(a4 + 64);
  CxBlock = DriverObjectExtension->CxBlock;
  v48 = CxBlock->Chars.EvtCxGetAssignedFdoIndex(v47);
  DevicePropertyData = RtlIntegerToUnicodeString(v48, 0xAu, &String);
  if ( DevicePropertyData || (DevicePropertyData = RtlAppendUnicodeStringToString(&DestinationString, &String)) != 0 )
  {
    ExFreePoolWithTag(PoolWithTag, 0);
LABEL_98:
    InterfaceByInterfaceGuid = 0LL;
    goto LABEL_83;
  }
  v49 = CxBlock;
  v50 = CxBlock->Chars.EvtCxGetDeviceObject(*(_QWORD *)(a4 + 64));
  v51 = *(void **)(a4 + 64);
  DeviceObject = v50;
  v61 = v49->Chars.EvtCxGetNextDeviceObject(v51);
  DeviceExtension = PoolWithTag;
  ndisMInitializeMiniportBlock((__int64)DriverObjectExtension, (__int64)PoolWithTag, v23);
  *((_DWORD *)PoolWithTag + 30) |= 0x80u;
  *((_QWORD *)PoolWithTag + 3) = *(_QWORD *)(a4 + 64);
  if ( v79 )
    *v79 = PoolWithTag;
  v25 = v61;
LABEL_24:
  v19 = 1;
  *((_OWORD *)DeviceExtension + 254) = *(_OWORD *)a4;
  EventLog = ndisAllocateEventLog(2LL, 1);
  v27 = TargetDevice;
  *((_QWORD *)DeviceExtension + 486) = TargetDevice;
  *((_QWORD *)DeviceExtension + 567) = EventLog;
  *((_QWORD *)DeviceExtension + 485) = DeviceObject;
  *((_QWORD *)DeviceExtension + 487) = v25;
  v28 = ExAllocatePoolWithTag(NonPagedPoolNx, DestinationString.Length + 2LL, 0x6E61444Eu);
  *((_QWORD *)DeviceExtension + 534) = v28;
  if ( !v28 )
  {
    InterfaceByInterfaceGuid = v67;
    DevicePropertyData = -1073741670;
LABEL_102:
    v42 = (char)InterfaceByInterfaceGuid;
    goto LABEL_67;
  }
  *((_WORD *)DeviceExtension + 2133) = DestinationString.Length + 2;
  RtlCopyUnicodeString((PUNICODE_STRING)(DeviceExtension + 4264), &DestinationString);
  if ( ndisVerifierNdisDispatch )
  {
    if ( MmIsDriverVerifying(DriverObjecta) )
    {
      DevicePropertyData = ndisVerifierNdisDispatch->NdisAllocateVerifierContext(
                             DeviceObject,
                             DeviceExtension,
                             (void **)(DeviceExtension + 24),
                             (void **)(DeviceExtension + 5024));
      if ( DevicePropertyData < 0 )
      {
        if ( (unsigned __int8)byte_1C0083714 >= 2u )
          WPP_SF_q(0x42u, &WPP_6d2291d8c38fd3ff1a6681445a412419_Traceguids, (__int64)DeviceExtension);
        goto LABEL_100;
      }
    }
  }
  v29 = *(_QWORD *)(a4 + 40);
  v19 = 7;
  v30 = (_UNICODE_STRING *)(v29 + 8);
  if ( !v29 )
    v30 = 0LL;
  SymbolicLink = IoCreateSymbolicLink(v30, (PUNICODE_STRING)(DeviceExtension + 4264));
  v17 = 0LL;
  DevicePropertyData = SymbolicLink;
  if ( SymbolicLink )
  {
    if ( (unsigned __int8)byte_1C0083714 >= 2u )
      WPP_SF_q(0x43u, &WPP_6d2291d8c38fd3ff1a6681445a412419_Traceguids, (__int64)DeviceExtension);
    if ( (Microsoft_Windows_NDISEnableBits & 0x40) != 0 )
      Template_qqq((__int64)v16, &AddDeviceFailed, &NDIS_PROVIDER_ID, DevicePropertyData, 202, (char)DeviceExtension);
    goto LABEL_100;
  }
  v62 = 1;
  *((_QWORD *)DeviceExtension + 627) = 0LL;
  v32 = *(_QWORD *)(a4 + 32);
  if ( v32 && *(_WORD *)(v32 + 8) )
    ndisQueryDeviceFlags(*(const wchar_t **)(v32 + 16), (_QWORD *)DeviceExtension + 627);
  if ( (*(_DWORD *)(a4 + 60) & 8) != 0 )
    *((_DWORD *)DeviceExtension + 31) |= 0x1000u;
  if ( (*(_DWORD *)(a4 + 60) & 2) != 0 )
    *((_DWORD *)DeviceExtension + 31) |= 0x2000u;
  if ( (*(_DWORD *)(a4 + 60) & 1) != 0 )
    *((_DWORD *)DeviceExtension + 31) |= 2u;
  if ( (*(_DWORD *)(a4 + 60) & 4) != 0 )
    *((_DWORD *)DeviceExtension + 31) |= 0x200000u;
  if ( (*(_DWORD *)(a4 + 60) & 0x80000) != 0 )
    DriverObjectExtension->CompositeBusDefaultMiniport = (_NDIS_MINIPORT_BLOCK *)DeviceExtension;
  v33 = *(_QWORD *)(a4 + 40);
  v34 = (const UNICODE_STRING *)(v33 + 8);
  if ( !v33 )
    v34 = 0LL;
  ndisSetDeviceNames(
    v34,
    (PUNICODE_STRING)(DeviceExtension + 3864),
    (__int64)(DeviceExtension + 3848),
    (wchar_t *)DeviceExtension + 2748);
  v35 = (__int64 **)(DeviceExtension + 3912);
  v19 = 4;
  DevicePropertyData = ndisCreateAdapterInstanceName(
                         (_UNICODE_STRING **)DeviceExtension + 489,
                         (__int64)DeviceExtension,
                         0LL,
                         (_UNICODE_STRING **)DeviceExtension + 559);
  if ( DevicePropertyData < 0 )
  {
    v25 = v61;
    goto LABEL_91;
  }
  if ( (unsigned __int8)byte_1C0083714 >= 4u )
    WPP_SF_qZ(0x44u, &WPP_6d2291d8c38fd3ff1a6681445a412419_Traceguids, (__int64)DeviceExtension, *v35);
  if ( (Microsoft_Windows_NDISEnableBits & 0x20) != 0 )
    Template_z((__int64)v16, &AddDevice, v17, (const wchar_t *)(*v35)[1]);
  if ( (*(_DWORD *)(a4 + 60) & 2) != 0 )
  {
    DevicePropertyData = ndisQueryReferenceBusInterface(v27, &v76);
    if ( DevicePropertyData < 0 )
    {
      InterfaceByInterfaceGuid = 0LL;
      goto LABEL_101;
    }
    *((_QWORD *)DeviceExtension + 505) = v76;
  }
  v19 = 4;
  DevicePropertyData = ndisCreateSecurityDescriptor(
                         *((void **)DeviceExtension + 485),
                         (PSECURITY_DESCRIPTOR *)DeviceExtension + 480,
                         5u);
  if ( DevicePropertyData < 0 )
  {
LABEL_100:
    InterfaceByInterfaceGuid = v67;
LABEL_101:
    v25 = v61;
    goto LABEL_102;
  }
  v36 = (void *)*((_QWORD *)DeviceExtension + 507);
  *((_DWORD *)DeviceExtension + 1029) = 1;
  if ( !v36 )
  {
    v37 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x88uLL, 0x6863444Eu);
    *((_QWORD *)DeviceExtension + 507) = v37;
    v36 = v37;
    if ( !v37 )
    {
      v19 = 1;
      DevicePropertyData = -1073741670;
      goto LABEL_100;
    }
  }
  memset(v36, 0, 0x88uLL);
  KPtr<Rtl::KString,KDeletePtr<Rtl::KString>>::operator=((void **)DeviceExtension + 529, (void **)(a4 + 40));
  v19 = 4;
  v38 = ndisInitializeConfiguration((__int64)v36, (__int64)DeviceExtension, *v77);
  if ( v38 )
  {
LABEL_115:
    DevicePropertyData = NdisConvertNdisStatusToNtStatus(v38);
    goto LABEL_100;
  }
  Ndis::BindEngine::Initialize(
    (Ndis::BindEngine *)(DeviceExtension + 5208),
    (struct _NDIS_MINIPORT_BLOCK *)DeviceExtension);
  if ( (*((_DWORD *)DeviceExtension + 30) & 0x80u) != 0 )
  {
    Ndis::BindEngine::BeginPolicyUpdates(v39);
    if ( Ndis::BindState::SetPause((Ndis::BindState *)DeviceExtension + 64, DatapathPaused, PauseReason_Wdf)
      && (unsigned __int8)byte_1C0083723 >= 4u )
    {
      ndisGetBindLinkNameForTracing((struct _NDIS_MINIPORT_BLOCK *)DeviceExtension, (struct NDIS_PNPTRACE_LOCALS *)v80);
      WPP_SF_Zq(0x45u, &WPP_6d2291d8c38fd3ff1a6681445a412419_Traceguids, (__int64 *)v80[1], v80[0]);
    }
    Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(DeviceExtension + 5208), v52);
  }
  v65 = 1;
  DevicePropertyData = ndisPDReadKeywords((struct _NDIS_MINIPORT_BLOCK *)DeviceExtension);
  if ( DevicePropertyData < 0 )
    goto LABEL_100;
  ndisMFindNumaDistances((__int64)DeviceExtension);
  ndisReadRssKeywords((struct _TlgProvider_t *)DeviceExtension);
  if ( DriverObjectExtension->AddDeviceHandler )
  {
    v19 = 10;
    v38 = ndisMInvokeAddDevice((__int64)DeviceExtension);
    if ( !v38 )
    {
      v60 = 1;
      goto LABEL_59;
    }
    goto LABEL_115;
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qq(0x46u, &WPP_6d2291d8c38fd3ff1a6681445a412419_Traceguids, DriverObjectExtension, DeviceExtension);
LABEL_59:
  if ( (DriverObjectExtension->Flags & 1) == 0 || (unsigned __int8)DeviceExtension[32] < 6u )
    goto LABEL_60;
  v53 = (_DWORD *)*((_QWORD *)DeviceExtension + 478);
  if ( v53 )
  {
    if ( *v53 > 1u )
    {
      DevicePropertyData = -1073741637;
      goto LABEL_123;
    }
LABEL_60:
    v19 = 8;
    DevicePropertyData = IoRegisterDeviceInterface(
                           *((PDEVICE_OBJECT *)DeviceExtension + 486),
                           &InterfaceClassGuid,
                           0LL,
                           (PUNICODE_STRING)DeviceExtension + 263);
    if ( DevicePropertyData < 0 )
    {
      if ( (unsigned __int8)byte_1C0083714 >= 2u )
        WPP_SF_q(0x47u, &WPP_6d2291d8c38fd3ff1a6681445a412419_Traceguids, (__int64)DeviceExtension);
      if ( (Microsoft_Windows_NDISEnableBits & 0x40) != 0 )
        Template_qqq((__int64)v16, &AddDeviceFailed, &NDIS_PROVIDER_ID, DevicePropertyData, 189, (char)DeviceExtension);
      goto LABEL_124;
    }
    v64 = 1;
    v40 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
    InterfaceByInterfaceGuid = (const struct _TlgProvider_t *)ndisIfFindInterfaceByInterfaceGuid((struct _GUID *)a4);
    if ( InterfaceByInterfaceGuid )
    {
      if ( InterfaceByInterfaceGuid[20].RegHandle == *(_QWORD *)(a4 + 16) )
        goto LABEL_63;
      InterfaceByInterfaceGuid = 0LL;
    }
    DevicePropertyData = -1073741072;
LABEL_63:
    KeReleaseSpinLock(&ndisIfListLock, v40);
    v19 = 4;
    if ( !DevicePropertyData )
    {
      updated = ndisIfUpdateInterfaceOnAddDevice((__int64)InterfaceByInterfaceGuid, (__int64)DeviceExtension);
      if ( !updated )
      {
        v63 = 1;
        updated = ndisAllocateDefaultQueue((__int64)DeviceExtension);
        if ( !updated )
        {
          v42 = 0;
          v64 = 0;
          v62 = 0;
          v63 = 0;
          _InterlockedOr(v58, 0);
          v25 = v61;
          DeviceObject->Flags &= ~0x80u;
          goto LABEL_67;
        }
      }
      DevicePropertyData = NdisConvertNdisStatusToNtStatus(updated);
    }
    goto LABEL_126;
  }
  DevicePropertyData = -1073741823;
LABEL_123:
  v19 = 3;
LABEL_124:
  InterfaceByInterfaceGuid = v67;
LABEL_126:
  v25 = v61;
  v42 = v60;
LABEL_67:
  if ( TraceLoggingProviderEnabled(v16, v15, v17) )
  {
    *(_QWORD *)Size = P;
    NdisTraceLoggingDeviceAdded(InterfaceByInterfaceGuid, v19, a4, DevicePropertyData);
  }
  if ( P )
    ExFreePoolWithTag(P, 0x7473444Eu);
  if ( DevicePropertyData < 0 )
  {
    if ( DeviceExtension )
    {
      if ( v65 )
      {
        Ndis::BindRegistry::Reload((Ndis::BindRegistry *)DeviceExtension, 0LL, v43);
        ndisNotifyBindFailureOnUnboundProtocols((__int64)DeviceExtension);
      }
      if ( v42 )
        ndisMInvokeRemoveDevice((__int64)DeviceExtension);
      if ( v64 )
      {
        RtlFreeUnicodeString((PUNICODE_STRING)DeviceExtension + 263);
        *((_QWORD *)DeviceExtension + 527) = 0LL;
      }
      if ( v62 )
      {
        v54 = *(_QWORD *)(a4 + 40);
        if ( v54 || (v54 = *((_QWORD *)DeviceExtension + 529), v55 = 0LL, v54) )
          v55 = (_UNICODE_STRING *)(v54 + 8);
        v56 = IoDeleteSymbolicLink(v55);
        if ( v56 && (unsigned __int8)byte_1C0083714 >= 4u )
          WPP_SF_qD(0x48u, &WPP_6d2291d8c38fd3ff1a6681445a412419_Traceguids, (__int64)DeviceExtension, v56);
      }
      if ( v63 )
        ndisIfRemoveIfBlockMiniportAssociation(*((_QWORD *)DeviceExtension + 512), (__int64)DeviceExtension, 2);
      ndisMDeleteMiniportBlockOnRemove(DeviceExtension);
      DeviceExtension = 0LL;
    }
    if ( !v66 )
    {
      v57 = DeviceObject;
      if ( DeviceObject )
      {
        if ( v25 )
        {
          IoDetachDevice(v25);
          v57 = DeviceObject;
        }
        IoDeleteDevice(v57);
        DeviceObject = 0LL;
      }
    }
  }
  else
  {
    *((_DWORD *)DeviceExtension + 1056) = *(_DWORD *)(a4 + 28);
    KPtr<Rtl::KString,KDeletePtr<Rtl::KString>>::operator=((void **)DeviceExtension + 530, (void **)(a4 + 48));
    v44 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
    *((_QWORD *)DeviceExtension + 488) = ndisMiniportList;
    ndisMiniportList = (struct _NDIS_MINIPORT_BLOCK *)DeviceExtension;
    KeReleaseSpinLock(&ndisMiniportListLock, v44);
    if ( (unsigned __int8)byte_1C0083710 >= 4u )
      WPP_SF_qZ(
        0x49u,
        &WPP_6d2291d8c38fd3ff1a6681445a412419_Traceguids,
        (__int64)DeviceExtension,
        *((__int64 **)DeviceExtension + 489));
    ndisLogMiniportEvent((__int64)DeviceExtension, 0x1Fu);
  }
  ndisDereferencePackage((__int64)&ndisPkgs);
  if ( (unsigned __int8)byte_1C0083714 >= 4u )
    WPP_SF_qD(0x4Au, &WPP_6d2291d8c38fd3ff1a6681445a412419_Traceguids, (__int64)DeviceExtension, DevicePropertyData);
  return (unsigned int)DevicePropertyData;
}
