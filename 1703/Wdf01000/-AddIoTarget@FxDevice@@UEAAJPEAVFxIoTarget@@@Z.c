/*
 * XREFs of ?AddIoTarget@FxDevice@@UEAAJPEAVFxIoTarget@@@Z @ 0x1C001EF30
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C003FAE4 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 */

__int64 __fastcall FxDevice::AddIoTarget(FxDevice *this, FxIoTarget *IoTarget)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r15
  FxSpinLockTransactionedList *p_m_IoTargetsList; // rbx
  FxTransactionedEntry *p_m_TransactionedEntry; // rsi
  __int64 v7; // r8
  int v8; // ebp
  _LIST_ENTRY *v9; // rcx
  unsigned int RefCount; // ecx
  _DEVICE_OBJECT *m_InStackDevice; // rax
  _LIST_ENTRY *Blink; // rdx
  _LIST_ENTRY *p_m_TransactionLink; // rax
  char v15; // [rsp+50h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  p_m_IoTargetsList = &this->m_IoTargetsList;
  p_m_TransactionedEntry = &IoTarget->m_TransactionedEntry;
  this->m_IoTargetsList.AcquireLock(&this->m_IoTargetsList, m_Globals, (unsigned __int8 *)&v15);
  if ( p_m_IoTargetsList->m_Deleting )
  {
    v8 = -1073741436;
  }
  else
  {
    v8 = p_m_IoTargetsList->ProcessAdd(p_m_IoTargetsList, p_m_TransactionedEntry);
    if ( v8 >= 0 )
    {
      if ( p_m_IoTargetsList->m_ListLockedRecursionCount )
      {
        p_m_TransactionedEntry->m_Transaction = FxTransactionActionAdd;
        Blink = p_m_IoTargetsList->m_TransactionHead.Blink;
        p_m_TransactionLink = &p_m_TransactionedEntry->m_TransactionLink;
        if ( Blink->Flink != &p_m_IoTargetsList->m_TransactionHead )
          __fastfail(3u);
        p_m_TransactionLink->Flink = &p_m_IoTargetsList->m_TransactionHead;
        p_m_TransactionedEntry->m_TransactionLink.Blink = Blink;
        Blink->Flink = p_m_TransactionLink;
        p_m_IoTargetsList->m_TransactionHead.Blink = p_m_TransactionLink;
      }
      else
      {
        v9 = p_m_IoTargetsList->m_ListHead.Blink;
        if ( v9->Flink != &p_m_IoTargetsList->m_ListHead )
          __fastfail(3u);
        p_m_TransactionedEntry->m_ListLink.Flink = &p_m_IoTargetsList->m_ListHead;
        p_m_TransactionedEntry->m_ListLink.Blink = v9;
        v9->Flink = &p_m_TransactionedEntry->m_ListLink;
        p_m_IoTargetsList->m_ListHead.Blink = &p_m_TransactionedEntry->m_ListLink;
        p_m_IoTargetsList->EntryAdded(p_m_IoTargetsList, p_m_TransactionedEntry);
      }
    }
  }
  LOBYTE(v7) = v15;
  p_m_IoTargetsList->ReleaseLock(p_m_IoTargetsList, m_Globals, v7);
  if ( v8 >= 0 )
  {
    IoTarget->m_AddedToDeviceList = 1;
    RefCount = _InterlockedIncrement(&IoTarget->m_Refcnt);
    if ( SLOBYTE(IoTarget->m_ObjectFlags) < 0 )
      m_InStackDevice = IoTarget[-1].m_InStackDevice;
    else
      m_InStackDevice = 0LL;
    if ( m_InStackDevice )
      FxTagTracker::UpdateTagHistory(
        (FxTagTracker *)m_InStackDevice,
        this,
        1812,
        "minkernel\\wdf\\framework\\shared\\core\\fxdevice.cpp",
        TagAddRef,
        RefCount);
  }
  return (unsigned int)v8;
}
