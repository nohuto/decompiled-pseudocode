/*
 * XREFs of CmpDoFlushAll @ 0x140125F38
 * Callers:
 *     NtFlushKey @ 0x1404E88CC (NtFlushKey.c)
 *     CmReconcileAndValidateAllHives @ 0x140603084 (CmReconcileAndValidateAllHives.c)
 *     CmpForceFlushWorker @ 0x1406036F8 (CmpForceFlushWorker.c)
 * Callees:
 *     CmpFlushHive @ 0x1403FA0CC (CmpFlushHive.c)
 *     CmpGetNextActiveHive @ 0x1403FB6D0 (CmpGetNextActiveHive.c)
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
