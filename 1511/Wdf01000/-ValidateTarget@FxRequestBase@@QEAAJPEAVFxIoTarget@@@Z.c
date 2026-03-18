/*
 * XREFs of ?ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z @ 0x1C0005CC0
 * Callers:
 *     ?FxFormatUrbRequest@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIoTarget@@PEAVFxRequestBase@@PEAUFxRequestBuffer@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z @ 0x1C0003D38 (-FxFormatUrbRequest@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIoTarget@@PEAVFxRequestBase@@PEAUFxRequest.c)
 *     imp_WdfRequestCreate @ 0x1C0004DF0 (imp_WdfRequestCreate.c)
 *     ?FormatInternalIoctlOthersRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KPEAUFxRequestBuffer@@@Z @ 0x1C0019880 (-FormatInternalIoctlOthersRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KPEAUFxRequestBuffer@@@Z.c)
 *     ?FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z @ 0x1C0034358 (-FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z.c)
 *     imp_WdfRequestChangeTarget @ 0x1C0064F70 (imp_WdfRequestChangeTarget.c)
 *     ?_Create@FxRequest@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAVFxIoTarget@@W4FxRequestIrpOwnership@@W4FxRequestConstructorCaller@@PEAPEAV1@@Z @ 0x1C0069FB4 (-_Create@FxRequest@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAVFxIoTar.c)
 *     ?FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject@@@Z @ 0x1C0076F18 (-FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject.c)
 *     ?Deconfig@FxUsbDevice@@QEAAJXZ @ 0x1C007B8C0 (-Deconfig@FxUsbDevice@@QEAAJXZ.c)
 *     ?SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z @ 0x1C007C218 (-SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z.c)
 *     ?FormatControlRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAT_WDF_USB_CONTROL_SETUP_PACKET@@PEAUFxRequestBuffer@@@Z @ 0x1C007CE0C (-FormatControlRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAT_WDF_USB_CONTROL_SETUP_PACKET@@PE.c)
 *     ?FormatStringRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@EG@Z @ 0x1C007D068 (-FormatStringRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@EG@Z.c)
 *     ?GetString@FxUsbDevice@@QEAAJPEAG0EGPEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z @ 0x1C007D2A4 (-GetString@FxUsbDevice@@QEAAJPEAG0EGPEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z.c)
 *     ?InitDevice@FxUsbDevice@@QEAAJK@Z @ 0x1C007D4C8 (-InitDevice@FxUsbDevice@@QEAAJK@Z.c)
 *     ?SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z @ 0x1C007EAC0 (-SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z.c)
 *     ?FormatAbortRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z @ 0x1C007F8D4 (-FormatAbortRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z.c)
 *     ?FormatResetRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z @ 0x1C007FA4C (-FormatResetRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C000BAC0 (WPP_IFR_SF_qd.c)
 *     ?GetTraceObjectHandle@FxRequestBase@@QEAAPEAXXZ @ 0x1C0025054 (-GetTraceObjectHandle@FxRequestBase@@QEAAPEAXXZ.c)
 *     WPP_IFR_SF_qq @ 0x1C00277B0 (WPP_IFR_SF_qq.c)
 *     ?VerifierClearFormatted@FxRequestBase@@QEAAXXZ @ 0x1C0055ACC (-VerifierClearFormatted@FxRequestBase@@QEAAXXZ.c)
 *     WPP_IFR_SF_qid @ 0x1C006E064 (WPP_IFR_SF_qid.c)
 */

__int64 __fastcall FxRequestBase::ValidateTarget(FxRequestBase *this, unsigned __int64 Target)
{
  _IRP *m_Irp; // rsi
  FxRequestContext *m_RequestContext; // rcx
  CCHAR v6; // r8
  _IRP *Irp; // rax
  _IRP *v8; // rcx
  _IRP *v9; // rsi
  const void *_a1; // rdi
  unsigned __int64 _a2; // rdi
  const void *v13; // rax
  unsigned __int64 v14; // rdi
  const void *v15; // rax
  const void *TraceObjectHandle; // rax
  _FX_DRIVER_GLOBALS *v17; // r10

  m_Irp = this->m_Irp.m_Irp;
  m_RequestContext = this->m_RequestContext;
  if ( m_RequestContext && m_Irp )
  {
    m_RequestContext->ReleaseAndRestore(m_RequestContext, this);
    FxRequestBase::VerifierClearFormatted(this);
  }
  v6 = *(_BYTE *)(Target + 336);
  if ( v6 )
  {
    if ( !m_Irp )
      goto LABEL_4;
    if ( m_Irp->CurrentLocation - 1 >= v6 )
      return 0LL;
    if ( this->m_IrpAllocation == 1 )
    {
LABEL_4:
      Irp = IoAllocateIrp(v6, 0);
      if ( Irp )
      {
        v8 = this->m_Irp.m_Irp;
        this->m_Irp.m_Irp = Irp;
        v9 = 0LL;
        this->m_Completed = 0;
        if ( v8 && v8 != Irp && this->m_IrpAllocation == 1 )
          v9 = v8;
        this->m_IrpAllocation = 1;
        if ( v9 )
        {
          if ( this->m_Globals->FxVerboseOn )
          {
            TraceObjectHandle = FxRequestBase::GetTraceObjectHandle(this);
            WPP_IFR_SF_qq(v17, 5u, 0xDu, 0xEu, WPP_FxRequestBase_cpp_Traceguids, v9, TraceObjectHandle);
          }
          IoFreeIrp(v9);
        }
        return 0LL;
      }
      else
      {
        if ( *(_WORD *)(Target + 10) )
          v14 = Target ^ 0xFFFFFFFFFFFFFFF8uLL;
        else
          v14 = 0LL;
        v15 = FxRequestBase::GetTraceObjectHandle(this);
        WPP_IFR_SF_qid(this->m_Globals, 2u, 0xEu, 0xCu, WPP_FxRequestBase_cpp_Traceguids, v15, v14, -1073741670);
        return 3221225626LL;
      }
    }
    else
    {
      if ( *(_WORD *)(Target + 10) )
        _a2 = Target ^ 0xFFFFFFFFFFFFFFF8uLL;
      else
        _a2 = 0LL;
      v13 = FxRequestBase::GetTraceObjectHandle(this);
      WPP_IFR_SF_qid(this->m_Globals, 2u, 0xEu, 0xDu, WPP_FxRequestBase_cpp_Traceguids, v13, _a2, -1073741616);
      return 3221225680LL;
    }
  }
  else
  {
    if ( *(_WORD *)(Target + 10) )
      _a1 = (const void *)(Target ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a1 = 0LL;
    WPP_IFR_SF_qd(this->m_Globals, 2u, 0xEu, 0xBu, WPP_FxRequestBase_cpp_Traceguids, _a1, -1073741436);
    return 3221225860LL;
  }
}
