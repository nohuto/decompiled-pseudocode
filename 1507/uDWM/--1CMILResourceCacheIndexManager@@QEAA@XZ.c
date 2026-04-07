/*
 * XREFs of ??1CMILResourceCacheIndexManager@@QEAA@XZ @ 0x180048334
 * Callers:
 *     _dynamic_atexit_destructor_for__g_ResourceCacheIndexManager__ @ 0x18004AD90 (_dynamic_atexit_destructor_for__g_ResourceCacheIndexManager__.c)
 * Callees:
 *     ?DeInit@CCriticalSection@@QEAAXXZ @ 0x18003F070 (-DeInit@CCriticalSection@@QEAAXXZ.c)
 */

void __fastcall CMILResourceCacheIndexManager::~CMILResourceCacheIndexManager(CMILResourceCacheIndexManager *this)
{
  CCriticalSection::DeInit(&g_ResourceCacheIndexManager);
  CCriticalSection::DeInit(&g_ResourceCacheIndexManager);
}
