/*
 * XREFs of RtlpHpLfhSubsegmentCreate @ 0x1800347E0
 * Callers:
 *     RtlpHpAllocateHeapInternal @ 0x180030100 (RtlpHpAllocateHeapInternal.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180030740 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180030820 (RtlAcquireSRWLockShared.c)
 *     RtlpGetSubSegmentBlockCount @ 0x180034A5C (RtlpGetSubSegmentBlockCount.c)
 *     RtlpHpLfhSubsegmentInitialize @ 0x180034AB4 (RtlpHpLfhSubsegmentInitialize.c)
 *     RtlpHpSegLfhVsCommit @ 0x180037280 (RtlpHpSegLfhVsCommit.c)
 *     RtlpHpSegLfhAllocate @ 0x180037930 (RtlpHpSegLfhAllocate.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 *     RtlpInterlockedPopEntrySList @ 0x180095560 (RtlpInterlockedPopEntrySList.c)
 */

PSLIST_ENTRY __fastcall RtlpHpLfhSubsegmentCreate(_RTL_SRWLOCK *a1, __int64 a2, unsigned int a3)
{
  int v5; // r13d
  unsigned int v6; // ecx
  unsigned int v7; // r10d
  PSLIST_ENTRY v8; // r14
  int SubSegmentBlockCount; // eax
  char v10; // r11
  unsigned int v11; // ebx
  int v12; // ecx
  unsigned int v13; // edx
  unsigned int v14; // ebp
  int v15; // r15d
  _SLIST_HEADER *v16; // rcx
  PSLIST_ENTRY v17; // rdi
  unsigned int v18; // edx
  unsigned int v19; // ebx
  unsigned int v20; // ecx
  __int64 (__fastcall *v22)(PVOID); // r13
  int v23; // eax
  __int64 (__fastcall *v24)(unsigned __int64, _QWORD, _QWORD); // rbx
  __int64 v25; // rax

  v5 = (unsigned __int16)RtlpBucketBlockSizes[*(unsigned __int8 *)(a2 + 1)];
  v6 = *(unsigned __int8 *)(a2 + 2);
  v7 = (*(_DWORD *)(a2 + 56) >> 3) / v6;
  if ( v7 == 0xFFFFFFFFLL )
    v7 = -1;
  v8 = 0LL;
  SubSegmentBlockCount = RtlpGetSubSegmentBlockCount(
                           (unsigned __int16)RtlpBucketBlockSizes[*(unsigned __int8 *)(a2 + 1)],
                           v7,
                           v6 > 1,
                           *(_QWORD *)(a2 + 64) != 0LL);
  v11 = 7;
  v12 = v5 * SubSegmentBlockCount
      + ((8 * (((unsigned __int64)(unsigned int)(2 * SubSegmentBlockCount) + 63) >> 6) + 63) & 0xFFFFFFF0);
  v13 = v12 + 2 * ((unsigned int)(v12 + 4095) >> 12);
  if ( v13 > 0xF0000 )
    v13 = 983040;
  if ( (v13 & 0xFFFFFF80) != 0 )
  {
    do
      ++v11;
    while ( v13 >> v11 );
    if ( v11 > 0x12 )
      v11 = 18;
  }
  if ( v11 <= 0xC )
    v11 = 12;
  v14 = 1 << v11;
  v15 = v10 & 1;
  if ( (v10 & 1) == 0 )
    RtlAcquireSRWLockShared(a1 + 6);
  v16 = (_SLIST_HEADER *)&a1[2 * v11 - 14];
  if ( !LOWORD(v16->Alignment) || (v17 = RtlpInterlockedPopEntrySList(v16)) == 0LL )
    v17 = 0LL;
  if ( v17 )
  {
    v18 = 1 << *((_BYTE *)&v17[2].Next + 12);
  }
  else
  {
    v24 = (__int64 (__fastcall *)(unsigned __int64, _QWORD, _QWORD))((unsigned __int64)a1 ^ RtlpHeapKey ^ a1[1].Value);
    if ( v24 == RtlpHpSegLfhAllocate )
      v25 = RtlpHpSegLfhAllocate(a1->Value, v14, a3);
    else
      v25 = v24(a1->Value, v14, a3);
    v17 = (PSLIST_ENTRY)v25;
    if ( !v25 )
      goto LABEL_26;
    v18 = 0;
  }
  if ( (RtlpHpAppCompatFlags & 4) != 0 )
  {
    v19 = v14;
  }
  else
  {
    v19 = 2 * v5;
    if ( ((v19 - 1) & v19) != 0 )
    {
      _BitScanReverse(&v20, v19);
      v19 = 1 << (v20 + 1);
    }
    if ( v19 <= 0x1000 )
      v19 = 4096;
    if ( v19 >= v14 )
      v19 = v14;
  }
  if ( v18 < v19
    && ((v22 = (__int64 (__fastcall *)(PVOID))((unsigned __int64)a1 ^ RtlpHeapKey ^ a1[3].Value),
         v22 != RtlpHpSegLfhVsCommit)
      ? (v23 = ((__int64 (__fastcall *)(unsigned __int64, PSLIST_ENTRY, _QWORD))v22)(a1->Value, v17, v19))
      : (v23 = RtlpHpSegLfhVsCommit(a1->Ptr)),
        v23 < 0) )
  {
    ((void (__fastcall *)(unsigned __int64, PSLIST_ENTRY, _QWORD))((unsigned __int64)a1 ^ RtlpHeapKey ^ a1[2].Value))(
      a1->Value,
      v17,
      a3);
  }
  else
  {
    RtlpHpLfhSubsegmentInitialize(v17);
    _InterlockedIncrement64((volatile signed __int64 *)(a2 + 64));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 56), WORD1(v17[2].Next));
    v8 = v17;
  }
LABEL_26:
  if ( !v15 )
    RtlReleaseSRWLockShared(a1 + 6);
  return v8;
}
