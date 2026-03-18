/*
 * XREFs of ??_GCTokenManager@@AEAAPEAXI@Z @ 0x1C006FF60
 * Callers:
 *     MultiUserNtGreCleanup @ 0x1C006C400 (MultiUserNtGreCleanup.c)
 *     InitializeGre @ 0x1C0137A5C (InitializeGre.c)
 * Callees:
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     ??1CTokenManager@@AEAA@XZ @ 0x1C006FEA0 (--1CTokenManager@@AEAA@XZ.c)
 */

CTokenManager *__fastcall CTokenManager::`scalar deleting destructor'(CTokenManager *this)
{
  CTokenManager::~CTokenManager(this);
  Win32FreePool();
  return this;
}
