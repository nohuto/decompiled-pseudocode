/*
 * XREFs of ?_PnpQueryPnpDeviceState@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0030A80
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C00098A0 (WPP_IFR_SF_d.c)
 *     ?HandleQueryPnpDeviceStateCompletion@FxPkgFdo@@AEAAXPEAVFxIrp@@@Z @ 0x1C0018E3C (-HandleQueryPnpDeviceStateCompletion@FxPkgFdo@@AEAAXPEAVFxIrp@@@Z.c)
 */

__int64 __fastcall FxPkgFdo::_PnpQueryPnpDeviceState(FxPkgFdo *This, FxIrp *Irp)
{
  int _a1; // edi
  unsigned __int8 v5; // r8
  _IRP *m_Irp; // rbx

  _a1 = ((__int64 (__fastcall *)(FxPkgFdo *))This->SendIrpSynchronously)(This);
  if ( _a1 == -1073741637 )
  {
    _a1 = 0;
    Irp->m_Irp->IoStatus.Status = 0;
  }
  if ( _a1 < 0 )
    WPP_IFR_SF_d(This->m_Globals, 2u, 0xCu, 0xCu, WPP_FxPkgFdoKm_cpp_Traceguids, _a1);
  else
    FxPkgFdo::HandleQueryPnpDeviceStateCompletion(This, Irp, v5);
  m_Irp = Irp->m_Irp;
  Irp->m_Irp->IoStatus.Status = _a1;
  IofCompleteRequest(Irp->m_Irp, 0);
  Irp->m_Irp = 0LL;
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)&This->m_DeviceBase->m_DeviceObject.m_DeviceObject[1], m_Irp, 0x20u);
  return (unsigned int)_a1;
}
