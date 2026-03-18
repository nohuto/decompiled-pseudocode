/*
 * XREFs of CmpNotifyTriggerCheck @ 0x1404AFC04
 * Callers:
 *     CmpReportNotifyHelper @ 0x1403F5130 (CmpReportNotifyHelper.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140037A60 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140037BF0 (ExReleaseFastMutexUnsafe.c)
 *     CmpCheckNotifyAccess @ 0x1404AFC7C (CmpCheckNotifyAccess.c)
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
