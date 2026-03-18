/*
 * XREFs of ?DeleteObject@FxInterrupt@@UEAAXXZ @ 0x1C00A1DC0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C00333C0 (memset.c)
 *     ??_GFxWakeInterruptMachine@@QEAAPEAXI@Z @ 0x1C00A1B9C (--_GFxWakeInterruptMachine@@QEAAPEAXI@Z.c)
 */

void __fastcall FxInterrupt::DeleteObject(FxInterrupt *this)
{
  FxDeviceBase *m_DeviceBase; // rax
  _LIST_ENTRY *p_m_PnpList; // rcx
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY *Blink; // rax
  unsigned int MessageNumber; // edi
  FxDevicePwrRequirementMachine *m_WakeInterruptMachine; // rcx

  if ( this->m_AddedToList )
  {
    m_DeviceBase = this->m_DeviceBase;
    p_m_PnpList = &this->m_PnpList;
    --*(_DWORD *)(*(_QWORD *)&m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized + 1152LL);
    Flink = p_m_PnpList->Flink;
    Blink = p_m_PnpList->Blink;
    if ( p_m_PnpList->Flink->Blink != p_m_PnpList || Blink->Flink != p_m_PnpList )
      __fastfail(3u);
    Blink->Flink = Flink;
    Flink->Blink = Blink;
  }
  if ( this->m_CmTranslatedResource )
  {
    MessageNumber = this->m_InterruptInfo.MessageNumber;
    memset(&this->m_InterruptInfo, 0, sizeof(this->m_InterruptInfo));
    this->m_InterruptInfo.Size = 64;
    this->m_CmTranslatedResource = 0LL;
    this->m_InterruptInfo.MessageNumber = MessageNumber;
  }
  m_WakeInterruptMachine = (FxDevicePwrRequirementMachine *)this->m_WakeInterruptMachine;
  if ( m_WakeInterruptMachine )
  {
    FxWakeInterruptMachine::`scalar deleting destructor'(m_WakeInterruptMachine);
    this->m_WakeInterruptMachine = 0LL;
  }
  FxObject::DeleteObject(this);
}
