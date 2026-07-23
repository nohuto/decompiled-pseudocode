/*
 * XREFs of MiQueuePageFileExtension @ 0x1401EEB64
 * Callers:
 *     MiContractPagingFiles @ 0x140075FBC (MiContractPagingFiles.c)
 *     MiIssuePageExtendRequest @ 0x1401EE7B4 (MiIssuePageExtendRequest.c)
 *     MiContractWsSwapPageFileWorker @ 0x1401F75E8 (MiContractWsSwapPageFileWorker.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14002E520 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     KeReleaseSemaphoreEx @ 0x1400CCF30 (KeReleaseSemaphoreEx.c)
 */

__int64 __fastcall MiQueuePageFileExtension(__int64 a1, char a2, KIRQL a3)
{
  __int64 v3; // rdi
  __int64 v6; // rax
  _QWORD *v7; // rbx
  _QWORD *v8; // rcx
  __int64 v9; // r9

  v3 = *(_QWORD *)(a1 + 24);
  if ( a3 == 17 )
    a3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 1664));
  if ( (*(_BYTE *)(a1 + 79) & 8) != 0 )
  {
    v6 = v3 + 1408;
    v7 = (_QWORD *)(a1 + 8);
    v8 = *(_QWORD **)(v3 + 1416);
    if ( *v8 != v3 + 1408 )
      __fastfail(3u);
  }
  else
  {
    v6 = v3 + 1424;
    v7 = (_QWORD *)(a1 + 8);
    v8 = *(_QWORD **)(v3 + 1432);
    if ( *v8 != v3 + 1424 )
      __fastfail(3u);
  }
  *v7 = v6;
  v7[1] = v8;
  *v8 = v7;
  *(_QWORD *)(v6 + 8) = v7;
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 1664), a3);
  return KeReleaseSemaphoreEx(v3 + 1360, 0, 1, v9, a2);
}
