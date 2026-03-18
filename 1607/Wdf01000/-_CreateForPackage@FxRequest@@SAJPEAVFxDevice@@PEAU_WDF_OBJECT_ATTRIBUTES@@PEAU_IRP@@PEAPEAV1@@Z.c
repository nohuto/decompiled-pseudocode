/*
 * XREFs of ?_CreateForPackage@FxRequest@@SAJPEAVFxDevice@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAPEAV1@@Z @ 0x1C00362C0
 * Callers:
 *     ?AllocateReservedRequest@FxIoQueue@@QEAAJPEAPEAVFxRequest@@@Z @ 0x1C001D31C (-AllocateReservedRequest@FxIoQueue@@QEAAJPEAPEAVFxRequest@@@Z.c)
 *     ?DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z @ 0x1C00629A4 (-DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z.c)
 * Callees:
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0008B90 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     WPP_IFR_SF_d @ 0x1C000A170 (WPP_IFR_SF_d.c)
 *     ??0FxRequest@@IEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_IRP@@W4FxRequestIrpOwnership@@W4FxRequestConstructorCaller@@G@Z @ 0x1C001B93C (--0FxRequest@@IEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_IRP@@W4FxRequestIrpOwnership@@W4FxRequestConstru.c)
 *     ?AssignMemoryBuffers@FxRequest@@AEAAXW4_WDF_DEVICE_IO_TYPE@@@Z @ 0x1C001BA30 (-AssignMemoryBuffers@FxRequest@@AEAAXW4_WDF_DEVICE_IO_TYPE@@@Z.c)
 *     ?AllocateRequestMemory@FxDevice@@QEAAPEAXPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C001FFCC (-AllocateRequestMemory@FxDevice@@QEAAPEAXPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0063E54 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 */

__int64 __fastcall FxRequest::_CreateForPackage(
        FxDevice *Device,
        _WDF_OBJECT_ATTRIBUTES *RequestAttributes,
        _IRP *Irp,
        FxRequest **Request)
{
  FxRequest *RequestMemory; // rax
  FxRequest *v9; // rbx
  FxDevice *v10; // r9
  int _a1; // eax
  unsigned int v12; // esi

  *Request = 0LL;
  RequestMemory = (FxRequest *)FxDevice::AllocateRequestMemory(Device, RequestAttributes);
  v9 = RequestMemory;
  if ( RequestMemory )
  {
    FxRequest::FxRequest(RequestMemory, Device->m_Globals, Irp, FxRequestDoesNotOwnIrp, FxRequestConstructorCallerIsFx);
    v9->__vftable = (FxRequest_vtbl *)&FxRequestFromLookaside::`vftable';
    v9->m_DeviceBase = Device->m_DeviceBase;
  }
  else
  {
    v9 = 0LL;
  }
  if ( v9 )
  {
    if ( Irp )
      FxRequest::AssignMemoryBuffers(v9, Device->m_ReadWriteIoType);
    if ( Device->m_Globals->FxRequestParentOptimizationOn )
      v10 = 0LL;
    else
      v10 = Device;
    _a1 = FxObject::Commit(v9, RequestAttributes, 0LL, v10, 0);
    v12 = _a1;
    if ( _a1 < 0 )
    {
      WPP_IFR_SF_d(Device->m_Globals, 2u, 0x10u, 0xBu, WPP_FxRequest_cpp_Traceguids, _a1);
      FxObject::DeleteFromFailedCreate(v9);
    }
    else
    {
      *Request = v9;
    }
    return v12;
  }
  else
  {
    WPP_IFR_SF_d(Device->m_Globals, 2u, 0x10u, 0xAu, WPP_FxRequest_cpp_Traceguids, -1073741670);
    return 3221225626LL;
  }
}
