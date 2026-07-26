/*
 * XREFs of ndisMSetMiniportReadyForBinding @ 0x1C00A109C
 * Callers:
 *     ndisPnPPortActivation @ 0x1C003A458 (ndisPnPPortActivation.c)
 *     ndisPnPPortDeactivation @ 0x1C003A9D8 (ndisPnPPortDeactivation.c)
 *     ?ndisMiniportDeviceReadyNotification@@YAJPEAX0@Z @ 0x1C009F980 (-ndisMiniportDeviceReadyNotification@@YAJPEAX0@Z.c)
 *     ndisStartDeviceSynchronous @ 0x1C00AC4C4 (ndisStartDeviceSynchronous.c)
 *     ndisIMInitializeDeviceInstance @ 0x1C00CE44C (ndisIMInitializeDeviceInstance_ea_1C00CE44C.c)
 *     ndisDevicePowerOn @ 0x1C00E5640 (ndisDevicePowerOn.c)
 *     ndisPnPRemoveDevice @ 0x1C00E63F0 (ndisPnPRemoveDevice.c)
 *     ndisPmHaltMiniport @ 0x1C00F50D4 (ndisPmHaltMiniport.c)
 * Callees:
 *     ndisInitialBindCompleted @ 0x1C0020258 (ndisInitialBindCompleted.c)
 *     WPP_SF_dd @ 0x1C003F208 (WPP_SF_dd_ea_1C003F208.c)
 *     WPP_SF_DZq @ 0x1C0058E7C (WPP_SF_DZq.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@@Z @ 0x1C00A1F38 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@@Z.c)
 *     ?ApplyRules@BindEngine@Ndis@@AEAAXXZ @ 0x1C00A2FD4 (-ApplyRules@BindEngine@Ndis@@AEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00A32CC (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00E2F68 (-ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall ndisMSetMiniportReadyForBinding(
        struct _NDIS_MINIPORT_BLOCK *a1,
        char a2,
        enum NDIS_DO_NOT_BIND_REASON a3,
        enum CallRunMode a4)
{
  unsigned int m_unbindReasons; // r8d
  int v9; // r9d
  char v10; // cl
  _NDIS_MINIPORT_BLOCK *Miniport; // rax
  unsigned __int16 v12; // cx
  _QWORD v13[20]; // [rsp+30h] [rbp-A8h] BYREF

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(&a1->BindEngine.m_lock, 0LL);
  if ( a2 )
  {
    m_unbindReasons = a1->Bindings.Miniport.m_unbindReasons;
    v9 = m_unbindReasons & ~a3;
    a1->Bindings.Miniport.m_unbindReasons = v9;
    if ( (m_unbindReasons != 0) != (v9 != 0) || !a1->Bindings.Miniport.Miniport )
    {
      v10 = byte_1C0085323;
      if ( (unsigned __int8)byte_1C0085323 >= 5u )
      {
        WPP_SF_dd(0xEu, &WPP_eaee9154efd950f31d396ed7715513d8_Traceguids, m_unbindReasons, v9);
        v10 = byte_1C0085323;
      }
      Miniport = a1->Bindings.Miniport.Miniport;
      if ( !Miniport->BindEngine.m_isBeingDestroyed )
        Miniport->BindEngine.m_isDirty = 1;
      if ( (unsigned __int8)v10 >= 4u )
      {
        ndisGetBindLinkNameForTracing(a1, (struct NDIS_PNPTRACE_LOCALS *)v13);
        v12 = 240;
LABEL_17:
        WPP_SF_DZq(v12, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, a3, (__int64 *)v13[1], v13[0]);
      }
    }
  }
  else if ( Ndis::BindState::SetBinding(&a1->Bindings.Miniport, BindingDisabled, a3)
         && (unsigned __int8)byte_1C0085323 >= 4u )
  {
    ndisGetBindLinkNameForTracing(a1, (struct NDIS_PNPTRACE_LOCALS *)v13);
    v12 = 241;
    goto LABEL_17;
  }
  Ndis::BindEngine::ApplyRules(&a1->BindEngine);
  ExReleasePushLockExclusiveEx(&a1->BindEngine.m_lock, 0LL);
  KeLeaveCriticalRegion();
  Ndis::BindEngine::ApplyBindChanges(&a1->BindEngine, a4);
  if ( a2 )
  {
    if ( (a3 & 2) != 0 )
      ndisInitialBindCompleted((__int64)a1);
  }
}
