/*
 * XREFs of ?GetString@FxUsbDevice@@QEAAJPEAG0EGPEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z @ 0x1C00922D0
 * Callers:
 *     imp_WdfUsbTargetDeviceAllocAndQueryString @ 0x1C008B230 (imp_WdfUsbTargetDeviceAllocAndQueryString.c)
 *     imp_WdfUsbTargetDeviceQueryString @ 0x1C008BAE0 (imp_WdfUsbTargetDeviceQueryString.c)
 * Callees:
 *     ?FxFormatUsbRequest@@YAXPEAVFxRequestBase@@PEAU_URB@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z @ 0x1C0005400 (-FxFormatUsbRequest@@YAXPEAVFxRequestBase@@PEAU_URB@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C000D700 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z @ 0x1C00117C0 (-ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0012220 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x1C0029E20 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     __security_check_cookie @ 0x1C003E280 (__security_check_cookie.c)
 *     memmove @ 0x1C0040140 (memmove.c)
 *     memset @ 0x1C0040480 (memset.c)
 *     ??0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z @ 0x1C0066250 (--0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z.c)
 *     ??1FxSyncRequest@@UEAA@XZ @ 0x1C006634C (--1FxSyncRequest@@UEAA@XZ.c)
 */

__int64 __fastcall FxUsbDevice::GetString(
        FxUsbDevice *this,
        unsigned __int16 *String,
        unsigned __int16 *NumCharacters,
        unsigned __int8 StringIndex,
        unsigned __int16 LangID,
        WDFREQUEST__ *Request,
        _WDF_REQUEST_SEND_OPTIONS *Options)
{
  _WDF_REQUEST_SEND_OPTIONS *p_options; // r15
  _USB_COMMON_DESCRIPTOR *v11; // rdi
  int v12; // ebx
  unsigned int v13; // ebx
  _USB_COMMON_DESCRIPTOR *v14; // rax
  _USB_COMMON_DESCRIPTOR *p_common; // rsi
  unsigned __int8 bLength; // al
  unsigned __int64 v17; // rax
  unsigned __int16 v18; // cx
  _USB_COMMON_DESCRIPTOR common; // [rsp+34h] [rbp-CCh] BYREF
  _URB_CONTROL_DESCRIPTOR_REQUEST urb; // [rsp+40h] [rbp-C0h] BYREF
  FxSyncRequest request; // [rsp+D0h] [rbp-30h] BYREF
  _WDF_REQUEST_SEND_OPTIONS options; // [rsp+200h] [rbp+100h] BYREF
  void *Caller; // [rsp+258h] [rbp+158h]

  p_options = Options;
  FxSyncRequest::FxSyncRequest(&request, this->m_Globals, 0LL, Request);
  v11 = 0LL;
  v12 = FxRequestBase::ValidateTarget(request.m_TrueRequest, (unsigned __int64)this);
  if ( v12 >= 0 )
  {
    memset(&urb, 0, sizeof(urb));
    if ( String )
    {
      v13 = 2 * *NumCharacters + 2;
      v14 = (_USB_COMMON_DESCRIPTOR *)FxPoolAllocator(
                                        this->m_Globals,
                                        &this->m_Globals->FxPoolFrameworks,
                                        ExDefaultNonPagedPoolType,
                                        v13,
                                        this->m_Globals->Tag,
                                        Caller);
      v11 = v14;
      if ( !v14 )
      {
        v12 = -1073741670;
        goto $Done_55;
      }
      memset(v14, 0, v13);
      p_common = v11;
    }
    else
    {
      p_common = &common;
      common = 0;
      v13 = 2;
    }
    urb.TransferBufferMDL = 0LL;
    urb.UrbLink = 0LL;
    urb.Index = StringIndex;
    urb.LanguageId = LangID;
    *(_DWORD *)&urb.Hdr.Length = 721032;
    urb.TransferBufferLength = v13;
    urb.TransferBuffer = p_common;
    urb.DescriptorType = 3;
    if ( !Options )
    {
      options.Timeout = -20000000LL;
      p_options = &options;
      options.Size = 16;
      options.Flags = 1;
    }
    FxFormatUsbRequest(request.m_TrueRequest, (_FILE_OBJECT *)&urb, FxUrbTypeLegacy, 0LL);
    v12 = FxIoTarget::SubmitSync(this, (FxRequest *)request.m_TrueRequest, p_options, 0LL);
    if ( v12 >= 0 )
    {
      bLength = p_common->bLength;
      if ( (p_common->bLength & 1) != 0 || bLength < 2u )
      {
        v12 = -1073741668;
      }
      else
      {
        v17 = ((unsigned __int64)bLength - 2) >> 1;
        if ( String )
        {
          v18 = *NumCharacters;
          if ( *NumCharacters < (unsigned __int16)v17 )
            v12 = -2147483643;
          else
            v18 = v17;
          *NumCharacters = v17;
          memmove(String, &p_common[1], 2LL * v18);
        }
        else
        {
          *NumCharacters = v17;
        }
      }
    }
    if ( v11 )
      FxPoolFree(v11);
  }
$Done_55:
  FxSyncRequest::~FxSyncRequest(&request);
  return (unsigned int)v12;
}
