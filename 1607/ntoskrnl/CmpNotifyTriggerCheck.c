/*
 * XREFs of CmpNotifyTriggerCheck @ 0x1403FCB5C
 * Callers:
 *     CmpReportNotifyHelper @ 0x1404F7D50 (CmpReportNotifyHelper.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x1400EE420 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x1400EE580 (ExReleaseFastMutexUnsafe.c)
 *     CmpCheckNotifyAccess @ 0x1403FCBD4 (CmpCheckNotifyAccess.c)
 */

char __fastcall CmpNotifyTriggerCheck(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax

  ExAcquireFastMutexUnsafe(&CmpPostLock);
  v6 = a1 + 16;
  if ( *(_QWORD *)v6 == v6 || (unsigned __int16)*(_DWORD *)(*(_QWORD *)v6 + 56LL) != 3 )
  {
    ExReleaseFastMutexUnsafe(&CmpPostLock);
    return CmpCheckNotifyAccess(a1, a2, a3);
  }
  else
  {
    ExReleaseFastMutexUnsafe(&CmpPostLock);
    return 1;
  }
}
