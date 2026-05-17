/*
 * XREFs of RtlpHpLfhBucketAddSubsegment @ 0x18004BCB4
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x180022DF0 (RtlpAllocateHeapInternal.c)
 *     RtlpHpLfhSlotAllocate @ 0x1800419C4 (RtlpHpLfhSlotAllocate.c)
 *     RtlpHpFreeHeap @ 0x180047A70 (RtlpHpFreeHeap.c)
 *     RtlpFreeHeapInternal @ 0x180048100 (RtlpFreeHeapInternal.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x180089210 (RtlpHpLfhSubsegmentFreeBlock.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C550 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x18004B97C (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpLfhOwnerMoveSubsegment @ 0x18004BB90 (RtlpHpLfhOwnerMoveSubsegment.c)
 *     RtlpHpSegLfhVsFree @ 0x18004C910 (RtlpHpSegLfhVsFree.c)
 *     RtlpHpLfhSubsegmentSetOwner @ 0x18004D1C0 (RtlpHpLfhSubsegmentSetOwner.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 *     RtlpInterlockedPushEntrySList @ 0x1800A9D70 (RtlpInterlockedPushEntrySList.c)
 */

signed __int64 __fastcall RtlpHpLfhBucketAddSubsegment(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  signed __int64 result; // rax
  char v5; // r15
  __int64 *v6; // rbx
  char v9; // dl
  BOOL v10; // edx
  unsigned int v11; // ebp
  _WORD *v12; // rbp
  __int64 (__fastcall *v13)(__int64, __int64 *, BOOL); // rax
  __int64 v14; // rcx

  result = *(unsigned __int16 *)(a3 + 34);
  v5 = a4;
  v6 = (__int64 *)a3;
  if ( *(_WORD *)(a3 + 32) != (_WORD)result )
  {
    RtlAcquireSRWLockExclusive(a2 + 16, (char *)a2, a3, a4);
    RtlpHpLfhSubsegmentSetOwner(v6, a2);
    if ( *((_WORD *)v6 + 16) == *((_WORD *)v6 + 17) )
      v6[2] = 0LL;
    else
      v6 = RtlpHpLfhOwnerMoveSubsegment(a2, v6, 0);
    result = RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a2 + 16));
  }
  if ( v6 )
  {
    v9 = 0;
    if ( (v5 & 1) != 0 )
      v9 = 2;
    _InterlockedDecrement64((volatile signed __int64 *)(a2 + 64));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 56), -*((__int16 *)v6 + 17));
    v10 = (v9 & 2) != 0;
    _BitScanForward(&v11, *((unsigned __int8 *)v6 + 45) << *((_BYTE *)v6 + 44));
    v12 = (_WORD *)(a1 + 16 * (v11 - 12 + 5LL));
    if ( *v12 )
    {
      v13 = (__int64 (__fastcall *)(__int64, __int64 *, BOOL))(a1 ^ RtlpHeapKey ^ *(_QWORD *)(a1 + 16));
      v14 = *(_QWORD *)a1;
      if ( (char *)v13 == (char *)RtlpHpSegLfhVsFree )
        return RtlpHpSegLfhVsFree(v14, v6, v10);
      else
        return v13(v14, v6, v10);
    }
    else
    {
      RtlpHpLfhSubsegmentDecommitPages(a1, (__int64)v6, -2, 1LL, v10);
      return RtlpInterlockedPushEntrySList(v12, v6);
    }
  }
  return result;
}
