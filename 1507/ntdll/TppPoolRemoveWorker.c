/*
 * XREFs of TppPoolRemoveWorker @ 0x180072180
 * Callers:
 *     TppWorkerThread @ 0x180039390 (TppWorkerThread.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 */

signed __int64 __fastcall TppPoolRemoveWorker(_QWORD *a1, char *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  _QWORD *v6; // rcx

  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1[6] + 72LL), a2, a3, a4);
  v5 = a1[2];
  v6 = (_QWORD *)a1[3];
  if ( *(_QWORD **)(v5 + 8) != a1 + 2 || (_QWORD *)*v6 != a1 + 2 )
    __fastfail(3u);
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  return RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1[6] + 72LL));
}
