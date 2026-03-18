/*
 * XREFs of ?DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z @ 0x1C003E068
 * Callers:
 *     imp_WdfRegistryClose @ 0x1C0001F60 (imp_WdfRegistryClose.c)
 *     imp_WdfRequestSend @ 0x1C0003AA0 (imp_WdfRequestSend.c)
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0009E80 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?DeleteObject@FxObject@@UEAAXXZ @ 0x1C000B600 (-DeleteObject@FxObject@@UEAAXXZ.c)
 *     imp_WdfRegistryOpenKey @ 0x1C000C920 (imp_WdfRegistryOpenKey.c)
 *     ?PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z @ 0x1C001CF08 (-PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z.c)
 *     ?EarlyDispose@FxObject@@QEAAEXZ @ 0x1C001D140 (-EarlyDispose@FxObject@@QEAAEXZ.c)
 *     ?DeferredDisposeWorkItem@FxObject@@AEAAXXZ @ 0x1C008248C (-DeferredDisposeWorkItem@FxObject@@AEAAXXZ.c)
 * Callees:
 *     ?DestroyChildren@FxObject@@IEAAXXZ @ 0x1C000C1C0 (-DestroyChildren@FxObject@@IEAAXXZ.c)
 *     ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C001CF80 (-SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 */

void __fastcall FxObject::DeletedAndDisposedWorkerLocked(FxObject *this, KIRQL OldIrql, unsigned __int8 Unlock)
{
  FxObject::SetObjectStateLocked(this, 0xAu);
  if ( Unlock )
    KeReleaseSpinLock(&this->m_SpinLock.m_Lock, OldIrql);
  FxObject::DestroyChildren(this);
  this->Release(this, 0LL, 1246, "minkernel\\wdf\\framework\\shared\\object\\fxobjectstatemachine.cpp");
}
