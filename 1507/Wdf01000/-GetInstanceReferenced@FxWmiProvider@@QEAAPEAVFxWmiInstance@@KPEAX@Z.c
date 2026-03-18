/*
 * XREFs of ?GetInstanceReferenced@FxWmiProvider@@QEAAPEAVFxWmiInstance@@KPEAX@Z @ 0x1C0068E2C
 * Callers:
 *     ?_QueryAllData@FxWmiIrpHandler@@CAJPEAV1@PEAU_IRP@@PEAVFxWmiProvider@@PEAVFxWmiInstance@@@Z @ 0x1C006A3B0 (-_QueryAllData@FxWmiIrpHandler@@CAJPEAV1@PEAU_IRP@@PEAVFxWmiProvider@@PEAVFxWmiInstance@@@Z.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?GetInstanceReferencedLocked@FxWmiProvider@@QEAAPEAVFxWmiInstance@@KPEAX@Z @ 0x1C0068EA8 (-GetInstanceReferencedLocked@FxWmiProvider@@QEAAPEAVFxWmiInstance@@KPEAX@Z.c)
 */

FxWmiInstance *__fastcall FxWmiProvider::GetInstanceReferenced(FxWmiProvider *this, unsigned int Index, void *Tag)
{
  FxWmiInstance *InstanceReferencedLocked; // rax
  unsigned __int8 v7; // r8
  FxWmiIrpHandler *m_Parent; // rdx
  FxWmiInstance *v9; // rbx
  FxVerifierLock *v10; // rcx
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  FxNonPagedObject::Lock(this->m_Parent, &irql, (unsigned __int8)Tag);
  InstanceReferencedLocked = FxWmiProvider::GetInstanceReferencedLocked(this, Index, Tag);
  m_Parent = this->m_Parent;
  v9 = InstanceReferencedLocked;
  if ( SLOBYTE(m_Parent->m_ObjectFlags) < 0
    && (v10 = *(FxVerifierLock **)&m_Parent[-1].m_UpdateEvent.m_Event.m_DbgFlagIsInitialized) != 0LL )
  {
    FxVerifierLock::Unlock(v10, irql, v7);
  }
  else
  {
    KeReleaseSpinLock(&m_Parent->m_NPLock.m_Lock, irql);
  }
  return v9;
}
