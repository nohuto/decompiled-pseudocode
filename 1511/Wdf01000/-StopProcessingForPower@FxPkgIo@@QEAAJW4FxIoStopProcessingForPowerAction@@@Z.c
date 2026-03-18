/*
 * XREFs of ?StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z @ 0x1C001DCA0
 * Callers:
 *     ?PowerGotoDx@FxPkgPnp@@IEAAXXZ @ 0x1C0014DC0 (-PowerGotoDx@FxPkgPnp@@IEAAXXZ.c)
 *     ?PnpCleanupForRemove@FxPkgPnp@@AEAAXE@Z @ 0x1C0084A4C (-PnpCleanupForRemove@FxPkgPnp@@AEAAXE@Z.c)
 *     ?PnpEventRemovedCommonCode@FxPkgPnp@@IEAAXXZ @ 0x1C0085560 (-PnpEventRemovedCommonCode@FxPkgPnp@@IEAAXXZ.c)
 *     ?PowerGotoD3Stopped@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0086890 (-PowerGotoD3Stopped@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerInitialSelfManagedIoFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0086F00 (-PowerInitialSelfManagedIoFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerStartSelfManagedIoFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0087270 (-PowerStartSelfManagedIoFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerStartSelfManagedIoFailedNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C00872A0 (-PowerStartSelfManagedIoFailedNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?StopProcessingForPower@FxIoQueue@@QEAAXW4FxIoStopProcessingForPowerAction@@@Z @ 0x1C001F510 (-StopProcessingForPower@FxIoQueue@@QEAAXW4FxIoStopProcessingForPowerAction@@@Z.c)
 *     ?StartPowerTransitionOff@FxIoQueue@@QEAAXXZ @ 0x1C001F5CC (-StartPowerTransitionOff@FxIoQueue@@QEAAXXZ.c)
 *     WPP_IFR_SF_Lq @ 0x1C0021C68 (WPP_IFR_SF_Lq.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C006F418 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C006F710 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C0070180 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 *     GetIoQueueList_ProcessQueueListEntry @ 0x1C0081CD8 (GetIoQueueList_ProcessQueueListEntry.c)
 */

__int64 __fastcall FxPkgIo::StopProcessingForPower(FxPkgIo *this, int Action, unsigned int a3, unsigned __int16 a4)
{
  FxDeviceBase *m_DeviceBase; // rax
  const void *id; // rax
  unsigned __int8 v8; // r8
  char m_ObjectFlags; // al
  _SINGLE_LIST_ENTRY *Next; // rbx
  unsigned __int8 v11; // bp
  void *v12; // r8
  _LIST_ENTRY *p_m_IoQueueListHead; // r14
  _LIST_ENTRY *Blink; // rsi
  unsigned int v15; // edx
  FxTagTracker *v16; // rcx
  _SINGLE_LIST_ENTRY *v17; // rdi
  bool v18; // zf
  _SINGLE_LIST_ENTRY *v19; // rsi
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *v22; // rsi
  _LIST_ENTRY *v23; // rcx
  const _GUID *RefType; // [rsp+20h] [rbp-48h]
  _SINGLE_LIST_ENTRY queueList; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int8 irql; // [rsp+78h] [rbp+10h] BYREF

  m_DeviceBase = this->m_DeviceBase;
  if ( m_DeviceBase->m_ObjectSize )
    id = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    id = 0LL;
  WPP_IFR_SF_Lq(this->m_Globals, Action, a3, a4, RefType, Action, id);
  m_ObjectFlags = this->m_ObjectFlags;
  Next = 0LL;
  queueList.Next = 0LL;
  if ( m_ObjectFlags < 0 && (Flink = this[-1].m_DynamicDispatchInfoListHead.Flink) != 0LL )
  {
    FxVerifierLock::Lock((FxVerifierLock *)Flink, &irql, v8);
    v11 = irql;
  }
  else
  {
    v11 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
    irql = v11;
  }
  this->m_PowerStateOn = 0;
  if ( Action >= 2 && Action <= 3 )
    this->m_QueuesAreShuttingDown = 1;
  p_m_IoQueueListHead = &this->m_IoQueueListHead;
  if ( *(FxDeviceBase **)&this->m_DeviceBase[1].m_ExecutionLevel == (FxDeviceBase *)&this->m_DeviceBase[1].m_ExecutionLevel )
  {
    Blink = this->m_IoQueueListHead.Blink;
    if ( Blink != p_m_IoQueueListHead )
    {
      do
      {
        if ( LODWORD(Blink[1].Flink) == 1 )
        {
          Blink[1].Blink = (_LIST_ENTRY *)Next;
          queueList.Next = (_SINGLE_LIST_ENTRY *)&Blink[1].Blink;
          v15 = _InterlockedIncrement((volatile signed __int32 *)&Blink[-56].Flink + 1);
          if ( SLOBYTE(Blink[-55].Flink) < 0 )
            v16 = (FxTagTracker *)Blink[-59].Blink;
          else
            v16 = 0LL;
          if ( v16 )
            FxTagTracker::UpdateTagHistory(
              v16,
              (void *)0x65776F70,
              1478,
              "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp",
              TagAddRef,
              v15);
          Next = queueList.Next;
        }
        Blink = Blink->Blink;
      }
      while ( Blink != p_m_IoQueueListHead );
      v11 = irql;
    }
  }
  else
  {
    v22 = p_m_IoQueueListHead->Flink;
    if ( p_m_IoQueueListHead->Flink != p_m_IoQueueListHead )
    {
      do
      {
        GetIoQueueList_ProcessQueueListEntry(v22, &queueList, v12);
        v22 = v22->Flink;
      }
      while ( v22 != p_m_IoQueueListHead );
      Next = queueList.Next;
    }
  }
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v23 = this[-1].m_DynamicDispatchInfoListHead.Flink) != 0LL )
    FxVerifierLock::Unlock((FxVerifierLock *)v23, v11, (unsigned __int8)v12);
  else
    KeReleaseSpinLock(&this->m_NPLock.m_Lock, v11);
  if ( Action == 1 )
  {
    v17 = Next;
    v18 = Next == 0LL;
    if ( !Next )
      goto LABEL_24;
    do
    {
      FxIoQueue::StartPowerTransitionOff((FxIoQueue *)&v17[-116]);
      v17 = v17->Next;
    }
    while ( v17 );
  }
  while ( 1 )
  {
    v18 = Next == 0LL;
LABEL_24:
    v19 = Next;
    if ( !v18 )
      Next = Next->Next;
    if ( !v19 )
      break;
    FxIoQueue::StopProcessingForPower((FxIoQueue *)&v19[-116], (FxIoStopProcessingForPowerAction)Action);
    v19->Next = 0LL;
    ((void (__fastcall *)(_SINGLE_LIST_ENTRY **, __int64, __int64, const char *))v19[-116].Next[2].Next)(
      &v19[-116].Next,
      1702326128LL,
      1248LL,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp");
  }
  return 0LL;
}
