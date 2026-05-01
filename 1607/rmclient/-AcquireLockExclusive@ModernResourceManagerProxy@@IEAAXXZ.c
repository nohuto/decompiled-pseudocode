/*
 * XREFs of ?AcquireLockExclusive@ModernResourceManagerProxy@@IEAAXXZ @ 0x180005A24
 * Callers:
 *     ?GetMemoryUsageLimit@ModernResourceManagerProxy@@QEAAJPEA_K@Z @ 0x180005A4C (-GetMemoryUsageLimit@ModernResourceManagerProxy@@QEAAJPEA_K@Z.c)
 *     ?GetMemoryUsageLevel@ModernResourceManagerProxy@@QEAAJPEAW4AppMemoryUsageLevel@System@Windows@@@Z @ 0x18000ABC0 (-GetMemoryUsageLevel@ModernResourceManagerProxy@@QEAAJPEAW4AppMemoryUsageLevel@System@Windows@@@.c)
 * Callees:
 *     <none>
 */

void __fastcall ModernResourceManagerProxy::AcquireLockExclusive(ModernResourceManagerProxy *this)
{
  RtlAcquireSRWLockExclusive((char *)this + 72);
  *((_DWORD *)this + 20) = GetCurrentThreadId();
}
