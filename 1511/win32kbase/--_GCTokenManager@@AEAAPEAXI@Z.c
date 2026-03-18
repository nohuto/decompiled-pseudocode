/*
 * XREFs of ??_GCTokenManager@@AEAAPEAXI@Z @ 0x1C003D74C
 * Callers:
 *     MultiUserNtGreCleanup @ 0x1C0063BC4 (MultiUserNtGreCleanup.c)
 *     InitializeGre @ 0x1C013A000 (InitializeGre.c)
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     ??1CTokenManager@@AEAA@XZ @ 0x1C003D5EC (--1CTokenManager@@AEAA@XZ.c)
 */

CTokenManager *__fastcall CTokenManager::`scalar deleting destructor'(CTokenManager *this)
{
  CTokenManager::~CTokenManager(this);
  Win32FreePool();
  return this;
}
