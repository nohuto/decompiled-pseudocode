/*
 * XREFs of ?InitDevice@FxUsbDevice@@QEAAJK@Z @ 0x1C007D4C8
 * Callers:
 *     FxUsbTargetDeviceCreate @ 0x1C0077CD4 (FxUsbTargetDeviceCreate.c)
 * Callees:
 *     ?FxFormatUsbRequest@@YAXPEAVFxRequestBase@@PEAU_URB@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z @ 0x1C0003E5C (-FxFormatUsbRequest@@YAXPEAVFxRequestBase@@PEAU_URB@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z.c)
 *     ?ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z @ 0x1C0005CC0 (-ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009700 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_d @ 0x1C00098A0 (WPP_IFR_SF_d.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x1C0019A70 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     __security_check_cookie @ 0x1C0035B00 (__security_check_cookie.c)
 *     memset @ 0x1C0036C40 (memset.c)
 *     ??1FxSyncRequest@@UEAA@XZ @ 0x1C00558D4 (--1FxSyncRequest@@UEAA@XZ.c)
 *     ??0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z @ 0x1C00559D4 (--0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C0055B38 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     WPP_IFR_SF_DDd @ 0x1C0058FD8 (WPP_IFR_SF_DDd.c)
 *     WPP_IFR_SF_dd @ 0x1C0059110 (WPP_IFR_SF_dd.c)
 *     ?ClearFieldsForReuse@FxRequestBase@@QEAAXXZ @ 0x1C006BA9C (-ClearFieldsForReuse@FxRequestBase@@QEAAXXZ.c)
 *     USBD_CreateHandle @ 0x1C008F244 (USBD_CreateHandle.c)
 */

__int64 __fastcall FxUsbDevice::InitDevice(FxUsbDevice *this, unsigned int USBDClientContractVersionForWdfClient)
{
  int _a1; // eax
  int v5; // edi
  unsigned __int16 v6; // r9
  FxRequestBase *m_TrueRequest; // rcx
  __int64 v8; // rdx
  unsigned __int8 v9; // dl
  unsigned int wTotalLength; // esi
  _USB_CONFIGURATION_DESCRIPTOR *v11; // rax
  _USB_CONFIGURATION_DESCRIPTOR *m_ConfigDescriptor; // rax
  __int64 v13; // rdx
  unsigned __int8 v14; // dl
  _USB_CONFIGURATION_DESCRIPTOR *v15; // rax
  int _a3; // ecx
  __int64 v17; // rdx
  __int64 v18; // rdx
  unsigned __int8 v19; // r8
  _IRP *m_Irp; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  FxRequestBase *v22; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  __int64 v24; // rdx
  unsigned __int8 v25; // r8
  _IRP *v26; // rcx
  _IO_STACK_LOCATION *v27; // rax
  FxRequestBase *v28; // rax
  _FX_DRIVER_GLOBALS *v29; // rcx
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
      goto $Done_53;
    }
    this->m_UrbType = FxUrbTypeUsbdAllocated;
  }
  v5 = FxRequestBase::ValidateTarget(request.m_TrueRequest, (unsigned __int64)this);
  if ( v5 < 0 )
    goto $Done_53;
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
  FxRequestBase::ClearFieldsForReuse(request.m_TrueRequest, v8);
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
      v9,
      0xEu,
      0xEu,
      WPP_FxusbDeviceKm_cpp_Traceguids,
      config.wTotalLength,
      9,
      -1073741823);
    goto $Done_53;
  }
  v11 = (_USB_CONFIGURATION_DESCRIPTOR *)FxPoolAllocator(
                                           this->m_Globals,
                                           &this->m_Globals->FxPoolFrameworks,
                                           ExDefaultNonPagedPoolType,
                                           (unsigned int)config.wTotalLength + 18,
                                           this->m_Globals->Tag,
                                           retaddr);
  this->m_ConfigDescriptor = v11;
  if ( !v11 )
  {
    v5 = -1073741670;
    WPP_IFR_SF_dd(this->m_Globals, 2u, 0xEu, 0xFu, WPP_FxusbDeviceKm_cpp_Traceguids, wTotalLength + 18, -1073741670);
    goto $Done_53;
  }
  memset(v11, 0, wTotalLength + 18);
  m_ConfigDescriptor = this->m_ConfigDescriptor;
  *(_DWORD *)&urb.UrbHeader.Length = 721032;
  urb.UrbControlTransfer.TransferBufferLength = wTotalLength;
  *(_OWORD *)&urb.UrbOpenStaticStreams.Streams = (unsigned __int64)m_ConfigDescriptor;
  *(_DWORD *)((char *)&urb.UrbOpenStaticStreams + 130) = 512;
  urb.UrbControlTransfer.UrbLink = 0LL;
  IoReuseIrp(request.m_TrueRequest->m_Irp.m_Irp, 0);
  FxRequestBase::ClearFieldsForReuse(request.m_TrueRequest, v13);
  FxFormatUsbRequest(request.m_TrueRequest, (_FILE_OBJECT *)&urb, FxUrbTypeLegacy, 0LL);
  _a1 = FxIoTarget::SubmitSync(this, request.m_TrueRequest, &options, 0LL);
  v5 = _a1;
  if ( _a1 < 0 )
  {
    v6 = 16;
    goto LABEL_4;
  }
  v15 = this->m_ConfigDescriptor;
  _a3 = v15->wTotalLength;
  if ( _a3 != wTotalLength )
  {
    v5 = -1073741668;
    WPP_IFR_SF_DDd(this->m_Globals, v14, 0xEu, 0x11u, WPP_FxusbDeviceKm_cpp_Traceguids, wTotalLength, _a3, -1073741668);
    goto $Done_53;
  }
  if ( (v15->bmAttributes & 0x20) != 0 )
    this->m_Traits |= 2u;
  *(_DWORD *)&urb.UrbHeader.Length = 1245320;
  urb.UrbControlTransfer.TransferBufferLength = 2;
  *((_OWORD *)&urb.UrbOpenStaticStreams + 3) = 0uLL;
  urb.UrbSelectInterface.Interface.InterfaceHandle = &deviceStatus;
  urb.UrbControlDescriptorRequest.LanguageId = 0;
  IoReuseIrp(request.m_TrueRequest->m_Irp.m_Irp, 0);
  FxRequestBase::ClearFieldsForReuse(request.m_TrueRequest, v17);
  FxFormatUsbRequest(request.m_TrueRequest, (_FILE_OBJECT *)&urb, FxUrbTypeLegacy, 0LL);
  if ( (int)FxIoTarget::SubmitSync(this, request.m_TrueRequest, &options, 0LL) >= 0 && (deviceStatus & 1) != 0 )
    this->m_Traits |= 1u;
  memset(&busIf, 0, sizeof(busIf));
  IoReuseIrp(request.m_TrueRequest->m_Irp.m_Irp, -1073741637);
  FxRequestBase::ClearFieldsForReuse(request.m_TrueRequest, v18);
  m_Irp = request.m_TrueRequest->m_Irp.m_Irp;
  CurrentStackLocation = m_Irp->Tail.Overlay.CurrentStackLocation;
  m_Irp->IoStatus.Status = -1073741637;
  --CurrentStackLocation;
  CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart = (__int64)&busIf;
  CurrentStackLocation->Parameters.WMI.ProviderId = (unsigned __int64)&USB_BUS_INTERFACE_USBDI_GUID;
  *(_WORD *)&CurrentStackLocation->MajorFunction = 2075;
  CurrentStackLocation->Parameters.CreatePipe.Parameters = 0LL;
  CurrentStackLocation->Parameters.Create.Options = 65608;
  v22 = request.m_TrueRequest;
  m_Globals = request.m_TrueRequest->m_Globals;
  if ( m_Globals->FxVerifierOn && m_Globals->FxVerifierIO )
  {
    FxRequestBase::SetVerifierFlags(request.m_TrueRequest, 128, v19);
    v22 = request.m_TrueRequest;
  }
  v5 = FxIoTarget::SubmitSync(this, v22, 0LL, 0LL);
  if ( v5 < 0 )
  {
    memset(&busIf, 0, sizeof(busIf));
    IoReuseIrp(request.m_TrueRequest->m_Irp.m_Irp, -1073741637);
    FxRequestBase::ClearFieldsForReuse(request.m_TrueRequest, v24);
    v26 = request.m_TrueRequest->m_Irp.m_Irp;
    v27 = v26->Tail.Overlay.CurrentStackLocation;
    v26->IoStatus.Status = -1073741637;
    --v27;
    v27->Parameters.Read.ByteOffset.QuadPart = (__int64)&busIf;
    v27->Parameters.WMI.ProviderId = (unsigned __int64)&USB_BUS_INTERFACE_USBDI_GUID;
    *(_WORD *)&v27->MajorFunction = 2075;
    v27->Parameters.CreatePipe.Parameters = 0LL;
    v27->Parameters.Create.Options = 64;
    v28 = request.m_TrueRequest;
    v29 = request.m_TrueRequest->m_Globals;
    if ( v29->FxVerifierOn && v29->FxVerifierIO )
    {
      FxRequestBase::SetVerifierFlags(request.m_TrueRequest, 128, v25);
      v28 = request.m_TrueRequest;
    }
    _a1 = FxIoTarget::SubmitSync(this, v28, 0LL, 0LL);
    v5 = _a1;
    if ( _a1 < 0 )
    {
      if ( _a1 == -1073741637 )
      {
        this->m_OnUSBD = 1;
        v5 = 0;
        goto $Done_53;
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
$Done_53:
  FxSyncRequest::~FxSyncRequest(&request);
  return (unsigned int)v5;
}
