/*
 * XREFs of ?PipesGotoRemoveState@FxUsbDevice@@IEAAXE@Z @ 0x1C008CAD4
 * Callers:
 *     ?Deconfig@FxUsbDevice@@QEAAJXZ @ 0x1C008C4D0 (-Deconfig@FxUsbDevice@@QEAAJXZ.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?ReleaseLock@FxWaitLockInternal@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00291CC (-ReleaseLock@FxWaitLockInternal@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x1C00291EC (-AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?_CleanupPipesRequests@FxUsbDevice@@KAXPEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1C008DA54 (-_CleanupPipesRequests@FxUsbDevice@@KAXPEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@@Z.c)
 *     ?CleanUpAndDelete@FxUsbInterface@@QEAAXE@Z @ 0x1C008F2EC (-CleanUpAndDelete@FxUsbInterface@@QEAAXE@Z.c)
 */

void __fastcall FxUsbDevice::PipesGotoRemoveState(FxUsbDevice *this, _FX_DRIVER_GLOBALS *ForceRemovePipes)
{
  FxWaitLockInternal *p_m_InterfaceIterationLock; // r15
  unsigned __int8 v4; // r8
  unsigned __int8 v5; // r8
  __int64 i; // r14
  FxUsbInterface *v7; // rdi
  __int64 j; // rsi
  FxUsbPipe **m_ConfiguredPipes; // rax
  FxUsbPipe *v10; // rcx
  FxVerifierLock *m_OwningThread; // rcx
  _FX_DRIVER_GLOBALS *v12; // rdx
  __int64 k; // rsi
  FxUsbInterface *v14; // rdi
  __int64 m; // r14
  FxUsbPipe *v16; // rcx
  int v17; // [rsp+20h] [rbp-40h]
  _LIST_ENTRY pendHead; // [rsp+40h] [rbp-20h] BYREF
  _LIST_ENTRY interfaceHead; // [rsp+50h] [rbp-10h] BYREF
  unsigned __int8 wait; // [rsp+90h] [rbp+30h] BYREF
  unsigned __int8 irql; // [rsp+98h] [rbp+38h] BYREF
  _SINGLE_LIST_ENTRY sentHead; // [rsp+A0h] [rbp+40h] BYREF

  irql = (unsigned __int8)ForceRemovePipes;
  sentHead.Next = 0LL;
  pendHead.Blink = &pendHead;
  p_m_InterfaceIterationLock = &this->m_InterfaceIterationLock;
  pendHead.Flink = &pendHead;
  interfaceHead.Blink = &interfaceHead;
  interfaceHead.Flink = &interfaceHead;
  FxWaitLockInternal::AcquireLock(&this->m_InterfaceIterationLock, ForceRemovePipes, 0LL);
  FxNonPagedObject::Lock(this, &irql, v4);
  for ( i = 0LL; (unsigned int)i < this->m_NumInterfaces; i = (unsigned int)(i + 1) )
  {
    v7 = this->m_Interfaces[i];
    if ( v7->m_ConfiguredPipes )
    {
      for ( j = 0LL; (unsigned int)j < v7->m_NumberOfConfiguredPipes; j = (unsigned int)(j + 1) )
      {
        m_ConfiguredPipes = v7->m_ConfiguredPipes;
        wait = 0;
        v10 = m_ConfiguredPipes[j];
        if ( v10 )
        {
          LOBYTE(v17) = 1;
          v10->GotoRemoveState(v10, WdfIoTargetDeleted, &pendHead, &sentHead, v17, &wait);
        }
      }
    }
  }
  if ( SLOBYTE(this->m_ObjectFlags) < 0
    && (m_OwningThread = (FxVerifierLock *)this[-1].m_InterfaceIterationLock.m_OwningThread) != 0LL )
  {
    FxVerifierLock::Unlock(m_OwningThread, irql, v5);
  }
  else
  {
    KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
  }
  FxUsbDevice::_CleanupPipesRequests(&pendHead, &sentHead);
  for ( k = 0LL; (unsigned int)k < this->m_NumInterfaces; k = (unsigned int)(k + 1) )
  {
    v14 = this->m_Interfaces[k];
    if ( v14->m_ConfiguredPipes )
    {
      for ( m = 0LL; (unsigned int)m < v14->m_NumberOfConfiguredPipes; m = (unsigned int)(m + 1) )
      {
        v16 = v14->m_ConfiguredPipes[m];
        if ( v16 )
          v16->WaitForSentIoToComplete(v16);
      }
    }
    FxUsbInterface::CleanUpAndDelete(v14, (unsigned __int8)v12);
  }
  FxWaitLockInternal::ReleaseLock(p_m_InterfaceIterationLock, v12);
}
