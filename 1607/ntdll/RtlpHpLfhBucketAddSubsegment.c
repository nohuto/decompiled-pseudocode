/*
 * XREFs of RtlpHpLfhBucketAddSubsegment @ 0x18004BCA4
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x180022DE0 (RtlpAllocateHeapInternal.c)
 *     RtlpHpLfhSlotAllocate @ 0x1800419B4 (RtlpHpLfhSlotAllocate.c)
 *     RtlpHpFreeHeap @ 0x180047A60 (RtlpHpFreeHeap.c)
 *     RtlpFreeHeapInternal @ 0x1800480F0 (RtlpFreeHeapInternal.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x180089200 (RtlpHpLfhSubsegmentFreeBlock.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C540 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x18004B96C (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpLfhOwnerMoveSubsegment @ 0x18004BB80 (RtlpHpLfhOwnerMoveSubsegment.c)
 *     RtlpHpSegLfhVsFree @ 0x18004C900 (RtlpHpSegLfhVsFree.c)
 *     RtlpHpLfhSubsegmentSetOwner @ 0x18004D1B0 (RtlpHpLfhSubsegmentSetOwner.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 *     RtlpInterlockedPushEntrySList @ 0x1800A9D70 (RtlpInterlockedPushEntrySList.c)
 */

void __fastcall RtlpHpLfhBucketAddSubsegment(_RTL_SRWLOCK *a1, _RTL_SRWLOCK *a2, __int64 a3, char a4)
{
  __int64 *v5; // rbx
  char v8; // dl
  BOOL v9; // edx
  unsigned int v10; // ebp
  _RTL_SRWLOCK *v11; // rbp
  void (__fastcall *v12)($2F38BEDF952D5DA5F266621B11247D04, __int64 *, BOOL); // rax
  _RTL_SRWLOCK v13; // rcx

  v5 = (__int64 *)a3;
  if ( *(_WORD *)(a3 + 32) != *(_WORD *)(a3 + 34) )
  {
    RtlAcquireSRWLockExclusive(a2 + 2);
    RtlpHpLfhSubsegmentSetOwner(v5, a2);
    if ( *((_WORD *)v5 + 16) == *((_WORD *)v5 + 17) )
      v5[2] = 0LL;
    else
      v5 = RtlpHpLfhOwnerMoveSubsegment((__int64)a2, v5, 0);
    RtlReleaseSRWLockExclusive(a2 + 2);
  }
  if ( v5 )
  {
    v8 = 0;
    if ( (a4 & 1) != 0 )
      v8 = 2;
    _InterlockedDecrement64((volatile signed __int64 *)&a2[8]);
    _InterlockedExchangeAdd64((volatile signed __int64 *)&a2[7], -*((__int16 *)v5 + 17));
    v9 = (v8 & 2) != 0;
    _BitScanForward(&v10, *((unsigned __int8 *)v5 + 45) << *((_BYTE *)v5 + 44));
    v11 = &a1[2 * v10 - 14];
    if ( v11->0 )
    {
      v12 = (void (__fastcall *)($2F38BEDF952D5DA5F266621B11247D04, __int64 *, BOOL))((unsigned __int64)a1 ^ RtlpHeapKey ^ a1[2].Value);
      v13.0 = ($2F38BEDF952D5DA5F266621B11247D04)a1->Value;
      if ( (char *)v12 == (char *)RtlpHpSegLfhVsFree )
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))RtlpHpSegLfhVsFree)(v13.0, v5, v9);
      else
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))v12)(v13.0, v5, v9);
    }
    else
    {
      RtlpHpLfhSubsegmentDecommitPages(a1, (__int64)v5, -2, 1u, v9);
      RtlpInterlockedPushEntrySList(v11, v5);
    }
  }
}
