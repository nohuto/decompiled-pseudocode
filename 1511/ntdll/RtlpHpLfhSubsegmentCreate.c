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

PSLIST_ENTRY __fastcall RtlpHpLfhSubsegmentCreate(_RTL_SRWLOCK *a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // r10d
  unsigned int v5; // esi
  int v7; // edi
  unsigned int v8; // ecx
  int SubSegmentBlockCount; // eax
  _SLIST_ENTRY *v10; // r11
  unsigned int v11; // ebx
  int v12; // ecx
  unsigned int v13; // edx
  unsigned int v14; // r15d
  int v15; // r12d
  _SLIST_HEADER *v16; // rcx
  PSLIST_ENTRY v17; // rbp
  PSLIST_ENTRY v18; // rdi
  unsigned int v19; // edx
  unsigned int v20; // esi
  unsigned int v21; // ecx
  unsigned int v23; // [rsp+70h] [rbp+18h]

  v23 = a3;
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
  v11 = (_DWORD)v10 + 7;
  v12 = v7 * SubSegmentBlockCount
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
  v15 = v5 & 1;
  if ( (v5 & 1) == 0 )
  {
    RtlAcquireSRWLockShared(a1 + 6);
    v10 = 0LL;
  }
  v16 = (_SLIST_HEADER *)&a1[2 * v11 - 14];
  if ( LOWORD(v16->Alignment) == (_WORD)v10 )
    v17 = v10;
  else
    v17 = RtlpInterlockedPopEntrySList(v16);
  if ( v17 )
  {
    v19 = 1 << *((_BYTE *)&v17[2].Next + 12);
  }
  else
  {
    v17 = (PSLIST_ENTRY)((__int64 (__fastcall *)(unsigned __int64, _QWORD, _QWORD))((unsigned __int64)a1 ^ RtlpHeapKey ^ a1[1].Value))(
                          a1->Value,
                          v14,
                          v5);
    if ( !v17 )
    {
      v18 = 0LL;
      goto LABEL_35;
    }
    v19 = 0;
  }
  if ( (RtlpHpAppCompatFlags & 4) != 0 )
  {
    v20 = 1 << v11;
  }
  else
  {
    v20 = 2 * v7;
    if ( ((v20 - 1) & v20) != 0 )
    {
      _BitScanReverse(&v21, v20);
      v20 = 1 << (v21 + 1);
    }
    if ( v20 <= 0x1000 )
      v20 = 4096;
    if ( v20 >= v14 )
      v20 = 1 << v11;
  }
  if ( v19 >= v20
    || ((int (__fastcall *)(unsigned __int64, PSLIST_ENTRY, _QWORD))((unsigned __int64)a1 ^ RtlpHeapKey ^ a1[3].Value))(
         a1->Value,
         v17,
         v20) >= 0 )
  {
    RtlpHpLfhSubsegmentInitialize(v17);
    _InterlockedIncrement64((volatile signed __int64 *)(a2 + 64));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 56), WORD1(v17[2].Next));
    v18 = v17;
    v17 = 0LL;
  }
  else
  {
    v18 = 0LL;
  }
  if ( v17 )
    ((void (__fastcall *)(unsigned __int64, PSLIST_ENTRY, _QWORD))((unsigned __int64)a1 ^ RtlpHeapKey ^ a1[2].Value))(
      a1->Value,
      v17,
      v23);
LABEL_35:
  if ( !v15 )
    RtlReleaseSRWLockShared(a1 + 6);
  return v18;
}
