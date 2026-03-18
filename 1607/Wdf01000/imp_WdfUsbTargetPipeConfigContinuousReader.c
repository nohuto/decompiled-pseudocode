/*
 * XREFs of imp_WdfUsbTargetPipeConfigContinuousReader @ 0x1C0085E30
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001BF0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0002600 (WPP_IFR_SF_qd.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C000A070 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_d @ 0x1C000A170 (WPP_IFR_SF_d.c)
 *     WPP_IFR_SF_qLd @ 0x1C002E0B8 (WPP_IFR_SF_qLd.c)
 *     ?IsType@FxUsbPipe@@QEAAEW4_WDF_USB_PIPE_TYPE@@@Z @ 0x1C0063A60 (-IsType@FxUsbPipe@@QEAAEW4_WDF_USB_PIPE_TYPE@@@Z.c)
 *     WPP_IFR_SF_qddd @ 0x1C00651D0 (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_qDd @ 0x1C00700CC (WPP_IFR_SF_qDd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007C724 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?InitContinuousReader@FxUsbPipe@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z @ 0x1C0089AE0 (-InitContinuousReader@FxUsbPipe@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z.c)
 */

int __fastcall imp_WdfUsbTargetPipeConfigContinuousReader(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBPIPE__ *Pipe,
        _WDF_USB_CONTINUOUS_READER_CONFIG *Config)
{
  unsigned __int8 v5; // dl
  unsigned __int16 v6; // r9
  unsigned int _a3; // edi
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  int result; // eax
  int v10; // ebx
  unsigned __int16 v11; // r9
  unsigned __int64 TransferLength; // rcx
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rbp
  __int64 v15; // r9
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rdx
  ULONG_PTR retaddr; // [rsp+68h] [rbp+0h]
  FxUsbPipe *pUsbPipe; // [rsp+70h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
    (unsigned __int64)Pipe,
    0x1203u,
    (void **)&pUsbPipe);
  _a3 = 0;
  m_Globals = pUsbPipe->m_Globals;
  if ( !Config )
    FxVerifierNullBugCheck(pUsbPipe->m_Globals, retaddr);
  if ( Config->Size != 72 )
  {
    WPP_IFR_SF_qddd(m_Globals, v5, 0xEu, 0xFu, WPP_FxUsbPipeAPI_cpp_Traceguids, Config, Config->Size, 72, -1073741820);
    return -1073741820;
  }
  if ( !Config->EvtUsbTargetPipeReadComplete )
  {
    v10 = -1073741811;
    v11 = 16;
LABEL_26:
    WPP_IFR_SF_d(m_Globals, 2u, 0xEu, v11, WPP_FxUsbPipeAPI_cpp_Traceguids, v10);
    return v10;
  }
  TransferLength = Config->TransferLength;
  if ( !TransferLength )
  {
    v10 = -1073741811;
    v11 = 17;
    goto LABEL_26;
  }
  v13 = Config->HeaderLength + TransferLength;
  if ( v13 < Config->HeaderLength )
  {
    v11 = 18;
    goto LABEL_25;
  }
  v14 = v13 + Config->TrailerLength;
  if ( v14 < v13 )
  {
    v11 = 19;
LABEL_25:
    v10 = -1073741675;
    goto LABEL_26;
  }
  result = FxValidateObjectAttributes(pUsbPipe->m_Globals, Config->BufferAttributes, 1, v6);
  if ( result < 0 )
    return result;
  if ( FxUsbPipe::IsType(pUsbPipe, WdfUsbPipeTypeBulk) || FxUsbPipe::IsType((FxUsbPipe *)v15, WdfUsbPipeTypeInterrupt) )
  {
    if ( *(char *)(v15 + 386) < 0 )
    {
      if ( !*(_BYTE *)(v15 + 409) )
        return FxUsbPipe::InitContinuousReader((FxUsbPipe *)v15, Config, v14);
      v18 = Config->TransferLength;
      v19 = v18 % *(unsigned __int16 *)(v15 + 384);
      if ( !v19 )
        return FxUsbPipe::InitContinuousReader((FxUsbPipe *)v15, Config, v14);
      v10 = -1073741306;
      WPP_IFR_SF_qDd(
        m_Globals,
        v19,
        0xEu,
        0x16u,
        WPP_FxUsbPipeAPI_cpp_Traceguids,
        (const void *)v18,
        *(unsigned __int16 *)(v15 + 384),
        0xC0000206);
    }
    else
    {
      v10 = -1073741808;
      WPP_IFR_SF_qd(m_Globals, 2u, 0xEu, 0x15u, WPP_FxUsbPipeAPI_cpp_Traceguids, Pipe, -1073741808);
    }
  }
  else
  {
    v17 = *(int *)(v15 + 388);
    if ( v17 < v16 )
      _a3 = `FxUsbPipe::_UsbdPipeTypeToWdf'::`2'::types[v17];
    v10 = -1073741808;
    WPP_IFR_SF_qLd(m_Globals, v16, 0xEu, 0x14u, WPP_FxUsbPipeAPI_cpp_Traceguids, Pipe, _a3, -1073741808);
  }
  return v10;
}
