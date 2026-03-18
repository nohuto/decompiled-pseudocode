/*
 * XREFs of PspTerminateProcess @ 0x140450604
 * Callers:
 *     NtTerminateProcess @ 0x140450420 (NtTerminateProcess.c)
 *     PsTerminateProcess @ 0x140452368 (PsTerminateProcess.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KeForceResumeProcess @ 0x1400946B4 (KeForceResumeProcess.c)
 *     KeSetProcessSchedulingGroup @ 0x140094784 (KeSetProcessSchedulingGroup.c)
 *     EtwTraceProcessTerminate @ 0x140095CC8 (EtwTraceProcessTerminate.c)
 *     PspRundownSingleProcess @ 0x1403E770C (PspRundownSingleProcess.c)
 *     PspTerminateAllThreads @ 0x1403F2750 (PspTerminateAllThreads.c)
 */

__int64 __fastcall PspTerminateProcess(ULONG_PTR BugCheckParameter1, ULONG_PTR a2, unsigned int a3, char a4)
{
  char v4; // si
  signed __int32 v8; // edi
  int v9; // r15d
  __int64 v10; // rax
  __int64 v11; // rbp
  unsigned int v12; // eax
  unsigned int v13; // edi

  v4 = a4;
  _m_prefetchw((const void *)(BugCheckParameter1 + 772));
  v8 = _InterlockedOr((volatile signed __int32 *)(BugCheckParameter1 + 772), 8u);
  v9 = v8 & 8;
  if ( (v8 & 8) != 0 )
  {
    v4 = a4 | 2;
  }
  else
  {
    if ( (PerfGlobalGroupMask & 1) != 0 )
      EtwTraceProcessTerminate(BugCheckParameter1);
    KeSetProcessSchedulingGroup(BugCheckParameter1, 0LL);
    if ( (v8 & 0x40000000) != 0 )
      v4 |= 4u;
    v10 = KeAbPreAcquire(BugCheckParameter1 + 728, 0LL, 0LL);
    v11 = v10;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 728), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(BugCheckParameter1 + 728), v10, BugCheckParameter1 + 728);
    if ( v11 )
      *(_BYTE *)(v11 + 26) |= 1u;
    if ( *(_DWORD *)(BugCheckParameter1 + 1176) && (a3 != -1073741749 || *(_DWORD *)(BugCheckParameter1 + 1564) == 259) )
      *(_DWORD *)(BugCheckParameter1 + 1564) = a3;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter1 + 728), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter1 + 728));
    KeAbPostRelease(BugCheckParameter1 + 728);
  }
  if ( !*(_QWORD *)(BugCheckParameter1 + 1792) )
  {
    v12 = PspTerminateAllThreads(BugCheckParameter1, a2, a3, v4);
LABEL_18:
    v13 = v12;
    goto LABEL_19;
  }
  if ( qword_1402DC048 && (v4 & 8) == 0 )
  {
    v12 = qword_1402DC048(BugCheckParameter1, a3);
    goto LABEL_18;
  }
  v13 = 290;
  PspRundownSingleProcess(BugCheckParameter1, 0);
LABEL_19:
  if ( !v9 )
    KeForceResumeProcess(BugCheckParameter1);
  return v13;
}
