/*
 * XREFs of RtlDeleteCriticalSection @ 0x1800081B0
 * Callers:
 *     RtlDestroyHeap @ 0x180004920 (RtlDestroyHeap.c)
 *     RtlCreateHeap @ 0x180005330 (RtlCreateHeap.c)
 *     RtlDeleteResource @ 0x180008160 (RtlDeleteResource.c)
 *     EtwpFreeLoggerContext @ 0x1800094E8 (EtwpFreeLoggerContext.c)
 *     RtlTraceDatabaseDestroy @ 0x1800E5B70 (RtlTraceDatabaseDestroy.c)
 *     _ResFindClose @ 0x1800F9FBC (_ResFindClose.c)
 * Callees:
 *     RtlpGetStackTraceAddressEx @ 0x1800082B0 (RtlpGetStackTraceAddressEx.c)
 *     RtlpFreeDebugInfo @ 0x1800082D8 (RtlpFreeDebugInfo.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     NtClose @ 0x1800939F0 (NtClose.c)
 *     memset @ 0x180098540 (memset.c)
 *     RtlReleaseStackTrace @ 0x1800E4730 (RtlReleaseStackTrace.c)
 */

__int64 __fastcall RtlDeleteCriticalSection(__int64 *a1)
{
  char *v2; // rcx
  unsigned int v3; // r14d
  __int64 v4; // rbx
  BOOL v6; // edi
  __int64 *v7; // rax
  __int64 *v8; // rdx
  __int64 **v9; // rcx
  __int64 StackTraceAddress; // rax

  v2 = (char *)a1[3];
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    v3 = NtClose(v2);
  else
    v3 = 0;
  v4 = *a1;
  if ( (unsigned __int64)(*a1 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    v6 = (a1[4] & 0x4000000) == 0;
    RtlAcquireSRWLockExclusive(&RtlCriticalSectionLock);
    v7 = (__int64 *)(v4 + 16);
    if ( *(_QWORD *)(v4 + 16) )
    {
      v8 = (__int64 *)*v7;
      v9 = *(__int64 ***)(v4 + 24);
      if ( *(__int64 **)(*v7 + 8) != v7 || *v9 != v7 )
        __fastfail(3u);
      *v9 = v8;
      v8[1] = (__int64)v9;
    }
    RtlReleaseSRWLockExclusive(&RtlCriticalSectionLock);
    StackTraceAddress = RtlpGetStackTraceAddressEx(*(unsigned __int16 *)(v4 + 2), *(unsigned __int16 *)(v4 + 44));
    if ( StackTraceAddress )
      RtlReleaseStackTrace(StackTraceAddress);
    memset((void *)v4, 0, 0x30uLL);
    if ( v6 )
      RtlpFreeDebugInfo(v4);
  }
  memset(a1, 0, 0x28uLL);
  return v3;
}
