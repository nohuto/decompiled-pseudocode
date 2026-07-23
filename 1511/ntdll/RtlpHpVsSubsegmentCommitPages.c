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

__int64 __fastcall RtlpHpVsSubsegmentCommitPages(
        __int64 a1,
        _RTL_SRWLOCK *a2,
        unsigned __int64 a3,
        unsigned int a4,
        int a5)
{
  unsigned __int64 v5; // r10
  unsigned __int64 v9; // rcx
  char *v10; // r12
  unsigned int v11; // r13d
  __int64 v12; // rbp
  int v13; // ebx
  unsigned __int64 v14; // rax
  int v16; // [rsp+20h] [rbp-38h]
  _RTL_SRWLOCK *SRWLock; // [rsp+28h] [rbp-30h]

  _BitScanForward64(&v5, a3);
  _BitScanReverse64(&v9, a3);
  v10 = (char *)a2 + (unsigned int)((_DWORD)v5 << 12);
  v16 = 1 - v5 + v9;
  v11 = v16 << 12;
  SRWLock = a2 + 3;
  v12 = ((1LL << v16) - 1) << v5;
  RtlAcquireSRWLockExclusive(a2 + 3);
  if ( !a5 )
  {
    ((void (__fastcall *)(_QWORD, char *, _QWORD))(a1 ^ RtlpHeapKey ^ *(_QWORD *)(a1 + 88)))(
      *(_QWORD *)(a1 + 56),
      v10,
      v11);
    a2[2].Value &= ~v12;
    v14 = -a4;
    goto LABEL_5;
  }
  v13 = ((__int64 (__fastcall *)(_QWORD, char *, _QWORD))(a1 ^ RtlpHeapKey ^ *(_QWORD *)(a1 + 80)))(
          *(_QWORD *)(a1 + 56),
          v10,
          v11);
  if ( v13 >= 0 )
  {
    a2[2].Value |= v12;
    v14 = a4;
LABEL_5:
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 40), v14);
    v13 = 0;
  }
  RtlReleaseSRWLockExclusive(SRWLock);
  return (unsigned int)v13;
}
