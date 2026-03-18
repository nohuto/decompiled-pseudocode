/*
 * XREFs of ?CleanUpAndDelete@FxUsbInterface@@QEAAXE@Z @ 0x1C008F2EC
 * Callers:
 *     ?CleanupInterfacePipesAndDelete@FxUsbDevice@@IEAAXPEAVFxUsbInterface@@@Z @ 0x1C008B888 (-CleanupInterfacePipesAndDelete@FxUsbDevice@@IEAAXPEAVFxUsbInterface@@@Z.c)
 *     ?PipesGotoRemoveState@FxUsbDevice@@IEAAXE@Z @ 0x1C008CAD4 (-PipesGotoRemoveState@FxUsbDevice@@IEAAXE@Z.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C00102D0 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 */

void __fastcall FxUsbInterface::CleanUpAndDelete(FxUsbInterface *this, unsigned __int8 Failure, unsigned __int8 a3)
{
  unsigned __int8 v4; // r8
  FxUsbDevice *m_UsbDevice; // rdx
  FxUsbPipe **m_ConfiguredPipes; // rdi
  unsigned int m_NumberOfConfiguredPipes; // ebp
  FxVerifierLock *m_OwningThread; // rcx
  unsigned int v9; // esi
  FxUsbPipe **v10; // rbx
  unsigned __int8 irql; // [rsp+38h] [rbp+10h] BYREF

  irql = Failure;
  FxNonPagedObject::Lock(this->m_UsbDevice, &irql, a3);
  m_UsbDevice = this->m_UsbDevice;
  m_ConfiguredPipes = this->m_ConfiguredPipes;
  this->m_ConfiguredPipes = 0LL;
  m_NumberOfConfiguredPipes = this->m_NumberOfConfiguredPipes;
  this->m_NumberOfConfiguredPipes = 0;
  if ( SLOBYTE(m_UsbDevice->m_ObjectFlags) < 0
    && (m_OwningThread = (FxVerifierLock *)m_UsbDevice[-1].m_InterfaceIterationLock.m_OwningThread) != 0LL )
  {
    FxVerifierLock::Unlock(m_OwningThread, irql, v4);
  }
  else
  {
    KeReleaseSpinLock(&m_UsbDevice->m_NPLock.m_Lock, irql);
  }
  if ( m_ConfiguredPipes )
  {
    v9 = 0;
    if ( m_NumberOfConfiguredPipes )
    {
      v10 = m_ConfiguredPipes;
      do
      {
        if ( !*v10 )
          break;
        (*v10)->DeleteObject(*v10);
        ++v9;
        ++v10;
      }
      while ( v9 < m_NumberOfConfiguredPipes );
    }
    FxPoolFree(m_ConfiguredPipes);
  }
}
