/*
 * XREFs of ?AddIoQueue@FxPkgIo@@AEAAXPEAVFxIoQueue@@@Z @ 0x1C000AE00
 * Callers:
 *     ?CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@PEAPEAVFxIoQueue@@@Z @ 0x1C000B290 (-CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@P.c)
 * Callees:
 *     ?SetState@FxIoQueue@@QEAAXW4_FX_IO_QUEUE_SET_STATE@@@Z @ 0x1C000BEE0 (-SetState@FxIoQueue@@QEAAXW4_FX_IO_QUEUE_SET_STATE@@@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C0031E08 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 */

void __fastcall FxPkgIo::AddIoQueue(FxPkgIo *this, FxIoQueue *IoQueue, unsigned __int8 a3)
{
  FxCxDeviceInfo *m_CxDeviceInfo; // rax
  _LIST_ENTRY *p_m_IoQueueListHead; // r14
  char Index; // si
  unsigned __int8 v8; // bp
  unsigned __int8 v9; // r8
  _LIST_ENTRY *i; // rcx
  _LIST_ENTRY *v11; // rdx
  FxIoQueueNode *p_m_IoPkgListNode; // rax
  _LIST_ENTRY *v13; // rdx
  char v14; // al
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *v16; // rcx
  unsigned __int8 irql; // [rsp+40h] [rbp+8h] BYREF

  m_CxDeviceInfo = IoQueue->m_CxDeviceInfo;
  p_m_IoQueueListHead = &this->m_IoQueueListHead;
  if ( m_CxDeviceInfo )
    Index = m_CxDeviceInfo->Index;
  else
    Index = 0;
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && (Flink = this[-1].m_DynamicDispatchInfoListHead.Flink) != 0LL )
  {
    FxVerifierLock::Lock((FxVerifierLock *)Flink, &irql, a3);
    v8 = irql;
  }
  else
  {
    v8 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
  }
  for ( i = p_m_IoQueueListHead->Blink; i != p_m_IoQueueListHead; i = i->Blink )
  {
    if ( LODWORD(i[1].Flink) == 1 )
    {
      v13 = i[-34].Flink;
      v14 = v13 ? LOBYTE(v13[5].Blink) : 0;
      if ( v14 == Index || v14 < Index )
        break;
    }
  }
  v11 = i->Flink;
  p_m_IoPkgListNode = &IoQueue->m_IoPkgListNode;
  IoQueue->m_IoPkgListNode.m_ListEntry.Flink = i->Flink;
  IoQueue->m_IoPkgListNode.m_ListEntry.Blink = i;
  if ( v11->Blink != i )
    __fastfail(3u);
  v11->Blink = &p_m_IoPkgListNode->m_ListEntry;
  i->Flink = &p_m_IoPkgListNode->m_ListEntry;
  if ( this->m_PowerStateOn )
  {
    if ( IoQueue->m_PowerManaged )
      IoQueue->m_PowerState = FxIoQueuePowerOn;
  }
  else
  {
    if ( IoQueue->m_PowerManaged )
      IoQueue->m_PowerState = FxIoQueuePowerOff;
    if ( this->m_QueuesAreShuttingDown )
      FxIoQueue::SetState(IoQueue, FxIoQueueSetShutdown|0x2);
  }
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v16 = this[-1].m_DynamicDispatchInfoListHead.Flink) != 0LL )
    FxVerifierLock::Unlock((FxVerifierLock *)v16, v8, v9);
  else
    KeReleaseSpinLock(&this->m_NPLock.m_Lock, v8);
}
