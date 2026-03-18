/*
 * XREFs of ?PowerPolicyDisarmWakeFromSx@FxPkgPnp@@AEAAXXZ @ 0x1C009AC84
 * Callers:
 *     ?PowerPolSleepingWakeRevertArmWake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0099E50 (-PowerPolSleepingWakeRevertArmWake@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolSleepingWakeRevertArmWakeNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0099EB0 (-PowerPolSleepingWakeRevertArmWakeNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolSystemWakeDeviceWakeDisarm@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C009A5B0 (-PowerPolSystemWakeDeviceWakeDisarm@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolSystemWakeDeviceWokeDisarm@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C009A6F0 (-PowerPolSystemWakeDeviceWokeDisarm@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0022838 (-LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0022880 (-UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z @ 0x1C0022A68 (-GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z.c)
 *     ?IndicateWakeStatus@FxChildList@@QEAAXJ@Z @ 0x1C006D798 (-IndicateWakeStatus@FxChildList@@QEAAXJ@Z.c)
 */

void __fastcall FxPkgPnp::PowerPolicyDisarmWakeFromSx(FxPkgPnp *this)
{
  FxDeviceBase *m_DeviceBase; // rcx
  unsigned __int64 v3; // rcx
  void (__fastcall *m_Method)(WDFDEVICE__ *); // rax
  FxPowerPolicyOwnerSettings *m_Owner; // rax
  int m_WaitWakeStatus; // edi
  FxEnumerationInfo *m_EnumInfo; // rcx
  FxTransactionedEntry *v8; // rsi
  FxTransactionedEntry *NextEntryLocked; // rax

  m_DeviceBase = this->m_DeviceBase;
  if ( m_DeviceBase->m_ObjectSize )
    v3 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
  else
    v3 = 0LL;
  m_Method = this->m_PowerPolicyMachine.m_Owner->m_DeviceDisarmWakeFromSx.m_Method;
  if ( m_Method )
    m_Method((WDFDEVICE__ *)v3);
  m_Owner = this->m_PowerPolicyMachine.m_Owner;
  m_WaitWakeStatus = m_Owner->m_WaitWakeStatus;
  if ( m_WaitWakeStatus != -1073741536 )
  {
    m_EnumInfo = this->m_EnumInfo;
    if ( m_EnumInfo )
    {
      if ( m_Owner->m_WakeSettings.IndicateChildWakeOnParentWake )
      {
        FxTransactionedList::LockForEnum(&m_EnumInfo->m_ChildListList, this->m_Globals);
        v8 = 0LL;
        while ( 1 )
        {
          NextEntryLocked = FxTransactionedList::GetNextEntryLocked(&this->m_EnumInfo->m_ChildListList, v8);
          v8 = NextEntryLocked;
          if ( !NextEntryLocked )
            break;
          FxChildList::IndicateWakeStatus((FxChildList *)NextEntryLocked->m_TransactionedObject, m_WaitWakeStatus);
        }
        FxTransactionedList::UnlockFromEnum(&this->m_EnumInfo->m_ChildListList, this->m_Globals);
      }
    }
  }
  this->m_PowerPolicyMachine.m_Owner->m_WaitWakeStatus = -1073741637;
  this->m_PowerPolicyMachine.m_Owner->m_SystemWakeSource = 0;
}
