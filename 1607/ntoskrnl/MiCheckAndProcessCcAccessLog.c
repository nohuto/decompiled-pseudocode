/*
 * XREFs of MiCheckAndProcessCcAccessLog @ 0x1400886A4
 * Callers:
 *     MiEmptyAccessLogs @ 0x140088410 (MiEmptyAccessLogs.c)
 * Callees:
 *     MiQueuePageAccessLog @ 0x140088894 (MiQueuePageAccessLog.c)
 */

__int64 __fastcall MiCheckAndProcessCcAccessLog(__int64 a1, int a2)
{
  __int64 result; // rax
  _SLIST_ENTRY *v3; // rcx

  result = a1;
  if ( qword_1403271C0 )
  {
    v3 = (_SLIST_ENTRY *)_InterlockedExchange64(&qword_1403271C0, 0LL);
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
