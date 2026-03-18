/*
 * XREFs of ??0FxTagTracker@@AEAA@PEAU_FX_DRIVER_GLOBALS@@W4FxTagTrackerType@@EPEAVFxObject@@PEAX@Z @ 0x1C007CE04
 * Callers:
 *     ?CreateAndInitialize@FxTagTracker@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@W4FxTagTrackerType@@EPEAVFxObject@@PEAX@Z @ 0x1C007D04C (-CreateAndInitialize@FxTagTracker@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@W4FxTagTrackerType@@EPEAV.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009FC0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C002F428 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     memset @ 0x1C003C780 (memset.c)
 */

void __fastcall FxTagTracker::FxTagTracker(
        FxTagTracker *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxTagTrackerType Type,
        unsigned __int8 CaptureStack,
        FxObject *Owner)
{
  FxDriverGlobalsDebugExtension *DebugExtension; // rbx
  unsigned __int64 *p_m_Lock; // rsi
  KIRQL v9; // al
  _LIST_ENTRY *p_AllocatedTagTrackersListHead; // rbx
  _LIST_ENTRY *p_m_TrackerEntry; // rdx
  _LIST_ENTRY *Blink; // rcx
  FxTagTrackingBlock *v13; // rax
  FxTagTrackingBlock *v14; // rcx
  void *Caller; // [rsp+38h] [rbp+0h]

  this->m_FailedCount = 0;
  this->m_Globals = FxDriverGlobals;
  this->m_TrackerType = Type;
  this->m_CaptureStack = CaptureStack;
  this->m_OwningObject = Owner;
  this->m_SpinLock.m_Lock = 0LL;
  this->m_SpinLock.m_DbgFlagIsInitialized = 1;
  this->m_Next = 0LL;
  `vector constructor iterator'(
    (char *)this->m_TagHistory,
    0x30uLL,
    0x19uLL,
    (void *(__fastcall *)(void *))FxTagHistory::FxTagHistory);
  this->m_CurRefHistory = 0;
  memset(this->m_TagHistory, 0, sizeof(this->m_TagHistory));
  if ( this->m_TrackerType == FxTagTrackerTypeHandle )
  {
    DebugExtension = this->m_Globals->DebugExtension;
    p_m_Lock = &DebugExtension->AllocatedTagTrackersLock.m_Lock;
    v9 = KeAcquireSpinLockRaiseToDpc(&DebugExtension->AllocatedTagTrackersLock.m_Lock);
    p_AllocatedTagTrackersListHead = &DebugExtension->AllocatedTagTrackersListHead;
    p_m_TrackerEntry = &this->m_TrackerEntry;
    Blink = p_AllocatedTagTrackersListHead->Blink;
    if ( Blink->Flink != p_AllocatedTagTrackersListHead )
      __fastfail(3u);
    this->m_TrackerEntry.Blink = Blink;
    p_m_TrackerEntry->Flink = p_AllocatedTagTrackersListHead;
    Blink->Flink = p_m_TrackerEntry;
    p_AllocatedTagTrackersListHead->Blink = p_m_TrackerEntry;
    KeReleaseSpinLock(p_m_Lock, v9);
    v13 = (FxTagTrackingBlock *)FxPoolAllocator(
                                  FxDriverGlobals,
                                  &FxDriverGlobals->FxPoolFrameworks,
                                  ExDefaultNonPagedPoolType,
                                  0x30uLL,
                                  FxDriverGlobals->Tag,
                                  Caller);
    v14 = v13;
    if ( v13 )
    {
      v13->Next = 0LL;
      v13->Tag = 0LL;
      v13->File = 0LL;
      v13->Line = 0;
      v13->StackFrames = 0LL;
      v13->TimeLocked.QuadPart = MEMORY[0xFFFFF78000000320];
    }
    else
    {
      v14 = 0LL;
    }
    this->m_Next = v14;
    if ( !v14 )
      this->m_FailedCount = 1;
  }
}
