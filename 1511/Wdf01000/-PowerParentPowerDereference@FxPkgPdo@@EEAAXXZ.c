/*
 * XREFs of ?PowerParentPowerDereference@FxPkgPdo@@EEAAXXZ @ 0x1C00113D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseLock@FxWaitLockInternal@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0011238 (-ReleaseLock@FxWaitLockInternal@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x1C0011258 (-AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z.c)
 *     ?IoDecrement@FxPowerIdleMachine@@QEAAXPEAXJPEAD@Z @ 0x1C0012FB0 (-IoDecrement@FxPowerIdleMachine@@QEAAXPEAXJPEAD@Z.c)
 */

void __fastcall FxPkgPdo::PowerParentPowerDereference(FxPkgPdo *this, _FX_DRIVER_GLOBALS *a2)
{
  __int64 v2; // rbx
  _FX_DRIVER_GLOBALS *v3; // rdx

  v2 = *(_QWORD *)(*(_QWORD *)&this->m_DeviceBase[1].m_ObjectFlags + 648LL);
  if ( *(_QWORD *)(v2 + 880) )
  {
    FxWaitLockInternal::AcquireLock(*(FxWaitLockInternal **)(v2 + 1056), a2, 0LL);
    --*(_DWORD *)(*(_QWORD *)(v2 + 880) + 516LL);
    FxWaitLockInternal::ReleaseLock(*(FxWaitLockInternal **)(v2 + 1056), v3);
    FxPowerIdleMachine::IoDecrement(*(FxPowerIdleMachine **)(v2 + 880), 0LL, 0, 0LL);
  }
}
