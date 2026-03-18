/*
 * XREFs of ?ResetStateForRestart@FxPkgIo@@QEAAXXZ @ 0x1C0093D1C
 * Callers:
 *     ?PnpEventPdoRestart@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C0096FB0 (-PnpEventPdoRestart@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0010B20 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0010B50 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?SetState@FxIoQueue@@QEAAXW4_FX_IO_QUEUE_SET_STATE@@@Z @ 0x1C001DFE4 (-SetState@FxIoQueue@@QEAAXW4_FX_IO_QUEUE_SET_STATE@@@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0022210 (WPP_IFR_SF_q.c)
 *     ?GetIoQueueListLocked@FxPkgIo@@AEAAXPEAU_SINGLE_LIST_ENTRY@@W4FxIoIteratorList@@@Z @ 0x1C0065C90 (-GetIoQueueListLocked@FxPkgIo@@AEAAXPEAU_SINGLE_LIST_ENTRY@@W4FxIoIteratorList@@@Z.c)
 */

void __fastcall FxPkgIo::ResetStateForRestart(FxPkgIo *this)
{
  FxDeviceBase *m_DeviceBase; // rdx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned __int16 m_ObjectSize; // ax
  const void *v5; // rdx
  unsigned __int8 v6; // r8
  unsigned __int8 v7; // r8
  unsigned __int8 v8; // r8
  _SINGLE_LIST_ENTRY *Next; // rbx
  _SINGLE_LIST_ENTRY *v10; // rdi
  unsigned __int8 v11; // r8
  _SINGLE_LIST_ENTRY *v12; // r14
  unsigned __int8 v13; // dl
  unsigned __int8 v14; // r8
  unsigned __int8 irql; // [rsp+50h] [rbp+8h] BYREF
  _SINGLE_LIST_ENTRY queueList; // [rsp+58h] [rbp+10h] BYREF

  m_DeviceBase = this->m_DeviceBase;
  m_Globals = this->m_Globals;
  m_ObjectSize = m_DeviceBase->m_ObjectSize;
  v5 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !m_ObjectSize )
    v5 = 0LL;
  WPP_IFR_SF_q(m_Globals, 4u, 0xDu, 0x20u, WPP_FxPkgIo_cpp_Traceguids, v5);
  queueList.Next = 0LL;
  FxNonPagedObject::Lock(this, &irql, v6);
  FxPkgIo::GetIoQueueListLocked(this, &queueList, (void *)1);
  FxNonPagedObject::Unlock(this, irql, v7);
  Next = queueList.Next;
  while ( 1 )
  {
    v12 = Next;
    if ( Next )
      Next = Next->Next;
    if ( !v12 )
      break;
    v10 = v12 - 116;
    FxNonPagedObject::Lock((FxNonPagedObject *)&v12[-116], (unsigned __int8 *)&queueList, v8);
    if ( !BYTE2(v12[-99].Next) )
      LODWORD(v10[22].Next) = 1;
    FxIoQueue::SetState((FxIoQueue *)&v12[-116], FxIoQueueClearShutdown|0x1);
    FxNonPagedObject::Unlock((FxNonPagedObject *)&v12[-116], (unsigned __int8)queueList.Next, v11);
    v12->Next = 0LL;
    ((void (__fastcall *)(_SINGLE_LIST_ENTRY **, __int64, __int64, const char *))v10->Next[2].Next)(
      &v12[-116].Next,
      1702326128LL,
      1378LL,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp");
  }
  FxNonPagedObject::Lock(this, &irql, v8);
  v13 = irql;
  *(_WORD *)&this->m_PowerStateOn = 1;
  FxNonPagedObject::Unlock(this, v13, v14);
}
