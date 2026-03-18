/*
 * XREFs of ?_Create@FxPkgFdo@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAPEAV1@@Z @ 0x1C001D2F0
 * Callers:
 *     ?FdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0020320 (-FdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C000D700 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ??0FxPkgPnp@@IEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@G@Z @ 0x1C0027720 (--0FxPkgPnp@@IEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@G@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0035590 (WPP_IFR_SF_d.c)
 *     memset @ 0x1C0040480 (memset.c)
 */

__int64 __fastcall FxPkgFdo::_Create(_FX_DRIVER_GLOBALS *DriverGlobals, FxDevice *Device, FxPkgFdo **PkgFdo)
{
  ULONG Tag; // ecx
  unsigned __int64 v5; // r9
  void *Caller; // rax
  FxPkgFdo *v9; // rax
  FxPkgFdo *v10; // rbx
  void *retaddr; // [rsp+38h] [rbp+0h]

  Tag = DriverGlobals->Tag;
  v5 = 1688LL;
  if ( DriverGlobals->FxVerifierHandle )
    v5 = 1736LL;
  if ( DriverGlobals->FxPoolTrackingOn )
    Caller = retaddr;
  else
    Caller = 0LL;
  v9 = (FxPkgFdo *)FxPoolAllocator(
                     DriverGlobals,
                     &DriverGlobals->FxPoolFrameworks,
                     ExDefaultNonPagedPoolType,
                     v5,
                     Tag,
                     Caller);
  v10 = v9;
  if ( !v9 )
    goto LABEL_11;
  if ( DriverGlobals->FxVerifierHandle )
  {
    memset(v9, 0, 0x30uLL);
    LODWORD(v10->m_ChildListHead.Flink) = 1146058822;
    v10 = (FxPkgFdo *)((char *)v10 + 48);
  }
  if ( v10 )
  {
    FxPkgPnp::FxPkgPnp(v10, DriverGlobals, Device, 0x1101u);
    v10->__vftable = (FxPkgFdo_vtbl *)FxPkgFdo::`vftable';
    v10->m_DeviceFilterAddResourceRequirements.m_Method = 0LL;
    v10->m_DeviceFilterRemoveResourceRequirements.m_Method = 0LL;
    v10->m_DeviceRemoveAddedResources.m_Method = 0LL;
    v10->m_DefaultDeviceList = 0LL;
    v10->m_StaticDeviceList = 0LL;
    v10->m_DefaultTarget = 0LL;
    v10->m_SelfTarget = 0LL;
    v10->m_SurpriseRemoveAndReenumerateSelfWorkItem = 0LL;
    v10->m_BusEnumRetries = 0;
    v10->m_DeviceInterfacesCanBeEnabled = 1;
    v10->m_Filter = 0;
    *(_QWORD *)&v10->m_BusInformation.BusTypeGuid.Data1 = 0LL;
    *(_QWORD *)v10->m_BusInformation.BusTypeGuid.Data4 = 0LL;
    *(_QWORD *)&v10->m_BusInformation.LegacyBusType = 0LL;
    memset(
      &v10->m_SurpriseRemoveAndReenumerateSelfInterface,
      0,
      sizeof(v10->m_SurpriseRemoveAndReenumerateSelfInterface));
    KeInitializeEvent(&v10->m_PnpMachine.m_StateMachineLock.m_Event.m_Event, SynchronizationEvent, 1u);
    v10->m_PnpMachine.m_StateMachineLock.m_Event.m_DbgFlagIsInitialized = 1;
    KeInitializeEvent(&v10->m_PowerMachine.m_StateMachineLock.m_Event.m_Event, SynchronizationEvent, 1u);
    v10->m_PowerMachine.m_StateMachineLock.m_Event.m_DbgFlagIsInitialized = 1;
    KeInitializeEvent(&v10->m_PowerPolicyMachine.m_StateMachineLock.m_Event.m_Event, SynchronizationEvent, 1u);
    v10->m_PowerPolicyMachine.m_StateMachineLock.m_Event.m_DbgFlagIsInitialized = 1;
    *PkgFdo = v10;
    return 0LL;
  }
  else
  {
LABEL_11:
    WPP_IFR_SF_d(DriverGlobals, 2u, 0xDu, 0xAu, WPP_fxpkgfdo_cpp_Traceguids, -1073741670);
    return 3221225626LL;
  }
}
