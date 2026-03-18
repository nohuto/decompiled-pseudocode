/*
 * XREFs of ?PnpEventHardwareAvailable@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C002FB70
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C00098A0 (WPP_IFR_SF_d.c)
 *     ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x1C00151C0 (-PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z.c)
 *     ?QueryForCapabilities@FxPkgPnp@@IEAAJXZ @ 0x1C00156E0 (-QueryForCapabilities@FxPkgPnp@@IEAAJXZ.c)
 *     ?PnpPrepareHardware@FxPkgPnp@@IEAAJPEAE@Z @ 0x1C0015D00 (-PnpPrepareHardware@FxPkgPnp@@IEAAJPEAE@Z.c)
 *     ?SetInternalFailure@FxPkgPnp@@IEAAXXZ @ 0x1C0089634 (-SetInternalFailure@FxPkgPnp@@IEAAXXZ.c)
 */

__int64 __fastcall FxPkgPnp::PnpEventHardwareAvailable(FxPkgPnp *This)
{
  FxPkgPnp_vtbl *v1; // rax
  int v3; // esi
  PDEVICE_OBJECT AttachedDeviceReference; // rax
  PDEVICE_OBJECT v5; // rbx
  unsigned __int8 v6; // r8
  int _a1; // eax
  int v8; // ebx
  unsigned __int8 matched; // [rsp+40h] [rbp+8h] BYREF

  v1 = This->__vftable;
  matched = 0;
  v1->QueryForReenumerationInterface(This);
  v3 = 0;
  AttachedDeviceReference = IoGetAttachedDeviceReference(This->m_DeviceBase->m_DeviceObject.m_DeviceObject);
  v5 = AttachedDeviceReference;
  if ( AttachedDeviceReference )
  {
    if ( (AttachedDeviceReference->Flags & 0x2000) == 0 && !This->m_HasPowerThread )
    {
      v3 = This->QueryForPowerThread(This);
      if ( v3 < 0 )
      {
        FxPkgPnp::SetInternalFailure(This);
        This->m_PendingPnPIrp->IoStatus.Status = v3;
      }
    }
    ObfDereferenceObject(v5);
    if ( v3 < 0 )
      return 303LL;
  }
  if ( (int)FxPkgPnp::PnpPrepareHardware(This, &matched) >= 0 )
  {
    if ( !This->m_PowerPolicyMachine.m_Owner )
    {
LABEL_8:
      FxPkgPnp::PowerPolicyProcessEvent(This, PwrPolStart, v6);
      return 314LL;
    }
    _a1 = FxPkgPnp::QueryForCapabilities(This);
    v8 = _a1;
    if ( _a1 >= 0 )
    {
      This->m_CapsQueried = 1;
      goto LABEL_8;
    }
    WPP_IFR_SF_d(This->m_Globals, 2u, 0xCu, 0xFu, WPP_PnpStateMachine_cpp_Traceguids, _a1);
    This->m_PendingPnPIrp->IoStatus.Status = v8;
    return 298LL;
  }
  if ( !matched )
    return 303LL;
  return 298LL;
}
