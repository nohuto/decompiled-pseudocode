/*
 * XREFs of ?DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z @ 0x1C00569E8
 * Callers:
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0007DA0 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?DeleteObject@FxObject@@UEAAXXZ @ 0x1C0008CD0 (-DeleteObject@FxObject@@UEAAXXZ.c)
 *     ?PreProcessSendAndForget@FxRequest@@QEAAXXZ @ 0x1C0022948 (-PreProcessSendAndForget@FxRequest@@QEAAXXZ.c)
 *     ?PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z @ 0x1C0023380 (-PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z.c)
 *     ?DeferredDisposeWorkItem@FxObject@@AEAAXXZ @ 0x1C006FDFC (-DeferredDisposeWorkItem@FxObject@@AEAAXXZ.c)
 * Callees:
 *     ?DestroyChildren@FxObject@@IEAAXXZ @ 0x1C0009130 (-DestroyChildren@FxObject@@IEAAXXZ.c)
 *     ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C00233F4 (-SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 */

void __fastcall FxObject::DeletedAndDisposedWorkerLocked(FxObject *this, KIRQL OldIrql, unsigned __int8 Unlock)
{
  FxObject::SetObjectStateLocked(this, FxObjectStateDeletedAndDisposed);
  if ( Unlock )
    KeReleaseSpinLock(&this->m_SpinLock.m_Lock, OldIrql);
  FxObject::DestroyChildren(this);
  this->Release(this, 0LL, 1215, "minkernel\\wdf\\framework\\shared\\object\\fxobjectstatemachine.cpp");
}
