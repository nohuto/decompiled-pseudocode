/*
 * XREFs of ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1C007E0BC
 * Callers:
 *     PowerOnMonitor @ 0x1C000A870 (PowerOnMonitor.c)
 *     UserPowerStateCallout @ 0x1C000B158 (UserPowerStateCallout.c)
 *     UserPowerInfoCallout @ 0x1C000CEC8 (UserPowerInfoCallout.c)
 *     PowerOffMonitor @ 0x1C0084F80 (PowerOffMonitor.c)
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C0022470 (UserSessionSwitchLeaveCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C00226F8 (EnterCritAvoidingDitHitTestHazard.c)
 *     Template_xqx @ 0x1C00AF860 (Template_xqx.c)
 */

__int64 UserSessionSwitchBlock_Start(void)
{
  BOOLEAN IsResourceAcquiredExclusiveLite; // al
  __int64 v1; // rdx
  __int64 v2; // rcx
  int v3; // esi
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v5; // rbp
  __int64 v6; // rcx
  __int64 v7; // rdi
  LARGE_INTEGER PerformanceCounter; // rax
  int v9; // r8d
  LONGLONG v10; // rbx
  unsigned int v11; // ebx

  IsResourceAcquiredExclusiveLite = ExIsResourceAcquiredExclusiveLite(gpresUser);
  v3 = IsResourceAcquiredExclusiveLite;
  if ( !IsResourceAcquiredExclusiveLite )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v2);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    v5 = EnterCritAvoidingDitHitTestHazard(0, 1);
    v7 = PsGetCurrentThreadWin32Thread(v6);
    if ( v7 )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v1 = 0x200000010000000LL;
      v10 = PerformanceCounter.QuadPart - *(_QWORD *)(v7 + 8);
      if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x200000010000000LL) != 0 )
      {
        LOBYTE(v2) = byte_1C01020C8 - 1;
        if ( (unsigned __int8)(byte_1C01020C8 - 1) > 2u
          && (qword_1C01020B0 & 0x200000010000000LL) != 0
          && (qword_1C01020B8 & 0x200000010000000LL) == qword_1C01020B8
          && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
        {
          Template_xqx(v2, (unsigned int)&AcquiredExclusiveUserCritEvent, v9, v10, 0, gullUserCritAcquireToken);
        }
      }
      if ( v10 >= (__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
        Template_xqx(
          gullUserCritAcquireToken,
          (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
          v9,
          0,
          1000 * v10 / gliQpcFreq.QuadPart,
          gullUserCritAcquireToken);
      *(_QWORD *)(v7 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
    }
    gptiCurrent = v5;
    gbValidateHandleForIL = 1;
  }
  if ( gnPoSessionSwitchBlockCount > 0 )
  {
    ++gnPoSessionSwitchBlockCount;
LABEL_22:
    v11 = 0;
    goto LABEL_24;
  }
  if ( !HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext)
    && MEMORY[0xFFFFF780000002D8] == gSessionId
    && !gfSessionSwitchBlock )
  {
    ++gnPoSessionSwitchBlockCount;
    gfSessionSwitchBlock = 1;
    goto LABEL_22;
  }
  v11 = -1073086428;
LABEL_24:
  if ( !v3 )
    UserSessionSwitchLeaveCrit(v2, v1);
  return v11;
}
