/*
 * XREFs of PspTerminateProcess @ 0x140507F68
 * Callers:
 *     PsTerminateProcess @ 0x1404EC470 (PsTerminateProcess.c)
 *     NtTerminateProcess @ 0x140507D84 (NtTerminateProcess.c)
 *     PspTerminatePicoProcess @ 0x140681B88 (PspTerminatePicoProcess.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C8070 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C8738 (ExfTryToWakePushLock.c)
 *     EtwTraceProcessTerminate @ 0x1400C88B0 (EtwTraceProcessTerminate.c)
 *     KeSetProcessSchedulingGroup @ 0x1400C8B14 (KeSetProcessSchedulingGroup.c)
 *     KeForceResumeProcess @ 0x1400C8E70 (KeForceResumeProcess.c)
 *     PspRundownSingleProcess @ 0x14045E0C0 (PspRundownSingleProcess.c)
 *     PspTerminateAllThreads @ 0x1405096F0 (PspTerminateAllThreads.c)
 */

__int64 __fastcall PspTerminateProcess(ULONG_PTR BugCheckParameter1, __int64 a2, unsigned int a3, char a4)
{
  char v4; // si
  signed __int32 v7; // edi
  int v8; // r15d
  _BYTE *v9; // rax
  _BYTE *v10; // rbp
  unsigned int v11; // eax
  unsigned int v12; // edi

  v4 = a4;
  _m_prefetchw((const void *)(BugCheckParameter1 + 772));
  v7 = _InterlockedOr((volatile signed __int32 *)(BugCheckParameter1 + 772), 8u);
  v8 = v7 & 8;
  if ( (v7 & 8) != 0 )
  {
    v4 = a4 | 2;
  }
  else
  {
    if ( (PerfGlobalGroupMask & 1) != 0 )
      EtwTraceProcessTerminate(BugCheckParameter1);
    KeSetProcessSchedulingGroup(BugCheckParameter1, 0LL);
    if ( (v7 & 0x40000000) != 0 )
      v4 |= 4u;
    v9 = (_BYTE *)KeAbPreAcquire(BugCheckParameter1 + 728, 0LL, 0);
    v10 = v9;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 728), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(BugCheckParameter1 + 728), v9, BugCheckParameter1 + 728);
    if ( v10 )
      v10[26] |= 1u;
    if ( *(_DWORD *)(BugCheckParameter1 + 1176) && (a3 != -1073741749 || *(_DWORD *)(BugCheckParameter1 + 1580) == 259) )
      *(_DWORD *)(BugCheckParameter1 + 1580) = a3;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter1 + 728), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter1 + 728));
    KeAbPostRelease(BugCheckParameter1 + 728);
  }
  if ( !*(_QWORD *)(BugCheckParameter1 + 1808) )
  {
    v11 = PspTerminateAllThreads(BugCheckParameter1);
LABEL_18:
    v12 = v11;
    goto LABEL_19;
  }
  if ( *(&xmmword_1403013C0 + 1) && (v4 & 8) == 0 )
  {
    v11 = ((__int64 (__fastcall *)(ULONG_PTR, _QWORD))*(&xmmword_1403013C0 + 1))(BugCheckParameter1, a3);
    goto LABEL_18;
  }
  v12 = 290;
  PspRundownSingleProcess(BugCheckParameter1, 0);
LABEL_19:
  if ( !v8 )
    KeForceResumeProcess(BugCheckParameter1);
  return v12;
}
