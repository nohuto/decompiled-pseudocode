/*
 * XREFs of ?_Create@FxRequest@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAVFxIoTarget@@W4FxRequestIrpOwnership@@W4FxRequestConstructorCaller@@PEAPEAV1@@Z @ 0x1C00754EC
 * Callers:
 *     imp_WdfRequestCreateFromIrp @ 0x1C006E3F0 (imp_WdfRequestCreateFromIrp.c)
 *     ?Config@FxUsbPipeContinuousReader@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z @ 0x1C009301C (-Config@FxUsbPipeContinuousReader@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z.c)
 * Callees:
 *     ?ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z @ 0x1C0014020 (-ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0015AA0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C0017C70 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     ??0FxRequest@@IEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_IRP@@W4FxRequestIrpOwnership@@W4FxRequestConstructorCaller@@G@Z @ 0x1C00208DC (--0FxRequest@@IEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_IRP@@W4FxRequestIrpOwnership@@W4FxRequestConstru.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00265B0 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0030D4C (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?SetSubmitIrp@FxRequestBase@@QEAAPEAU_IRP@@PEAU2@E@Z @ 0x1C005C6EC (-SetSubmitIrp@FxRequestBase@@QEAAPEAU_IRP@@PEAU2@E@Z.c)
 *     WPP_IFR_SF_qLqd @ 0x1C0075864 (WPP_IFR_SF_qLqd.c)
 */

__int64 __fastcall FxRequest::_Create(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *RequestAttributes,
        _IRP *Irp,
        FxIoTarget *Target,
        FxRequestIrpOwnership Ownership,
        FxRequestConstructorCaller Caller,
        FxRequest **Request)
{
  const void **v7; // r15
  FxRequestBase *v9; // rdi
  __int64 result; // rax
  int _a4; // ebx
  FxRequest *v15; // rax
  FxRequestBase *v16; // rax
  unsigned __int8 v17; // r8

  v7 = (const void **)Request;
  v9 = 0LL;
  *Request = 0LL;
  result = FxValidateObjectAttributes(FxDriverGlobals, RequestAttributes, 0, (unsigned __int16)Target);
  _a4 = result;
  if ( (int)result >= 0 )
  {
    v15 = (FxRequest *)FxObjectHandleAlloc(
                         FxDriverGlobals,
                         ExDefaultNonPagedPoolType,
                         0x168uLL,
                         0,
                         RequestAttributes,
                         0,
                         FxObjectTypeExternal);
    if ( v15 )
    {
      FxRequest::FxRequest(v15, FxDriverGlobals, Irp, Ownership, Caller);
      v9 = v16;
    }
    if ( v9 )
    {
      if ( Target )
        _a4 = FxRequestBase::ValidateTarget(v9, (unsigned __int64)Target);
      if ( _a4 < 0 || (_a4 = FxObject::Commit(v9, RequestAttributes, (void **)&Request, 0LL, 1u), _a4 < 0) )
      {
        WPP_IFR_SF_d(FxDriverGlobals, 2u, 0x10u, 0xCu, WPP_FxRequest_cpp_Traceguids, _a4);
        if ( Irp )
          FxRequestBase::SetSubmitIrp(v9, 0LL, v17);
        FxObject::DeleteFromFailedCreate(v9);
      }
      else
      {
        *v7 = v9;
      }
    }
    else
    {
      _a4 = -1073741670;
    }
    if ( FxDriverGlobals->FxVerboseOn )
      WPP_IFR_SF_qLqd(FxDriverGlobals, 5u, 0x10u, 0xDu, WPP_FxRequest_cpp_Traceguids, Irp, Ownership, *v7, _a4);
    return (unsigned int)_a4;
  }
  return result;
}
