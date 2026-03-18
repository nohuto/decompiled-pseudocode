/*
 * XREFs of ?PowerPolSystemWakeDeviceWakeDisarm@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C00A0FC0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C001E1F0 (-UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C001E298 (-LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z @ 0x1C001E2E0 (-GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z.c)
 *     ?IndicateWakeStatus@FxChildList@@QEAAXJ@Z @ 0x1C00671E8 (-IndicateWakeStatus@FxChildList@@QEAAXJ@Z.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolSystemWakeDeviceWakeDisarm(FxPkgPnp *This)
{
  __int64 v2; // rcx
  FxDeviceBase *m_DeviceBase; // rcx
  unsigned __int64 v4; // rcx
  void (__fastcall *m_Method)(WDFDEVICE__ *); // rax
  FxPowerPolicyOwnerSettings *m_Owner; // rax
  int m_WaitWakeStatus; // edi
  FxEnumerationInfo *m_EnumInfo; // rcx
  FxTransactionedEntry *v9; // rsi
  FxTransactionedEntry *NextEntryLocked; // rax

  v2 = *(_QWORD *)&This->m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized;
  if ( v2 && *(_WORD *)(v2 + 8) == 4354 )
    This->PowerDisableWakeAtBusOverload(This);
  m_DeviceBase = This->m_DeviceBase;
  if ( m_DeviceBase->m_ObjectSize )
    v4 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
  else
    v4 = 0LL;
  m_Method = This->m_PowerPolicyMachine.m_Owner->m_DeviceDisarmWakeFromSx.m_Method;
  if ( m_Method )
    m_Method((WDFDEVICE__ *)v4);
  m_Owner = This->m_PowerPolicyMachine.m_Owner;
  m_WaitWakeStatus = m_Owner->m_WaitWakeStatus;
  if ( m_WaitWakeStatus != -1073741536 )
  {
    m_EnumInfo = This->m_EnumInfo;
    if ( m_EnumInfo )
    {
      if ( m_Owner->m_WakeSettings.IndicateChildWakeOnParentWake )
      {
        FxTransactionedList::LockForEnum(&m_EnumInfo->m_ChildListList, This->m_Globals);
        v9 = 0LL;
        while ( 1 )
        {
          NextEntryLocked = FxTransactionedList::GetNextEntryLocked(&This->m_EnumInfo->m_ChildListList, v9);
          v9 = NextEntryLocked;
          if ( !NextEntryLocked )
            break;
          FxChildList::IndicateWakeStatus((FxChildList *)NextEntryLocked->m_TransactionedObject, m_WaitWakeStatus);
        }
        FxTransactionedList::UnlockFromEnum(&This->m_EnumInfo->m_ChildListList, This->m_Globals);
      }
    }
  }
  This->m_PowerPolicyMachine.m_Owner->m_WaitWakeStatus = -1073741637;
  This->m_PowerPolicyMachine.m_Owner->m_SystemWakeSource = 0;
  return 1317LL;
}
