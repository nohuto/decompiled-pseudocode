/*
 * XREFs of ?InitDevice@FxUsbDevice@@QEAAJK@Z @ 0x1C008E520
 * Callers:
 *     FxUsbTargetDeviceCreate @ 0x1C0087144 (FxUsbTargetDeviceCreate.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009FC0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_d @ 0x1C000A170 (WPP_IFR_SF_d.c)
 *     ?ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z @ 0x1C000CF00 (-ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z.c)
 *     ?FxFormatUsbRequest@@YAXPEAVFxRequestBase@@PEAU_URB@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z @ 0x1C0011A84 (-FxFormatUsbRequest@@YAXPEAVFxRequestBase@@PEAU_URB@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x1C002A610 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     __security_check_cookie @ 0x1C003A860 (__security_check_cookie.c)
 *     memset @ 0x1C003C780 (memset.c)
 *     ??0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z @ 0x1C0062F6C (--0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z.c)
 *     ??1FxSyncRequest@@UEAA@XZ @ 0x1C0063064 (--1FxSyncRequest@@UEAA@XZ.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C00631D0 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     WPP_IFR_SF_DDd @ 0x1C0064788 (WPP_IFR_SF_DDd.c)
 *     WPP_IFR_SF_dd @ 0x1C00649A8 (WPP_IFR_SF_dd.c)
 *     ?ClearFieldsForReuse@FxRequestBase@@QEAAXXZ @ 0x1C007A3DC (-ClearFieldsForReuse@FxRequestBase@@QEAAXXZ.c)
 *     USBD_CreateHandle @ 0x1C009D4D4 (USBD_CreateHandle.c)
 */

__int64 __fastcall FxUsbDevice::InitDevice(FxUsbDevice *this, unsigned int USBDClientContractVersionForWdfClient)
{
  int _a1; // eax
  int v5; // edi
  unsigned __int16 v6; // r9
  FxRequestBase *m_TrueRequest; // rcx
  unsigned __int8 v8; // dl
  unsigned int wTotalLength; // esi
  _USB_CONFIGURATION_DESCRIPTOR *v10; // rax
  _USB_CONFIGURATION_DESCRIPTOR *m_ConfigDescriptor; // rax
  unsigned __int8 v12; // dl
  _USB_CONFIGURATION_DESCRIPTOR *v13; // rax
  int _a3; // ecx
  unsigned __int8 v15; // r8
  _IRP *m_Irp; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  FxRequestBase *v18; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned __int8 v20; // r8
  _IRP *v21; // rcx
  _IO_STACK_LOCATION *v22; // rax
  FxRequestBase *v23; // rax
  _FX_DRIVER_GLOBALS *v24; // rcx
  void *BusContext; // rcx
  void (__fastcall *GetUSBDIVersion)(void *, _USBD_VERSION_INFORMATION *, unsigned int *); // rax
  unsigned __int16 deviceStatus; // [rsp+40h] [rbp-C0h] BYREF
  _WDF_REQUEST_SEND_OPTIONS options; // [rsp+48h] [rbp-B8h] BYREF
  _URB urb; // [rsp+60h] [rbp-A0h] BYREF
  _USB_BUS_INTERFACE_USBDI_V1 busIf; // [rsp+100h] [rbp+0h] BYREF
  FxSyncRequest request; // [rsp+150h] [rbp+50h] BYREF
  _USB_CONFIGURATION_DESCRIPTOR config; // [rsp+280h] [rbp+180h] BYREF
  void *retaddr; // [rsp+2D8h] [rbp+1D8h]

  FxSyncRequest::FxSyncRequest(&request, this->m_Globals, 0LL, 0LL);
  memset(&urb, 0, sizeof(urb));
  if ( USBDClientContractVersionForWdfClient != -1 )
  {
    _a1 = USBD_CreateHandle(
            this->m_InStackDevice,
            this->m_TargetDevice,
            USBDClientContractVersionForWdfClient,
            this->m_Globals->Tag,
            &this->m_USBDHandle);
    v5 = _a1;
    if ( _a1 < 0 )
    {
      v6 = 10;
LABEL_4:
      WPP_IFR_SF_d(this->m_Globals, 2u, 0xEu, v6, WPP_FxusbDeviceKm_cpp_Traceguids, _a1);
      goto $Done_57;
    }
    this->m_UrbType = FxUrbTypeUsbdAllocated;
  }
  v5 = FxRequestBase::ValidateTarget(request.m_TrueRequest, (unsigned __int64)this);
  if ( v5 < 0 )
    goto $Done_57;
  *(_OWORD *)&urb.UrbOpenStaticStreams.Streams = (unsigned __int64)&this->m_DeviceDescriptor;
  *(_DWORD *)&urb.UrbHeader.Length = 721032;
  urb.UrbControlTransfer.TransferBufferLength = 18;
  *(_DWORD *)((char *)&urb.UrbOpenStaticStreams + 130) = 256;
  urb.UrbControlTransfer.UrbLink = 0LL;
  FxFormatUsbRequest(request.m_TrueRequest, (_FILE_OBJECT *)&urb, FxUrbTypeLegacy, 0LL);
  options.Timeout = -50000000LL;
  options.Size = 16;
  options.Flags = 1;
  _a1 = FxIoTarget::SubmitSync(this, request.m_TrueRequest, &options, 0LL);
  v5 = _a1;
  if ( _a1 < 0 )
  {
    v6 = 11;
    goto LABEL_4;
  }
  m_TrueRequest = request.m_TrueRequest;
  this->m_ControlPipe = urb.UrbSelectInterface.ConfigurationHandle;
  *(_QWORD *)&config.bLength = 0LL;
  config.MaxPower = 0;
  *(_DWORD *)&urb.UrbHeader.Length = 721032;
  *((_OWORD *)&urb.UrbOpenStaticStreams + 3) = 0uLL;
  urb.UrbControlTransfer.TransferBufferLength = 9;
  urb.UrbSelectInterface.Interface.InterfaceHandle = &config;
  *(_DWORD *)((char *)&urb.UrbOpenStaticStreams + 130) = 512;
  IoReuseIrp(m_TrueRequest->m_Irp.m_Irp, 0);
  FxRequestBase::ClearFieldsForReuse(request.m_TrueRequest);
  FxFormatUsbRequest(request.m_TrueRequest, (_FILE_OBJECT *)&urb, FxUrbTypeLegacy, 0LL);
  _a1 = FxIoTarget::SubmitSync(this, request.m_TrueRequest, &options, 0LL);
  v5 = _a1;
  if ( _a1 < 0 )
  {
    v6 = 12;
    goto LABEL_4;
  }
  if ( !urb.UrbControlTransfer.TransferBufferLength )
  {
    _a1 = -1073741823;
    v5 = -1073741823;
    v6 = 13;
    goto LABEL_4;
  }
  wTotalLength = config.wTotalLength;
  if ( config.wTotalLength < 9u )
  {
    v5 = -1073741823;
    WPP_IFR_SF_DDd(
      this->m_Globals,
      v8,
      0xEu,
      0xEu,
      WPP_FxusbDeviceKm_cpp_Traceguids,
      config.wTotalLength,
      9,
      -1073741823);
    goto $Done_57;
  }
  v10 = (_USB_CONFIGURATION_DESCRIPTOR *)FxPoolAllocator(
                                           this->m_Globals,
                                           &this->m_Globals->FxPoolFrameworks,
                                           ExDefaultNonPagedPoolType,
                                           (unsigned int)config.wTotalLength + 18,
                                           this->m_Globals->Tag,
                                           retaddr);
  this->m_ConfigDescriptor = v10;
  if ( !v10 )
  {
    v5 = -1073741670;
    WPP_IFR_SF_dd(this->m_Globals, 2u, 0xEu, 0xFu, WPP_FxusbDeviceKm_cpp_Traceguids, wTotalLength + 18, -1073741670);
    goto $Done_57;
  }
  memset(v10, 0, wTotalLength + 18);
  m_ConfigDescriptor = this->m_ConfigDescriptor;
  *(_DWORD *)&urb.UrbHeader.Length = 721032;
  urb.UrbControlTransfer.TransferBufferLength = wTotalLength;
  *(_OWORD *)&urb.UrbOpenStaticStreams.Streams = (unsigned __int64)m_ConfigDescriptor;
  *(_DWORD *)((char *)&urb.UrbOpenStaticStreams + 130) = 512;
  urb.UrbControlTransfer.UrbLink = 0LL;
  IoReuseIrp(request.m_TrueRequest->m_Irp.m_Irp, 0);
  FxRequestBase::ClearFieldsForReuse(request.m_TrueRequest);
  FxFormatUsbRequest(request.m_TrueRequest, (_FILE_OBJECT *)&urb, FxUrbTypeLegacy, 0LL);
  _a1 = FxIoTarget::SubmitSync(this, request.m_TrueRequest, &options, 0LL);
  v5 = _a1;
  if ( _a1 < 0 )
  {
    v6 = 16;
    goto LABEL_4;
  }
  v13 = this->m_ConfigDescriptor;
  _a3 = v13->wTotalLength;
  if ( _a3 != wTotalLength )
  {
    v5 = -1073741668;
    WPP_IFR_SF_DDd(this->m_Globals, v12, 0xEu, 0x11u, WPP_FxusbDeviceKm_cpp_Traceguids, wTotalLength, _a3, -1073741668);
    goto $Done_57;
  }
  if ( (v13->bmAttributes & 0x20) != 0 )
    this->m_Traits |= 2u;
  *(_DWORD *)&urb.UrbHeader.Length = 1245320;
  urb.UrbControlTransfer.TransferBufferLength = 2;
  *((_OWORD *)&urb.UrbOpenStaticStreams + 3) = 0uLL;
  urb.UrbSelectInterface.Interface.InterfaceHandle = &deviceStatus;
  urb.UrbControlDescriptorRequest.LanguageId = 0;
  IoReuseIrp(request.m_TrueRequest->m_Irp.m_Irp, 0);
  FxRequestBase::ClearFieldsForReuse(request.m_TrueRequest);
  FxFormatUsbRequest(request.m_TrueRequest, (_FILE_OBJECT *)&urb, FxUrbTypeLegacy, 0LL);
  if ( (int)FxIoTarget::SubmitSync(this, request.m_TrueRequest, &options, 0LL) >= 0 && (deviceStatus & 1) != 0 )
    this->m_Traits |= 1u;
  memset(&busIf, 0, sizeof(busIf));
  IoReuseIrp(request.m_TrueRequest->m_Irp.m_Irp, -1073741637);
  FxRequestBase::ClearFieldsForReuse(request.m_TrueRequest);
  m_Irp = request.m_TrueRequest->m_Irp.m_Irp;
  CurrentStackLocation = m_Irp->Tail.Overlay.CurrentStackLocation;
  m_Irp->IoStatus.Status = -1073741637;
  --CurrentStackLocation;
  CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart = (__int64)&busIf;
  CurrentStackLocation->Parameters.WMI.ProviderId = (unsigned __int64)&USB_BUS_INTERFACE_USBDI_GUID;
  *(_WORD *)&CurrentStackLocation->MajorFunction = 2075;
  CurrentStackLocation->Parameters.CreatePipe.Parameters = 0LL;
  CurrentStackLocation->Parameters.Create.Options = 65608;
  v18 = request.m_TrueRequest;
  m_Globals = request.m_TrueRequest->m_Globals;
  if ( m_Globals->FxVerifierOn && m_Globals->FxVerifierIO )
  {
    FxRequestBase::SetVerifierFlags(request.m_TrueRequest, 128, v15);
    v18 = request.m_TrueRequest;
  }
  v5 = FxIoTarget::SubmitSync(this, v18, 0LL, 0LL);
  if ( v5 < 0 )
  {
    memset(&busIf, 0, sizeof(busIf));
    IoReuseIrp(request.m_TrueRequest->m_Irp.m_Irp, -1073741637);
    FxRequestBase::ClearFieldsForReuse(request.m_TrueRequest);
    v21 = request.m_TrueRequest->m_Irp.m_Irp;
    v22 = v21->Tail.Overlay.CurrentStackLocation;
    v21->IoStatus.Status = -1073741637;
    --v22;
    v22->Parameters.Read.ByteOffset.QuadPart = (__int64)&busIf;
    v22->Parameters.WMI.ProviderId = (unsigned __int64)&USB_BUS_INTERFACE_USBDI_GUID;
    *(_WORD *)&v22->MajorFunction = 2075;
    v22->Parameters.CreatePipe.Parameters = 0LL;
    v22->Parameters.Create.Options = 64;
    v23 = request.m_TrueRequest;
    v24 = request.m_TrueRequest->m_Globals;
    if ( v24->FxVerifierOn && v24->FxVerifierIO )
    {
      FxRequestBase::SetVerifierFlags(request.m_TrueRequest, 128, v20);
      v23 = request.m_TrueRequest;
    }
    _a1 = FxIoTarget::SubmitSync(this, v23, 0LL, 0LL);
    v5 = _a1;
    if ( _a1 < 0 )
    {
      if ( _a1 == -1073741637 )
      {
        this->m_OnUSBD = 1;
        v5 = 0;
        goto $Done_57;
      }
      v6 = 18;
      goto LABEL_4;
    }
  }
  if ( busIf.IsDeviceHighSpeed && busIf.IsDeviceHighSpeed(busIf.BusContext) )
    this->m_Traits |= 4u;
  BusContext = busIf.BusContext;
  this->m_QueryBusTime = busIf.QueryBusTime;
  this->m_BusInterfaceDereference = busIf.InterfaceDereference;
  GetUSBDIVersion = busIf.GetUSBDIVersion;
  this->m_BusInterfaceContext = BusContext;
  GetUSBDIVersion(BusContext, &this->m_UsbdVersionInformation, &this->m_HcdPortCapabilities);
$Done_57:
  FxSyncRequest::~FxSyncRequest(&request);
  return (unsigned int)v5;
}
