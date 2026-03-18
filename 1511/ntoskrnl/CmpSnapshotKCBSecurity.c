/*
 * XREFs of CmpSnapshotKCBSecurity @ 0x1405E35F4
 * Callers:
 *     CmDeleteValueKey @ 0x1403D4B80 (CmDeleteValueKey.c)
 *     CmSetValueKey @ 0x1403F36C0 (CmSetValueKey.c)
 * Callees:
 *     memmove @ 0x140166980 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     CmGetKCBCacheSecurity @ 0x1404209D8 (CmGetKCBCacheSecurity.c)
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
