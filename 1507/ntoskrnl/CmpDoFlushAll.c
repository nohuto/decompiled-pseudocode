/*
 * XREFs of CmpDoFlushAll @ 0x14014C088
 * Callers:
 *     NtFlushKey @ 0x1404F3BA8 (NtFlushKey.c)
 *     CmReconcileAndValidateAllHives @ 0x14065A418 (CmReconcileAndValidateAllHives.c)
 *     CmpForceFlushWorker @ 0x14065AEE4 (CmpForceFlushWorker.c)
 * Callees:
 *     CmpGetNextActiveHive @ 0x140445EE8 (CmpGetNextActiveHive.c)
 *     CmpFlushHive @ 0x14044C5C4 (CmpFlushHive.c)
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
