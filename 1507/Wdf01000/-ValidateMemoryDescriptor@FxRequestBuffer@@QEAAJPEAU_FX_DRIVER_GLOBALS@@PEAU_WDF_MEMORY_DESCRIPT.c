/*
 * XREFs of ?ValidateMemoryDescriptor@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_MEMORY_DESCRIPTOR@@K@Z @ 0x1C001697C
 * Callers:
 *     FxIoTargetSendIoctl @ 0x1C00169F0 (FxIoTargetSendIoctl.c)
 *     FxIoTargetSendIo @ 0x1C0081388 (FxIoTargetSendIo.c)
 *     imp_WdfIoTargetSendInternalIoctlOthersSynchronously @ 0x1C0082510 (imp_WdfIoTargetSendInternalIoctlOthersSynchronously.c)
 *     imp_WdfUsbTargetDeviceSendControlTransferSynchronously @ 0x1C00881E0 (imp_WdfUsbTargetDeviceSendControlTransferSynchronously.c)
 *     ?_SendTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAU_WDF_MEMORY_DESCRIPTOR@@PEAKK@Z @ 0x1C00921F4 (-_SendTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAU_WD.c)
 * Callees:
 *     ?SetMemory@FxRequestBuffer@@QEAAXPEAVIFxMemory@@PEAU_WDFMEMORY_OFFSET@@@Z @ 0x1C001692C (-SetMemory@FxRequestBuffer@@QEAAXPEAVIFxMemory@@PEAU_WDFMEMORY_OFFSET@@@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     WPP_IFR_SF_ @ 0x1C0022488 (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_D @ 0x1C00659E0 (WPP_IFR_SF_D.c)
 */

__int64 __fastcall FxRequestBuffer::ValidateMemoryDescriptor(
        FxRequestBuffer *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_MEMORY_DESCRIPTOR *Descriptor,
        char Flags)
{
  IFxMemory *Buffer; // rcx
  unsigned int Length; // eax
  unsigned int v9; // ebx
  unsigned __int16 v11; // r9
  unsigned __int64 v12; // r8
  IFxMemory *v13; // rcx
  __int64 v14; // rdx
  _WDFMEMORY_OFFSET *Offsets; // rdx
  unsigned __int64 BufferOffset; // rbx
  unsigned __int64 BufferLength; // rdx
  unsigned __int64 v18; // rbx
  unsigned int globals; // eax
  unsigned __int16 v20; // r9
  IFxMemory *pMemory; // [rsp+60h] [rbp+18h] BYREF

  if ( !Descriptor )
  {
    if ( (Flags & 1) != 0 )
      return 0LL;
    v11 = 10;
    goto LABEL_12;
  }
  if ( Descriptor->Type == WdfMemoryDescriptorTypeBuffer )
  {
    Buffer = (IFxMemory *)Descriptor->u.BufferType.Buffer;
    if ( Buffer )
    {
LABEL_4:
      Length = Descriptor->u.BufferType.Length;
      this->DataType = FxRequestBufferBuffer;
LABEL_5:
      this->u.Mdl.Length = Length;
      this->u.Memory.Memory = Buffer;
      return 0;
    }
    if ( (Flags & 2) == 0 )
    {
      v11 = 11;
      goto LABEL_12;
    }
    globals = Descriptor->u.BufferType.Length;
    if ( !globals )
      goto LABEL_4;
    v20 = 12;
LABEL_13:
    WPP_IFR_SF_D(
      FxDriverGlobals,
      (unsigned __int8)FxDriverGlobals,
      6u,
      v20,
      WPP_FxRequestBuffer_cpp_Traceguids,
      globals);
    return 3221225485LL;
  }
  if ( Descriptor->Type != WdfMemoryDescriptorTypeMdl )
  {
    if ( Descriptor->Type == WdfMemoryDescriptorTypeHandle )
    {
      v12 = (unsigned __int64)Descriptor->u.BufferType.Buffer;
      pMemory = 0LL;
      if ( v12 )
      {
        v13 = (IFxMemory *)(~v12 & 0xFFFFFFFFFFFFFFF8uLL);
        LOWORD(v14) = 0;
        if ( (v12 & 1) != 0 )
        {
          v14 = LOWORD(v13->__vftable);
          v13 = (IFxMemory *)((char *)v13 - v14);
        }
        if ( LOWORD(v13[1].__vftable) == 4106 )
        {
          pMemory = v13;
        }
        else
        {
          FxObjectHandleGetPtrQI((FxObject *)v13, (void **)&pMemory, (void *)v12, 0x100Au, v14);
          v13 = pMemory;
        }
        Offsets = Descriptor->u.HandleType.Offsets;
        if ( Offsets )
        {
          BufferOffset = Offsets->BufferOffset;
          BufferLength = Offsets->BufferLength;
          v18 = BufferLength + BufferOffset;
          if ( v18 < BufferLength || v18 > v13->GetBufferSize(v13) )
          {
            v9 = -1073741675;
            WPP_IFR_SF_d(FxDriverGlobals, 2u, 6u, 0x10u, WPP_FxRequestBuffer_cpp_Traceguids, -1073741675);
            return v9;
          }
          v13 = pMemory;
        }
        v9 = 0;
        if ( v13 )
          FxRequestBuffer::SetMemory(this, v13, Descriptor->u.HandleType.Offsets);
        return v9;
      }
      if ( (Flags & 2) != 0 )
        return 0;
      WPP_IFR_SF_(FxDriverGlobals, 2u, 6u, 0xFu, WPP_FxRequestBuffer_cpp_Traceguids);
    }
    return (unsigned int)-1073741811;
  }
  Buffer = (IFxMemory *)Descriptor->u.BufferType.Buffer;
  if ( Buffer )
  {
LABEL_37:
    Length = Descriptor->u.BufferType.Length;
    this->DataType = FxRequestBufferMdl;
    goto LABEL_5;
  }
  if ( (Flags & 2) != 0 )
  {
    globals = Descriptor->u.BufferType.Length;
    if ( globals )
    {
      v20 = 14;
      goto LABEL_13;
    }
    goto LABEL_37;
  }
  v11 = 13;
LABEL_12:
  WPP_IFR_SF_(FxDriverGlobals, 2u, 6u, v11, WPP_FxRequestBuffer_cpp_Traceguids);
  return 3221225485LL;
}
