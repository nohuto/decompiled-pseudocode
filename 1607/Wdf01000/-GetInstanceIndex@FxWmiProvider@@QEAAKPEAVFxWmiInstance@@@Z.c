/*
 * XREFs of ?GetInstanceIndex@FxWmiProvider@@QEAAKPEAVFxWmiInstance@@@Z @ 0x1C006F6DC
 * Callers:
 *     ?FireEvent@FxWmiInstance@@QEAAJPEAXK@Z @ 0x1C006FB20 (-FireEvent@FxWmiInstance@@QEAAJPEAXK@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000CC70 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000CCA0 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 */

__int64 __fastcall FxWmiProvider::GetInstanceIndex(FxWmiProvider *this, _LIST_ENTRY **Instance, unsigned __int8 a3)
{
  unsigned int m_NumInstances; // r8d
  unsigned int v6; // ebx
  _LIST_ENTRY *i; // rax
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
  FxNonPagedObject::Unlock(this->m_Parent, irql, m_NumInstances);
  return v6;
}
