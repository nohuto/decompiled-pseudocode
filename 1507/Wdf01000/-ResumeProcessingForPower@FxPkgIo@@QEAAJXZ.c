/*
 * XREFs of ?ResumeProcessingForPower@FxPkgIo@@QEAAJXZ @ 0x1C000AF00
 * Callers:
 *     ?PowerStartSelfManagedIo@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0006AB0 (-PowerStartSelfManagedIo@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerD0StartingStartSelfManagedIo@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C000ACB0 (-PowerD0StartingStartSelfManagedIo@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerStartSelfManagedIoNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C009C510 (-PowerStartSelfManagedIoNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0004B50 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C0031E08 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003244C (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 */

__int64 __fastcall FxPkgIo::ResumeProcessingForPower(FxPkgIo *this)
{
  FxDeviceBase *m_DeviceBase; // rax
  const void *_a1; // rax
  unsigned __int8 v4; // r8
  char m_ObjectFlags; // al
  _SINGLE_LIST_ENTRY *Next; // rbx
  unsigned __int8 v7; // dl
  unsigned __int8 v8; // r8
  _LIST_ENTRY *Blink; // rsi
  unsigned int v10; // edx
  char v11; // al
  unsigned __int8 v12; // r8
  _SINGLE_LIST_ENTRY *i; // rdi
  _SINGLE_LIST_ENTRY *v14; // rsi
  _SINGLE_LIST_ENTRY *v15; // rdi
  _SINGLE_LIST_ENTRY *v16; // rsi
  unsigned __int8 v18; // r8
  unsigned __int16 v19; // r9
  unsigned __int8 v20; // dl
  unsigned __int16 v21; // r9
  _LIST_ENTRY *Flink; // rcx
  FxTagTracker *v23; // rcx
  _LIST_ENTRY *v24; // rcx
  FxVerifierLock *v25; // rcx
  FxVerifierLock *v26; // rcx
  unsigned __int8 irql; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int8 PreviousIrql; // [rsp+68h] [rbp+10h] BYREF
  unsigned __int8 v29; // [rsp+70h] [rbp+18h] BYREF
  _SINGLE_LIST_ENTRY queueList; // [rsp+78h] [rbp+20h]

  m_DeviceBase = this->m_DeviceBase;
  if ( m_DeviceBase->m_ObjectSize )
    _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    _a1 = 0LL;
  WPP_IFR_SF_q(
    this->m_Globals,
    4u,
    0xDu,
    0x1Fu,
    (const _GUID *)&FxObject::`vftable'.FxPoolFrameworks.PagedLock.m_Lock,
    _a1);
  m_ObjectFlags = this->m_ObjectFlags;
  Next = 0LL;
  queueList.Next = 0LL;
  if ( m_ObjectFlags < 0 && (Flink = this[-1].m_DynamicDispatchInfoListHead.Flink) != 0LL )
  {
    FxVerifierLock::Lock((FxVerifierLock *)Flink, &irql, v4);
    v7 = irql;
  }
  else
  {
    v7 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
    irql = v7;
  }
  Blink = this->m_IoQueueListHead.Blink;
  if ( Blink != &this->m_IoQueueListHead )
  {
    do
    {
      if ( LODWORD(Blink[1].Flink) == 1 )
      {
        Blink[1].Blink = (_LIST_ENTRY *)Next;
        queueList.Next = (_SINGLE_LIST_ENTRY *)&Blink[1].Blink;
        v10 = _InterlockedIncrement((volatile signed __int32 *)&Blink[-56].Flink + 1);
        if ( SLOBYTE(Blink[-55].Flink) < 0 )
        {
          v23 = (FxTagTracker *)Blink[-59].Blink;
          if ( v23 )
            FxTagTracker::UpdateTagHistory(
              v23,
              (void *)0x65776F70,
              1478,
              "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp",
              TagAddRef,
              v10);
        }
        Next = queueList.Next;
      }
      Blink = Blink->Blink;
    }
    while ( Blink != &this->m_IoQueueListHead );
    v7 = irql;
  }
  v11 = this->m_ObjectFlags;
  *(_WORD *)&this->m_PowerStateOn = 1;
  if ( v11 < 0 && (v24 = this[-1].m_DynamicDispatchInfoListHead.Flink) != 0LL )
    FxVerifierLock::Unlock((FxVerifierLock *)v24, v7, v8);
  else
    KeReleaseSpinLock(&this->m_NPLock.m_Lock, v7);
  for ( i = Next; i; i = i->Next )
  {
    v14 = i - 116;
    if ( BYTE2(i[-99].Next) )
    {
      FxNonPagedObject::Lock((FxNonPagedObject *)&i[-116], &PreviousIrql, v12);
      if ( LODWORD(v14[22].Next) == 1 )
      {
        if ( SLOBYTE(v14[3].Next) < 0 && (v25 = (FxVerifierLock *)i[-119].Next) != 0LL )
          FxVerifierLock::Unlock(v25, PreviousIrql, v18);
        else
          KeReleaseSpinLock((PKSPIN_LOCK)&v14[14], PreviousIrql);
      }
      else
      {
        v20 = PreviousIrql;
        LODWORD(v14[22].Next) = 10;
        FxIoQueue::DispatchEvents((FxIoQueue *)&i[-116], v20, 0LL, v19);
      }
    }
  }
  v15 = Next;
  if ( Next )
  {
    Next = Next->Next;
    queueList.Next = Next;
  }
  while ( v15 )
  {
    v16 = v15 - 116;
    if ( BYTE2(v15[-99].Next) )
    {
      if ( SLOBYTE(v16[3].Next) < 0 && (v26 = (FxVerifierLock *)v15[-119].Next) != 0LL )
        FxVerifierLock::Lock(v26, &v29, v12);
      else
        v29 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&v16[14]);
      if ( SLODWORD(v16[28].Next) > 0 )
      {
        BYTE4(v16[46].Next) = 1;
        BYTE5(v16[46].Next) = 0;
      }
      FxIoQueue::DispatchEvents((FxIoQueue *)&v15[-116], v29, 0LL, v21);
      Next = queueList.Next;
    }
    v15->Next = 0LL;
    ((void (__fastcall *)(_SINGLE_LIST_ENTRY **, __int64, __int64, const char *))v16->Next[2].Next)(
      &v15[-116].Next,
      1702326128LL,
      1327LL,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp");
    v15 = Next;
    if ( Next )
    {
      Next = Next->Next;
      queueList.Next = Next;
    }
  }
  return 0LL;
}
