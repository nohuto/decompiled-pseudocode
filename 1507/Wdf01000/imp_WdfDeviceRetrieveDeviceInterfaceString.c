/*
 * XREFs of imp_WdfDeviceRetrieveDeviceInterfaceString @ 0x1C0028DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Assign@FxString@@QEAAJPEBU_UNICODE_STRING@@@Z @ 0x1C000FED4 (-Assign@FxString@@QEAAJPEBU_UNICODE_STRING@@@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?ReleaseLock@FxWaitLockInternal@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00291CC (-ReleaseLock@FxWaitLockInternal@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x1C00291EC (-AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_qddd @ 0x1C005DBF0 (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_qdd @ 0x1C0067ED4 (WPP_IFR_SF_qdd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfDeviceRetrieveDeviceInterfaceString(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Device,
        const _GUID *InterfaceClassGUID,
        const _UNICODE_STRING *RefString,
        unsigned __int64 String)
{
  FxDevice *v8; // rbx
  __int64 Offset; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  FxString *v11; // rcx
  _FX_DRIVER_GLOBALS *v12; // rdx
  FxPkgPnp *m_PkgPnp; // rbx
  unsigned int v14; // ebp
  _FX_DRIVER_GLOBALS *v15; // rdx
  const _UNICODE_STRING *i; // rdi
  unsigned __int8 CurrentIrql; // al
  unsigned __int16 Length; // dx
  int _a2; // eax
  unsigned __int16 v21; // r9
  FxDevice *pDevice; // [rsp+50h] [rbp-38h] BYREF
  FxString *pString; // [rsp+58h] [rbp-30h] BYREF
  void *retaddr; // [rsp+88h] [rbp+0h]
  int v25; // [rsp+98h] [rbp+10h] BYREF

  if ( !Device )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1002uLL);
  v8 = (FxDevice *)(~Device & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (Device & 1) != 0 )
  {
    Offset = LOWORD(v8->FxDeviceBase::FxNonPagedObject::FxObject::__vftable);
    v8 = (FxDevice *)((char *)v8 - Offset);
  }
  if ( v8->m_Type == 4098 )
  {
    pDevice = v8;
  }
  else
  {
    FxObjectHandleGetPtrQI(v8, (void **)&pDevice, (void *)Device, 0x1002u, Offset);
    v8 = pDevice;
  }
  m_Globals = v8->m_Globals;
  if ( !InterfaceClassGUID )
    FxVerifierNullBugCheck(v8->m_Globals, retaddr);
  if ( m_Globals->FxVerifierOn )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql )
    {
      WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
      v25 = 7567731;
      Mx::MxDbgPrint(
        "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
        m_Globals->Public.DriverName,
        (const char *)&v25,
        m_Globals->Public.DriverName,
        (const char *)&v25);
      if ( m_Globals->FxVerifierDbgBreakOnError )
        DbgBreakPoint();
      return 3221225488LL;
    }
  }
  if ( !RefString )
    goto LABEL_9;
  Length = RefString->Length;
  if ( (RefString->Length & 1) != 0 )
  {
    _a2 = Length;
    v21 = 13;
LABEL_36:
    WPP_IFR_SF_qdd(m_Globals, 2u, 6u, v21, WPP_FxValidateFunctions_hpp_Traceguids_0, RefString, _a2, -1073741811);
    return 3221225485LL;
  }
  LOWORD(_a2) = RefString->MaximumLength;
  if ( (_a2 & 1) != 0 )
  {
    _a2 = (unsigned __int16)_a2;
    v21 = 14;
    goto LABEL_36;
  }
  if ( (_WORD)_a2 && !RefString->Buffer )
  {
    _a2 = (unsigned __int16)_a2;
    v21 = 15;
    goto LABEL_36;
  }
  if ( Length > (unsigned __int16)_a2 )
  {
    WPP_IFR_SF_qddd(
      m_Globals,
      Length,
      6u,
      0x10u,
      WPP_FxValidateFunctions_hpp_Traceguids_0,
      RefString,
      Length,
      (unsigned __int16)_a2,
      -1073741811);
    return 3221225485LL;
  }
LABEL_9:
  if ( v8->m_Legacy )
  {
    WPP_IFR_SF_qd(m_Globals, 2u, 2u, 0xEu, WPP_FxDeviceInterfaceAPI_cpp_Traceguids, (const void *)Device, -1073741808);
    return 3221225488LL;
  }
  if ( !String )
    FxVerifierBugCheckWorker(m_Globals, WDF_INVALID_HANDLE, 0LL, 0x1007uLL);
  v11 = (FxString *)(~String & 0xFFFFFFFFFFFFFFF8uLL);
  v12 = 0LL;
  if ( (String & 1) != 0 )
  {
    v12 = (_FX_DRIVER_GLOBALS *)LOWORD(v11->__vftable);
    v11 = (FxString *)((char *)v11 - (__int64)v12);
  }
  if ( v11->m_Type == 4103 )
  {
    pString = v11;
  }
  else
  {
    FxObjectHandleGetPtrQI(v11, (void **)&pString, (void *)String, 0x1007u, (unsigned __int16)v12);
    v8 = pDevice;
  }
  m_PkgPnp = v8->m_PkgPnp;
  v14 = -1073741772;
  FxWaitLockInternal::AcquireLock(&m_PkgPnp->m_DeviceInterfaceLock, v12, 0LL);
  for ( i = (const _UNICODE_STRING *)m_PkgPnp->m_DeviceInterfaceHead.Next; i; i = *(const _UNICODE_STRING **)&i->Length )
  {
    if ( RtlCompareMemory(&i[-3], InterfaceClassGUID, 0x10uLL) == 16 )
    {
      if ( RefString )
      {
        if ( RefString->Length == i[-2].Length
          && RtlCompareMemory(RefString->Buffer, i[-2].Buffer, RefString->Length) == RefString->Length )
        {
LABEL_20:
          if ( i[-1].Buffer )
            v14 = FxString::Assign(pString, i - 1);
          else
            v14 = -1073741436;
          break;
        }
      }
      else if ( !i[-2].Length )
      {
        goto LABEL_20;
      }
    }
  }
  FxWaitLockInternal::ReleaseLock(&m_PkgPnp->m_DeviceInterfaceLock, v15);
  return v14;
}
