/*
 * XREFs of ?ndisMDisableOpportunisticPowerSavings@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEA_N@Z @ 0x1C00A1AC8
 * Callers:
 *     ?UpdateBindings@BindEngine@Ndis@@AEAAXXZ @ 0x1C00A2190 (-UpdateBindings@BindEngine@Ndis@@AEAAXXZ.c)
 * Callees:
 *     ndisCancelMediaDisconnectTimer @ 0x1C001923C (ndisCancelMediaDisconnectTimer.c)
 *     ndisSelectiveSuspendStop @ 0x1C00689F8 (ndisSelectiveSuspendStop.c)
 *     ?ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z @ 0x1C00699BC (-ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z.c)
 *     ?Acquire@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1C009B11C (-Acquire@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00A6C60 (--1KLockHolder@@QEAA@XZ.c)
 */

void __fastcall ndisMDisableOpportunisticPowerSavings(struct _NDIS_MINIPORT_BLOCK *a1, bool *a2)
{
  bool v4; // zf
  KLockHolder v5; // [rsp+20h] [rbp-28h] BYREF

  *a2 = 0;
  ndisCancelMediaDisconnectTimer((__int64)a1);
  if ( a1->SelectiveSuspend )
    ndisSelectiveSuspendStop(a1, 8);
  v5.m_Lock = &a1->MiniportOwner.m_lock;
  KeEnterCriticalRegion();
  v5.m_Region.m_Entered = 1;
  ExAcquirePushLockExclusiveEx(&a1->MiniportOwner.m_lock, 0LL);
  v5.m_State = Exclusive;
  if ( KeReadStateEvent(&a1->MiniportOwner.m_isUnowned.m_event) )
  {
    KeClearEvent(&a1->MiniportOwner.m_isUnowned.m_event);
    a1->MiniportOwner.m_owner = MiniportOwnedByBindEngine;
    KLockHolder::~KLockHolder(&v5);
  }
  else
  {
    ExReleasePushLockExclusiveEx(&a1->MiniportOwner.m_lock, 0LL);
    KeLeaveCriticalRegion();
    v4 = a1->AoAc == 0LL;
    a1->PmInterruptedByPnp = 1;
    *a2 = 1;
    if ( !v4 )
      ndisAoAcStop(a1, NdisSSPnPOp, RunAsynchronous);
    if ( !a1->DoNotBlockOnMiniportLock )
      Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Acquire((__int64)&a1->MiniportOwner, 2);
  }
}
