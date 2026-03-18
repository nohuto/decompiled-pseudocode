/*
 * XREFs of ?DeleteFileObjectFromFailedCreate@FxFileObject@@QEAAXXZ @ 0x1C007DDE4
 * Callers:
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0008340 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0010B20 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0010B50 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 */

void __fastcall FxFileObject::DeleteFileObjectFromFailedCreate(FxFileObject *this, __int64 a2, unsigned __int8 a3)
{
  unsigned __int8 v4; // r8
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY *Blink; // rcx
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  FxNonPagedObject::Lock(this->m_DeviceBase, &irql, a3);
  Flink = this->m_Link.Flink;
  Blink = this->m_Link.Blink;
  if ( Flink->Blink != &this->m_Link || Blink->Flink != &this->m_Link )
    __fastfail(3u);
  Blink->Flink = Flink;
  Flink->Blink = Blink;
  FxNonPagedObject::Unlock(this->m_DeviceBase, irql, v4);
  FxObject::DeleteFromFailedCreate(this);
}
