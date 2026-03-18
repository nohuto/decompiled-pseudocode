/*
 * XREFs of ?_PnpStartDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z @ 0x1C0039410
 * Callers:
 *     <none>
 * Callees:
 *     ?PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z @ 0x1C0023450 (-PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0080C04 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     WPP_IFR_SF_cqcqq @ 0x1C009CB50 (WPP_IFR_SF_cqcqq.c)
 */

__int64 __fastcall FxPkgPnp::_PnpStartDevice(FxPkgPnp *This, FxIrp *Irp, unsigned __int8 a3)
{
  _IRP *flags; // rax
  FxDeviceBase *m_DeviceBase; // r8
  _IRP *globals; // r9
  unsigned __int16 m_ObjectSize; // dx
  const void *id; // r8
  FxDeviceBase *v11; // r8
  unsigned __int16 v12; // ax
  unsigned __int64 v13; // r8
  const _GUID *v14; // [rsp+20h] [rbp-38h]

  flags = This->m_PendingPnPIrp;
  if ( flags )
  {
    m_DeviceBase = This->m_DeviceBase;
    globals = Irp->m_Irp;
    m_ObjectSize = m_DeviceBase->m_ObjectSize;
    id = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      id = 0LL;
    WPP_IFR_SF_cqcqq(
      This->m_Globals,
      (unsigned __int8)globals->Tail.Overlay.CurrentStackLocation,
      (unsigned int)id,
      (unsigned __int16)globals,
      v14,
      globals->Tail.Overlay.CurrentStackLocation->MinorFunction,
      globals,
      flags->Tail.Overlay.CurrentStackLocation->MinorFunction,
      flags,
      id);
    v11 = This->m_DeviceBase;
    v12 = v11->m_ObjectSize;
    v13 = (unsigned __int64)v11 ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !v12 )
      v13 = 0LL;
    FxVerifierBugCheckWorker(This->m_Globals, WDF_PNP_FATAL_ERROR, v13, (unsigned __int64)Irp->m_Irp);
  }
  Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  This->m_PendingPnPIrp = Irp->m_Irp;
  FxPkgPnp::PnpProcessEvent(This, PnpEventStartDevice, a3);
  return 259LL;
}
