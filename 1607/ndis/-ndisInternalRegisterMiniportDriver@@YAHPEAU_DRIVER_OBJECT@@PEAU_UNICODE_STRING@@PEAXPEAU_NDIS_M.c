/*
 * XREFs of ?ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAPEAX@Z @ 0x1C0012EAC
 * Callers:
 *     NdisMRegisterMiniportDriver @ 0x1C009E650 (NdisMRegisterMiniportDriver.c)
 *     NdisWdfRegisterMiniportDriver @ 0x1C00D2C50 (NdisWdfRegisterMiniportDriver.c)
 * Callees:
 *     ??_G_NDIS_M_DRIVER_BLOCK@@QEAAPEAXI@Z @ 0x1C00132F4 (--_G_NDIS_M_DRIVER_BLOCK@@QEAAPEAXI@Z.c)
 *     ndisDereferenceDriver @ 0x1C001331C (ndisDereferenceDriver.c)
 *     memmove @ 0x1C00271C0 (memmove.c)
 *     memset @ 0x1C0027500 (memset.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     Template_qqq @ 0x1C0042698 (Template_qqq.c)
 *     ndisDereferencePackage @ 0x1C009B138 (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C009B308 (ndisReferencePackage.c)
 *     ??2@YAPEAX_KPEAX@Z @ 0x1C009C270 (--2@YAPEAX_KPEAX@Z.c)
 *     ndisMInvokeSetOptions @ 0x1C009E658 (ndisMInvokeSetOptions.c)
 *     ndisGetServiceNameFromRegPath @ 0x1C009E6BC (ndisGetServiceNameFromRegPath.c)
 *     ndisWriteDriverNDISVersionToServiceKey @ 0x1C00A1D1C (ndisWriteDriverNDISVersionToServiceKey.c)
 *     ndisQueryDriverImageName @ 0x1C00A224C (ndisQueryDriverImageName.c)
 *     ndisInitializeRef @ 0x1C00A2C40 (ndisInitializeRef.c)
 *     ndisInitializeNsi @ 0x1C00B2F70 (ndisInitializeNsi.c)
 */

__int64 __fastcall ndisInternalRegisterMiniportDriver(
        struct _DRIVER_OBJECT *DriverObject,
        struct _UNICODE_STRING *a2,
        void *a3,
        struct _NDIS_MINIPORT_DRIVER_CHARACTERISTICS *a4,
        void **a5)
{
  _NDIS_M_DRIVER_BLOCK *v6; // rbx
  struct _UNICODE_STRING *v8; // r15
  USHORT v10; // r14
  bool v11; // al
  char v12; // cl
  char v13; // al
  char v14; // cl
  char v15; // al
  char v16; // cl
  BOOL v17; // ecx
  __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  _NDIS_M_DRIVER_BLOCK *v20; // rax
  __int64 v21; // rdx
  void **v22; // r14
  unsigned int v23; // edi
  __int64 v24; // r8
  KIRQL v25; // di
  PVOID v26; // rcx
  int v27; // r8d
  struct _NDIS_M_DRIVER_BLOCK *v29; // rax
  PVOID DriverObjectExtension; // [rsp+60h] [rbp+8h] BYREF

  v6 = 0LL;
  DriverObjectExtension = 0LL;
  v8 = a2;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(95LL, &WPP_31395673df433bc870ce0871a9c25aaa_Traceguids, DriverObject);
  if ( !ndisNsiInitialized )
    ndisInitializeNsi();
  if ( !DriverObject )
  {
    v23 = -1073741823;
    goto LABEL_57;
  }
  v10 = 0;
  if ( a4->MajorNdisVersion != 6 )
    goto LABEL_63;
  LOBYTE(a2) = a4->MinorNdisVersion;
  if ( (_BYTE)a2 == 2 )
    goto LABEL_63;
  if ( !(_BYTE)a2 )
    v10 = 136;
  v11 = (_BYTE)a2 == 1;
  if ( (_BYTE)a2 == 20 )
    v11 = 1;
  v12 = v11;
  if ( (_BYTE)a2 == 30 )
    v12 = 1;
  v13 = v12;
  if ( (_BYTE)a2 == 40 )
    v13 = 1;
  v14 = v13;
  if ( (_BYTE)a2 == 50 )
    v14 = 1;
  v15 = v14;
  if ( (_BYTE)a2 == 51 )
    v15 = 1;
  v16 = v15;
  if ( (_BYTE)a2 == 60 )
    v16 = 1;
  if ( !v16 )
  {
    if ( v10 )
      goto LABEL_26;
LABEL_63:
    v23 = -1073676284;
    goto LABEL_57;
  }
  if ( a4->Header.Type != 0x8A || a4->Header.Revision < 2u )
    goto LABEL_61;
  v10 = 152;
LABEL_26:
  if ( a4->Header.Size < v10 )
  {
LABEL_61:
    v23 = -1073676283;
    goto LABEL_57;
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
    v23 = -1073676283;
LABEL_78:
    if ( v6 )
      _NDIS_M_DRIVER_BLOCK::`scalar deleting destructor'(v6, (unsigned int)a2);
    goto LABEL_57;
  }
  if ( !(_BYTE)a2 || (v17 = a4->DirectOidRequestHandler == 0LL, v17 == (a4->CancelDirectOidRequestHandler == 0LL)) )
  {
    v18 = 1313425732LL;
    if ( (a4->Flags & 1) == 0 )
      v18 = 1313687876LL;
    if ( IoAllocateDriverObjectExtension(DriverObject, (PVOID)v18, v8->Length + 1194, &DriverObjectExtension) < 0 )
    {
      v23 = -1073741670;
      goto LABEL_57;
    }
    v20 = (_NDIS_M_DRIVER_BLOCK *)operator new(v19, DriverObjectExtension);
    v6 = v20;
    if ( v20 )
    {
      v20->UnhookedCharacteristics._p = 0LL;
      v20->HookRegistered = 0;
      memset(v20, 0, sizeof(_NDIS_M_DRIVER_BLOCK));
      v6->Header = (_NDIS_OBJECT_HEADER)78119170;
    }
    else
    {
      v6 = 0LL;
    }
    v6->MajorNdisVersion = a4->MajorNdisVersion;
    v6->MinorNdisVersion = a4->MinorNdisVersion;
    v6->MiniportDriverContext = a3;
    v6->ServiceRegPath.Buffer = (wchar_t *)&v6[1].Header.Type;
    v6->ServiceRegPath.Length = v8->Length;
    v6->ServiceRegPath.MaximumLength = v8->Length + 2;
    memmove(&v6[1], v8->Buffer, v8->Length);
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
        v29 = 0LL;
        if ( !ndisDriverTrackAlloc )
          v29 = v6;
        ndisDriverTrackAlloc = v29;
      }
    }
    v6->MiniportQueue = 0LL;
    if ( (a4->Flags & 0x10) == 0 )
    {
      memset64(DriverObject->MajorFunction, (unsigned __int64)ndisDummyIrpHandler, 0x1CuLL);
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
    LOBYTE(v21) = 12;
    v6->DeviceList.Flink = &v6->DeviceList;
    ndisInitializeRef(&v6->Ref, v21);
    v22 = a5;
    *a5 = v6;
    v23 = ndisMInvokeSetOptions(v6);
    if ( v23 )
    {
      LOBYTE(v24) = -1;
      ndisDereferenceDriver(v6, 0LL, v24);
      *v22 = 0LL;
    }
    else
    {
      if ( a4->OidRequestHandler || v6->CoOidRequestHandler )
      {
        ndisReferencePackage(&ndisPkgs);
        v25 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
        v26 = ndisDriverObject;
        v6->NextDriver = ndisMiniDriverList;
        ndisMiniDriverList = v6;
        ObfReferenceObject(v26);
        KeReleaseSpinLock(&ndisMiniDriverListLock, v25);
        ndisDereferencePackage(&ndisPkgs);
        ndisQueryDriverImageName(&v6->ServiceName, &v6->ImageName);
        LOBYTE(v27) = 1;
        ndisWriteDriverNDISVersionToServiceKey(
          a4->MajorNdisVersion,
          a4->MinorNdisVersion,
          v27,
          a4->MajorDriverVersion,
          a4->MinorDriverVersion,
          (__int64)&v6->ServiceName);
        v23 = 0;
        goto LABEL_57;
      }
      LOBYTE(v24) = -1;
      ndisDereferenceDriver(v6, 0LL, v24);
      *v22 = 0LL;
      v23 = -1073676283;
    }
    goto LABEL_78;
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(96LL, &WPP_31395673df433bc870ce0871a9c25aaa_Traceguids, DriverObject);
  v23 = -1073676283;
  if ( (Microsoft_Windows_NDISEnableBits & 0x100) != 0 )
    Template_qqq(
      v17,
      (unsigned int)&RegisterMiniportDriverFailed,
      (unsigned int)&NDIS_PROVIDER_ID,
      -1073676283,
      197,
      (char)DriverObject);
LABEL_57:
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(97LL, &WPP_31395673df433bc870ce0871a9c25aaa_Traceguids, v6);
  return v23;
}
