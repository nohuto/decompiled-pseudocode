/*
 * XREFs of ??_GCTokenManager@@AEAAPEAXI@Z @ 0x1C001AC58
 * Callers:
 *     MultiUserNtGreCleanup @ 0x1C006D778 (MultiUserNtGreCleanup.c)
 *     InitializeGre @ 0x1C0154000 (InitializeGre.c)
 * Callees:
 *     ??1CTokenManager@@AEAA@XZ @ 0x1C001AB08 (--1CTokenManager@@AEAA@XZ.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 */

CTokenManager *__fastcall CTokenManager::`scalar deleting destructor'(CTokenManager *this)
{
  CTokenManager::~CTokenManager(this);
  Win32FreePool(this);
  return this;
}
