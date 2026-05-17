/*
 * XREFs of RtlpHpLfhSubsegmentCreate @ 0x180058054
 * Callers:
 *     RtlpHpAllocateHeapInternal @ 0x1800270C0 (RtlpHpAllocateHeapInternal.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x1800276F0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x1800277C0 (RtlAcquireSRWLockShared.c)
 *     RtlpHpLfhSubsegmentInitialize @ 0x18005829C (RtlpHpLfhSubsegmentInitialize.c)
 *     RtlpGetSubSegmentBlockCount @ 0x1800588D0 (RtlpGetSubSegmentBlockCount.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 *     RtlpInterlockedPopEntrySList @ 0x1800A88F0 (RtlpInterlockedPopEntrySList.c)
 */

PSLIST_ENTRY __fastcall RtlpHpLfhSubsegmentCreate(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // r10d
  unsigned int v5; // esi
  int v7; // edi
  unsigned int v8; // ecx
  int SubSegmentBlockCount; // eax
  __int64 v10; // r8
  __int64 v11; // r9
  struct _SLIST_ENTRY *v12; // r11
  unsigned int v13; // ebx
  int v14; // ecx
  __int64 v15; // rdx
  unsigned int v16; // r15d
  int v17; // r12d
  union _SLIST_HEADER *v18; // rcx
  PSLIST_ENTRY v19; // rbp
  PSLIST_ENTRY v20; // rdi
  unsigned int v21; // edx
  unsigned int v22; // esi
  unsigned int v23; // ecx
  unsigned int v25; // [rsp+70h] [rbp+18h]

  v25 = a3;
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
  v13 = (_DWORD)v12 + 7;
  v14 = v7 * SubSegmentBlockCount
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
  v17 = v5 & 1;
  if ( (v5 & 1) == 0 )
  {
    RtlAcquireSRWLockShared((volatile signed __int64 *)(a1 + 48), (char *)v15, v10, v11);
    v12 = 0LL;
  }
  v18 = (union _SLIST_HEADER *)(a1 + 16 * (v13 - 12 + 5LL));
  if ( LOWORD(v18->Alignment) == (_WORD)v12 )
    v19 = v12;
  else
    v19 = RtlpInterlockedPopEntrySList(v18);
  if ( v19 )
  {
    v21 = 1 << *((_BYTE *)&v19[2].Next + 12);
  }
  else
  {
    v19 = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))(a1 ^ RtlpHeapKey ^ *(_QWORD *)(a1 + 8)))(
                          *(_QWORD *)a1,
                          v16,
                          v5);
    if ( !v19 )
    {
      v20 = 0LL;
      goto LABEL_35;
    }
    v21 = 0;
  }
  if ( (RtlpHpAppCompatFlags & 4) != 0 )
  {
    v22 = 1 << v13;
  }
  else
  {
    v22 = 2 * v7;
    if ( ((v22 - 1) & v22) != 0 )
    {
      _BitScanReverse(&v23, v22);
      v22 = 1 << (v23 + 1);
    }
    if ( v22 <= 0x1000 )
      v22 = 4096;
    if ( v22 >= v16 )
      v22 = 1 << v13;
  }
  if ( v21 >= v22
    || ((int (__fastcall *)(_QWORD, PSLIST_ENTRY, _QWORD))(a1 ^ RtlpHeapKey ^ *(_QWORD *)(a1 + 24)))(
         *(_QWORD *)a1,
         v19,
         v22) >= 0 )
  {
    RtlpHpLfhSubsegmentInitialize(v19);
    _InterlockedIncrement64((volatile signed __int64 *)(a2 + 64));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 56), WORD1(v19[2].Next));
    v20 = v19;
    v19 = 0LL;
  }
  else
  {
    v20 = 0LL;
  }
  if ( v19 )
    ((void (__fastcall *)(_QWORD, PSLIST_ENTRY, _QWORD))(a1 ^ RtlpHeapKey ^ *(_QWORD *)(a1 + 16)))(
      *(_QWORD *)a1,
      v19,
      v25);
LABEL_35:
  if ( !v17 )
    RtlReleaseSRWLockShared((volatile signed __int64 *)(a1 + 48));
  return v20;
}
