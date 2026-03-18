/*
 * XREFs of ?DeleteObject@FxDevice@@UEAAXXZ @ 0x1C00767F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?DeleteObject@FxObject@@UEAAXXZ @ 0x1C0004690 (-DeleteObject@FxObject@@UEAAXXZ.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 *     ?Deregister@FxWmiIrpHandler@@QEAAXXZ @ 0x1C0069F94 (-Deregister@FxWmiIrpHandler@@QEAAXXZ.c)
 *     ?DeleteDeviceFromFailedCreateNoDelete@FxDevice@@AEAAJJE@Z @ 0x1C0076668 (-DeleteDeviceFromFailedCreateNoDelete@FxDevice@@AEAAJJE@Z.c)
 */

void __fastcall FxDevice::DeleteObject(FxDevice *this, __int64 a2, unsigned __int8 a3)
{
  FxPkgPnp *m_PkgPnp; // rdi
  bool v5; // si
  unsigned __int8 v6; // r8
  FxVerifierLock *m_Method; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  unsigned __int8 CurrentIrql; // al
  _DEVICE_OBJECT *m_DeviceObject; // rcx
  unsigned __int8 v11; // dl
  FxWmiIrpHandler *m_PkgWmi; // rcx
  unsigned __int8 irql; // [rsp+60h] [rbp+8h] BYREF
  int v14; // [rsp+68h] [rbp+10h]

  m_PkgPnp = this->m_PkgPnp;
  if ( m_PkgPnp && m_PkgPnp->m_Type == 4354 )
  {
    v5 = 0;
    FxNonPagedObject::Lock(this->m_PkgPnp, &irql, a3);
    if ( BYTE1(m_PkgPnp[1].m_DisposeSingleEntry.Next) && !BYTE2(m_PkgPnp[1].m_DisposeSingleEntry.Next) )
      v5 = this->m_CurrentPnpState == WdfDevStatePnpInit;
    if ( SLOBYTE(m_PkgPnp->m_ObjectFlags) < 0
      && (m_Method = (FxVerifierLock *)m_PkgPnp[-1].m_DeviceQueryStop.m_Method) != 0LL )
    {
      FxVerifierLock::Unlock(m_Method, irql, v6);
    }
    else
    {
      KeReleaseSpinLock(&m_PkgPnp->m_NPLock.m_Lock, irql);
    }
    if ( v5 )
      FxDevice::DeleteDeviceFromFailedCreateNoDelete(this, 0xC0000001, 1u);
LABEL_22:
    FxObject::DeleteObject(this);
    return;
  }
  if ( !this->m_Legacy || !this->m_PkgGeneral || !this->m_DeviceObject.m_DeviceObject )
    goto LABEL_22;
  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerifierOn )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql )
    {
      WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
      v14 = 7567731;
      Mx::MxDbgPrint(
        "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
      if ( m_Globals->FxVerifierDbgBreakOnError )
        DbgBreakPoint();
    }
  }
  m_DeviceObject = this->m_DeviceObject.m_DeviceObject;
  this->m_DeviceObjectDeleted = 1;
  ObfReferenceObject(m_DeviceObject);
  m_PkgWmi = this->m_PkgWmi;
  if ( m_PkgWmi )
    FxWmiIrpHandler::Deregister(m_PkgWmi, v11);
  IoDeleteDevice(this->m_DeviceObject.m_DeviceObject);
  if ( _InterlockedExchangeAdd(&this->m_PkgGeneral->m_OpenHandleCount, 0xFFFFFFFF) == 1 )
    goto LABEL_22;
}
