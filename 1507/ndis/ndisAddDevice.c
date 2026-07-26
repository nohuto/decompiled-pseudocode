/*
 * XREFs of ndisAddDevice @ 0x1C00E7650
 * Callers:
 *     ndisPnPAddDevice @ 0x1C00AEEAC (ndisPnPAddDevice.c)
 * Callees:
 *     ?NdisTraceLoggingDeviceAdded@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_TRACEFORMAT_FAILURE_REASON@@PEAUNDIS_ADDDEVICE_PARAMETERS@@JPEBG@Z @ 0x1C0013FCC (-NdisTraceLoggingDeviceAdded@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_TRACEFORMAT_FAILURE_REASON@@PEAUNDI.c)
 *     TraceLoggingProviderEnabled @ 0x1C0017644 (TraceLoggingProviderEnabled.c)
 *     ndisLogMiniportEvent @ 0x1C0017694 (ndisLogMiniportEvent.c)
 *     ndisIfUpdateInterfaceOnAddDevice @ 0x1C001ACF0 (ndisIfUpdateInterfaceOnAddDevice.c)
 *     ndisIfFindInterfaceByInterfaceGuid @ 0x1C001D5A0 (ndisIfFindInterfaceByInterfaceGuid.c)
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 *     WPP_SF_qq @ 0x1C0022860 (WPP_SF_qq.c)
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0023A40 (memset.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     Template_qqq @ 0x1C003D994 (Template_qqq.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 *     NdisConvertNdisStatusToNtStatus @ 0x1C00494B0 (NdisConvertNdisStatusToNtStatus.c)
 *     WPP_SF_Zq @ 0x1C00498B4 (WPP_SF_Zq.c)
 *     WPP_SF_qZ @ 0x1C004ACEC (WPP_SF_qZ.c)
 *     Template_z @ 0x1C005BB3C (Template_z.c)
 *     ndisReferencePackage @ 0x1C0097740 (ndisReferencePackage.c)
 *     ndisDereferencePackage @ 0x1C0097790 (ndisDereferencePackage.c)
 *     ?Initialize@BindEngine@Ndis@@QEAAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C009A80C (-Initialize@BindEngine@Ndis@@QEAAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisIfRemoveIfBlockMiniportAssociation @ 0x1C009AC5C (ndisIfRemoveIfBlockMiniportAssociation.c)
 *     ndisMDeleteMiniportBlockOnRemove @ 0x1C009AE00 (ndisMDeleteMiniportBlockOnRemove.c)
 *     ndisMInvokeRemoveDevice @ 0x1C009BA5C (ndisMInvokeRemoveDevice.c)
 *     ndisCreateSecurityDescriptor @ 0x1C009E8A0 (ndisCreateSecurityDescriptor.c)
 *     ndisAllocateEventLog @ 0x1C009EF78 (ndisAllocateEventLog.c)
 *     ??4?$KPtr@UKString@Rtl@@U?$KDeletePtr@UKString@Rtl@@@@@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C00A05D0 (--4-$KPtr@UKString@Rtl@@U-$KDeletePtr@UKString@Rtl@@@@@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00A08E8 (-Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A2040 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A213C (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C00A3254 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ndisMInitializeMiniportBlock @ 0x1C00A8CBC (ndisMInitializeMiniportBlock.c)
 *     ndisInitializeConfiguration @ 0x1C00A90AC (ndisInitializeConfiguration.c)
 *     ndisReadRssKeywords @ 0x1C00A9600 (ndisReadRssKeywords.c)
 *     ?ndisPDReadKeywords@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00AA6BC (-ndisPDReadKeywords@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisMFindNumaDistances @ 0x1C00AAAA8 (ndisMFindNumaDistances.c)
 *     ndisCreateAdapterInstanceName @ 0x1C00AFA04 (ndisCreateAdapterInstanceName.c)
 *     ndisNotifyBindFailureOnUnboundProtocols @ 0x1C00B03A0 (ndisNotifyBindFailureOnUnboundProtocols.c)
 *     ndisQueryDeviceFlags @ 0x1C00B0618 (ndisQueryDeviceFlags.c)
 *     ndisAllocateDefaultQueue @ 0x1C00B15C4 (ndisAllocateDefaultQueue.c)
 *     ndisSetDeviceNames @ 0x1C00B1768 (ndisSetDeviceNames.c)
 *     ndisMInvokeAddDevice @ 0x1C00B1E10 (ndisMInvokeAddDevice.c)
 *     ndisQueryReferenceBusInterface @ 0x1C00D3CC0 (ndisQueryReferenceBusInterface.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00E2F68 (-ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

__int64 __fastcall ndisAddDevice(PDRIVER_OBJECT DriverObject, PDEVICE_OBJECT Pdo, __int64 *a3, __int64 a4, _QWORD *a5)
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
  _DWORD *v52; // rax
  __int64 v53; // rax
  _UNICODE_STRING *v54; // rcx
  NTSTATUS v55; // eax
  _DEVICE_OBJECT *v56; // rcx
  signed __int32 v57[8]; // [rsp+0h] [rbp-100h] BYREF
  ULONG Size[2]; // [rsp+20h] [rbp-E0h]
  char v59; // [rsp+40h] [rbp-C0h]
  PDEVICE_OBJECT v60; // [rsp+48h] [rbp-B8h]
  char v61; // [rsp+50h] [rbp-B0h]
  char v62; // [rsp+51h] [rbp-AFh]
  char v63; // [rsp+52h] [rbp-AEh]
  char v64; // [rsp+53h] [rbp-ADh]
  char v65; // [rsp+54h] [rbp-ACh]
  const struct _TlgProvider_t *v66; // [rsp+58h] [rbp-A8h]
  PDEVICE_OBJECT DeviceObject; // [rsp+60h] [rbp-A0h] BYREF
  ULONG RequiredSize; // [rsp+68h] [rbp-98h] BYREF
  PVOID P; // [rsp+70h] [rbp-90h]
  _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-88h] BYREF
  ULONG Type; // [rsp+88h] [rbp-78h] BYREF
  _UNICODE_STRING String; // [rsp+90h] [rbp-70h] BYREF
  PDRIVER_OBJECT DriverObjecta; // [rsp+A0h] [rbp-60h]
  PDEVICE_OBJECT TargetDevice; // [rsp+A8h] [rbp-58h]
  PVOID v75; // [rsp+B0h] [rbp-50h] BYREF
  __int64 *v76; // [rsp+B8h] [rbp-48h]
  _NDIS_WDF_CX_DRIVER_BLOCK *CxBlock; // [rsp+C0h] [rbp-40h]
  _QWORD *v78; // [rsp+C8h] [rbp-38h]
  _QWORD v79[20]; // [rsp+D0h] [rbp-30h] BYREF
  GUID InterfaceClassGuid; // [rsp+170h] [rbp+70h] BYREF
  _WORD v81[20]; // [rsp+180h] [rbp+80h] BYREF
  _WORD v82[32]; // [rsp+1A8h] [rbp+A8h] BYREF

  v76 = a3;
  TargetDevice = Pdo;
  DriverObjecta = DriverObject;
  v78 = a5;
  DeviceObject = 0LL;
  v66 = 0LL;
  DevicePropertyData = -1073741823;
  v59 = 0;
  DeviceExtension = 0LL;
  v63 = 0;
  InterfaceByInterfaceGuid = 0LL;
  v75 = 0LL;
  InterfaceClassGuid = GUID_DEVINTERFACE_NET;
  memset(v81, 0, sizeof(v81));
  memset(v82, 0, 60);
  v61 = 0;
  v62 = 0;
  v64 = 0;
  v65 = 0;
  P = 0LL;
  RequiredSize = 0;
  if ( (unsigned __int8)byte_1C0085314 >= 4u )
    WPP_SF_q(0x41u, &WPP_816ff7a89d638f3657e368d6b001fcf6_Traceguids, (__int64)Pdo);
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
  v22 = (*(unsigned __int16 *)(*(_QWORD *)(a4 + 40) + 8LL) + 5523) & 0xFFFFFFF8;
  *(_DWORD *)&String.Length = 2621440;
  *(_DWORD *)&DestinationString.Length = 3932160;
  v23 = v22 + 8 * ndisMaxNumberOfProcessors;
  String.Buffer = v81;
  DestinationString.Buffer = v82;
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
          v60 = IoAttachDeviceToDeviceStack(DeviceObject, v24);
          v25 = v60;
          if ( v60 )
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
  v65 = 1;
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
  v60 = v49->Chars.EvtCxGetNextDeviceObject(v51);
  DeviceExtension = PoolWithTag;
  ndisMInitializeMiniportBlock((__int64)DriverObjectExtension, (__int64)PoolWithTag, v23);
  *((_DWORD *)PoolWithTag + 30) |= 0x80u;
  *((_QWORD *)PoolWithTag + 3) = *(_QWORD *)(a4 + 64);
  if ( v78 )
    *v78 = PoolWithTag;
  v25 = v60;
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
    InterfaceByInterfaceGuid = v66;
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
        if ( (unsigned __int8)byte_1C0085314 >= 2u )
          WPP_SF_q(0x42u, &WPP_816ff7a89d638f3657e368d6b001fcf6_Traceguids, (__int64)DeviceExtension);
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
    if ( (unsigned __int8)byte_1C0085314 >= 2u )
      WPP_SF_q(0x43u, &WPP_816ff7a89d638f3657e368d6b001fcf6_Traceguids, (__int64)DeviceExtension);
    if ( (Microsoft_Windows_NDISEnableBits & 0x40) != 0 )
      Template_qqq((__int64)v16, &AddDeviceFailed, &NDIS_PROVIDER_ID, DevicePropertyData, 102, (char)DeviceExtension);
    goto LABEL_100;
  }
  v61 = 1;
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
    (wchar_t *)DeviceExtension + 2756);
  v35 = (__int64 **)(DeviceExtension + 3912);
  v19 = 4;
  DevicePropertyData = ndisCreateAdapterInstanceName(
                         (_UNICODE_STRING **)DeviceExtension + 489,
                         (__int64)DeviceExtension,
                         0LL,
                         (_UNICODE_STRING **)DeviceExtension + 559);
  if ( DevicePropertyData < 0 )
  {
    v25 = v60;
    goto LABEL_91;
  }
  if ( (unsigned __int8)byte_1C0085314 >= 4u )
    WPP_SF_qZ(0x44u, &WPP_816ff7a89d638f3657e368d6b001fcf6_Traceguids, (__int64)DeviceExtension, *v35);
  if ( (Microsoft_Windows_NDISEnableBits & 0x20) != 0 )
    Template_z((__int64)v16, &AddDevice, v17, (const wchar_t *)(*v35)[1]);
  if ( (*(_DWORD *)(a4 + 60) & 2) != 0 )
  {
    DevicePropertyData = ndisQueryReferenceBusInterface(v27, &v75);
    if ( DevicePropertyData < 0 )
    {
      InterfaceByInterfaceGuid = 0LL;
      goto LABEL_101;
    }
    *((_QWORD *)DeviceExtension + 505) = v75;
  }
  v19 = 4;
  DevicePropertyData = ndisCreateSecurityDescriptor(
                         *((void **)DeviceExtension + 485),
                         (PSECURITY_DESCRIPTOR *)DeviceExtension + 480,
                         5u);
  if ( DevicePropertyData < 0 )
  {
LABEL_100:
    InterfaceByInterfaceGuid = v66;
LABEL_101:
    v25 = v60;
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
  v38 = ndisInitializeConfiguration((__int64)v36, (__int64)DeviceExtension, *v76);
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
      && (unsigned __int8)byte_1C0085323 >= 4u )
    {
      ndisGetBindLinkNameForTracing((struct _NDIS_MINIPORT_BLOCK *)DeviceExtension, (struct NDIS_PNPTRACE_LOCALS *)v79);
      WPP_SF_Zq(0x45u, &WPP_816ff7a89d638f3657e368d6b001fcf6_Traceguids, (__int64 *)v79[1], v79[0]);
    }
    Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(DeviceExtension + 5208));
  }
  v64 = 1;
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
      v59 = 1;
      goto LABEL_59;
    }
    goto LABEL_115;
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qq(0x46u, &WPP_816ff7a89d638f3657e368d6b001fcf6_Traceguids, DriverObjectExtension, DeviceExtension);
LABEL_59:
  if ( (DriverObjectExtension->Flags & 1) == 0 || (unsigned __int8)DeviceExtension[32] < 6u )
    goto LABEL_60;
  v52 = (_DWORD *)*((_QWORD *)DeviceExtension + 478);
  if ( v52 )
  {
    if ( *v52 > 1u )
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
      if ( (unsigned __int8)byte_1C0085314 >= 2u )
        WPP_SF_q(0x47u, &WPP_816ff7a89d638f3657e368d6b001fcf6_Traceguids, (__int64)DeviceExtension);
      if ( (Microsoft_Windows_NDISEnableBits & 0x40) != 0 )
        Template_qqq((__int64)v16, &AddDeviceFailed, &NDIS_PROVIDER_ID, DevicePropertyData, 89, (char)DeviceExtension);
      goto LABEL_124;
    }
    v63 = 1;
    v40 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
    InterfaceByInterfaceGuid = (const struct _TlgProvider_t *)ndisIfFindInterfaceByInterfaceGuid(a4);
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
        v62 = 1;
        updated = ndisAllocateDefaultQueue((__int64)DeviceExtension);
        if ( !updated )
        {
          v42 = 0;
          v63 = 0;
          v61 = 0;
          v62 = 0;
          _InterlockedOr(v57, 0);
          v25 = v60;
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
  InterfaceByInterfaceGuid = v66;
LABEL_126:
  v25 = v60;
  v42 = v59;
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
      if ( v64 )
      {
        Ndis::BindRegistry::Reload((Ndis::BindRegistry *)DeviceExtension, 0LL, v43);
        ndisNotifyBindFailureOnUnboundProtocols((__int64)DeviceExtension);
      }
      if ( v42 )
        ndisMInvokeRemoveDevice((__int64)DeviceExtension);
      if ( v63 )
      {
        RtlFreeUnicodeString((PUNICODE_STRING)DeviceExtension + 263);
        *((_QWORD *)DeviceExtension + 527) = 0LL;
      }
      if ( v61 )
      {
        v53 = *(_QWORD *)(a4 + 40);
        if ( v53 || (v53 = *((_QWORD *)DeviceExtension + 529), v54 = 0LL, v53) )
          v54 = (_UNICODE_STRING *)(v53 + 8);
        v55 = IoDeleteSymbolicLink(v54);
        if ( v55 && (unsigned __int8)byte_1C0085314 >= 4u )
          WPP_SF_qD(0x48u, &WPP_816ff7a89d638f3657e368d6b001fcf6_Traceguids, (__int64)DeviceExtension, v55);
      }
      if ( v62 )
        ndisIfRemoveIfBlockMiniportAssociation(*((_QWORD *)DeviceExtension + 512), (__int64)DeviceExtension, 2);
      ndisMDeleteMiniportBlockOnRemove(DeviceExtension);
      DeviceExtension = 0LL;
    }
    if ( !v65 )
    {
      v56 = DeviceObject;
      if ( DeviceObject )
      {
        if ( v25 )
        {
          IoDetachDevice(v25);
          v56 = DeviceObject;
        }
        IoDeleteDevice(v56);
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
    if ( (unsigned __int8)byte_1C0085310 >= 4u )
      WPP_SF_qZ(
        0x49u,
        &WPP_816ff7a89d638f3657e368d6b001fcf6_Traceguids,
        (__int64)DeviceExtension,
        *((__int64 **)DeviceExtension + 489));
    ndisLogMiniportEvent((__int64)DeviceExtension, 0x1Fu);
  }
  ndisDereferencePackage((__int64)&ndisPkgs);
  if ( (unsigned __int8)byte_1C0085314 >= 4u )
    WPP_SF_qD(0x4Au, &WPP_816ff7a89d638f3657e368d6b001fcf6_Traceguids, (__int64)DeviceExtension, DevicePropertyData);
  return (unsigned int)DevicePropertyData;
}
