/*
 * XREFs of ?ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z @ 0x1C00117C0
 * Callers:
 *     ?FxFormatUrbRequest@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIoTarget@@PEAVFxRequestBase@@PEAUFxRequestBuffer@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z @ 0x1C00052E4 (-FxFormatUrbRequest@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIoTarget@@PEAVFxRequestBase@@PEAUFxRequest.c)
 *     imp_WdfRequestCreate @ 0x1C0006160 (imp_WdfRequestCreate.c)
 *     ?FormatInternalIoctlOthersRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KPEAUFxRequestBuffer@@@Z @ 0x1C002AD8C (-FormatInternalIoctlOthersRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KPEAUFxRequestBuffer@@@Z.c)
 *     ?FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z @ 0x1C003C9B0 (-FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z.c)
 *     imp_WdfRequestChangeTarget @ 0x1C0078CA0 (imp_WdfRequestChangeTarget.c)
 *     ?_Create@FxRequest@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAVFxIoTarget@@W4FxRequestIrpOwnership@@W4FxRequestConstructorCaller@@PEAPEAV1@@Z @ 0x1C007C5B8 (-_Create@FxRequest@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAVFxIoTar.c)
 *     ?FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject@@@Z @ 0x1C00891FC (-FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject.c)
 *     ?FormatAbortRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z @ 0x1C008CE6C (-FormatAbortRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z.c)
 *     ?FormatResetRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z @ 0x1C008CFE8 (-FormatResetRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z.c)
 *     ?Deconfig@FxUsbDevice@@QEAAJXZ @ 0x1C008F89C (-Deconfig@FxUsbDevice@@QEAAJXZ.c)
 *     ?SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z @ 0x1C009024C (-SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z.c)
 *     ?SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z @ 0x1C009165C (-SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z.c)
 *     ?FormatControlRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAT_WDF_USB_CONTROL_SETUP_PACKET@@PEAUFxRequestBuffer@@@Z @ 0x1C0091E1C (-FormatControlRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAT_WDF_USB_CONTROL_SETUP_PACKET@@PE.c)
 *     ?FormatStringRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@EG@Z @ 0x1C0092084 (-FormatStringRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@EG@Z.c)
 *     ?GetString@FxUsbDevice@@QEAAJPEAG0EGPEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z @ 0x1C00922D0 (-GetString@FxUsbDevice@@QEAAJPEAG0EGPEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z.c)
 *     ?InitDevice@FxUsbDevice@@QEAAJK@Z @ 0x1C00924FC (-InitDevice@FxUsbDevice@@QEAAJK@Z.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0017050 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_qq @ 0x1C002F010 (WPP_IFR_SF_qq.c)
 *     ?VerifierClearFormatted@FxRequestBase@@QEAAXXZ @ 0x1C0066474 (-VerifierClearFormatted@FxRequestBase@@QEAAXXZ.c)
 *     WPP_IFR_SF_qid @ 0x1C0068A04 (WPP_IFR_SF_qid.c)
 */

__int64 __fastcall FxRequestBase::ValidateTarget(FxRequestBase *this, unsigned __int64 Target)
{
  _IRP *m_Irp; // rdi
  unsigned __int64 v3; // rbx
  FxRequestContext *m_RequestContext; // rcx
  CCHAR v6; // cl
  PIRP Irp; // rax
  _IRP *v8; // rcx
  _IRP *v9; // rsi
  unsigned __int16 v11; // cx
  const void *_a1; // rsi
  unsigned __int16 v13; // ax
  unsigned __int64 _a2; // rsi
  const void *v15; // rcx
  unsigned __int64 v16; // rdx
  __int64 v17; // rax
  unsigned __int64 v18; // rsi
  const void *v19; // rcx
  unsigned __int64 v20; // rdx
  _FX_DRIVER_GLOBALS *v21; // r10
  unsigned __int64 v22; // rdx

  m_Irp = this->m_Irp.m_Irp;
  v3 = (unsigned __int64)this;
  m_RequestContext = this->m_RequestContext;
  if ( m_RequestContext && m_Irp )
  {
    m_RequestContext->ReleaseAndRestore(m_RequestContext, (FxRequestBase *)v3);
    FxRequestBase::VerifierClearFormatted((FxRequestBase *)v3);
  }
  v6 = *(_BYTE *)(Target + 336);
  if ( v6 )
  {
    if ( !m_Irp )
      goto LABEL_4;
    if ( m_Irp->CurrentLocation > v6 )
      return 0LL;
    if ( *(_BYTE *)(v3 + 213) == 1 )
    {
LABEL_4:
      Irp = IoAllocateIrp(v6, 0);
      if ( Irp )
      {
        v8 = *(_IRP **)(v3 + 152);
        *(_QWORD *)(v3 + 152) = Irp;
        v9 = 0LL;
        *(_BYTE *)(v3 + 214) = 0;
        if ( v8 && v8 != Irp && *(_BYTE *)(v3 + 213) == 1 )
          v9 = v8;
        *(_BYTE *)(v3 + 213) = 1;
        if ( v9 )
        {
          v21 = *(_FX_DRIVER_GLOBALS **)(v3 + 16);
          if ( v21->FxVerboseOn )
          {
            v22 = v3 ^ 0xFFFFFFFFFFFFFFF8uLL;
            if ( !*(_WORD *)(v3 + 10) )
              v22 = 0LL;
            if ( v22 )
              v3 = v22;
            WPP_IFR_SF_qq(v21, 5u, 0xDu, 0xEu, WPP_FxRequestBase_cpp_Traceguids, v9, (const void *)v3);
          }
          IoFreeIrp(v9);
        }
        return 0LL;
      }
      else
      {
        v17 = *(unsigned __int16 *)(Target + 10);
        v18 = Target ^ 0xFFFFFFFFFFFFFFF8uLL;
        v19 = (const void *)v3;
        if ( !(_WORD)v17 )
          v18 = 0LL;
        v20 = v3 ^ 0xFFFFFFFFFFFFFFF8uLL;
        if ( !*(_WORD *)(v3 + 10) )
          v20 = 0LL;
        if ( v20 )
          v19 = (const void *)v20;
        WPP_IFR_SF_qid(
          *(_FX_DRIVER_GLOBALS **)(v3 + 16),
          2u,
          0xEu,
          0xCu,
          WPP_FxRequestBase_cpp_Traceguids,
          v19,
          v18,
          -1073741670);
        return 3221225626LL;
      }
    }
    else
    {
      v13 = *(_WORD *)(Target + 10);
      _a2 = Target ^ 0xFFFFFFFFFFFFFFF8uLL;
      v15 = (const void *)v3;
      if ( !v13 )
        _a2 = 0LL;
      v16 = v3 ^ 0xFFFFFFFFFFFFFFF8uLL;
      if ( !*(_WORD *)(v3 + 10) )
        v16 = 0LL;
      if ( v16 )
        v15 = (const void *)v16;
      WPP_IFR_SF_qid(
        *(_FX_DRIVER_GLOBALS **)(v3 + 16),
        2u,
        0xEu,
        0xDu,
        WPP_FxRequestBase_cpp_Traceguids,
        v15,
        _a2,
        -1073741616);
      return 3221225680LL;
    }
  }
  else
  {
    v11 = *(_WORD *)(Target + 10);
    _a1 = (const void *)(Target ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v11 )
      _a1 = 0LL;
    WPP_IFR_SF_qd(*(_FX_DRIVER_GLOBALS **)(v3 + 16), 2u, 0xEu, 0xBu, WPP_FxRequestBase_cpp_Traceguids, _a1, -1073741436);
    return 3221225860LL;
  }
}
