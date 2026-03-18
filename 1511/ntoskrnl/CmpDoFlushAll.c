/*
 * XREFs of CmpDoFlushAll @ 0x1401170FC
 * Callers:
 *     NtFlushKey @ 0x140498460 (NtFlushKey.c)
 *     CmReconcileAndValidateAllHives @ 0x1405E36CC (CmReconcileAndValidateAllHives.c)
 *     CmpForceFlushWorker @ 0x1405E3DF4 (CmpForceFlushWorker.c)
 * Callees:
 *     CmpGetNextActiveHive @ 0x1403DE2DC (CmpGetNextActiveHive.c)
 *     CmpFlushHive @ 0x14044B9C0 (CmpFlushHive.c)
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
