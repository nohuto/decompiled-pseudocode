/*
 * XREFs of PspTerminateProcess @ 0x14041C990
 * Callers:
 *     NtTerminateProcess @ 0x14041C6B4 (NtTerminateProcess.c)
 *     PsTerminateProcess @ 0x1405579A8 (PsTerminateProcess.c)
 * Callees:
 *     EtwTraceProcessTerminate @ 0x14000B120 (EtwTraceProcessTerminate.c)
 *     KeSetProcessSchedulingGroup @ 0x14000B188 (KeSetProcessSchedulingGroup.c)
 *     KeForceResumeProcess @ 0x14000BA84 (KeForceResumeProcess.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     PspTerminateAllThreads @ 0x14041CBA4 (PspTerminateAllThreads.c)
 */

__int64 __fastcall PspTerminateProcess(__int64 BugCheckParameter1, __int64 a2, unsigned int a3)
{
  char v5; // di
  int v6; // r15d
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // r9
  __int64 v10; // rbp
  unsigned int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned int v14; // edi

  _m_prefetchw((const void *)(BugCheckParameter1 + 772));
  v5 = _InterlockedOr((volatile signed __int32 *)(BugCheckParameter1 + 772), 8u);
  v6 = v5 & 8;
  if ( (v5 & 8) == 0 )
  {
    if ( (PerfGlobalGroupMask & 1) != 0 )
      EtwTraceProcessTerminate(BugCheckParameter1);
    KeSetProcessSchedulingGroup(BugCheckParameter1, 0LL);
    v8 = KeAbPreAcquire(BugCheckParameter1 + 728, 0LL, 0LL, v7);
    v10 = v8;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 728), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(BugCheckParameter1 + 728), v8, BugCheckParameter1 + 728, v9);
    if ( v10 )
      *(_BYTE *)(v10 + 26) |= 1u;
    if ( *(_DWORD *)(BugCheckParameter1 + 1168) && (a3 != -1073741749 || *(_DWORD *)(BugCheckParameter1 + 1556) == 259) )
      *(_DWORD *)(BugCheckParameter1 + 1556) = a3;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter1 + 728), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter1 + 728));
    KeAbPostRelease(BugCheckParameter1 + 728);
  }
  if ( *(_QWORD *)(BugCheckParameter1 + 1784) && *(&xmmword_14032C3A0 + 1) )
    v11 = ((__int64 (__fastcall *)(__int64, _QWORD))*(&xmmword_14032C3A0 + 1))(BugCheckParameter1, a3);
  else
    v11 = PspTerminateAllThreads(BugCheckParameter1);
  v14 = v11;
  if ( !v6 )
    KeForceResumeProcess(BugCheckParameter1, v12, v13);
  return v14;
}
