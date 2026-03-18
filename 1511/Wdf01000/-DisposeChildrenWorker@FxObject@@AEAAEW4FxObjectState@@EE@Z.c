/*
 * XREFs of ?DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z @ 0x1C0009210
 * Callers:
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0007DA0 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?DeleteObject@FxObject@@UEAAXXZ @ 0x1C0008CD0 (-DeleteObject@FxObject@@UEAAXXZ.c)
 *     ?PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z @ 0x1C0023380 (-PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z.c)
 *     ?DeferredDisposeWorkItem@FxObject@@AEAAXXZ @ 0x1C006FDFC (-DeferredDisposeWorkItem@FxObject@@AEAAXXZ.c)
 * Callees:
 *     ?CallCleanupCallbacks@FxObject@@AEAAXXZ @ 0x1C0023300 (-CallCleanupCallbacks@FxObject@@AEAAXXZ.c)
 *     ?PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z @ 0x1C0023380 (-PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z.c)
 *     ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C00233F4 (-SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     ?PerformEarlyDisposeWorkerAndUnlock@FxObject@@AEAAEEE@Z @ 0x1C0056A54 (-PerformEarlyDisposeWorkerAndUnlock@FxObject@@AEAAEEE@Z.c)
 *     ?TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z @ 0x1C006EA24 (-TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z.c)
 *     ?QueueDeferredDisposeLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C006FEAC (-QueueDeferredDisposeLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 */

unsigned __int8 __fastcall FxObject::DisposeChildrenWorker(
        FxObject *this,
        FxObjectState NewDeferedState,
        KIRQL OldIrql,
        unsigned __int8 CanDefer)
{
  FxObject *v7; // rbx
  _LIST_ENTRY *p_m_ChildListHead; // rdi
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *v10; // rsi
  KIRQL v12; // al
  unsigned __int8 v13; // dl
  unsigned __int8 v14; // al
  KIRQL v15; // di
  KIRQL v16; // [rsp+50h] [rbp+8h]

  v7 = this;
  if ( (this->m_ObjectFlags & 0x20) != 0 && OldIrql )
  {
    if ( !CanDefer )
    {
      FxObject::SetObjectStateLocked(this, NewDeferedState);
      goto LABEL_21;
    }
LABEL_19:
    FxObject::QueueDeferredDisposeLocked(this, NewDeferedState);
LABEL_21:
    KeReleaseSpinLock(&v7->m_SpinLock.m_Lock, OldIrql);
    return 0;
  }
  p_m_ChildListHead = &this->m_ChildListHead;
  Flink = this->m_ChildListHead.Flink;
  if ( Flink != p_m_ChildListHead )
  {
    while ( !OldIrql || ((__int64)Flink[-3].Flink & 0x10) == 0 )
    {
      Flink = Flink->Flink;
      if ( Flink == p_m_ChildListHead )
        goto LABEL_3;
    }
    this = v7;
    if ( !CanDefer )
    {
      FxObject::SetObjectStateLocked(v7, NewDeferedState);
      goto LABEL_21;
    }
    goto LABEL_19;
  }
LABEL_3:
  KeReleaseSpinLock(&v7->m_SpinLock.m_Lock, OldIrql);
  v10 = p_m_ChildListHead->Flink;
  if ( p_m_ChildListHead->Flink == p_m_ChildListHead )
  {
LABEL_4:
    if ( ((v7->m_ObjectFlags & 0x800) == 0 || v7->Dispose(v7)) && (v7->m_ObjectFlags & 0x400) != 0 )
      FxObject::CallCleanupCallbacks(v7);
    return 1;
  }
  else
  {
    while ( 1 )
    {
      v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&v10[-1]);
      v16 = v12;
      if ( WORD1(v10[-3].Flink) != 1 )
      {
        switch ( WORD1(v10[-3].Flink) )
        {
          case 5:
            v13 = v12;
            goto LABEL_13;
          case 7:
            v14 = FxObject::PerformEarlyDisposeWorkerAndUnlock((FxObject *)&v10[-5].Blink, v12, 0);
            goto LABEL_14;
          default:
            FxObject::TraceDroppedEvent((FxObject *)&v10[-5].Blink, FxObjectDroppedEventPerformEarlyDispose);
            KeReleaseSpinLock((PKSPIN_LOCK)&v10[-1], v16);
            goto LABEL_15;
        }
      }
      FxObject::SetObjectStateLocked((FxObject *)&v10[-5].Blink, FxObjectStateDisposingEarly);
      v13 = v16;
LABEL_13:
      v14 = FxObject::PerformDisposingDisposeChildrenLocked((FxObject *)&v10[-5].Blink, v13, 0);
LABEL_14:
      if ( !v14 )
        break;
LABEL_15:
      v10 = v10->Flink;
      if ( v10 == p_m_ChildListHead )
        goto LABEL_4;
    }
    v15 = KeAcquireSpinLockRaiseToDpc(&v7->m_SpinLock.m_Lock);
    if ( CanDefer )
      FxObject::QueueDeferredDisposeLocked(v7, NewDeferedState);
    else
      FxObject::SetObjectStateLocked(v7, NewDeferedState);
    KeReleaseSpinLock(&v7->m_SpinLock.m_Lock, v15);
    return 0;
  }
}
