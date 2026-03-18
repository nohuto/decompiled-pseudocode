/*
 * XREFs of ?_PnpStartDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z @ 0x1C002CD50
 * Callers:
 *     <none>
 * Callees:
 *     ?PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z @ 0x1C00187A0 (-PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     WPP_IFR_SF_cqcqq @ 0x1C009F2B4 (WPP_IFR_SF_cqcqq.c)
 */

__int64 __fastcall FxPkgPnp::_PnpStartDevice(FxPkgPnp *This, FxIrp *Irp, unsigned __int8 a3)
{
  _IRP *flags; // rax
  FxDeviceBase *m_DeviceBase; // r9
  const void *id; // r9
  FxDeviceBase *v9; // r8
  unsigned __int64 v10; // r8
  const _GUID *v11; // [rsp+20h] [rbp-38h]

  flags = This->m_PendingPnPIrp;
  if ( flags )
  {
    m_DeviceBase = This->m_DeviceBase;
    if ( m_DeviceBase->m_ObjectSize )
      id = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      id = 0LL;
    WPP_IFR_SF_cqcqq(
      This->m_Globals,
      (unsigned __int8)Irp->m_Irp->Tail.Overlay.CurrentStackLocation,
      (unsigned int)Irp->m_Irp,
      (unsigned __int16)id,
      v11,
      Irp->m_Irp->Tail.Overlay.CurrentStackLocation->MinorFunction,
      Irp->m_Irp,
      flags->Tail.Overlay.CurrentStackLocation->MinorFunction,
      flags,
      id);
    v9 = This->m_DeviceBase;
    if ( v9->m_ObjectSize )
      v10 = (unsigned __int64)v9 ^ 0xFFFFFFFFFFFFFFF8uLL;
    else
      v10 = 0LL;
    FxVerifierBugCheckWorker(This->m_Globals, WDF_PNP_FATAL_ERROR, v10, (unsigned __int64)Irp->m_Irp);
  }
  Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  This->m_PendingPnPIrp = Irp->m_Irp;
  FxPkgPnp::PnpProcessEvent(This, PnpEventStartDevice, a3);
  return 259LL;
}
