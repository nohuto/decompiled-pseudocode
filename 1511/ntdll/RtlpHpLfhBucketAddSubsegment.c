/*
 * XREFs of RtlpHpLfhBucketAddSubsegment @ 0x18001D85C
 * Callers:
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x18001A548 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpFreeHeapInternal @ 0x1800214A0 (RtlpFreeHeapInternal.c)
 *     RtlpHpAllocateHeapInternal @ 0x1800270C0 (RtlpHpAllocateHeapInternal.c)
 * Callees:
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x18001DA70 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpLfhOwnerMoveSubsegment @ 0x18001F024 (RtlpHpLfhOwnerMoveSubsegment.c)
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpLfhSubsegmentSetOwner @ 0x18007D954 (RtlpHpLfhSubsegmentSetOwner.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 *     RtlpInterlockedPushEntrySList @ 0x1800A8930 (RtlpInterlockedPushEntrySList.c)
 */

void __fastcall RtlpHpLfhBucketAddSubsegment(unsigned __int64 a1, _RTL_SRWLOCK *a2, __int64 a3, char a4)
{
  __int64 v5; // rdi
  char v8; // dl
  unsigned int v9; // ebx
  _WORD *v10; // rbx

  v5 = a3;
  if ( *(_WORD *)(a3 + 32) != *(_WORD *)(a3 + 34) )
  {
    RtlAcquireSRWLockExclusive(a2 + 2);
    RtlpHpLfhSubsegmentSetOwner(v5, a2);
    if ( *(_WORD *)(v5 + 32) == *(_WORD *)(v5 + 34) )
      *(_QWORD *)(v5 + 16) = 0LL;
    else
      v5 = RtlpHpLfhOwnerMoveSubsegment(a2, v5, 0LL);
    RtlReleaseSRWLockExclusive(a2 + 2);
  }
  if ( v5 )
  {
    v8 = 0;
    if ( (a4 & 1) != 0 )
      v8 = 2;
    _InterlockedDecrement64((volatile signed __int64 *)&a2[8]);
    _InterlockedExchangeAdd64((volatile signed __int64 *)&a2[7], -*(__int16 *)(v5 + 34));
    _BitScanForward(&v9, *(unsigned __int8 *)(v5 + 45) << *(_BYTE *)(v5 + 44));
    v10 = (_WORD *)(a1 + 16 * (v9 - 12 + 5LL));
    if ( *v10 )
    {
      ((void (__fastcall *)(_QWORD, __int64, bool))(a1 ^ RtlpHeapKey ^ *(_QWORD *)(a1 + 16)))(
        *(_QWORD *)a1,
        v5,
        (v8 & 2) != 0);
    }
    else
    {
      RtlpHpLfhSubsegmentDecommitPages(a1, v5, -2, 1, (v8 & 2) != 0);
      RtlpInterlockedPushEntrySList(v10, v5);
    }
  }
}
