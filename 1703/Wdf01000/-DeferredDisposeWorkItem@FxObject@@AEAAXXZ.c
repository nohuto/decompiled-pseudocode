/*
 * XREFs of ?DeferredDisposeWorkItem@FxObject@@AEAAXXZ @ 0x1C008248C
 * Callers:
 *     ?DrainListLocked@FxDisposeList@@AEAAXPEAE@Z @ 0x1C007F1C8 (-DrainListLocked@FxDisposeList@@AEAAXPEAE@Z.c)
 * Callees:
 *     ?DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z @ 0x1C000C500 (-DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z.c)
 *     ?ProcessDestroy@FxObject@@AEAAXXZ @ 0x1C000C660 (-ProcessDestroy@FxObject@@AEAAXXZ.c)
 *     ?PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z @ 0x1C001CF08 (-PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z.c)
 *     ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C001CF80 (-SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     ?DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z @ 0x1C003E068 (-DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z.c)
 */

void __fastcall FxObject::DeferredDisposeWorkItem(FxObject *this)
{
  KIRQL v2; // al
  KIRQL v3; // di
  bool v4; // si
  FxObjectDebugLeakDetection *v5; // rdx
  unsigned int v6; // r8d

  v2 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
  v3 = v2;
  if ( this->m_ObjectState == 5 )
  {
    FxObject::PerformDisposingDisposeChildrenLocked(this, v2, 0);
  }
  else if ( this->m_ObjectState == 6 )
  {
    FxObject::SetObjectStateLocked(this, 9u);
    FxObject::DisposeChildrenWorker(this, FxObjectStateDeferedDeleting, v3, 0);
    FxObject::DeletedAndDisposedWorkerLocked(this, v3, 0);
  }
  else
  {
    v4 = this->m_ObjectState == 11;
    KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v2);
    if ( v4 )
      FxObject::ProcessDestroy(this, v5, v6);
  }
}
