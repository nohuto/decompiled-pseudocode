/*
 * XREFs of ?FxPoolInsertNonPagedAllocateTracker@@YAXPEAUFX_POOL@@PEAUFX_POOL_TRACKER@@_KKPEAX@Z @ 0x1C0079C68
 * Callers:
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0004C90 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z @ 0x1C00057E0 (-DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009FC0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?InitObjectAlloc@FxLookasideList@@IEAAPEAXPEAX@Z @ 0x1C0011DA4 (-InitObjectAlloc@FxLookasideList@@IEAAPEAXPEAX@Z.c)
 *     imp_WdfDeviceWdmDispatchIrpToIoQueue @ 0x1C001AFB0 (imp_WdfDeviceWdmDispatchIrpToIoQueue.c)
 *     ?AllocateRequestMemory@FxDevice@@QEAAPEAXPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C001FFCC (-AllocateRequestMemory@FxDevice@@QEAAPEAXPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxPoolInsertNonPagedAllocateTracker(
        FX_POOL *Pool,
        FX_POOL_TRACKER *Tracker,
        unsigned __int64 Size,
        unsigned int Tag,
        void *Caller)
{
  KIRQL v8; // r9
  _LIST_ENTRY *Blink; // rdx
  unsigned __int64 NonPagedBytes; // rdx
  unsigned int NonPagedAllocations; // eax

  Tracker->PoolType = ExDefaultNonPagedPoolType;
  Tracker->Pool = Pool;
  Tracker->CallersAddress = Caller;
  Tracker->Tag = Tag;
  Tracker->Size = Size;
  v8 = KeAcquireSpinLockRaiseToDpc(&Pool->NonPagedLock.m_Lock);
  Blink = Pool->NonPagedHead.Blink;
  if ( Blink->Flink != &Pool->NonPagedHead )
    __fastfail(3u);
  Tracker->Link.Flink = &Pool->NonPagedHead;
  Tracker->Link.Blink = Blink;
  Blink->Flink = &Tracker->Link;
  Pool->NonPagedHead.Blink = &Tracker->Link;
  Pool->NonPagedBytes += Size;
  ++Pool->NonPagedAllocations;
  NonPagedBytes = Pool->NonPagedBytes;
  NonPagedAllocations = Pool->NonPagedAllocations;
  if ( NonPagedBytes > Pool->PeakNonPagedBytes )
    Pool->PeakNonPagedBytes = NonPagedBytes;
  if ( NonPagedAllocations > Pool->PeakNonPagedAllocations )
    Pool->PeakNonPagedAllocations = NonPagedAllocations;
  KeReleaseSpinLock(&Pool->NonPagedLock.m_Lock, v8);
}
