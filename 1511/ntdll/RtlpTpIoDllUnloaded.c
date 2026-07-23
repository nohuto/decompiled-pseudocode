/*
 * XREFs of RtlpTpIoDllUnloaded @ 0x18008D14C
 * Callers:
 *     RtlpTpIoDllNotification @ 0x18008D080 (RtlpTpIoDllNotification.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     RtlpTpIoDllProcessUnloads @ 0x1800F596C (RtlpTpIoDllProcessUnloads.c)
 */

void __fastcall RtlpTpIoDllUnloaded(__int64 a1)
{
  __int64 v2; // r8
  unsigned __int64 v3; // rcx

  if ( (*(_BYTE *)a1 & 1) == 0 )
  {
    RtlAcquireSRWLockExclusive(&RtlpTpIoTreeLock);
    v2 = RtlpTpIoTree;
    while ( v2 )
    {
      v3 = *(_QWORD *)(v2 - 96);
      if ( v3 < *(_QWORD *)(a1 + 24) )
        goto LABEL_9;
      if ( v3 < *(_QWORD *)(a1 + 24) + (unsigned __int64)*(unsigned int *)(a1 + 32) )
      {
        RtlpTpIoDllProcessUnloads(a1);
        break;
      }
      if ( v3 < *(_QWORD *)(a1 + 24) )
LABEL_9:
        v2 = *(_QWORD *)(v2 + 16);
      else
        v2 = *(_QWORD *)(v2 + 8);
    }
    RtlReleaseSRWLockExclusive(&RtlpTpIoTreeLock);
  }
}
