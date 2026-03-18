/*
 * XREFs of ?_Create@FxPkgFdo@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAPEAV1@@Z @ 0x1C002C680
 * Callers:
 *     ?FdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C001FB28 (-FdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009FC0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_d @ 0x1C000A170 (WPP_IFR_SF_d.c)
 *     ??0FxPkgFdo@@AEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@@Z @ 0x1C002A394 (--0FxPkgFdo@@AEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@@Z.c)
 *     memset @ 0x1C003C780 (memset.c)
 */

__int64 __fastcall FxPkgFdo::_Create(_FX_DRIVER_GLOBALS *DriverGlobals, FxDevice *Device, FxPkgFdo **PkgFdo)
{
  ULONG Tag; // ecx
  void *Caller; // rax
  _QWORD *v8; // rax
  _QWORD *v9; // rbx
  FxPkgFdo *v10; // rax
  FxPkgFdo *v11; // rsi
  void *retaddr; // [rsp+38h] [rbp+0h]

  Tag = DriverGlobals->Tag;
  if ( DriverGlobals->FxPoolTrackingOn )
    Caller = retaddr;
  else
    Caller = 0LL;
  v8 = FxPoolAllocator(
         DriverGlobals,
         &DriverGlobals->FxPoolFrameworks,
         ExDefaultNonPagedPoolType,
         DriverGlobals->FxVerifierHandle != 0 ? 1704LL : 1672LL,
         Tag,
         Caller);
  v9 = v8;
  if ( !v8 )
    goto LABEL_10;
  if ( DriverGlobals->FxVerifierHandle )
  {
    memset(v8, 0, 0x20uLL);
    *((_DWORD *)v9 + 7) = 1146058822;
    v9 += 4;
  }
  if ( v9 )
  {
    FxPkgFdo::FxPkgFdo((FxPkgFdo *)v9, DriverGlobals, Device);
    v11 = v10;
  }
  else
  {
LABEL_10:
    v11 = 0LL;
  }
  if ( v11 )
  {
    KeInitializeEvent(&v11->m_PnpMachine.m_StateMachineLock.m_Event.m_Event, SynchronizationEvent, 1u);
    v11->m_PnpMachine.m_StateMachineLock.m_Event.m_DbgFlagIsInitialized = 1;
    KeInitializeEvent(&v11->m_PowerMachine.m_StateMachineLock.m_Event.m_Event, SynchronizationEvent, 1u);
    v11->m_PowerMachine.m_StateMachineLock.m_Event.m_DbgFlagIsInitialized = 1;
    KeInitializeEvent(&v11->m_PowerPolicyMachine.m_StateMachineLock.m_Event.m_Event, SynchronizationEvent, 1u);
    v11->m_PowerPolicyMachine.m_StateMachineLock.m_Event.m_DbgFlagIsInitialized = 1;
    *PkgFdo = v11;
    return 0LL;
  }
  else
  {
    WPP_IFR_SF_d(DriverGlobals, 2u, 0xDu, 0xAu, WPP_fxpkgfdo_cpp_Traceguids, -1073741670);
    return 3221225626LL;
  }
}
