/*
 * XREFs of RtlpTpIoDllUnloaded @ 0x1800900FC
 * Callers:
 *     RtlpTpIoDllNotification @ 0x180090030 (RtlpTpIoDllNotification.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C550 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpTpIoDllProcessUnloads @ 0x1800FE86C (RtlpTpIoDllProcessUnloads.c)
 */

signed __int64 __fastcall RtlpTpIoDllUnloaded(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r8
  unsigned __int64 v6; // rcx
  signed __int64 result; // rax

  if ( (*(_BYTE *)a1 & 1) == 0 )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpTpIoTreeLock, a2, a3, a4);
    v5 = RtlpTpIoTree;
    while ( v5 )
    {
      v6 = *(_QWORD *)(v5 - 96);
      if ( v6 < *(_QWORD *)(a1 + 24) )
        goto LABEL_9;
      if ( v6 < *(_QWORD *)(a1 + 24) + (unsigned __int64)*(unsigned int *)(a1 + 32) )
      {
        RtlpTpIoDllProcessUnloads(a1);
        return RtlReleaseSRWLockExclusive(&RtlpTpIoTreeLock);
      }
      if ( v6 < *(_QWORD *)(a1 + 24) )
LABEL_9:
        v5 = *(_QWORD *)(v5 + 16);
      else
        v5 = *(_QWORD *)(v5 + 8);
    }
    return RtlReleaseSRWLockExclusive(&RtlpTpIoTreeLock);
  }
  return result;
}
