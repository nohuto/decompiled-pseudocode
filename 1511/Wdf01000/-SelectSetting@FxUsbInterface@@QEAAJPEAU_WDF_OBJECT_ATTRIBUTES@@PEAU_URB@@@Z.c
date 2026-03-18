/*
 * XREFs of ?SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z @ 0x1C007EAC0
 * Callers:
 *     imp_WdfUsbInterfaceSelectSetting @ 0x1C0079600 (imp_WdfUsbInterfaceSelectSetting.c)
 *     ?SelectSettingByDescriptor@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_USB_INTERFACE_DESCRIPTOR@@@Z @ 0x1C007EE28 (-SelectSettingByDescriptor@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_USB_INTERFACE_D.c)
 *     ?SelectSettingByIndex@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@E@Z @ 0x1C007EF5C (-SelectSettingByIndex@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@E@Z.c)
 * Callees:
 *     ?FxFormatUsbRequest@@YAXPEAVFxRequestBase@@PEAU_URB@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z @ 0x1C0003E5C (-FxFormatUsbRequest@@YAXPEAVFxRequestBase@@PEAU_URB@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0004490 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z @ 0x1C0005CC0 (-ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0009460 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009700 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_d @ 0x1C00098A0 (WPP_IFR_SF_d.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C000D260 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?Init@FxIoTarget@@QEAAJPEAVFxDeviceBase@@@Z @ 0x1C0019438 (-Init@FxIoTarget@@QEAAJPEAVFxDeviceBase@@@Z.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x1C0019A70 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     memset @ 0x1C0036C40 (memset.c)
 *     ??1FxSyncRequest@@UEAA@XZ @ 0x1C00558D4 (--1FxSyncRequest@@UEAA@XZ.c)
 *     ??0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z @ 0x1C00559D4 (--0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0056B68 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     WPP_IFR_SF_DDd @ 0x1C0058FD8 (WPP_IFR_SF_DDd.c)
 *     ?CleanupInterfacePipesAndDelete@FxUsbDevice@@IEAAXPEAVFxUsbInterface@@@Z @ 0x1C007AE48 (-CleanupInterfacePipesAndDelete@FxUsbDevice@@IEAAXPEAVFxUsbInterface@@@Z.c)
 *     ?SetInfo@FxUsbInterface@@QEAAXPEAU_USBD_INTERFACE_INFORMATION@@@Z @ 0x1C007F054 (-SetInfo@FxUsbInterface@@QEAAXPEAU_USBD_INTERFACE_INFORMATION@@@Z.c)
 *     ??0FxUsbPipe@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxUsbDevice@@@Z @ 0x1C007F274 (--0FxUsbPipe@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxUsbDevice@@@Z.c)
 */

__int64 __fastcall FxUsbInterface::SelectSetting(
        FxUsbInterface *this,
        _WDF_OBJECT_ATTRIBUTES *PipesAttributes,
        _URB *Urb)
{
  _URB *v3; // r12
  unsigned __int8 v5; // dl
  unsigned int v6; // edi
  int v7; // esi
  __int64 v8; // r14
  unsigned int v9; // eax
  size_t v10; // rsi
  FxUsbPipe **v11; // rax
  FxUsbPipe **v12; // r15
  unsigned __int8 v13; // r13
  FxUsbPipe *v14; // rax
  FxIoTarget *v15; // rax
  FxIoTarget *v16; // r12
  int v17; // eax
  FxObject **v18; // rbx
  unsigned __int16 v20; // r9
  _WDF_REQUEST_SEND_OPTIONS options; // [rsp+40h] [rbp-C8h] BYREF
  _LIST_ENTRY pendHead; // [rsp+50h] [rbp-B8h] BYREF
  FxSyncRequest request; // [rsp+60h] [rbp-A8h] BYREF
  void *retaddr; // [rsp+1D0h] [rbp+C8h]

  v3 = Urb;
  FxSyncRequest::FxSyncRequest((FxSyncRequest *)&request.m_Type, this->m_Globals, 0LL, 0LL);
  v6 = 0;
  if ( !this->m_ConfiguredPipes || this->m_CurAlternateSetting != v3->UrbSelectInterface.Interface.AlternateSetting )
  {
    request.__vftable = (FxSyncRequest_vtbl *)&pendHead.Blink;
    pendHead.Blink = (_LIST_ENTRY *)&pendHead.Blink;
    if ( v3->UrbHeader.Length < 0x18u )
    {
      v6 = -1073741811;
      WPP_IFR_SF_DDd(
        this->m_Globals,
        v5,
        0xEu,
        0x10u,
        WPP_FxUsbInterface_cpp_Traceguids,
        v3->UrbHeader.Length,
        24,
        -1073741811);
      goto LABEL_32;
    }
    v7 = FxRequestBase::ValidateTarget(
           *(FxRequestBase **)&request.m_ClearContextOnDestroy,
           (unsigned __int64)this->m_UsbDevice);
    if ( v7 >= 0 )
    {
      LODWORD(v8) = ((unsigned int)v3->UrbSelectInterface.Interface.Length - 24) / 0x18;
      if ( (_BYTE)v8 )
        v9 = 8 * (unsigned __int8)v8;
      else
        v9 = 8;
      v10 = v9;
      v11 = (FxUsbPipe **)FxPoolAllocator(
                            this->m_Globals,
                            &this->m_Globals->FxPoolFrameworks,
                            ExDefaultNonPagedPoolType,
                            v9,
                            this->m_Globals->Tag,
                            retaddr);
      v12 = v11;
      if ( v11 )
      {
        memset(v11, 0, v10);
        v13 = 0;
        if ( (_BYTE)v8 )
        {
          while ( 1 )
          {
            v14 = (FxUsbPipe *)FxObjectHandleAlloc(
                                 this->m_Globals,
                                 ExDefaultNonPagedPoolType,
                                 0x1B0uLL,
                                 0,
                                 PipesAttributes,
                                 0,
                                 FxObjectTypeExternal);
            if ( v14 )
            {
              FxUsbPipe::FxUsbPipe(v14, this->m_Globals, this->m_UsbDevice);
              v16 = v15;
            }
            else
            {
              v16 = 0LL;
            }
            v12[v13] = (FxUsbPipe *)v16;
            if ( !v16 )
              break;
            v17 = FxIoTarget::Init(v16, this->m_UsbDevice->m_DeviceBase);
            v7 = v17;
            if ( v17 < 0 )
            {
              v20 = 19;
              goto LABEL_35;
            }
            v17 = FxObject::Commit(v16, PipesAttributes, 0LL, this, 1u);
            v7 = v17;
            if ( v17 < 0 )
            {
              v20 = 20;
LABEL_35:
              WPP_IFR_SF_d(this->m_Globals, 2u, 0xEu, v20, WPP_FxUsbInterface_cpp_Traceguids, v17);
              goto $Done_55;
            }
            if ( ++v13 >= (unsigned __int8)v8 )
            {
              v3 = Urb;
              goto LABEL_20;
            }
          }
          v7 = -1073741670;
          WPP_IFR_SF_d(this->m_Globals, 2u, 0xEu, 0x12u, WPP_FxUsbInterface_cpp_Traceguids, -1073741670);
        }
        else
        {
LABEL_20:
          if ( this->m_ConfiguredPipes )
            FxUsbDevice::CleanupInterfacePipesAndDelete(this->m_UsbDevice, (_FX_DRIVER_GLOBALS *)this);
          options.Timeout = 0x500000010LL;
          pendHead.Flink = (_LIST_ENTRY *)-20000000LL;
          FxFormatUsbRequest(
            *(FxRequestBase **)&request.m_ClearContextOnDestroy,
            (_FILE_OBJECT *)v3,
            FxUrbTypeLegacy,
            0LL);
          v7 = FxIoTarget::SubmitSync(
                 this->m_UsbDevice,
                 *(FxRequestBase **)&request.m_ClearContextOnDestroy,
                 (_WDF_REQUEST_SEND_OPTIONS *)&options.Timeout,
                 0LL);
          if ( v7 >= 0 )
          {
            this->m_NumberOfConfiguredPipes = v8;
            this->m_ConfiguredPipes = v12;
            FxUsbInterface::SetInfo(this, &v3->UrbSelectInterface.Interface);
$Done_55:
            if ( v7 >= 0 )
              goto LABEL_31;
          }
        }
        if ( (_BYTE)v8 )
        {
          v18 = v12;
          v8 = (unsigned __int8)v8;
          do
          {
            if ( *v18 )
              FxObject::DeleteFromFailedCreate(*v18);
            ++v18;
            --v8;
          }
          while ( v8 );
        }
        FxPoolFree(v12);
      }
      else
      {
        v7 = -1073741670;
        WPP_IFR_SF_d(this->m_Globals, 2u, 0xEu, 0x11u, WPP_FxUsbInterface_cpp_Traceguids, -1073741670);
      }
    }
LABEL_31:
    v6 = v7;
  }
LABEL_32:
  FxSyncRequest::~FxSyncRequest((FxSyncRequest *)&request.m_Type);
  return v6;
}
