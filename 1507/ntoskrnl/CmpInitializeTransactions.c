/*
 * XREFs of CmpInitializeTransactions @ 0x1407D60A0
 * Callers:
 *     CmInitSystem1 @ 0x1407D6D64 (CmInitSystem1.c)
 * Callees:
 *     <none>
 */

__int64 *CmpInitializeTransactions()
{
  unsigned __int64 v0; // rax
  __int64 v1; // r8
  __int64 v2; // r10
  _QWORD *v3; // rdx
  const char *v4; // rax
  __int64 v5; // rax
  int v6; // r9d
  __int64 *result; // rax
  __int64 v8; // rax
  _BYTE v9[2]; // [rsp+0h] [rbp-18h] BYREF
  _QWORD *v10; // [rsp+2h] [rbp-16h]

  byte_14034D4DA = 6;
  qword_14034D4B8 = (__int64)&CmpRmListHead;
  CmpRmListHead = (__int64)&CmpRmListHead;
  qword_14034D4E8 = (__int64)&qword_14034D4E0;
  qword_14034D4E0 = (__int64)&qword_14034D4E0;
  qword_14034D788 = (__int64)&qword_14034D780;
  qword_14034D780 = (__int64)&qword_14034D780;
  CmpLazyCommitWorkItem.WorkerRoutine = (void (__fastcall *)(void *))CmpLazyCommitWorker;
  qword_14034D7C8 = (__int64)&CmpLazyCommitListHead;
  CmpLazyCommitListHead = (__int64)&CmpLazyCommitListHead;
  LODWORD(CmpRmListLock) = 1;
  qword_14034D4C8 = 0LL;
  dword_14034D4D0 = 0;
  word_14034D4D8 = 1;
  dword_14034D4DC = 0;
  LODWORD(CmpTransactionListLock) = 1;
  qword_14034D768 = 0LL;
  dword_14034D770 = 0;
  word_14034D778 = 1;
  byte_14034D77A = 6;
  dword_14034D77C = 0;
  CmpTransactionInitializingEvent = 0LL;
  CmpLazyCommitWorkItem.Parameter = 0LL;
  CmpLazyCommitWorkItem.List.Flink = 0LL;
  if ( !qword_14034E4D0 )
  {
    v0 = __rdtsc();
    v1 = (41929663 * (unsigned int)((((unsigned __int64)HIDWORD(v0) << 32) | (unsigned int)v0) >> 4)) ^ 0xF93LL;
    if ( !v1 )
      v1 = 1LL;
    qword_14034E4D0 = v1;
    v2 = (41929663 * (unsigned int)(__rdtsc() >> 4)) ^ 0x531LL;
    qword_14034E4D8 = v2;
    __sidt(v9);
    v3 = v10;
    v4 = (const char *)v10;
    if ( v10 < v10 + 106 )
    {
      do
      {
        _mm_prefetch(v4, 0);
        v4 += 64;
      }
      while ( v4 < (const char *)v10 + 848 );
    }
    v5 = 106LL;
    v6 = 848;
    do
    {
      v1 = __ROR8__(v1 - *v3++, v2);
      v6 -= 8;
      --v5;
    }
    while ( v5 );
    for ( ; v6; --v6 )
    {
      v8 = *(unsigned __int8 *)v3;
      v3 = (_QWORD *)((char *)v3 + 1);
      v1 = __ROR8__(v1 - v8, v2);
    }
    qword_14034E4E8 = v1;
    qword_14034E4E0 = MEMORY[0xFFFFF78000000008]
                    + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL
                    - MEMORY[0xFFFFF780000003B0]
                    + 288000000000LL;
  }
  CmpLazyCommitTimer = 8LL;
  qword_14034D838 = (__int64)CmpLazyCommitDpcRoutine;
  qword_14034D7F0 = (__int64)&qword_14034D7E8;
  qword_14034D7E8 = (__int64)&qword_14034D7E8;
  qword_14034D508 = (__int64)&CmpDelayFreeRMListHead;
  CmpDelayFreeRMListHead = &CmpDelayFreeRMListHead;
  qword_14034D548 = (__int64)&qword_14034D540;
  qword_14034D540 = (__int64)&qword_14034D540;
  qword_14034D570 = (__int64)CmpDelayFreeRMWorker;
  qword_14034D598 = (__int64)CmpDelayFreeRMDpcRoutine;
  result = &qword_14034D5C8;
  CmpDelayFreeRMTimer = 8LL;
  qword_14034D5D0 = (__int64)&qword_14034D5C8;
  qword_14034D5C8 = (__int64)&qword_14034D5C8;
  CmpLazyCommitDpc = 275;
  qword_14034D840 = 0LL;
  qword_14034D858 = 0LL;
  qword_14034D830 = 0LL;
  qword_14034D7F8 = 0LL;
  qword_14034D818 = 0LL;
  LODWORD(CmpDelayFreeRMLock) = 1;
  qword_14034D528 = 0LL;
  dword_14034D530 = 0;
  word_14034D538 = 1;
  byte_14034D53A = 6;
  dword_14034D53C = 0;
  qword_14034D578 = 0LL;
  CmpDelayFreeRMWorkItem = 0LL;
  CmpDelayFreeRMDpc = 275;
  qword_14034D5A0 = 0LL;
  qword_14034D5B8 = 0LL;
  qword_14034D590 = 0LL;
  qword_14034D5D8 = 0LL;
  qword_14034D5F8 = 0LL;
  return result;
}
