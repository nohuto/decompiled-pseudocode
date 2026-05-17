/*
 * XREFs of RtlpHpLfhSubsegmentCreate @ 0x180041F0C
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x180022DF0 (RtlpAllocateHeapInternal.c)
 *     RtlpHpLfhSlotAllocate @ 0x1800419C4 (RtlpHpLfhSlotAllocate.c)
 * Callees:
 *     RtlpHpSegLfhAllocate @ 0x18003E7A0 (RtlpHpSegLfhAllocate.c)
 *     RtlpHpLfhSubsegmentInitialize @ 0x180042154 (RtlpHpLfhSubsegmentInitialize.c)
 *     RtlpGetSubSegmentBlockCount @ 0x180042510 (RtlpGetSubSegmentBlockCount.c)
 *     RtlReleaseSRWLockShared @ 0x180042570 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180042650 (RtlAcquireSRWLockShared.c)
 *     RtlpHpSegLfhVsCommit @ 0x180043420 (RtlpHpSegLfhVsCommit.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 *     RtlpInterlockedPopEntrySList @ 0x1800A9D30 (RtlpInterlockedPopEntrySList.c)
 */

PSLIST_ENTRY __fastcall RtlpHpLfhSubsegmentCreate(__int64 *a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // r10d
  unsigned int v5; // r15d
  int v7; // r12d
  unsigned int v8; // ecx
  int SubSegmentBlockCount; // eax
  unsigned int v10; // ebx
  int v11; // ecx
  unsigned int v12; // edx
  unsigned int v13; // esi
  union _SLIST_HEADER *v14; // rcx
  PSLIST_ENTRY v15; // rbx
  unsigned int v16; // edx
  __int64 v17; // r8
  unsigned int v18; // ecx
  PSLIST_ENTRY v19; // rsi
  __int64 (__fastcall *v21)(__int64, PSLIST_ENTRY); // rax
  __int64 v22; // rcx
  int v23; // eax
  __int64 (__fastcall *v24)(__int64, unsigned int, char); // rax
  __int64 v25; // rcx
  __int64 v26; // rax

  v4 = *(unsigned __int8 *)(a2 + 2);
  v5 = a3;
  v7 = (unsigned __int16)RtlpBucketBlockSizes[*(unsigned __int8 *)(a2 + 1)];
  v8 = (*(_DWORD *)(a2 + 56) >> 3) / v4;
  if ( v8 == 0xFFFFFFFFLL )
    v8 = -1;
  LOBYTE(a3) = v4 > 1;
  SubSegmentBlockCount = RtlpGetSubSegmentBlockCount(
                           (unsigned __int16)RtlpBucketBlockSizes[*(unsigned __int8 *)(a2 + 1)],
                           v8,
                           a3,
                           *(_QWORD *)(a2 + 64) != 0LL);
  v10 = 7;
  v11 = v7 * SubSegmentBlockCount
      + ((8 * (((unsigned __int64)(unsigned int)(2 * SubSegmentBlockCount) + 63) >> 6) + 63) & 0xFFFFFFF0);
  v12 = v11 + 2 * ((unsigned int)(v11 + 4095) >> 12);
  if ( v12 > 0xF0000 )
    v12 = 983040;
  if ( (v12 & 0xFFFFFF80) != 0 )
  {
    do
      ++v10;
    while ( v12 >> v10 );
    if ( v10 > 0x12 )
      v10 = 18;
  }
  if ( v10 <= 0xC )
    v10 = 12;
  v13 = 1 << v10;
  if ( (v5 & 1) == 0 )
    RtlAcquireSRWLockShared(a1 + 6);
  v14 = (union _SLIST_HEADER *)&a1[2 * v10 - 14];
  if ( LOWORD(v14->Alignment) )
    v15 = RtlpInterlockedPopEntrySList(v14);
  else
    v15 = 0LL;
  if ( v15 )
  {
    v16 = 1 << *((_BYTE *)&v15[2].Next + 12);
  }
  else
  {
    v24 = (__int64 (__fastcall *)(__int64, unsigned int, char))((unsigned __int64)a1 ^ RtlpHeapKey ^ a1[1]);
    v25 = *a1;
    if ( v24 == RtlpHpSegLfhAllocate )
      v26 = RtlpHpSegLfhAllocate(v25, v13, v5);
    else
      v26 = v24(v25, v13, v5);
    v15 = (PSLIST_ENTRY)v26;
    if ( !v26 )
    {
      v19 = 0LL;
      goto LABEL_28;
    }
    v16 = 0;
  }
  if ( (RtlpHpAppCompatFlags & 4) != 0 )
  {
    v17 = v13;
  }
  else
  {
    v17 = (unsigned int)(2 * v7);
    if ( (((_DWORD)v17 - 1) & (unsigned int)v17) != 0 )
    {
      _BitScanReverse(&v18, v17);
      v17 = (unsigned int)(1 << (v18 + 1));
    }
    if ( (unsigned int)v17 <= 0x1000 )
      v17 = 4096LL;
    if ( (unsigned int)v17 >= v13 )
      v17 = v13;
  }
  if ( v16 >= (unsigned int)v17
    || ((v21 = (__int64 (__fastcall *)(__int64, PSLIST_ENTRY))((unsigned __int64)a1 ^ RtlpHeapKey ^ a1[3]),
         v22 = *a1,
         (char *)v21 != (char *)RtlpHpSegLfhVsCommit)
      ? (v23 = v21(v22, v15))
      : (v23 = RtlpHpSegLfhVsCommit(v22, v15, v17)),
        v23 >= 0) )
  {
    RtlpHpLfhSubsegmentInitialize(v15);
    _InterlockedIncrement64((volatile signed __int64 *)(a2 + 64));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 56), WORD1(v15[2].Next));
    v19 = v15;
    v15 = 0LL;
  }
  else
  {
    v19 = 0LL;
  }
  if ( v15 )
    ((void (__fastcall *)(_QWORD, PSLIST_ENTRY, _QWORD))((unsigned __int64)a1 ^ RtlpHeapKey ^ a1[2]))(*a1, v15, v5);
LABEL_28:
  if ( (v5 & 1) == 0 )
    RtlReleaseSRWLockShared(a1 + 6);
  return v19;
}
