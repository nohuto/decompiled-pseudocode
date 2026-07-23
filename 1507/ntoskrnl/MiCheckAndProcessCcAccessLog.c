/*
 * XREFs of MiCheckAndProcessCcAccessLog @ 0x140119F44
 * Callers:
 *     MiEmptyAccessLogs @ 0x1400D6F7C (MiEmptyAccessLogs.c)
 * Callees:
 *     MiQueuePageAccessLog @ 0x140119FD0 (MiQueuePageAccessLog.c)
 */

__int64 __fastcall MiCheckAndProcessCcAccessLog(__int64 a1, int a2)
{
  __int64 result; // rax
  _SLIST_ENTRY *v3; // rcx

  result = a1;
  if ( qword_14034F240 )
  {
    v3 = (_SLIST_ENTRY *)_InterlockedExchange64(&qword_14034F240, 0LL);
    if ( v3 )
    {
      if ( result - (unsigned __int64)v3[1].Next > PfKernelGlobals || a2 )
        return MiQueuePageAccessLog(v3);
      else
        return MiReturnCcAccessLog(v3);
    }
  }
  return result;
}
