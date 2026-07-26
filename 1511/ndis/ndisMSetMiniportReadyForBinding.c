/*
 * XREFs of ndisMSetMiniportReadyForBinding @ 0x1C00A6E98
 * Callers:
 *     ndisPnPPortActivation @ 0x1C003B198 (ndisPnPPortActivation.c)
 *     ndisPnPPortDeactivation @ 0x1C003B718 (ndisPnPPortDeactivation.c)
 *     ?ndisMiniportDeviceReadyNotification@@YAJPEAX0@Z @ 0x1C00A7D80 (-ndisMiniportDeviceReadyNotification@@YAJPEAX0@Z.c)
 *     ndisStartDeviceSynchronous @ 0x1C00AA688 (ndisStartDeviceSynchronous.c)
 *     ndisIMInitializeDeviceInstance @ 0x1C00C785C (ndisIMInitializeDeviceInstance_ea_1C00C785C.c)
 *     ndisDevicePowerOn @ 0x1C00DF3D0 (ndisDevicePowerOn.c)
 *     ndisPnPRemoveDevice @ 0x1C00E02B8 (ndisPnPRemoveDevice.c)
 *     ndisPmHaltMiniport @ 0x1C00EF254 (ndisPmHaltMiniport.c)
 * Callees:
 *     ndisInitialBindCompleted @ 0x1C001F328 (ndisInitialBindCompleted.c)
 *     WPP_SF_DZq @ 0x1C0058B6C (WPP_SF_DZq.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@@Z @ 0x1C00A29C8 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A2A24 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A2A70 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00A4E98 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00DD09C (-ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall ndisMSetMiniportReadyForBinding(
        struct _NDIS_MINIPORT_BLOCK *a1,
        char a2,
        enum NDIS_DO_NOT_BIND_REASON a3,
        enum CallRunMode a4)
{
  Ndis::BindEngine *p_BindEngine; // rsi
  Ndis::BindState *p_Miniport; // rcx
  struct _NDIS_MINIPORT_BLOCK *v10; // rdx
  unsigned __int16 v11; // cx
  _QWORD v12[20]; // [rsp+30h] [rbp-A8h] BYREF

  p_BindEngine = &a1->BindEngine;
  Ndis::BindEngine::BeginPolicyUpdates(&a1->BindEngine);
  p_Miniport = &a1->Bindings.Miniport;
  if ( a2 )
  {
    if ( Ndis::BindState::SetBinding(p_Miniport, BindingEnabled, a3) && (unsigned __int8)byte_1C0083723 >= 4u )
    {
      ndisGetBindLinkNameForTracing(a1, (struct NDIS_PNPTRACE_LOCALS *)v12);
      v11 = 243;
LABEL_12:
      WPP_SF_DZq(v11, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, a3, (__int64 *)v12[1], v12[0]);
    }
  }
  else if ( Ndis::BindState::SetBinding(p_Miniport, BindingDisabled, a3) && (unsigned __int8)byte_1C0083723 >= 4u )
  {
    ndisGetBindLinkNameForTracing(a1, (struct NDIS_PNPTRACE_LOCALS *)v12);
    v11 = 244;
    goto LABEL_12;
  }
  Ndis::BindEngine::EndPolicyUpdates(p_BindEngine, v10);
  Ndis::BindEngine::ApplyBindChanges(p_BindEngine, a4);
  if ( a2 )
  {
    if ( (a3 & 2) != 0 )
      ndisInitialBindCompleted((__int64)a1);
  }
}
