/*
 * XREFs of ?ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAPEAX@Z @ 0x1C001C6DC
 * Callers:
 *     NdisMRegisterMiniportDriver @ 0x1C00ADDD0 (NdisMRegisterMiniportDriver.c)
 *     NdisWdfRegisterMiniportDriver @ 0x1C00D3790 (NdisWdfRegisterMiniportDriver.c)
 * Callees:
 *     ??_G_NDIS_M_DRIVER_BLOCK@@QEAAPEAXI@Z @ 0x1C000F3EC (--_G_NDIS_M_DRIVER_BLOCK@@QEAAPEAXI@Z.c)
 *     ndisDereferenceDriver @ 0x1C000F414 (ndisDereferenceDriver.c)
 *     memmove @ 0x1C0023700 (memmove.c)
 *     memset @ 0x1C0023A40 (memset.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     Template_qqq @ 0x1C003D994 (Template_qqq.c)
 *     ndisReferencePackage @ 0x1C0097740 (ndisReferencePackage.c)
 *     ndisDereferencePackage @ 0x1C0097790 (ndisDereferencePackage.c)
 *     ??2@YAPEAX_KPEAX@Z @ 0x1C009A818 (--2@YAPEAX_KPEAX@Z.c)
 *     ndisInitializeRef @ 0x1C00A68C4 (ndisInitializeRef.c)
 *     ndisQueryDriverImageName @ 0x1C00AE38C (ndisQueryDriverImageName.c)
 *     ndisWriteDriverNDISVersionToServiceKey @ 0x1C00AE4F4 (ndisWriteDriverNDISVersionToServiceKey.c)
 *     ndisMInvokeSetOptions @ 0x1C00AE7E0 (ndisMInvokeSetOptions.c)
 *     ndisGetServiceNameFromRegPath @ 0x1C00AE844 (ndisGetServiceNameFromRegPath.c)
 *     ndisInitializeNsi @ 0x1C00B3934 (ndisInitializeNsi.c)
 */

__int64 __fastcall ndisInternalRegisterMiniportDriver(
        struct _DRIVER_OBJECT *DriverObject,
        struct _UNICODE_STRING *a2,
        void *a3,
        struct _NDIS_MINIPORT_DRIVER_CHARACTERISTICS *a4,
        void **a5)
{
  _NDIS_M_DRIVER_BLOCK *v6; // rbx
  USHORT v10; // r14
  unsigned __int8 MinorNdisVersion; // dl
  bool v12; // al
  char v13; // cl
  char v14; // al
  char v15; // cl
  BOOL v16; // ecx
  __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  _NDIS_M_DRIVER_BLOCK *v19; // rax
  __int64 v20; // rdx
  void **v21; // r14
  unsigned int v22; // edi
  KIRQL v23; // di
  PVOID v24; // rcx
  int v25; // r8d
  struct _NDIS_M_DRIVER_BLOCK *v27; // rax
  PVOID DriverObjectExtension; // [rsp+60h] [rbp+8h] BYREF

  v6 = 0LL;
  DriverObjectExtension = 0LL;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(95LL, &WPP_816ff7a89d638f3657e368d6b001fcf6_Traceguids, DriverObject);
  if ( !ndisNsiInitialized )
    ndisInitializeNsi();
  if ( !DriverObject )
  {
    v22 = -1073741823;
    goto LABEL_53;
  }
  v10 = 0;
  if ( a4->MajorNdisVersion != 6 )
    goto LABEL_59;
  MinorNdisVersion = a4->MinorNdisVersion;
  if ( MinorNdisVersion == 2 )
    goto LABEL_59;
  if ( !MinorNdisVersion )
    v10 = 136;
  v12 = MinorNdisVersion == 1;
  if ( MinorNdisVersion == 20 )
    v12 = 1;
  v13 = v12;
  if ( MinorNdisVersion == 30 )
    v13 = 1;
  v14 = v13;
  if ( MinorNdisVersion == 40 )
    v14 = 1;
  v15 = v14;
  if ( MinorNdisVersion == 50 )
    v15 = 1;
  if ( !v15 )
  {
    if ( v10 )
      goto LABEL_22;
LABEL_59:
    v22 = -1073676284;
    goto LABEL_53;
  }
  if ( a4->Header.Type != 0x8A || a4->Header.Revision < 2u )
    goto LABEL_57;
  v10 = 152;
LABEL_22:
  if ( a4->Header.Size < v10 )
  {
LABEL_57:
    v22 = -1073676283;
    goto LABEL_53;
  }
  if ( !a4->InitializeHandlerEx
    || !a4->HaltHandlerEx
    || !a4->UnloadHandler
    || !a4->PauseHandler
    || !a4->RestartHandler
    || !a4->SendNetBufferListsHandler
    || !a4->ReturnNetBufferListsHandler
    || !a4->CancelSendHandler
    || !a4->DevicePnPEventNotifyHandler
    || !a4->ShutdownHandlerEx
    || !a4->CancelOidRequestHandler )
  {
    v22 = -1073676283;
LABEL_74:
    if ( v6 )
      _NDIS_M_DRIVER_BLOCK::`scalar deleting destructor'(v6);
    goto LABEL_53;
  }
  if ( !MinorNdisVersion
    || (v16 = a4->DirectOidRequestHandler == 0LL, v16 == (a4->CancelDirectOidRequestHandler == 0LL)) )
  {
    v17 = 1313425732LL;
    if ( (a4->Flags & 1) == 0 )
      v17 = 1313687876LL;
    if ( IoAllocateDriverObjectExtension(DriverObject, (PVOID)v17, a2->Length + 1258, &DriverObjectExtension) < 0 )
    {
      v22 = -1073741670;
      goto LABEL_53;
    }
    v19 = (_NDIS_M_DRIVER_BLOCK *)operator new(v18, DriverObjectExtension);
    v6 = v19;
    if ( v19 )
    {
      v19->UnhookedCharacteristics._p = 0LL;
      v19->HookRegistered = 0;
      memset(v19, 0, sizeof(_NDIS_M_DRIVER_BLOCK));
      v6->Header = (_NDIS_OBJECT_HEADER)82313474;
    }
    else
    {
      v6 = 0LL;
    }
    v6->MajorNdisVersion = a4->MajorNdisVersion;
    v6->MinorNdisVersion = a4->MinorNdisVersion;
    v6->MiniportDriverContext = a3;
    v6->ServiceRegPath.Buffer = (wchar_t *)&v6[1].Header.Type;
    v6->ServiceRegPath.Length = a2->Length;
    v6->ServiceRegPath.MaximumLength = a2->Length + 2;
    memmove(&v6[1], a2->Buffer, a2->Length);
    ndisGetServiceNameFromRegPath(&v6->ServiceRegPath, &v6->ServiceName);
    if ( (a4->Flags & 1) != 0 )
    {
      v6->Flags |= 1u;
      KeInitializeMutex(&v6->IMStartRemoveMutex, 0xFFFFu);
    }
    if ( (a4->Flags & 4) != 0 )
      v6->Flags |= 0x20u;
    memmove(&v6->112, a4, v10);
    if ( (a4->Flags & 0x10) != 0 )
      v6->Flags |= 0x40u;
    v6->DriverVersion = a4->MinorDriverVersion | (a4->MajorDriverVersion << 16);
    if ( MmIsDriverVerifying(DriverObject) )
    {
      v6->Flags |= 2u;
      if ( (ndisFlags & 0x400) != 0 )
      {
        v27 = 0LL;
        if ( !ndisDriverTrackAlloc )
          v27 = v6;
        ndisDriverTrackAlloc = v27;
      }
    }
    v6->MiniportQueue = 0LL;
    if ( (a4->Flags & 0x10) == 0 )
    {
      memset64(DriverObject->MajorFunction, (unsigned __int64)&ndisDummyIrpHandler, 0x1CuLL);
      DriverObject->DriverExtension->AddDevice = (int (__fastcall *)(_DRIVER_OBJECT *, _DEVICE_OBJECT *))ndisWdmPnPAddDevice;
      DriverObject->DriverUnload = (void (__fastcall *)(_DRIVER_OBJECT *))ndisMUnloadEx;
      DriverObject->MajorFunction[0] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisCreateIrpHandler;
      DriverObject->MajorFunction[14] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisDeviceControlIrpHandler;
      DriverObject->MajorFunction[15] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisDeviceInternalIrpDispatch;
      DriverObject->MajorFunction[2] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisCloseIrpHandler;
      DriverObject->MajorFunction[27] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisPnPDispatch;
      DriverObject->MajorFunction[22] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisPowerDispatch;
      DriverObject->MajorFunction[23] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisWMIIrpDispatch;
    }
    KeInitializeEvent(&v6->MiniportsRemovedEvent, NotificationEvent, 0);
    v6->DriverObject = DriverObject;
    v6->DeviceList.Blink = &v6->DeviceList;
    LOBYTE(v20) = 12;
    v6->DeviceList.Flink = &v6->DeviceList;
    ndisInitializeRef(&v6->Ref, v20);
    v21 = a5;
    *a5 = v6;
    v22 = ndisMInvokeSetOptions(v6);
    if ( v22 )
    {
      ndisDereferenceDriver((__int64)v6, 0);
      *v21 = 0LL;
    }
    else
    {
      if ( a4->OidRequestHandler || v6->CoOidRequestHandler )
      {
        ndisReferencePackage(&ndisPkgs);
        v23 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
        v24 = ndisDriverObject;
        v6->NextDriver = ndisMiniDriverList;
        ndisMiniDriverList = v6;
        ObfReferenceObject(v24);
        KeReleaseSpinLock(&ndisMiniDriverListLock, v23);
        ndisDereferencePackage(&ndisPkgs);
        ndisQueryDriverImageName(&v6->ServiceName, &v6->ImageName);
        LOBYTE(v25) = 1;
        ndisWriteDriverNDISVersionToServiceKey(
          a4->MajorNdisVersion,
          a4->MinorNdisVersion,
          v25,
          a4->MajorDriverVersion,
          a4->MinorDriverVersion,
          (__int64)&v6->ServiceName);
        v22 = 0;
        goto LABEL_53;
      }
      ndisDereferenceDriver((__int64)v6, 0);
      *v21 = 0LL;
      v22 = -1073676283;
    }
    goto LABEL_74;
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(96LL, &WPP_816ff7a89d638f3657e368d6b001fcf6_Traceguids, DriverObject);
  v22 = -1073676283;
  if ( (Microsoft_Windows_NDISEnableBits & 0x100) != 0 )
    Template_qqq(
      v16,
      (unsigned int)&RegisterMiniportDriverFailed,
      (unsigned int)&NDIS_PROVIDER_ID,
      -1073676283,
      48,
      (char)DriverObject);
LABEL_53:
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(97LL, &WPP_816ff7a89d638f3657e368d6b001fcf6_Traceguids, v6);
  return v22;
}
