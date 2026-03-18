/*
 * XREFs of imp_WdfUsbTargetPipeConfigContinuousReader @ 0x1C00898B0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0002960 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C000D7C0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0017050 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_qLd @ 0x1C002FA34 (WPP_IFR_SF_qLd.c)
 *     WPP_IFR_SF_d @ 0x1C0035590 (WPP_IFR_SF_d.c)
 *     ?IsType@FxUsbPipe@@QEAAEW4_WDF_USB_PIPE_TYPE@@@Z @ 0x1C0066D80 (-IsType@FxUsbPipe@@QEAAEW4_WDF_USB_PIPE_TYPE@@@Z.c)
 *     WPP_IFR_SF_qddd @ 0x1C00684F0 (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_qDd @ 0x1C0075C18 (WPP_IFR_SF_qDd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0080C5C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?InitContinuousReader@FxUsbPipe@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z @ 0x1C008D830 (-InitContinuousReader@FxUsbPipe@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z.c)
 */

int __fastcall imp_WdfUsbTargetPipeConfigContinuousReader(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBPIPE__ *Pipe,
        _WDF_USB_CONTINUOUS_READER_CONFIG *Config)
{
  unsigned __int8 v5; // dl
  unsigned __int16 v6; // r9
  unsigned int _a3; // ebx
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  int v9; // ebx
  int result; // eax
  unsigned __int16 v11; // r9
  unsigned __int64 TransferLength; // rax
  unsigned __int64 HeaderLength; // rcx
  unsigned __int64 v14; // r15
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdx
  int v17; // ebp
  unsigned __int16 v18; // r9
  unsigned __int64 v19; // rcx
  __int64 v20; // r9
  unsigned int v21; // edx
  __int64 v22; // rax
  unsigned __int64 v23; // rdx
  ULONG_PTR retaddr; // [rsp+68h] [rbp+0h]
  FxUsbPipe *pUsbPipe; // [rsp+70h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Pipe,
    0x1203u,
    (void **)&pUsbPipe);
  _a3 = 0;
  m_Globals = pUsbPipe->m_Globals;
  if ( !Config )
    FxVerifierNullBugCheck(pUsbPipe->m_Globals, retaddr);
  if ( Config->Size != 72 )
  {
    v9 = -1073741820;
    WPP_IFR_SF_qddd(m_Globals, v5, 0xEu, 0xFu, WPP_FxUsbPipeAPI_cpp_Traceguids, Config, Config->Size, 72, -1073741820);
    return v9;
  }
  if ( !Config->EvtUsbTargetPipeReadComplete )
  {
    v11 = 16;
LABEL_8:
    v9 = -1073741811;
    WPP_IFR_SF_d(m_Globals, 2u, 0xEu, v11, WPP_FxUsbPipeAPI_cpp_Traceguids, -1073741811);
    return v9;
  }
  TransferLength = Config->TransferLength;
  if ( !TransferLength )
  {
    v11 = 17;
    goto LABEL_8;
  }
  HeaderLength = Config->HeaderLength;
  v14 = -1LL;
  v15 = HeaderLength + TransferLength;
  v16 = -1LL;
  if ( v15 >= HeaderLength )
    v16 = v15;
  v17 = v15 < HeaderLength ? 0xC0000095 : 0;
  if ( v15 < HeaderLength )
  {
    v18 = 18;
LABEL_15:
    WPP_IFR_SF_d(m_Globals, 2u, 0xEu, v18, WPP_FxUsbPipeAPI_cpp_Traceguids, v17);
    return v17;
  }
  v19 = v16 + Config->TrailerLength;
  if ( v19 >= v16 )
    v14 = v16 + Config->TrailerLength;
  v17 = v19 < v16 ? 0xC0000095 : 0;
  if ( v19 < v16 )
  {
    v18 = 19;
    goto LABEL_15;
  }
  result = FxValidateObjectAttributes(pUsbPipe->m_Globals, Config->BufferAttributes, 1, v6);
  if ( result >= 0 )
  {
    if ( !FxUsbPipe::IsType(pUsbPipe, WdfUsbPipeTypeBulk)
      && !FxUsbPipe::IsType((FxUsbPipe *)v20, WdfUsbPipeTypeInterrupt) )
    {
      v22 = *(int *)(v20 + 388);
      if ( (unsigned int)v22 < v21 )
        _a3 = `FxUsbPipe::_UsbdPipeTypeToWdf'::`2'::types[v22];
      WPP_IFR_SF_qLd(m_Globals, v21, 0xEu, 0x14u, WPP_FxUsbPipeAPI_cpp_Traceguids, Pipe, _a3, -1073741808);
      return -1073741808;
    }
    if ( *(char *)(v20 + 386) >= 0 )
    {
      WPP_IFR_SF_qd(m_Globals, 2u, 0xEu, 0x15u, WPP_FxUsbPipeAPI_cpp_Traceguids, Pipe, -1073741808);
      return -1073741808;
    }
    if ( *(_BYTE *)(v20 + 409) )
    {
      v23 = Config->TransferLength % *(unsigned __int16 *)(v20 + 384);
      if ( v23 )
      {
        v9 = -1073741306;
        WPP_IFR_SF_qDd(
          m_Globals,
          v23,
          0xEu,
          0x16u,
          WPP_FxUsbPipeAPI_cpp_Traceguids,
          (const void *)Config->TransferLength,
          *(unsigned __int16 *)(v20 + 384),
          0xC0000206);
        return v9;
      }
    }
    return FxUsbPipe::InitContinuousReader((FxUsbPipe *)v20, Config, v14);
  }
  return result;
}
