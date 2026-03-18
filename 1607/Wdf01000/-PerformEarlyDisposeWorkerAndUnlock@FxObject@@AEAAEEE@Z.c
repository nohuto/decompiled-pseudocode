/*
 * XREFs of ?PerformEarlyDisposeWorkerAndUnlock@FxObject@@AEAAEEE@Z @ 0x1C003A718
 * Callers:
 *     ?DeleteObject@FxObject@@UEAAXXZ @ 0x1C0007E60 (-DeleteObject@FxObject@@UEAAXXZ.c)
 *     ?DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z @ 0x1C0008E30 (-DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z.c)
 *     imp_WdfRegistryOpenKey @ 0x1C00091F0 (imp_WdfRegistryOpenKey.c)
 *     imp_WdfRegistryClose @ 0x1C000F230 (imp_WdfRegistryClose.c)
 * Callees:
 *     ?PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z @ 0x1C001C214 (-PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z.c)
 *     ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C001C2D0 (-SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     ?QueueDeferredDisposeLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C003BE40 (-QueueDeferredDisposeLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 */

unsigned __int8 __fastcall FxObject::PerformEarlyDisposeWorkerAndUnlock(
        FxObject *this,
        KIRQL OldIrql,
        unsigned __int8 CanDefer)
{
  unsigned __int16 m_ObjectFlags; // ax

  FxObject::SetObjectStateLocked(this, FxObjectStateDisposingEarly);
  if ( !CanDefer )
    return FxObject::PerformDisposingDisposeChildrenLocked(this, OldIrql, CanDefer);
  m_ObjectFlags = this->m_ObjectFlags;
  if ( (m_ObjectFlags & 0x20) == 0 && ((m_ObjectFlags & 0x10) == 0 || !OldIrql) )
    return FxObject::PerformDisposingDisposeChildrenLocked(this, OldIrql, CanDefer);
  FxObject::QueueDeferredDisposeLocked(this, FxObjectStateDeferedDisposing);
  KeReleaseSpinLock(&this->m_SpinLock.m_Lock, OldIrql);
  return 0;
}
