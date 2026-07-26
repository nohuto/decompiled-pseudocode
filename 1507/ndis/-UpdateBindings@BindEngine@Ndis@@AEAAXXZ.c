/*
 * XREFs of ?UpdateBindings@BindEngine@Ndis@@AEAAXXZ @ 0x1C00A2190
 * Callers:
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@@Z @ 0x1C00A1F38 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@@Z.c)
 *     ?UpdateBindingsWorkItem@BindEngine@Ndis@@AEAAXXZ @ 0x1C00A2160 (-UpdateBindingsWorkItem@BindEngine@Ndis@@AEAAXXZ.c)
 * Callees:
 *     ndisSetMediaDisconnectTimer @ 0x1C0018DAC (ndisSetMediaDisconnectTimer.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     ndisSelectiveSuspendClearStop @ 0x1C0068720 (ndisSelectiveSuspendClearStop.c)
 *     ?ndisAoAcClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1C00694C0 (-ndisAoAcClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?ndisBindEnumerateProtocolDrivers@@YAXP6AXPEAXV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z0@Z @ 0x1C00A1638 (-ndisBindEnumerateProtocolDrivers@@YAXP6AXPEAXV-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z0@Z.c)
 *     ?ndisMDisableOpportunisticPowerSavings@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEA_N@Z @ 0x1C00A1AC8 (-ndisMDisableOpportunisticPowerSavings@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEA_N@Z.c)
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C00A222C (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 */

void __fastcall Ndis::BindEngine::UpdateBindings(Ndis::BindEngine *this)
{
  struct _NDIS_MINIPORT_BLOCK *m_miniport; // rcx
  __int64 v3; // rdx
  _NDIS_MINIPORT_BLOCK *v4; // rbx
  bool v5; // zf
  bool v6; // [rsp+30h] [rbp+8h] BYREF

  if ( (unsigned __int8)byte_1C0085323 >= 5u )
    WPP_SF_q(0xBu, &WPP_5b8c069e2f8125229af88e505e9ace44_Traceguids, (__int64)this->m_miniport);
  m_miniport = this->m_miniport;
  v6 = 0;
  ndisMDisableOpportunisticPowerSavings(m_miniport, &v6);
  while ( Ndis::BindEngine::Iterate(this) )
    ;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)&Ndis::BindEngine::s_NumBindOperationsInProgress, 0xFFFFFFFF) <= 1 )
    ndisBindEnumerateProtocolDrivers(
      (void (__fastcall *)(__int64, volatile signed __int32 **))lambda_b71825de59a79cfcba83505e6bc2fe25_::_helper_func_cdecl_,
      0LL);
  v4 = this->m_miniport;
  if ( this->m_miniport->MediaConnectState == MediaConnectStateDisconnected )
    ndisSetMediaDisconnectTimer((__int64)this->m_miniport, v3);
  if ( v4->SelectiveSuspend )
    ndisSelectiveSuspendClearStop((__int64)v4, 8);
  if ( v6 )
  {
    v5 = v4->AoAc == 0LL;
    v4->PmInterruptedByPnp = 0;
    if ( !v5 )
      ndisAoAcClearStop(v4, NdisSSPnPOp);
  }
  if ( (unsigned __int8)byte_1C0085323 >= 5u )
    WPP_SF_q(0xCu, &WPP_5b8c069e2f8125229af88e505e9ace44_Traceguids, (__int64)this->m_miniport);
}
