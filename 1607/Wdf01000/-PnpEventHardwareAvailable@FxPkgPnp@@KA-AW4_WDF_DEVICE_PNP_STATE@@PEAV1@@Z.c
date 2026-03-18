/*
 * XREFs of ?PnpEventHardwareAvailable@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C002C500
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C000A170 (WPP_IFR_SF_d.c)
 *     ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x1C0025E40 (-PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z.c)
 *     ?QueryForCapabilities@FxPkgPnp@@IEAAJXZ @ 0x1C0026280 (-QueryForCapabilities@FxPkgPnp@@IEAAJXZ.c)
 *     ?PnpPrepareHardware@FxPkgPnp@@IEAAJPEAEPEAW4FxCxCallbackProgress@@@Z @ 0x1C00266B0 (-PnpPrepareHardware@FxPkgPnp@@IEAAJPEAEPEAW4FxCxCallbackProgress@@@Z.c)
 *     ?SetInternalFailure@FxPkgPnp@@IEAAXXZ @ 0x1C0097D74 (-SetInternalFailure@FxPkgPnp@@IEAAXXZ.c)
 */

__int64 __fastcall FxPkgPnp::PnpEventHardwareAvailable(FxPkgPnp *This)
{
  int v2; // esi
  PDEVICE_OBJECT AttachedDeviceReference; // rax
  PDEVICE_OBJECT v4; // rbx
  unsigned __int8 v5; // r8
  int _a1; // eax
  int v7; // ebx
  unsigned __int8 matched; // [rsp+40h] [rbp+8h] BYREF
  FxCxCallbackProgress progress; // [rsp+48h] [rbp+10h] BYREF

  progress = FxCxCallbackProgressInitialized;
  matched = 0;
  if ( This->QueryForReenumerationInterface(This) < 0 )
    return 303LL;
  v2 = 0;
  AttachedDeviceReference = IoGetAttachedDeviceReference(This->m_DeviceBase->m_DeviceObject.m_DeviceObject);
  v4 = AttachedDeviceReference;
  if ( AttachedDeviceReference )
  {
    if ( (AttachedDeviceReference->Flags & 0x2000) == 0 && !This->m_HasPowerThread )
    {
      v2 = This->QueryForPowerThread(This);
      if ( v2 < 0 )
      {
        FxPkgPnp::SetInternalFailure(This);
        This->m_PendingPnPIrp->IoStatus.Status = v2;
      }
    }
    ObfDereferenceObject(v4);
    if ( v2 < 0 )
      return 303LL;
  }
  if ( (int)FxPkgPnp::PnpPrepareHardware(This, &matched, &progress) >= 0 )
  {
    if ( !This->m_PowerPolicyMachine.m_Owner )
    {
LABEL_9:
      FxPkgPnp::PowerPolicyProcessEvent(This, PwrPolStart, v5);
      return 314LL;
    }
    _a1 = FxPkgPnp::QueryForCapabilities(This);
    v7 = _a1;
    if ( _a1 >= 0 )
    {
      This->m_CapsQueried = 1;
      goto LABEL_9;
    }
    WPP_IFR_SF_d(This->m_Globals, 2u, 0xCu, 0xFu, WPP_PnpStateMachine_cpp_Traceguids, _a1);
    This->m_PendingPnPIrp->IoStatus.Status = v7;
    return 298LL;
  }
  if ( !matched || progress == FxCxCallbackProgressInitialized )
    return 303LL;
  return 298LL;
}
