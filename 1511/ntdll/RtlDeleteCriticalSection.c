/*
 * XREFs of RtlDeleteCriticalSection @ 0x180059D20
 * Callers:
 *     RtlCreateHeap @ 0x180055310 (RtlCreateHeap.c)
 *     RtlDestroyHeap @ 0x1800590E0 (RtlDestroyHeap.c)
 *     RtlDeleteResource @ 0x180059CD0 (RtlDeleteResource.c)
 *     EtwpFreeLoggerContext @ 0x18005BB24 (EtwpFreeLoggerContext.c)
 *     RtlTraceDatabaseDestroy @ 0x1800EA650 (RtlTraceDatabaseDestroy.c)
 *     _ResFindClose @ 0x1800F98D4 (_ResFindClose.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     RtlpGetStackTraceAddressEx @ 0x180059E20 (RtlpGetStackTraceAddressEx.c)
 *     RtlpFreeDebugInfo @ 0x180059E48 (RtlpFreeDebugInfo.c)
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 *     memset @ 0x1800AB900 (memset.c)
 *     RtlReleaseStackTrace @ 0x1800E9290 (RtlReleaseStackTrace.c)
 */

__int64 __fastcall RtlDeleteCriticalSection(__int64 *a1, char *a2, __int64 a3, __int64 a4)
{
  char *v5; // rcx
  unsigned int v6; // r14d
  __int64 v7; // rbx
  BOOL v9; // edi
  __int64 *v10; // rax
  __int64 *v11; // rdx
  __int64 **v12; // rcx
  __int64 StackTraceAddress; // rax

  v5 = (char *)a1[3];
  if ( (unsigned __int64)(v5 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    v6 = NtClose(v5);
  else
    v6 = 0;
  v7 = *a1;
  if ( (unsigned __int64)(*a1 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    v9 = (a1[4] & 0x4000000) == 0;
    RtlAcquireSRWLockExclusive((unsigned __int64)&RtlCriticalSectionLock, a2, a3, a4);
    v10 = (__int64 *)(v7 + 16);
    if ( *(_QWORD *)(v7 + 16) )
    {
      v11 = (__int64 *)*v10;
      v12 = *(__int64 ***)(v7 + 24);
      if ( *(__int64 **)(*v10 + 8) != v10 || *v12 != v10 )
        __fastfail(3u);
      *v12 = v11;
      v11[1] = (__int64)v12;
    }
    RtlReleaseSRWLockExclusive(&RtlCriticalSectionLock);
    StackTraceAddress = RtlpGetStackTraceAddressEx(*(unsigned __int16 *)(v7 + 2), *(unsigned __int16 *)(v7 + 44));
    if ( StackTraceAddress )
      RtlReleaseStackTrace(StackTraceAddress);
    memset((void *)v7, 0, 0x30uLL);
    if ( v9 )
      RtlpFreeDebugInfo(v7);
  }
  memset(a1, 0, 0x28uLL);
  return v6;
}
