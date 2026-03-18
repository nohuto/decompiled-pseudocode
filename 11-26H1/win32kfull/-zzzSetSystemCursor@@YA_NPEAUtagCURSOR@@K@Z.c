/*
 * XREFs of ?zzzSetSystemCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x140152F8C
 * Callers:
 *     NtUserSetSystemCursor @ 0x140152F00 (NtUserSetSystemCursor.c)
 * Callees:
 *     ?zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0x14000912C (-zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCur.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140032860 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     CheckWinstaAttributeAccess @ 0x14028FE90 (CheckWinstaAttributeAccess.c)
 */

char __fastcall zzzSetSystemCursor(struct tagCURSOR *a1, __int64 a2)
{
  __int16 v2; // bp
  unsigned int v3; // esi
  __int64 v4; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rcx
  struct tagTHREADINFO *v12; // rax
  ULONG_PTR BugCheckParameter3[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = a2;
  v3 = 0;
  v4 = 0LL;
  do
  {
    if ( *(_WORD *)(W32GetUserSessionState(a1, a2) + v4 + 21904) == v2 )
      goto LABEL_5;
    ++v3;
    v4 += 552LL;
  }
  while ( v3 < 0x13 );
  if ( v3 == 19 )
    return 0;
LABEL_5:
  if ( !(unsigned int)CheckWinstaAttributeAccess(0x10u) )
    return 0;
  if ( (*((_DWORD *)a1 + 20) & 0x40) != 0 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1835LL);
    return 0;
  }
  v9 = *((_QWORD *)a1 + 6);
  v10 = *(_QWORD *)(W32GetUserSessionState(v7, v6) + 552LL * v3 + 21912);
  v12 = PtiCurrent(v11);
  Win32HM_LockIntoThread<1>((__int64)v12, v10, (__int64 *)BugCheckParameter3);
  zzzInternalSetSystemCursor(v9, v3, 0LL, 3u);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
  return 1;
}
