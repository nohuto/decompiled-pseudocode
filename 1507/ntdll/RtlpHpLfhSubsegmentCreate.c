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

PSLIST_ENTRY __fastcall RtlpHpLfhSubsegmentCreate(unsigned __int64 a1, __int64 a2, unsigned int a3)
{
  int v5; // r13d
  unsigned int v6; // ecx
  unsigned int v7; // r10d
  PSLIST_ENTRY v8; // r14
  int SubSegmentBlockCount; // eax
  __int64 v10; // r8
  __int64 v11; // r9
  char v12; // r11
  unsigned int v13; // ebx
  int v14; // ecx
  __int64 v15; // rdx
  unsigned int v16; // ebp
  int v17; // r15d
  union _SLIST_HEADER *v18; // rcx
  PSLIST_ENTRY v19; // rdi
  unsigned int v20; // edx
  unsigned int v21; // ebx
  unsigned int v22; // ecx
  __int64 (__fastcall *v24)(_QWORD); // r13
  int v25; // eax
  __int64 (__fastcall *v26)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 v27; // rax

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
  v13 = 7;
  v14 = v5 * SubSegmentBlockCount
      + ((8 * (((unsigned __int64)(unsigned int)(2 * SubSegmentBlockCount) + 63) >> 6) + 63) & 0xFFFFFFF0);
  v15 = v14 + 2 * ((unsigned int)(v14 + 4095) >> 12);
  if ( (unsigned int)v15 > 0xF0000 )
    v15 = 983040LL;
  if ( (v15 & 0xFFFFFF80) != 0 )
  {
    do
      ++v13;
    while ( (unsigned int)v15 >> v13 );
    if ( v13 > 0x12 )
      v13 = 18;
  }
  if ( v13 <= 0xC )
    v13 = 12;
  v16 = 1 << v13;
  v17 = v12 & 1;
  if ( (v12 & 1) == 0 )
    RtlAcquireSRWLockShared((volatile signed __int64 *)(a1 + 48), (char *)v15, v10, v11);
  v18 = (union _SLIST_HEADER *)(a1 + 16 * (v13 - 12 + 5LL));
  if ( !LOWORD(v18->Alignment) || (v19 = RtlpInterlockedPopEntrySList(v18)) == 0LL )
    v19 = 0LL;
  if ( v19 )
  {
    v20 = 1 << *((_BYTE *)&v19[2].Next + 12);
  }
  else
  {
    v26 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))(a1 ^ RtlpHeapKey ^ *(_QWORD *)(a1 + 8));
    if ( v26 == RtlpHpSegLfhAllocate )
      v27 = RtlpHpSegLfhAllocate(*(_QWORD *)a1, v16, a3);
    else
      v27 = v26(*(_QWORD *)a1, v16, a3);
    v19 = (PSLIST_ENTRY)v27;
    if ( !v27 )
      goto LABEL_26;
    v20 = 0;
  }
  if ( (RtlpHpAppCompatFlags & 4) != 0 )
  {
    v21 = v16;
  }
  else
  {
    v21 = 2 * v5;
    if ( ((v21 - 1) & v21) != 0 )
    {
      _BitScanReverse(&v22, v21);
      v21 = 1 << (v22 + 1);
    }
    if ( v21 <= 0x1000 )
      v21 = 4096;
    if ( v21 >= v16 )
      v21 = v16;
  }
  if ( v20 < v21
    && ((v24 = (__int64 (__fastcall *)(_QWORD))(a1 ^ RtlpHeapKey ^ *(_QWORD *)(a1 + 24)), v24 != RtlpHpSegLfhVsCommit)
      ? (v25 = ((__int64 (__fastcall *)(_QWORD, PSLIST_ENTRY, _QWORD))v24)(*(_QWORD *)a1, v19, v21))
      : (v25 = RtlpHpSegLfhVsCommit(*(_QWORD *)a1)),
        v25 < 0) )
  {
    ((void (__fastcall *)(_QWORD, PSLIST_ENTRY, _QWORD))(a1 ^ RtlpHeapKey ^ *(_QWORD *)(a1 + 16)))(
      *(_QWORD *)a1,
      v19,
      a3);
  }
  else
  {
    RtlpHpLfhSubsegmentInitialize(v19);
    _InterlockedIncrement64((volatile signed __int64 *)(a2 + 64));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 56), WORD1(v19[2].Next));
    v8 = v19;
  }
LABEL_26:
  if ( !v17 )
    RtlReleaseSRWLockShared((volatile signed __int64 *)(a1 + 48));
  return v8;
}
