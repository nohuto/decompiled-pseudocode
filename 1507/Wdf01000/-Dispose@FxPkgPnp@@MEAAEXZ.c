/*
 * XREFs of ?Dispose@FxPkgPnp@@MEAAEXZ @ 0x1C009D760
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseLock@FxWaitLockInternal@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00291CC (-ReleaseLock@FxWaitLockInternal@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x1C00291EC (-AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z.c)
 *     memset @ 0x1C00333C0 (memset.c)
 *     ??_GFxQueryInterface@@QEAAPEAXI@Z @ 0x1C006AAF0 (--_GFxQueryInterface@@QEAAPEAXI@Z.c)
 */

unsigned __int8 __fastcall FxPkgPnp::Dispose(FxPkgPnp *this, _FX_DRIVER_GLOBALS *a2)
{
  FxWaitLockInternal *p_m_QueryInterfaceLock; // rbx
  _SINGLE_LIST_ENTRY *Next; // rdi
  _FX_DRIVER_GLOBALS *v5; // rdx
  FxQueryInterface *v6; // rcx
  void (__fastcall *InterfaceDereference)(void *); // rax

  p_m_QueryInterfaceLock = &this->m_QueryInterfaceLock;
  this->m_InterruptListHead.Blink = &this->m_InterruptListHead;
  this->m_InterruptListHead.Flink = &this->m_InterruptListHead;
  FxWaitLockInternal::AcquireLock(&this->m_QueryInterfaceLock, a2, 0LL);
  Next = this->m_QueryInterfaceHead.Next;
  this->m_QueryInterfaceHead.Next = 0LL;
  FxWaitLockInternal::ReleaseLock(p_m_QueryInterfaceLock, v5);
  while ( Next )
  {
    v6 = (FxQueryInterface *)&Next[-5];
    Next = Next->Next;
    v6->m_Entry.Next = 0LL;
    if ( !v6->m_EmbeddedInterface )
      FxQueryInterface::`scalar deleting destructor'(v6);
  }
  InterfaceDereference = this->m_D3ColdInterface.InterfaceDereference;
  if ( InterfaceDereference )
    InterfaceDereference(this->m_D3ColdInterface.Context);
  memset(&this->m_D3ColdInterface, 0, sizeof(this->m_D3ColdInterface));
  return 1;
}
