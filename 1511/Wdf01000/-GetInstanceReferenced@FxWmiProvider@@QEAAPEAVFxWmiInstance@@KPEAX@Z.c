/*
 * XREFs of ?GetInstanceReferenced@FxWmiProvider@@QEAAPEAVFxWmiInstance@@KPEAX@Z @ 0x1C006102C
 * Callers:
 *     ?_QueryAllData@FxWmiIrpHandler@@CAJPEAV1@PEAU_IRP@@PEAVFxWmiProvider@@PEAVFxWmiInstance@@@Z @ 0x1C0062490 (-_QueryAllData@FxWmiIrpHandler@@CAJPEAV1@PEAU_IRP@@PEAVFxWmiProvider@@PEAVFxWmiInstance@@@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005870 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005940 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?GetInstanceReferencedLocked@FxWmiProvider@@QEAAPEAVFxWmiInstance@@KPEAX@Z @ 0x1C0061088 (-GetInstanceReferencedLocked@FxWmiProvider@@QEAAPEAVFxWmiInstance@@KPEAX@Z.c)
 */

FxWmiInstance *__fastcall FxWmiProvider::GetInstanceReferenced(FxWmiProvider *this, unsigned int Index, void *Tag)
{
  FxWmiInstance *InstanceReferencedLocked; // rbx
  unsigned __int8 v7; // r8
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  FxNonPagedObject::Lock(this->m_Parent, &irql, (unsigned __int8)Tag);
  InstanceReferencedLocked = FxWmiProvider::GetInstanceReferencedLocked(this, Index, Tag);
  FxNonPagedObject::Unlock(this->m_Parent, irql, v7);
  return InstanceReferencedLocked;
}
