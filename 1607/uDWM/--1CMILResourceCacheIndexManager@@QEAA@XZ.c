/*
 * XREFs of ??1CMILResourceCacheIndexManager@@QEAA@XZ @ 0x18004F16C
 * Callers:
 *     _dynamic_atexit_destructor_for__g_ResourceCacheIndexManager__ @ 0x180051980 (_dynamic_atexit_destructor_for__g_ResourceCacheIndexManager__.c)
 * Callees:
 *     ?DeInit@CCriticalSection@@QEAAXXZ @ 0x1800442E4 (-DeInit@CCriticalSection@@QEAAXXZ.c)
 */

void __fastcall CMILResourceCacheIndexManager::~CMILResourceCacheIndexManager(CMILResourceCacheIndexManager *this)
{
  CCriticalSection::DeInit(&g_ResourceCacheIndexManager);
  CCriticalSection::DeInit(&g_ResourceCacheIndexManager);
}
