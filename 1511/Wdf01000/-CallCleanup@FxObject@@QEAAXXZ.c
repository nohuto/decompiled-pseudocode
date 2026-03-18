/*
 * XREFs of ?CallCleanup@FxObject@@QEAAXXZ @ 0x1C00569CC
 * Callers:
 *     ?Dispose@FxMpDevice@@UEAAEXZ @ 0x1C0068190 (-Dispose@FxMpDevice@@UEAAEXZ.c)
 *     ?Dispose@FxDevice@@UEAAEXZ @ 0x1C006B430 (-Dispose@FxDevice@@UEAAEXZ.c)
 *     ?Dispose@FxIoTarget@@MEAAEXZ @ 0x1C0075870 (-Dispose@FxIoTarget@@MEAAEXZ.c)
 * Callees:
 *     ?CallCleanupCallbacks@FxObject@@AEAAXXZ @ 0x1C0023300 (-CallCleanupCallbacks@FxObject@@AEAAXXZ.c)
 */

void __fastcall FxObject::CallCleanup(FxObject *this)
{
  if ( (this->m_ObjectFlags & 0x400) != 0 )
    FxObject::CallCleanupCallbacks(this);
}
