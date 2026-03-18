/*
 * XREFs of ?ResetStateForRestart@FxPkgIo@@QEAAXXZ @ 0x1C0095090
 * Callers:
 *     ?PnpEventPdoRestart@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C0099FC0 (-PnpEventPdoRestart@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     ?SetState@FxIoQueue@@QEAAXW4_FX_IO_QUEUE_SET_STATE@@@Z @ 0x1C000BEE0 (-SetState@FxIoQueue@@QEAAXW4_FX_IO_QUEUE_SET_STATE@@@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?GetIoQueueListLocked@FxPkgIo@@AEAAXPEAU_SINGLE_LIST_ENTRY@@W4FxIoIteratorList@@@Z @ 0x1C005BDB8 (-GetIoQueueListLocked@FxPkgIo@@AEAAXPEAU_SINGLE_LIST_ENTRY@@W4FxIoIteratorList@@@Z.c)
 */

void __fastcall FxPkgIo::ResetStateForRestart(FxPkgIo *this)
{
  FxDeviceBase *m_DeviceBase; // rax
  const void *_a1; // rax
  unsigned __int8 v4; // r8
  unsigned __int8 v5; // r8
  _LIST_ENTRY *Flink; // rcx
  unsigned __int8 v7; // r8
  _SINGLE_LIST_ENTRY *Next; // rbx
  _SINGLE_LIST_ENTRY *v9; // rsi
  unsigned __int8 v10; // r8
  FxVerifierLock *v11; // rcx
  _SINGLE_LIST_ENTRY *v12; // r14
  unsigned __int8 v13; // r8
  char m_ObjectFlags; // al
  _LIST_ENTRY *v15; // rcx
  unsigned __int8 irql; // [rsp+60h] [rbp+30h] BYREF
  _SINGLE_LIST_ENTRY queueList; // [rsp+68h] [rbp+38h] BYREF

  m_DeviceBase = this->m_DeviceBase;
  if ( m_DeviceBase->m_ObjectSize )
    _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    _a1 = 0LL;
  WPP_IFR_SF_q(
    this->m_Globals,
    4u,
    0xDu,
    0x20u,
    (const _GUID *)&FxObject::`vftable'.FxPoolFrameworks.PagedLock.m_Lock,
    _a1);
  queueList.Next = 0LL;
  FxNonPagedObject::Lock(this, &irql, v4);
  FxPkgIo::GetIoQueueListLocked(this, &queueList, (void *)1);
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && (Flink = this[-1].m_DynamicDispatchInfoListHead.Flink) != 0LL )
    FxVerifierLock::Unlock((FxVerifierLock *)Flink, irql, v5);
  else
    KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
  Next = queueList.Next;
  while ( 1 )
  {
    v12 = Next;
    if ( Next )
      Next = Next->Next;
    if ( !v12 )
      break;
    v9 = v12 - 116;
    FxNonPagedObject::Lock((FxNonPagedObject *)&v12[-116], (unsigned __int8 *)&queueList, v7);
    if ( !BYTE2(v12[-99].Next) )
      LODWORD(v9[22].Next) = 1;
    FxIoQueue::SetState((FxIoQueue *)&v12[-116], FxIoQueueClearShutdown|0x1);
    if ( SLOBYTE(v9[3].Next) < 0 && (v11 = (FxVerifierLock *)v12[-119].Next) != 0LL )
      FxVerifierLock::Unlock(v11, (KIRQL)queueList.Next, v10);
    else
      KeReleaseSpinLock((PKSPIN_LOCK)&v9[14], (KIRQL)queueList.Next);
    v12->Next = 0LL;
    ((void (__fastcall *)(_SINGLE_LIST_ENTRY **, __int64, __int64, const char *))v9->Next[2].Next)(
      &v12[-116].Next,
      1702326128LL,
      1378LL,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp");
  }
  FxNonPagedObject::Lock(this, &irql, v7);
  m_ObjectFlags = this->m_ObjectFlags;
  *(_WORD *)&this->m_PowerStateOn = 1;
  if ( m_ObjectFlags < 0 && (v15 = this[-1].m_DynamicDispatchInfoListHead.Flink) != 0LL )
    FxVerifierLock::Unlock((FxVerifierLock *)v15, irql, v13);
  else
    KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
}
