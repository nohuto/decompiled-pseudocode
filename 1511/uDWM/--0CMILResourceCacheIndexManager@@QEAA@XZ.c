/*
 * XREFs of ??0CMILResourceCacheIndexManager@@QEAA@XZ @ 0x180041664
 * Callers:
 *     sub_180001110 @ 0x180001110 (sub_180001110.c)
 * Callees:
 *     ?Init@CCriticalSection@@QEAAJXZ @ 0x180042BE4 (-Init@CCriticalSection@@QEAAJXZ.c)
 */

CMILResourceCacheIndexManager *__fastcall CMILResourceCacheIndexManager::CMILResourceCacheIndexManager(
        CMILResourceCacheIndexManager *this)
{
  byte_1800BE6E8 = 0;
  if ( (int)CCriticalSection::Init(&g_ResourceCacheIndexManager) >= 0 )
  {
    BitMapBuffer = 0;
    RtlInitializeBitMap(&BitMapHeader, &BitMapBuffer, 0x20u);
    RtlSetBits(&BitMapHeader, 0, 1u);
  }
  return (CMILResourceCacheIndexManager *)&g_ResourceCacheIndexManager;
}
