/*
 * XREFs of ?GetInstanceIndex@FxWmiProvider@@QEAAKPEAVFxWmiInstance@@@Z @ 0x1C0068D9C
 * Callers:
 *     ?FireEvent@FxWmiInstance@@QEAAJPEAXK@Z @ 0x1C0069260 (-FireEvent@FxWmiInstance@@QEAAJPEAXK@Z.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 */

__int64 __fastcall FxWmiProvider::GetInstanceIndex(FxWmiProvider *this, _LIST_ENTRY **Instance, unsigned __int8 a3)
{
  unsigned int m_NumInstances; // ecx
  unsigned int v6; // ebx
  _LIST_ENTRY *i; // r8
  FxWmiIrpHandler *m_Parent; // rcx
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  FxNonPagedObject::Lock(this->m_Parent, &irql, a3);
  m_NumInstances = this->m_NumInstances;
  v6 = 0;
  for ( i = this->m_InstanceListHead.Flink; v6 < m_NumInstances; ++v6 )
  {
    if ( &i[-8].Blink == Instance )
      break;
    i = i->Flink;
  }
  m_Parent = this->m_Parent;
  if ( SLOBYTE(m_Parent->m_ObjectFlags) < 0 && *(_QWORD *)&m_Parent[-1].m_UpdateEvent.m_Event.m_DbgFlagIsInitialized )
    FxVerifierLock::Unlock(
      *(FxVerifierLock **)&m_Parent[-1].m_UpdateEvent.m_Event.m_DbgFlagIsInitialized,
      irql,
      (unsigned __int8)i);
  else
    KeReleaseSpinLock(&m_Parent->m_NPLock.m_Lock, irql);
  return v6;
}
