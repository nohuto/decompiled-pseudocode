/*
 * XREFs of ??1UmfdHostExclusiveReadyLock@UmfdHostLifeTimeManager@@QEAA@XZ @ 0x1C02BBE20
 * Callers:
 *     ?UninitializeThread@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C02BC3F4 (-UninitializeThread@UmfdHostLifeTimeManager@@SAXXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall UmfdHostLifeTimeManager::UmfdHostExclusiveReadyLock::~UmfdHostExclusiveReadyLock(
        UmfdHostLifeTimeManager::UmfdHostExclusiveReadyLock *this)
{
  PUSHLOCKEX::~PUSHLOCKEX(this);
}
