/*
 * XREFs of CmpSnapshotKCBSecurity @ 0x140659C90
 * Callers:
 *     CmSetValueKey @ 0x140428B40 (CmSetValueKey.c)
 *     CmDeleteValueKey @ 0x1404EFE30 (CmDeleteValueKey.c)
 * Callees:
 *     memmove @ 0x140195740 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     CmGetKCBCacheSecurity @ 0x14042B39C (CmGetKCBCacheSecurity.c)
 */

__int64 __fastcall CmpSnapshotKCBSecurity(ULONG_PTR a1, __int64 a2, ULONG a3, _QWORD *a4)
{
  __int64 KCBCacheSecurity; // rsi
  PVOID PoolWithTag; // rax

  KCBCacheSecurity = CmGetKCBCacheSecurity(a1, a2);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, *(unsigned int *)(KCBCacheSecurity + 24), a3);
  *a4 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memmove(PoolWithTag, (const void *)(KCBCacheSecurity + 32), *(unsigned int *)(KCBCacheSecurity + 24));
  return 0LL;
}
