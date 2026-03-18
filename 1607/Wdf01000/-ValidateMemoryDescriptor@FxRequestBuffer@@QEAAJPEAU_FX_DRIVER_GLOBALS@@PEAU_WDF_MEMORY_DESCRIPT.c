/*
 * XREFs of ?ValidateMemoryDescriptor@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_MEMORY_DESCRIPTOR@@K@Z @ 0x1C00295F4
 * Callers:
 *     FxIoTargetSendIoctl @ 0x1C0029020 (FxIoTargetSendIoctl.c)
 *     FxIoTargetSendIo @ 0x1C0081CD4 (FxIoTargetSendIo.c)
 *     imp_WdfIoTargetSendInternalIoctlOthersSynchronously @ 0x1C00828D0 (imp_WdfIoTargetSendInternalIoctlOthersSynchronously.c)
 *     imp_WdfUsbTargetDeviceSendControlTransferSynchronously @ 0x1C0088530 (imp_WdfUsbTargetDeviceSendControlTransferSynchronously.c)
 *     ?_SendTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAU_WDF_MEMORY_DESCRIPTOR@@PEAKK@Z @ 0x1C0089EE8 (-_SendTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAU_WD.c)
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001BF0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_d @ 0x1C000A170 (WPP_IFR_SF_d.c)
 *     WPP_IFR_SF_ @ 0x1C00186F0 (WPP_IFR_SF_.c)
 *     ?SetMemory@FxRequestBuffer@@QEAAXPEAVIFxMemory@@PEAU_WDFMEMORY_OFFSET@@@Z @ 0x1C0029774 (-SetMemory@FxRequestBuffer@@QEAAXPEAVIFxMemory@@PEAU_WDFMEMORY_OFFSET@@@Z.c)
 *     WPP_IFR_SF_D @ 0x1C006CC30 (WPP_IFR_SF_D.c)
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
  void *v11; // rdx
  _WDFMEMORY_OFFSET *Offsets; // rcx
  unsigned __int16 v13; // r9
  unsigned __int64 BufferOffset; // rbx
  unsigned __int64 BufferLength; // rcx
  unsigned __int64 v16; // rbx
  unsigned int globals; // eax
  unsigned __int16 v18; // r9
  IFxMemory *pMemory; // [rsp+50h] [rbp+18h] BYREF

  if ( !Descriptor )
  {
    if ( (Flags & 1) != 0 )
      return 0LL;
    v13 = 10;
    goto LABEL_18;
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
      v13 = 11;
      goto LABEL_18;
    }
    globals = Descriptor->u.BufferType.Length;
    if ( !globals )
      goto LABEL_4;
    v18 = 12;
LABEL_19:
    WPP_IFR_SF_D(
      FxDriverGlobals,
      (unsigned __int8)FxDriverGlobals,
      6u,
      v18,
      WPP_FxRequestBuffer_cpp_Traceguids,
      globals);
    return 3221225485LL;
  }
  if ( Descriptor->Type != WdfMemoryDescriptorTypeMdl )
  {
    if ( Descriptor->Type == WdfMemoryDescriptorTypeHandle )
    {
      pMemory = 0LL;
      v11 = Descriptor->u.BufferType.Buffer;
      if ( v11 )
      {
        FxObjectHandleGetPtr(FxDriverGlobals, (unsigned __int64)v11, 0x100Au, (void **)&pMemory);
        Offsets = Descriptor->u.HandleType.Offsets;
        if ( Offsets
          && ((BufferOffset = Offsets->BufferOffset,
               BufferLength = Offsets->BufferLength,
               v16 = BufferLength + BufferOffset,
               v16 < BufferLength)
           || v16 > pMemory->GetBufferSize(pMemory)) )
        {
          v9 = -1073741675;
          WPP_IFR_SF_d(FxDriverGlobals, 2u, 6u, 0x10u, WPP_FxRequestBuffer_cpp_Traceguids, -1073741675);
        }
        else
        {
          v9 = 0;
          if ( pMemory )
            FxRequestBuffer::SetMemory(this, pMemory, Descriptor->u.HandleType.Offsets);
        }
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
LABEL_31:
    Length = Descriptor->u.BufferType.Length;
    this->DataType = FxRequestBufferMdl;
    goto LABEL_5;
  }
  if ( (Flags & 2) != 0 )
  {
    globals = Descriptor->u.BufferType.Length;
    if ( globals )
    {
      v18 = 14;
      goto LABEL_19;
    }
    goto LABEL_31;
  }
  v13 = 13;
LABEL_18:
  WPP_IFR_SF_(FxDriverGlobals, 2u, 6u, v13, WPP_FxRequestBuffer_cpp_Traceguids);
  return 3221225485LL;
}
