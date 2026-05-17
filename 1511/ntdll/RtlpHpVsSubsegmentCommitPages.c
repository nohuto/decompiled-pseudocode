/*
 * XREFs of RtlpHpVsSubsegmentCommitPages @ 0x18002FC60
 * Callers:
 *     RtlpFreeHeapInternal @ 0x1800214A0 (RtlpFreeHeapInternal.c)
 *     RtlpHpVsChunkSplit @ 0x18002A520 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsChunkDecommit @ 0x180050CDC (RtlpHpVsChunkDecommit.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 */

__int64 __fastcall RtlpHpVsSubsegmentCommitPages(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, int a5)
{
  unsigned __int64 v5; // r10
  unsigned int v7; // r15d
  unsigned __int64 v9; // rcx
  __int64 v10; // r12
  unsigned int v11; // r13d
  __int64 v12; // rbp
  int v13; // ebx
  unsigned __int64 v14; // rax
  int v16; // [rsp+20h] [rbp-38h]
  volatile signed __int64 *v17; // [rsp+28h] [rbp-30h]

  _BitScanForward64(&v5, a3);
  v7 = a4;
  _BitScanReverse64(&v9, a3);
  v10 = a2 + (unsigned int)((_DWORD)v5 << 12);
  v16 = 1 - v5 + v9;
  v11 = v16 << 12;
  v17 = (volatile signed __int64 *)(a2 + 24);
  v12 = ((1LL << v16) - 1) << v5;
  RtlAcquireSRWLockExclusive(a2 + 24, (char *)1, a3, a4);
  if ( !a5 )
  {
    ((void (__fastcall *)(_QWORD, __int64, _QWORD))(a1 ^ RtlpHeapKey ^ *(_QWORD *)(a1 + 88)))(
      *(_QWORD *)(a1 + 56),
      v10,
      v11);
    *(_QWORD *)(a2 + 16) &= ~v12;
    v14 = -v7;
    goto LABEL_5;
  }
  v13 = ((__int64 (__fastcall *)(_QWORD, __int64, _QWORD))(a1 ^ RtlpHeapKey ^ *(_QWORD *)(a1 + 80)))(
          *(_QWORD *)(a1 + 56),
          v10,
          v11);
  if ( v13 >= 0 )
  {
    *(_QWORD *)(a2 + 16) |= v12;
    v14 = v7;
LABEL_5:
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 40), v14);
    v13 = 0;
  }
  RtlReleaseSRWLockExclusive(v17);
  return (unsigned int)v13;
}
