/*
 * XREFs of SepCleanupMarkedForDeletionEntries @ 0x140091F30
 * Callers:
 *     SepAddLuidToIndexEntry @ 0x14046E2DC (SepAddLuidToIndexEntry.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14002E9A0 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14002EB90 (ExAcquireSpinLockExclusive.c)
 *     SepGetSingletonEntryFromIndexNumber @ 0x14007CEE4 (SepGetSingletonEntryFromIndexNumber.c)
 *     RtlInitEnumerationHashTable @ 0x14007CF48 (RtlInitEnumerationHashTable.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x140088740 (AuthzBasepFreeSecurityAttributesList.c)
 *     RtlEnumerateEntryHashTable @ 0x140092020 (RtlEnumerateEntryHashTable.c)
 *     RtlRemoveEntryHashTable @ 0x14009211C (RtlRemoveEntryHashTable.c)
 *     RtlEndEnumerationHashTable @ 0x140092170 (RtlEndEnumerationHashTable.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void SepCleanupMarkedForDeletionEntries()
{
  struct _RTL_DYNAMIC_HASH_TABLE *v0; // rsi
  volatile LONG *SingletonEntryFromIndexNumber; // rax
  volatile LONG *v2; // rdi
  KIRQL v3; // al
  _DWORD *v4; // rcx
  KIRQL v5; // bp
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v6; // rax
  unsigned int *v7; // rbx
  struct _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator; // [rsp+20h] [rbp-38h] BYREF

  v0 = *(struct _RTL_DYNAMIC_HASH_TABLE **)(SeLuidToIndexMapping + 8);
  memset(&Enumerator, 0, sizeof(Enumerator));
  RtlInitEnumerationHashTable(v0, &Enumerator);
  while ( 1 )
  {
    v6 = RtlEnumerateEntryHashTable(v0, &Enumerator);
    v7 = (unsigned int *)v6;
    if ( !v6 )
      break;
    if ( LOBYTE(v6[2].Linkage.Flink) && RtlRemoveEntryHashTable(v0, v6, 0LL) )
    {
      SingletonEntryFromIndexNumber = (volatile LONG *)SepGetSingletonEntryFromIndexNumber(v7[10]);
      v2 = SingletonEntryFromIndexNumber;
      if ( SingletonEntryFromIndexNumber )
      {
        v3 = ExAcquireSpinLockExclusive(SingletonEntryFromIndexNumber);
        v4 = (_DWORD *)*((_QWORD *)v2 + 2);
        v5 = v3;
        *((_QWORD *)v2 + 1) = 0LL;
        if ( v4 )
        {
          AuthzBasepFreeSecurityAttributesList(v4);
          ExFreePoolWithTag(*((PVOID *)v2 + 2), 0x74446553u);
          *((_QWORD *)v2 + 2) = 0LL;
        }
        ExReleaseSpinLockExclusive(v2, v5);
      }
      _bittestandreset(*(signed __int32 **)(SeLuidToIndexMapping + 24), v7[10]);
      ExFreePoolWithTag(v7, 0);
    }
  }
  RtlEndEnumerationHashTable(v0, &Enumerator);
}
