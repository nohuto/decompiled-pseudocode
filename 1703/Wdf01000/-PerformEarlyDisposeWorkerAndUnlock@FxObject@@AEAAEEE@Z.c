/*
 * XREFs of ?PerformEarlyDisposeWorkerAndUnlock@FxObject@@AEAAEEE@Z @ 0x1C003E0D8
 * Callers:
 *     imp_WdfRegistryClose @ 0x1C0001F60 (imp_WdfRegistryClose.c)
 *     ?DeleteObject@FxObject@@UEAAXXZ @ 0x1C000B600 (-DeleteObject@FxObject@@UEAAXXZ.c)
 *     ?DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z @ 0x1C000C500 (-DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z.c)
 *     imp_WdfRegistryOpenKey @ 0x1C000C920 (imp_WdfRegistryOpenKey.c)
 * Callees:
 *     ?PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z @ 0x1C001CF08 (-PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z.c)
 *     ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C001CF80 (-SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     ?ShouldDeferDisposeLocked@FxObject@@AEAAEPEAE@Z @ 0x1C001CFB4 (-ShouldDeferDisposeLocked@FxObject@@AEAAEPEAE@Z.c)
 *     ?QueueDeferredDisposeLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C003F998 (-QueueDeferredDisposeLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 */

unsigned __int8 __fastcall FxObject::PerformEarlyDisposeWorkerAndUnlock(
        FxObject *this,
        unsigned __int8 OldIrql,
        unsigned __int8 CanDefer)
{
  unsigned __int8 PreviousIrql; // [rsp+38h] [rbp+10h] BYREF

  PreviousIrql = OldIrql;
  FxObject::SetObjectStateLocked(this, 3u);
  if ( !CanDefer || !FxObject::ShouldDeferDisposeLocked(this, &PreviousIrql) )
    return FxObject::PerformDisposingDisposeChildrenLocked(this, OldIrql, CanDefer);
  FxObject::QueueDeferredDisposeLocked(this, FxObjectStateDeferedDisposing);
  KeReleaseSpinLock(&this->m_SpinLock.m_Lock, OldIrql);
  return 0;
}
