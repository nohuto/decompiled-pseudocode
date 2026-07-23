/*
 * XREFs of TppPoolRemoveWorker @ 0x180072180
 * Callers:
 *     TppWorkerThread @ 0x180039390 (TppWorkerThread.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 */

void __fastcall TppPoolRemoveWorker(_QWORD *a1)
{
  __int64 v2; // rdx
  _QWORD *v3; // rcx

  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1[6] + 72LL));
  v2 = a1[2];
  v3 = (_QWORD *)a1[3];
  if ( *(_QWORD **)(v2 + 8) != a1 + 2 || (_QWORD *)*v3 != a1 + 2 )
    __fastfail(3u);
  *v3 = v2;
  *(_QWORD *)(v2 + 8) = v3;
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1[6] + 72LL));
}
