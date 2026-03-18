/*
 * XREFs of ?DeleteFileObjectFromFailedCreate@FxFileObject@@QEAAXXZ @ 0x1C0076CD8
 * Callers:
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C00026E0 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 */

void __fastcall FxFileObject::DeleteFileObjectFromFailedCreate(FxFileObject *this, __int64 a2, unsigned __int8 a3)
{
  unsigned __int8 v4; // r8
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY *Blink; // rcx
  FxDeviceBase *m_DeviceBase; // rcx
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  FxNonPagedObject::Lock(this->m_DeviceBase, &irql, a3);
  Flink = this->m_Link.Flink;
  Blink = this->m_Link.Blink;
  if ( Flink->Blink != &this->m_Link || Blink->Flink != &this->m_Link )
    __fastfail(3u);
  Blink->Flink = Flink;
  Flink->Blink = Blink;
  m_DeviceBase = this->m_DeviceBase;
  if ( SLOBYTE(m_DeviceBase->m_ObjectFlags) < 0 && m_DeviceBase[-1].m_CallbackLockObjectPtr )
    FxVerifierLock::Unlock((FxVerifierLock *)m_DeviceBase[-1].m_CallbackLockObjectPtr, irql, v4);
  else
    KeReleaseSpinLock(&m_DeviceBase->m_NPLock.m_Lock, irql);
  FxObject::DeleteFromFailedCreate(this);
}
