/*
 * XREFs of ?CallCleanup@FxObject@@QEAAXXZ @ 0x1C0063DF0
 * Callers:
 *     ?Dispose@FxMpDevice@@UEAAEXZ @ 0x1C0076E70 (-Dispose@FxMpDevice@@UEAAEXZ.c)
 *     ?Dispose@FxDevice@@UEAAEXZ @ 0x1C0079C10 (-Dispose@FxDevice@@UEAAEXZ.c)
 *     ?Dispose@FxIoTarget@@MEAAEXZ @ 0x1C0083810 (-Dispose@FxIoTarget@@MEAAEXZ.c)
 * Callees:
 *     ?CallCleanupCallbacks@FxObject@@AEAAXXZ @ 0x1C001C048 (-CallCleanupCallbacks@FxObject@@AEAAXXZ.c)
 */

void __fastcall FxObject::CallCleanup(FxObject *this)
{
  if ( (this->m_ObjectFlags & 0x400) != 0 )
    FxObject::CallCleanupCallbacks(this);
}
