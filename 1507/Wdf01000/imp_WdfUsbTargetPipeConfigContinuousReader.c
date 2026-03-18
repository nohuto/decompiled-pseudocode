/*
 * XREFs of imp_WdfUsbTargetPipeConfigContinuousReader @ 0x1C0089D20
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C0017C70 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     WPP_IFR_SF_qLd @ 0x1C0028BB8 (WPP_IFR_SF_qLd.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     WPP_IFR_SF_qDd @ 0x1C005D990 (WPP_IFR_SF_qDd.c)
 *     WPP_IFR_SF_qddd @ 0x1C005DBF0 (WPP_IFR_SF_qddd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?_UsbdPipeTypeToWdf@FxUsbPipe@@SA?AW4_WDF_USB_PIPE_TYPE@@W4_USBD_PIPE_TYPE@@@Z @ 0x1C008FF84 (-_UsbdPipeTypeToWdf@FxUsbPipe@@SA-AW4_WDF_USB_PIPE_TYPE@@W4_USBD_PIPE_TYPE@@@Z.c)
 *     ?InitContinuousReader@FxUsbPipe@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z @ 0x1C0091314 (-InitContinuousReader@FxUsbPipe@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z.c)
 */

int __fastcall imp_WdfUsbTargetPipeConfigContinuousReader(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Pipe,
        _WDF_USB_CONTINUOUS_READER_CONFIG *Config,
        unsigned __int16 a4)
{
  WDFUSBPIPE__ *v5; // rsi
  FxUsbPipe *v6; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  int result; // eax
  int v9; // ebx
  unsigned __int16 v10; // r9
  unsigned __int64 TransferLength; // rcx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rbp
  _WDF_USB_PIPE_TYPE _a3; // eax
  unsigned __int8 v15; // dl
  FxUsbPipe *v16; // r9
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // rdx
  ULONG_PTR retaddr; // [rsp+68h] [rbp+0h]
  FxUsbPipe *pUsbPipe; // [rsp+78h] [rbp+10h] BYREF

  v5 = (WDFUSBPIPE__ *)Pipe;
  if ( !Pipe )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1203uLL);
  v6 = (FxUsbPipe *)(~Pipe & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Pipe) = 0;
  if ( ((unsigned __int8)v5 & 1) != 0 )
  {
    Pipe = LOWORD(v6->__vftable);
    v6 = (FxUsbPipe *)((char *)v6 - Pipe);
  }
  if ( v6->m_Type == 4611 )
  {
    pUsbPipe = v6;
  }
  else
  {
    FxObjectHandleGetPtrQI(v6, (void **)&pUsbPipe, v5, 0x1203u, Pipe);
    v6 = pUsbPipe;
  }
  m_Globals = v6->m_Globals;
  if ( !Config )
    FxVerifierNullBugCheck(v6->m_Globals, retaddr);
  if ( Config->Size != 72 )
  {
    WPP_IFR_SF_qddd(m_Globals, Pipe, 0xEu, 0xFu, WPP_FxUsbPipeAPI_cpp_Traceguids, Config, Config->Size, 72, -1073741820);
    return -1073741820;
  }
  if ( !Config->EvtUsbTargetPipeReadComplete )
  {
    v9 = -1073741811;
    v10 = 16;
LABEL_30:
    WPP_IFR_SF_d(m_Globals, 2u, 0xEu, v10, WPP_FxUsbPipeAPI_cpp_Traceguids, v9);
    return v9;
  }
  TransferLength = Config->TransferLength;
  if ( !TransferLength )
  {
    v9 = -1073741811;
    v10 = 17;
    goto LABEL_30;
  }
  v12 = Config->HeaderLength + TransferLength;
  if ( v12 < Config->HeaderLength )
  {
    v10 = 18;
    goto LABEL_29;
  }
  v13 = v12 + Config->TrailerLength;
  if ( v13 < v12 )
  {
    v10 = 19;
LABEL_29:
    v9 = -1073741675;
    goto LABEL_30;
  }
  result = FxValidateObjectAttributes(m_Globals, Config->BufferAttributes, 1, a4);
  if ( result < 0 )
    return result;
  _a3 = FxUsbPipe::_UsbdPipeTypeToWdf(pUsbPipe->m_PipeInformation.PipeType);
  if ( (unsigned int)(_a3 - 3) <= 1 )
  {
    if ( (v16->m_PipeInformation.EndpointAddress & 0x80u) != 0 )
    {
      if ( !v16->m_CheckPacketSize )
        return FxUsbPipe::InitContinuousReader(v16, Config, v13);
      v17 = Config->TransferLength;
      v18 = v17 % v16->m_PipeInformation.MaximumPacketSize;
      if ( !v18 )
        return FxUsbPipe::InitContinuousReader(v16, Config, v13);
      v9 = -1073741306;
      WPP_IFR_SF_qDd(
        m_Globals,
        v18,
        0xEu,
        0x16u,
        WPP_FxUsbPipeAPI_cpp_Traceguids,
        (const void *)v17,
        v16->m_PipeInformation.MaximumPacketSize,
        0xC0000206);
    }
    else
    {
      v9 = -1073741808;
      WPP_IFR_SF_qd(m_Globals, 2u, 0xEu, 0x15u, WPP_FxUsbPipeAPI_cpp_Traceguids, v5, -1073741808);
    }
  }
  else
  {
    v9 = -1073741808;
    WPP_IFR_SF_qLd(m_Globals, v15, 0xEu, 0x14u, WPP_FxUsbPipeAPI_cpp_Traceguids, v5, _a3, -1073741808);
  }
  return v9;
}
