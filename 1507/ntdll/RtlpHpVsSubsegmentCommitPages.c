/*
 * XREFs of RtlpHpVsSubsegmentCommitPages @ 0x180036DB0
 * Callers:
 *     RtlpHpVsChunkDecommit @ 0x1800277E4 (RtlpHpVsChunkDecommit.c)
 *     RtlpHpVsChunkSplit @ 0x180028560 (RtlpHpVsChunkSplit.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpSegLfhVsDecommit @ 0x180037080 (RtlpHpSegLfhVsDecommit.c)
 *     RtlpHpSegLfhVsCommit @ 0x180037280 (RtlpHpSegLfhVsCommit.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 */

__int64 __fastcall RtlpHpVsSubsegmentCommitPages(
        __int64 a1,
        _RTL_SRWLOCK *a2,
        unsigned __int64 a3,
        unsigned int a4,
        int a5)
{
  unsigned __int64 v5; // r10
  unsigned __int64 v7; // r14
  unsigned __int64 v9; // rcx
  char *v10; // r15
  unsigned int v11; // r12d
  __int64 v12; // rsi
  __int64 (__fastcall *v13)(PVOID); // rdi
  int v14; // eax
  unsigned int v15; // edi
  unsigned __int64 v16; // rax
  void (__fastcall *v18)(_QWORD, char *, _QWORD); // rdi
  int v19; // [rsp+20h] [rbp-38h]
  _RTL_SRWLOCK *SRWLock; // [rsp+28h] [rbp-30h]

  _BitScanForward64(&v5, a3);
  v7 = a4;
  _BitScanReverse64(&v9, a3);
  v10 = (char *)a2 + (unsigned int)((_DWORD)v5 << 12);
  v19 = 1 - v5 + v9;
  v11 = v19 << 12;
  SRWLock = a2 + 3;
  v12 = ((1LL << v19) - 1) << v5;
  RtlAcquireSRWLockExclusive(a2 + 3);
  if ( !a5 )
  {
    v18 = (void (__fastcall *)(_QWORD, char *, _QWORD))(a1 ^ RtlpHeapKey ^ *(_QWORD *)(a1 + 88));
    if ( (char *)v18 == (char *)RtlpHpSegLfhVsDecommit )
      RtlpHpSegLfhVsDecommit(*(_QWORD *)(a1 + 56), v10, v11);
    else
      v18(*(_QWORD *)(a1 + 56), v10, v11);
    a2[2].Value &= ~v12;
    v16 = -(int)v7;
    goto LABEL_6;
  }
  v13 = (__int64 (__fastcall *)(PVOID))(a1 ^ RtlpHeapKey ^ *(_QWORD *)(a1 + 80));
  if ( v13 == RtlpHpSegLfhVsCommit )
    v14 = RtlpHpSegLfhVsCommit(*(PVOID *)(a1 + 56));
  else
    v14 = ((__int64 (__fastcall *)(_QWORD, char *, _QWORD))v13)(*(_QWORD *)(a1 + 56), v10, v11);
  v15 = v14;
  if ( v14 >= 0 )
  {
    a2[2].Value |= v12;
    v16 = v7;
LABEL_6:
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 40), v16);
    v15 = 0;
  }
  RtlReleaseSRWLockExclusive(SRWLock);
  return v15;
}
