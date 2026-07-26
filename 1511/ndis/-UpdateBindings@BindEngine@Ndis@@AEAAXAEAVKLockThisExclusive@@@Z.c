/*
 * XREFs of ?UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z @ 0x1C00A2B8C
 * Callers:
 *     ?UpdateBindingsWorkItem@BindEngine@Ndis@@AEAAXXZ @ 0x1C00A2AA0 (-UpdateBindingsWorkItem@BindEngine@Ndis@@AEAAXXZ.c)
 *     ?DispatchPendingWork@BindEngine@Ndis@@AEAAXW4CallRunMode@@AEAVKLockThisExclusive@@@Z @ 0x1C00A2B18 (-DispatchPendingWork@BindEngine@Ndis@@AEAAXW4CallRunMode@@AEAVKLockThisExclusive@@@Z.c)
 * Callees:
 *     ndisCancelMediaDisconnectTimer @ 0x1C001EBA8 (ndisCancelMediaDisconnectTimer.c)
 *     ndisSetMediaDisconnectTimer @ 0x1C0024B88 (ndisSetMediaDisconnectTimer.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     ndisSelectiveSuspendClearStop @ 0x1C00677D0 (ndisSelectiveSuspendClearStop.c)
 *     ndisSelectiveSuspendStop @ 0x1C0067AB8 (ndisSelectiveSuspendStop.c)
 *     ?ndisAoAcClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1C0068590 (-ndisAoAcClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z @ 0x1C0068A9C (-ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z.c)
 *     ?Acquire@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1C0097EBC (-Acquire@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C00A2C8C (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 *     ?ReleaseExclusive@KLockHolder@@QEAAXXZ @ 0x1C00A52D4 (-ReleaseExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00A52FC (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?EndBindOperation@BindEngine@Ndis@@SAXXZ @ 0x1C00A5BBC (-EndBindOperation@BindEngine@Ndis@@SAXXZ.c)
 *     ?TryAcquire@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAA_NW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1C00A6B0C (-TryAcquire@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAA_NW4NDIS_MINIPORT_POLICY_OWNE.c)
 */

void __fastcall Ndis::BindEngine::UpdateBindings(Ndis::BindEngine *this, struct KLockThisExclusive *a2)
{
  _NDIS_MINIPORT_BLOCK *m_miniport; // rdi
  char v5; // bp
  _NDIS_MINIPORT_BLOCK *v6; // rdi
  bool v7; // zf

  if ( (unsigned __int8)byte_1C0083723 >= 5u )
    WPP_SF_q(0xBu, &WPP_ffdb515eb985fd4c5ab7dae4fdeb639d_Traceguids, (__int64)this->m_miniport);
  do
  {
    KLockHolder::ReleaseExclusive(a2);
    _InterlockedIncrement((volatile signed __int32 *)&Ndis::BindEngine::s_NumBindOperationsInProgress);
    m_miniport = this->m_miniport;
    v5 = 0;
    ndisCancelMediaDisconnectTimer((__int64)this->m_miniport);
    if ( m_miniport->SelectiveSuspend )
      ndisSelectiveSuspendStop(m_miniport, 8);
    if ( !(unsigned __int8)Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::TryAcquire(
                             &m_miniport->MiniportOwner,
                             2LL) )
    {
      v7 = m_miniport->AoAc == 0LL;
      v5 = 1;
      m_miniport->PmInterruptedByPnp = 1;
      if ( !v7 )
        ndisAoAcStop(m_miniport, NdisSSPnPOp, RunAsynchronous);
      if ( !m_miniport->DoNotBlockOnMiniportLock )
        Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Acquire((__int64)&m_miniport->MiniportOwner, 2u);
    }
    while ( Ndis::BindEngine::Iterate(this) )
      ;
    v6 = this->m_miniport;
    if ( this->m_miniport->MediaConnectState == MediaConnectStateDisconnected )
      ndisSetMediaDisconnectTimer((__int64)this->m_miniport);
    if ( v6->SelectiveSuspend )
      ndisSelectiveSuspendClearStop((__int64)v6, 8);
    if ( v5 )
    {
      v7 = v6->AoAc == 0LL;
      v6->PmInterruptedByPnp = 0;
      if ( !v7 )
        ndisAoAcClearStop(v6, NdisSSPnPOp);
    }
    Ndis::BindEngine::EndBindOperation();
    KLockHolder::AcquireExclusive(a2);
  }
  while ( this->m_isDirty );
  this->m_bindThread = 0LL;
  KeSetEvent(&this->m_bindCompleteEvent.m_event, 0, 0);
  if ( (unsigned __int8)byte_1C0083723 >= 5u )
    WPP_SF_q(0xCu, &WPP_ffdb515eb985fd4c5ab7dae4fdeb639d_Traceguids, (__int64)this->m_miniport);
}
