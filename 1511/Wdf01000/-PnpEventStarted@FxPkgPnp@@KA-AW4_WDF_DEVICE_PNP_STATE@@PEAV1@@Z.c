/*
 * XREFs of ?PnpEventStarted@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C002E840
 * Callers:
 *     <none>
 * Callees:
 *     IsLoggingEnabledAndNeeded @ 0x1C002E8F0 (IsLoggingEnabledAndNeeded.c)
 *     LogDriverInfoStream @ 0x1C0072C70 (LogDriverInfoStream.c)
 */

__int64 __fastcall FxPkgPnp::PnpEventStarted(FxPkgPnp *This)
{
  FxDevice *m_Device; // rdi
  FxPkgPnp *m_PkgPnp; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  _IRP *m_PendingPnPIrp; // rdi

  m_Device = This->m_Device;
  This->m_AchievedStart = 1;
  m_PkgPnp = m_Device->m_PkgPnp;
  if ( !m_PkgPnp || m_PkgPnp->m_Type != 4354 )
  {
    m_Globals = m_Device->m_Globals;
    if ( IsLoggingEnabledAndNeeded(m_Globals) )
      LogDriverInfoStream(m_Globals, m_Device);
  }
  m_PendingPnPIrp = This->m_PendingPnPIrp;
  if ( m_PendingPnPIrp )
  {
    if ( m_PendingPnPIrp->Tail.Overlay.CurrentStackLocation->MinorFunction && m_PendingPnPIrp->IoStatus.Status >= 0 )
    {
      This->m_PnpMachine.m_FireAndForget = 1;
    }
    else
    {
      This->m_PendingPnPIrp = 0LL;
      IofCompleteRequest(m_PendingPnPIrp, 0);
      IoReleaseRemoveLockEx(
        (PIO_REMOVE_LOCK)&This->m_DeviceBase->m_DeviceObject.m_DeviceObject[1],
        m_PendingPnPIrp,
        0x20u);
    }
  }
  return 314LL;
}
