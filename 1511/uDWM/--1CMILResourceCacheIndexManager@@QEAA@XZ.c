/*
 * XREFs of ??1CMILResourceCacheIndexManager@@QEAA@XZ @ 0x18004EAB4
 * Callers:
 *     j_??1CMILResourceCacheIndexManager@@QEAA@XZ @ 0x180051430 (j_--1CMILResourceCacheIndexManager@@QEAA@XZ.c)
 * Callees:
 *     ?DeInit@CCriticalSection@@QEAAXXZ @ 0x180042C28 (-DeInit@CCriticalSection@@QEAAXXZ.c)
 */

void __fastcall CMILResourceCacheIndexManager::~CMILResourceCacheIndexManager(CMILResourceCacheIndexManager *this)
{
  CCriticalSection::DeInit(&g_ResourceCacheIndexManager);
  CCriticalSection::DeInit(&g_ResourceCacheIndexManager);
}
