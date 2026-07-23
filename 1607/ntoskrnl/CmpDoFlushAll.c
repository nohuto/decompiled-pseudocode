/*
 * XREFs of CmpDoFlushAll @ 0x1401264A8
 * Callers:
 *     NtFlushKey @ 0x1404CAC58 (NtFlushKey.c)
 *     CmReconcileAndValidateAllHives @ 0x140603138 (CmReconcileAndValidateAllHives.c)
 *     CmpForceFlushWorker @ 0x1406037AC (CmpForceFlushWorker.c)
 * Callees:
 *     CmpFlushHive @ 0x1403F8F8C (CmpFlushHive.c)
 *     CmpGetNextActiveHive @ 0x1403FA590 (CmpGetNextActiveHive.c)
 */

void CmpDoFlushAll()
{
  ULONG_PTR i; // rcx
  ULONG_PTR NextActiveHive; // rax
  ULONG_PTR v2; // rbx

  if ( !CmpNoWrite )
  {
    for ( i = 0LL; ; i = v2 )
    {
      NextActiveHive = CmpGetNextActiveHive(i);
      v2 = NextActiveHive;
      if ( !NextActiveHive )
        break;
      if ( (*(_DWORD *)(NextActiveHive + 144) & 2) == 0 )
        CmpFlushHive(NextActiveHive);
    }
  }
}
