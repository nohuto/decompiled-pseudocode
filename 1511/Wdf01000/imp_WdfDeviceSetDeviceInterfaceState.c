/*
 * XREFs of imp_WdfDeviceSetDeviceInterfaceState @ 0x1C0072630
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001D70 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C0001DFC (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0001E40 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     FxIsEqualGuid @ 0x1C0010DF4 (FxIsEqualGuid.c)
 *     ?ReleaseLock@FxWaitLockInternal@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0011238 (-ReleaseLock@FxWaitLockInternal@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x1C0011258 (-AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z.c)
 *     WPP_IFR_SF_q @ 0x1C001E184 (WPP_IFR_SF_q.c)
 *     ?SetState@FxDeviceInterface@@QEAAXE@Z @ 0x1C0056BB4 (-SetState@FxDeviceInterface@@QEAAXE@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00577F8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C006E01C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

void __fastcall imp_WdfDeviceSetDeviceInterfaceState(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        const _GUID *InterfaceClassGUID,
        const _UNICODE_STRING *RefString,
        unsigned __int8 State)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  _FX_DRIVER_GLOBALS *v9; // rdx
  FxPkgPnp *m_PkgPnp; // rbx
  FxWaitLockInternal *p_m_DeviceInterfaceLock; // rbp
  _FX_DRIVER_GLOBALS *v12; // rdx
  _SINGLE_LIST_ENTRY *i; // rbx
  ULONG_PTR retaddr; // [rsp+48h] [rbp+0h]
  FxDevice *pDevice; // [rsp+50h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
    (unsigned __int64)Device,
    0x1002u,
    (void **)&pDevice);
  m_Globals = pDevice->m_Globals;
  if ( !InterfaceClassGUID )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  if ( (int)FxVerifierCheckIrqlLevel(m_Globals, 0) < 0
    || RefString && (int)FxValidateUnicodeString(m_Globals, RefString) < 0 )
  {
    goto LABEL_4;
  }
  if ( pDevice->m_Legacy )
  {
    WPP_IFR_SF_q(m_Globals, 2u, 2u, 0xDu, WPP_FxDeviceInterfaceAPI_cpp_Traceguids, Device);
LABEL_4:
    FxVerifierDbgBreakPoint(m_Globals);
    return;
  }
  m_PkgPnp = pDevice->m_PkgPnp;
  p_m_DeviceInterfaceLock = &m_PkgPnp->m_DeviceInterfaceLock;
  FxWaitLockInternal::AcquireLock(&m_PkgPnp->m_DeviceInterfaceLock, v9, 0LL);
  for ( i = m_PkgPnp->m_DeviceInterfaceHead.Next; i; i = i->Next )
  {
    if ( FxIsEqualGuid((const _GUID *)&i[-6], InterfaceClassGUID) )
    {
      if ( RefString )
      {
        if ( RefString->Length == LOWORD(i[-4].Next)
          && RtlCompareMemory(RefString->Buffer, i[-3].Next, RefString->Length) == RefString->Length )
        {
LABEL_14:
          FxDeviceInterface::SetState((FxDeviceInterface *)&i[-6], State);
          break;
        }
      }
      else if ( !LOWORD(i[-4].Next) )
      {
        goto LABEL_14;
      }
    }
  }
  FxWaitLockInternal::ReleaseLock(p_m_DeviceInterfaceLock, v12);
}
