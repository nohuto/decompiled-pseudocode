/*
 * XREFs of ?ResetStateForRestart@FxPkgIo@@QEAAXXZ @ 0x1C008FCB8
 * Callers:
 *     ?PnpEventPdoRestart@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C0092D10 (-PnpEventPdoRestart@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000CC70 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000CCA0 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_q @ 0x1C001CF1C (WPP_IFR_SF_q.c)
 *     ?SetState@FxIoQueue@@QEAAXW4_FX_IO_QUEUE_SET_STATE@@@Z @ 0x1C001DA04 (-SetState@FxIoQueue@@QEAAXW4_FX_IO_QUEUE_SET_STATE@@@Z.c)
 *     ?GetIoQueueListLocked@FxPkgIo@@AEAAXPEAU_SINGLE_LIST_ENTRY@@W4FxIoIteratorList@@@Z @ 0x1C0062B74 (-GetIoQueueListLocked@FxPkgIo@@AEAAXPEAU_SINGLE_LIST_ENTRY@@W4FxIoIteratorList@@@Z.c)
 */

void __fastcall FxPkgIo::ResetStateForRestart(FxPkgIo *this)
{
  FxDeviceBase *m_DeviceBase; // rax
  const void *_a1; // rax
  unsigned __int8 v4; // r8
  unsigned __int8 v5; // r8
  unsigned __int8 v6; // r8
  _SINGLE_LIST_ENTRY *Next; // rbx
  _SINGLE_LIST_ENTRY *v8; // rsi
  unsigned __int8 v9; // r8
  _SINGLE_LIST_ENTRY *v10; // r14
  unsigned __int8 v11; // dl
  unsigned __int8 v12; // r8
  unsigned __int8 irql; // [rsp+50h] [rbp+8h] BYREF
  _SINGLE_LIST_ENTRY queueList; // [rsp+58h] [rbp+10h] BYREF

  m_DeviceBase = this->m_DeviceBase;
  if ( m_DeviceBase->m_ObjectSize )
    _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    _a1 = 0LL;
  WPP_IFR_SF_q(this->m_Globals, 4u, 0xDu, 0x20u, WPP_FxPkgIo_cpp_Traceguids, _a1);
  queueList.Next = 0LL;
  FxNonPagedObject::Lock(this, &irql, v4);
  FxPkgIo::GetIoQueueListLocked(this, &queueList, (void *)1);
  FxNonPagedObject::Unlock(this, irql, v5);
  Next = queueList.Next;
  while ( 1 )
  {
    v10 = Next;
    if ( Next )
      Next = Next->Next;
    if ( !v10 )
      break;
    v8 = v10 - 116;
    FxNonPagedObject::Lock((FxNonPagedObject *)&v10[-116], (unsigned __int8 *)&queueList, v6);
    if ( !BYTE2(v10[-99].Next) )
      LODWORD(v8[22].Next) = 1;
    FxIoQueue::SetState((FxIoQueue *)&v10[-116], FxIoQueueClearShutdown|0x1);
    FxNonPagedObject::Unlock((FxNonPagedObject *)&v10[-116], (unsigned __int8)queueList.Next, v9);
    v10->Next = 0LL;
    ((void (__fastcall *)(_SINGLE_LIST_ENTRY **, __int64, __int64, const char *))v8->Next[2].Next)(
      &v10[-116].Next,
      1702326128LL,
      1378LL,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp");
  }
  FxNonPagedObject::Lock(this, &irql, v6);
  v11 = irql;
  *(_WORD *)&this->m_PowerStateOn = 1;
  FxNonPagedObject::Unlock(this, v11, v12);
}
