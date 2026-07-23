/*
 * XREFs of ExTryConvertSharedToExclusiveLite @ 0x14022D820
 * Callers:
 *     CmpReplicateKeyToVirtual @ 0x14060184C (CmpReplicateKeyToVirtual.c)
 * Callees:
 *     ExpFindCurrentThread @ 0x1400968C0 (ExpFindCurrentThread.c)
 *     EXP_LOCK_RESOURCE @ 0x14022D6D0 (EXP_LOCK_RESOURCE.c)
 *     EXP_UNLOCK_RESOURCE @ 0x14022D744 (EXP_UNLOCK_RESOURCE.c)
 */

char ExTryConvertSharedToExclusiveLite()
{
  struct _KTHREAD *CurrentThread; // rdi
  struct _ERESOURCE *v1; // rcx
  char v2; // bl
  struct _KLOCK_QUEUE_HANDLE v4; // [rsp+30h] [rbp-28h] BYREF

  CurrentThread = KeGetCurrentThread();
  EXP_LOCK_RESOURCE((__int64)&CmpRegistryLock, &v4);
  v2 = 1;
  if ( CmpRegistryLock.ActiveEntries == 1 )
  {
    v1 = (struct _ERESOURCE *)ExpFindCurrentThread(
                                (__int64)&CmpRegistryLock,
                                (__int64)CurrentThread,
                                (__int64)&v4,
                                0,
                                0);
    CmpRegistryLock.Flag |= 0x80u;
    if ( v1 != (struct _ERESOURCE *)&CmpRegistryLock.OwnerEntry )
    {
      CmpRegistryLock.OwnerEntry = (OWNER_ENTRY)v1->SystemResourcesList;
      CmpRegistryLock.OwnerEntry.TableSize = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)CmpRegistryLock.OwnerEntry, 8)) & 7 | 8;
      v1->SystemResourcesList.Flink = 0LL;
      v1->SystemResourcesList.Blink = 0LL;
    }
  }
  else
  {
    v2 = 0;
  }
  EXP_UNLOCK_RESOURCE((__int64)v1, &v4);
  return v2;
}
