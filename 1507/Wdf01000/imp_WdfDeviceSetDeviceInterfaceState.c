/*
 * XREFs of imp_WdfDeviceSetDeviceInterfaceState @ 0x1C007F950
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?ReleaseLock@FxWaitLockInternal@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00291CC (-ReleaseLock@FxWaitLockInternal@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x1C00291EC (-AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     ?SetState@FxDeviceInterface@@QEAAXE@Z @ 0x1C005CF50 (-SetState@FxDeviceInterface@@QEAAXE@Z.c)
 *     WPP_IFR_SF_qddd @ 0x1C005DBF0 (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_qdd @ 0x1C0067ED4 (WPP_IFR_SF_qdd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

void __fastcall imp_WdfDeviceSetDeviceInterfaceState(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _FX_DRIVER_GLOBALS *Device,
        const _GUID *InterfaceClassGUID,
        const _UNICODE_STRING *RefString,
        unsigned __int8 State)
{
  FxDevice *v8; // rbx
  __int64 Offset; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  unsigned __int8 CurrentIrql; // al
  unsigned __int16 Length; // cx
  int _a2; // eax
  unsigned __int16 v14; // r9
  FxPkgPnp *m_PkgPnp; // rbx
  FxWaitLockInternal *p_m_DeviceInterfaceLock; // r14
  _FX_DRIVER_GLOBALS *v17; // rdx
  _SINGLE_LIST_ENTRY *i; // rbx
  FxDevice *pDevice; // [rsp+50h] [rbp-10h] BYREF
  ULONG_PTR retaddr; // [rsp+88h] [rbp+28h]

  if ( !Device )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1002uLL);
  v8 = (FxDevice *)(~(unsigned __int64)Device & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( ((unsigned __int8)Device & 1) != 0 )
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
    FxObjectHandleGetPtrQI(v8, (void **)&pDevice, Device, 0x1002u, Offset);
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
      Mx::MxDbgPrint(
        "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
      if ( m_Globals->FxVerifierDbgBreakOnError )
        DbgBreakPoint();
      goto LABEL_14;
    }
  }
  if ( RefString )
  {
    Length = RefString->Length;
    if ( (RefString->Length & 1) != 0 )
    {
      _a2 = Length;
      v14 = 13;
LABEL_19:
      WPP_IFR_SF_qdd(m_Globals, 2u, 6u, v14, WPP_FxValidateFunctions_hpp_Traceguids_0, RefString, _a2, -1073741811);
      goto LABEL_14;
    }
    LOWORD(_a2) = RefString->MaximumLength;
    if ( (_a2 & 1) != 0 )
    {
      _a2 = (unsigned __int16)_a2;
      v14 = 14;
      goto LABEL_19;
    }
    if ( (_WORD)_a2 && !RefString->Buffer )
    {
      _a2 = (unsigned __int16)_a2;
      v14 = 15;
      goto LABEL_19;
    }
    if ( Length > (unsigned __int16)_a2 )
    {
      WPP_IFR_SF_qddd(
        m_Globals,
        (unsigned __int8)Device,
        6u,
        0x10u,
        WPP_FxValidateFunctions_hpp_Traceguids_0,
        RefString,
        Length,
        (unsigned __int16)_a2,
        -1073741811);
      goto LABEL_14;
    }
  }
  if ( v8->m_Legacy )
  {
    WPP_IFR_SF_q(m_Globals, 2u, 2u, 0xDu, WPP_FxDeviceInterfaceAPI_cpp_Traceguids, Device);
LABEL_14:
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
    if ( m_Globals->FxVerifierDbgBreakOnError )
      DbgBreakPoint();
    return;
  }
  m_PkgPnp = v8->m_PkgPnp;
  p_m_DeviceInterfaceLock = &m_PkgPnp->m_DeviceInterfaceLock;
  FxWaitLockInternal::AcquireLock(&m_PkgPnp->m_DeviceInterfaceLock, Device, 0LL);
  for ( i = m_PkgPnp->m_DeviceInterfaceHead.Next; i; i = i->Next )
  {
    if ( RtlCompareMemory(&i[-6], InterfaceClassGUID, 0x10uLL) == 16 )
    {
      if ( RefString )
      {
        if ( RefString->Length == LOWORD(i[-4].Next)
          && RtlCompareMemory(RefString->Buffer, i[-3].Next, RefString->Length) == RefString->Length )
        {
LABEL_34:
          FxDeviceInterface::SetState((FxDeviceInterface *)&i[-6], State);
          break;
        }
      }
      else if ( !LOWORD(i[-4].Next) )
      {
        goto LABEL_34;
      }
    }
  }
  FxWaitLockInternal::ReleaseLock(p_m_DeviceInterfaceLock, v17);
}
