/*
 * XREFs of MiQueuePageFileExtension @ 0x1401DD024
 * Callers:
 *     MiIssuePageExtendRequest @ 0x1401DCCB8 (MiIssuePageExtendRequest.c)
 *     MiIssuePageExtendRequestNoWait @ 0x1401DCE50 (MiIssuePageExtendRequestNoWait.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusive @ 0x14004CC00 (ExReleaseSpinLockExclusive.c)
 *     KeReleaseSemaphoreEx @ 0x14007A6F0 (KeReleaseSemaphoreEx.c)
 */

__int64 __fastcall MiQueuePageFileExtension(__int64 a1, char a2)
{
  __int64 v2; // rdi
  KIRQL v5; // al
  _QWORD *v6; // rbx
  __int64 v7; // r8
  __int64 v8; // r9

  v2 = *(_QWORD *)(a1 + 24);
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v2 + 1536));
  v6 = (_QWORD *)(a1 + 8);
  v7 = *(_QWORD *)(v2 + 1304);
  *v6 = v7;
  v6[1] = v2 + 1304;
  if ( *(_QWORD *)(v7 + 8) != v2 + 1304 )
    __fastfail(3u);
  *(_QWORD *)(v7 + 8) = v6;
  *(_QWORD *)(v2 + 1304) = v6;
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v2 + 1536), v5);
  return KeReleaseSemaphoreEx(v2 + 1272, 0, 1LL, v8, a2);
}
