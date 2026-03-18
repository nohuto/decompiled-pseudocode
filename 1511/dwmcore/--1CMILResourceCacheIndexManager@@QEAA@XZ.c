/*
 * XREFs of ??1CMILResourceCacheIndexManager@@QEAA@XZ @ 0x1800BA560
 * Callers:
 *     _dynamic_atexit_destructor_for__g_ResourceCacheIndexManager__ @ 0x1800BFB60 (_dynamic_atexit_destructor_for__g_ResourceCacheIndexManager__.c)
 * Callees:
 *     ?DeInit@CCriticalSection@@QEAAXXZ @ 0x1800A257C (-DeInit@CCriticalSection@@QEAAXXZ.c)
 */

void __fastcall CMILResourceCacheIndexManager::~CMILResourceCacheIndexManager(CMILResourceCacheIndexManager *this)
{
  CCriticalSection::DeInit(&g_ResourceCacheIndexManager);
  CCriticalSection::DeInit(&g_ResourceCacheIndexManager);
}
