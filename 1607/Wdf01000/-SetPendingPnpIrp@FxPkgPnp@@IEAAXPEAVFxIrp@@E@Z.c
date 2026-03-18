/*
 * XREFs of ?SetPendingPnpIrp@FxPkgPnp@@IEAAXPEAVFxIrp@@E@Z @ 0x1C0027264
 * Callers:
 *     ?_PnpStartDeviceCompletionRoutine@FxPkgFdo@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C0035970 (-_PnpStartDeviceCompletionRoutine@FxPkgFdo@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?_PnpStartDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z @ 0x1C0036E80 (-_PnpStartDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z.c)
 *     ?_PnpEject@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0092610 (-_PnpEject@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 *     ?PnpSurpriseRemoval@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C0097AA0 (-PnpSurpriseRemoval@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ?_PnpCancelRemoveDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z @ 0x1C0097FB0 (-_PnpCancelRemoveDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z.c)
 *     ?_PnpCancelStopDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z @ 0x1C0097FE0 (-_PnpCancelStopDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z.c)
 *     ?_PnpQueryRemoveDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z @ 0x1C0098020 (-_PnpQueryRemoveDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z.c)
 *     ?_PnpQueryStopDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z @ 0x1C0098050 (-_PnpQueryStopDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z.c)
 *     ?_PnpStopDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z @ 0x1C00981D0 (-_PnpStopDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z.c)
 * Callees:
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C007C6D8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     WPP_IFR_SF_cqcqq @ 0x1C00986A4 (WPP_IFR_SF_cqcqq.c)
 */

void __fastcall FxPkgPnp::SetPendingPnpIrp(FxPkgPnp *this, FxIrp *Irp, unsigned __int8 MarkIrpPending)
{
  _IRP *flags; // rax
  FxDeviceBase *m_DeviceBase; // r9
  const void *id; // r9
  FxDeviceBase *v8; // r8
  unsigned __int64 v9; // r8
  const _GUID *v10; // [rsp+20h] [rbp-38h]

  flags = this->m_PendingPnPIrp;
  if ( flags )
  {
    m_DeviceBase = this->m_DeviceBase;
    if ( m_DeviceBase->m_ObjectSize )
      id = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      id = 0LL;
    WPP_IFR_SF_cqcqq(
      this->m_Globals,
      (unsigned __int8)Irp->m_Irp->Tail.Overlay.CurrentStackLocation,
      (unsigned int)Irp->m_Irp,
      (unsigned __int16)id,
      v10,
      Irp->m_Irp->Tail.Overlay.CurrentStackLocation->MinorFunction,
      Irp->m_Irp,
      flags->Tail.Overlay.CurrentStackLocation->MinorFunction,
      flags,
      id);
    v8 = this->m_DeviceBase;
    if ( v8->m_ObjectSize )
      v9 = (unsigned __int64)v8 ^ 0xFFFFFFFFFFFFFFF8uLL;
    else
      v9 = 0LL;
    FxVerifierBugCheckWorker(this->m_Globals, WDF_PNP_FATAL_ERROR, v9, (unsigned __int64)Irp->m_Irp);
  }
  if ( MarkIrpPending )
    Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  this->m_PendingPnPIrp = Irp->m_Irp;
}
