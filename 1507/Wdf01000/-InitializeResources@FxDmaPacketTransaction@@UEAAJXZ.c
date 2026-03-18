/*
 * XREFs of ?InitializeResources@FxDmaPacketTransaction@@UEAAJXZ @ 0x1C0061840
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 */

__int64 __fastcall FxDmaPacketTransaction::InitializeResources(
        FxDmaPacketTransaction *this,
        __int64 a2,
        unsigned __int8 a3)
{
  unsigned __int8 v4; // r8
  char m_ObjectFlags; // al
  FxVerifierLock *CurrentStagingThread; // rcx
  unsigned __int8 oldIrql; // [rsp+30h] [rbp+8h] BYREF

  this->m_DeviceAddressOffset = 0;
  FxNonPagedObject::Lock(this, &oldIrql, a3);
  m_ObjectFlags = this->m_ObjectFlags;
  this->m_IsCancelled = 0;
  if ( m_ObjectFlags < 0
    && (CurrentStagingThread = (FxVerifierLock *)this[-1].m_TransferState.CurrentStagingThread) != 0LL )
  {
    FxVerifierLock::Unlock(CurrentStagingThread, oldIrql, v4);
  }
  else
  {
    KeReleaseSpinLock(&this->m_NPLock.m_Lock, oldIrql);
  }
  return 0LL;
}
