/*
 * XREFs of ?_PnpQueryCapabilities@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C001CE60
 * Callers:
 *     <none>
 * Callees:
 *     ?HandleQueryCapabilitiesCompletion@FxPkgFdo@@AEAAXPEAVFxIrp@@@Z @ 0x1C0013620 (-HandleQueryCapabilitiesCompletion@FxPkgFdo@@AEAAXPEAVFxIrp@@@Z.c)
 *     ?GetPnpCapsInternal@FxPkgPnp@@IEAAJXZ @ 0x1C001BCB0 (-GetPnpCapsInternal@FxPkgPnp@@IEAAJXZ.c)
 *     WPP_IFR_SF_ @ 0x1C0022488 (WPP_IFR_SF_.c)
 */

__int64 __fastcall FxPkgFdo::_PnpQueryCapabilities(FxPkgFdo *This, FxIrp *Irp, unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  _IO_SECURITY_CONTEXT *SecurityContext; // rbx
  int PnpCapsInternal; // eax
  _FX_DRIVER_GLOBALS *v8; // rcx
  int v9; // ebp
  unsigned __int8 v10; // r8
  _IRP *m_Irp; // rbx

  m_Globals = This->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_(m_Globals, 5u, 0xCu, 0xFu, WPP_fxpkgfdo_cpp_Traceguids);
  SecurityContext = Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  PnpCapsInternal = FxPkgPnp::GetPnpCapsInternal(This, (__int64)Irp, a3);
  if ( LOWORD(SecurityContext->SecurityQos) >= 0x40u && WORD1(SecurityContext->SecurityQos) == 1 )
  {
    if ( (PnpCapsInternal & 0x3000) == 0x1000 )
      HIDWORD(SecurityContext->SecurityQos) |= 4u;
    if ( (PnpCapsInternal & 0xC000) == 0x4000 )
      HIDWORD(SecurityContext->SecurityQos) |= 8u;
    if ( (PnpCapsInternal & 0x30000) == 0x10000 )
      HIDWORD(SecurityContext->SecurityQos) |= 0x10u;
    if ( (PnpCapsInternal & 0xC0000) == 0x40000 )
      HIDWORD(SecurityContext->SecurityQos) |= 0x20u;
    if ( (PnpCapsInternal & 0x3000000) == 0x1000000 )
      HIDWORD(SecurityContext->SecurityQos) |= 0x200u;
    if ( (PnpCapsInternal & 0x30000000) == 0x10000000 )
      HIDWORD(SecurityContext->SecurityQos) |= 0x20000u;
    if ( This->m_WakeInterruptCount )
      HIDWORD(SecurityContext->SecurityQos) |= 0x80000u;
  }
  v8 = This->m_Globals;
  if ( v8->FxVerboseOn )
    WPP_IFR_SF_(v8, 5u, 0xCu, 0x10u, WPP_fxpkgfdo_cpp_Traceguids);
  v9 = This->SendIrpSynchronously(This, Irp);
  if ( v9 >= 0 )
    FxPkgFdo::HandleQueryCapabilitiesCompletion(This, Irp, v10);
  m_Irp = Irp->m_Irp;
  Irp->m_Irp->IoStatus.Status = v9;
  IofCompleteRequest(Irp->m_Irp, 0);
  Irp->m_Irp = 0LL;
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)&This->m_DeviceBase->m_DeviceObject.m_DeviceObject[1], m_Irp, 0x20u);
  return (unsigned int)v9;
}
