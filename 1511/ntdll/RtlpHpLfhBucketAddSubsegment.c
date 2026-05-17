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

__int64 __fastcall RtlpHpLfhBucketAddSubsegment(unsigned __int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 result; // rax
  __int64 v6; // rdi
  char v9; // dl
  unsigned int v10; // ebx
  _WORD *v11; // rbx

  result = *(unsigned __int16 *)(a3 + 34);
  v6 = a3;
  if ( *(_WORD *)(a3 + 32) != (_WORD)result )
  {
    RtlAcquireSRWLockExclusive(a2 + 16);
    RtlpHpLfhSubsegmentSetOwner(v6, a2);
    if ( *(_WORD *)(v6 + 32) == *(_WORD *)(v6 + 34) )
      *(_QWORD *)(v6 + 16) = 0LL;
    else
      v6 = RtlpHpLfhOwnerMoveSubsegment(a2, v6, 0LL);
    result = RtlReleaseSRWLockExclusive(a2 + 16);
  }
  if ( v6 )
  {
    v9 = 0;
    if ( (a4 & 1) != 0 )
      v9 = 2;
    _InterlockedDecrement64((volatile signed __int64 *)(a2 + 64));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 56), -*(__int16 *)(v6 + 34));
    _BitScanForward(&v10, *(unsigned __int8 *)(v6 + 45) << *(_BYTE *)(v6 + 44));
    v11 = (_WORD *)(a1 + 16 * (v10 - 12 + 5LL));
    if ( *v11 )
    {
      return ((__int64 (__fastcall *)(_QWORD, __int64, bool))(a1 ^ RtlpHeapKey ^ *(_QWORD *)(a1 + 16)))(
               *(_QWORD *)a1,
               v6,
               (v9 & 2) != 0);
    }
    else
    {
      RtlpHpLfhSubsegmentDecommitPages(a1, v6, -2, 1, (v9 & 2) != 0);
      return RtlpInterlockedPushEntrySList(v11, v6);
    }
  }
  return result;
}
