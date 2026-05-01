/*
 * XREFs of ?RmpEmptyWorkerStart@@YAJPEAU_RM_EMPTY_WORKER_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180005334
 * Callers:
 *     RmpEnforcementInfoInitializeCommon @ 0x180005244 (RmpEnforcementInfoInitializeCommon.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall RmpEmptyWorkerStart(void **a1, struct _RM_ACTIVITY_HOST *a2)
{
  NTSTATUS result; // eax

  result = TpAllocWork(a1, RmpEmptyWorkerCallback, a2, *((_QWORD *)a2 + 5) + 3128LL);
  if ( result >= 0 )
  {
    result = NtCreateEvent(a1 + 1, 0x1F0003u, 0LL, NotificationEvent, 0);
    if ( result >= 0 )
    {
      result = NtCreateEvent(a1 + 2, 0x1F0003u, 0LL, NotificationEvent, 0);
      if ( result >= 0 )
        return 0;
    }
  }
  return result;
}
