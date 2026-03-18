/*
 * XREFs of ?ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z @ 0x1C0014020
 * Callers:
 *     ?FormatInternalIoctlOthersRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KPEAUFxRequestBuffer@@@Z @ 0x1C0014968 (-FormatInternalIoctlOthersRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KPEAUFxRequestBuffer@@@Z.c)
 *     imp_WdfRequestCreate @ 0x1C0016110 (imp_WdfRequestCreate.c)
 *     imp_WdfRequestChangeTarget @ 0x1C006E1D0 (imp_WdfRequestChangeTarget.c)
 *     ?_Create@FxRequest@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAVFxIoTarget@@W4FxRequestIrpOwnership@@W4FxRequestConstructorCaller@@PEAPEAV1@@Z @ 0x1C00754EC (-_Create@FxRequest@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAVFxIoTar.c)
 *     ?FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject@@@Z @ 0x1C0085484 (-FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject.c)
 *     ?Deconfig@FxUsbDevice@@QEAAJXZ @ 0x1C008C4D0 (-Deconfig@FxUsbDevice@@QEAAJXZ.c)
 *     ?SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z @ 0x1C008CEA8 (-SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z.c)
 *     ?FormatControlRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAT_WDF_USB_CONTROL_SETUP_PACKET@@PEAUFxRequestBuffer@@@Z @ 0x1C008DAB8 (-FormatControlRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAT_WDF_USB_CONTROL_SETUP_PACKET@@PE.c)
 *     ?FormatStringRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@EG@Z @ 0x1C008DD30 (-FormatStringRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@EG@Z.c)
 *     ?GetString@FxUsbDevice@@QEAAJPEAG0EGPEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z @ 0x1C008DF8C (-GetString@FxUsbDevice@@QEAAJPEAG0EGPEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z.c)
 *     ?InitDevice@FxUsbDevice@@QEAAJK@Z @ 0x1C008E1B0 (-InitDevice@FxUsbDevice@@QEAAJK@Z.c)
 *     ?SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z @ 0x1C008F984 (-SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z.c)
 *     ?FormatAbortRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z @ 0x1C00907B4 (-FormatAbortRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z.c)
 *     ?FormatResetRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z @ 0x1C0090ACC (-FormatResetRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z.c)
 *     ?FxFormatUrbRequest@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIoTarget@@PEAVFxRequestBase@@PEAUFxRequestBuffer@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z @ 0x1C0092724 (-FxFormatUrbRequest@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIoTarget@@PEAVFxRequestBase@@PEAUFxRequest.c)
 *     ?FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z @ 0x1C0093270 (-FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C000A3FC (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_qid @ 0x1C0031A90 (WPP_IFR_SF_qid.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 */

__int64 __fastcall FxRequestBase::ValidateTarget(FxRequestBase *this, unsigned __int64 Target)
{
  _IRP *m_Irp; // rsi
  FxRequestContext *m_RequestContext; // rcx
  CCHAR v6; // r8
  _IRP *Irp; // rax
  _IRP *v8; // rcx
  _IRP *v9; // rsi
  unsigned __int8 v11; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  unsigned __int8 v13; // r8
  FxVerifierLock *m_IrpQueue; // rcx
  const void *_a1; // rdi
  unsigned __int64 _a2; // rdi
  const void *v17; // rax
  unsigned __int64 v18; // rdi
  const void *v19; // rax
  _FX_DRIVER_GLOBALS *v20; // r10
  const void *v21; // rax
  unsigned __int8 PreviousIrql; // [rsp+50h] [rbp+8h] BYREF

  m_Irp = this->m_Irp.m_Irp;
  m_RequestContext = this->m_RequestContext;
  if ( m_RequestContext )
  {
    if ( m_Irp )
    {
      m_RequestContext->ReleaseAndRestore(m_RequestContext, this);
      m_Globals = this->m_Globals;
      if ( m_Globals->FxVerifierOn )
      {
        if ( m_Globals->FxVerifierIO )
        {
          FxNonPagedObject::Lock(this, &PreviousIrql, v11);
          this->m_VerifierFlags &= ~0x80u;
          if ( SLOBYTE(this->m_ObjectFlags) < 0 && (m_IrpQueue = (FxVerifierLock *)this[-1].m_IrpQueue) != 0LL )
            FxVerifierLock::Unlock(m_IrpQueue, PreviousIrql, v13);
          else
            KeReleaseSpinLock(&this->m_NPLock.m_Lock, PreviousIrql);
        }
      }
    }
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
          v20 = this->m_Globals;
          if ( v20->FxVerboseOn )
          {
            if ( !this->m_ObjectSize || (v21 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL)) == 0LL )
              v21 = this;
            WPP_IFR_SF_qq(v20, 5u, 0xDu, 0xEu, WPP_FxRequestBase_cpp_Traceguids, v9, v21);
          }
          IoFreeIrp(v9);
        }
        return 0LL;
      }
      else
      {
        if ( *(_WORD *)(Target + 10) )
          v18 = Target ^ 0xFFFFFFFFFFFFFFF8uLL;
        else
          v18 = 0LL;
        if ( !this->m_ObjectSize || (v19 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL)) == 0LL )
          v19 = this;
        WPP_IFR_SF_qid(this->m_Globals, 2u, 0xEu, 0xCu, WPP_FxRequestBase_cpp_Traceguids, v19, v18, -1073741670);
        return 3221225626LL;
      }
    }
    else
    {
      if ( *(_WORD *)(Target + 10) )
        _a2 = Target ^ 0xFFFFFFFFFFFFFFF8uLL;
      else
        _a2 = 0LL;
      if ( !this->m_ObjectSize || (v17 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL)) == 0LL )
        v17 = this;
      WPP_IFR_SF_qid(this->m_Globals, 2u, 0xEu, 0xDu, WPP_FxRequestBase_cpp_Traceguids, v17, _a2, -1073741616);
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
