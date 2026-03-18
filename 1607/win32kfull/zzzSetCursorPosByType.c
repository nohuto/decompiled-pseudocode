/*
 * XREFs of zzzSetCursorPosByType @ 0x1C0097338
 * Callers:
 *     zzzSetCursorPos @ 0x1C0097330 (zzzSetCursorPos.c)
 * Callees:
 *     CheckWinstaAttributeAccess @ 0x1C0098290 (CheckWinstaAttributeAccess.c)
 *     IsForegroundShellFrameQueueAccessible @ 0x1C00A9964 (IsForegroundShellFrameQueueAccessible.c)
 *     zzzInternalSetCursorPos @ 0x1C00DB4DC (zzzInternalSetCursorPos.c)
 */

__int64 __fastcall zzzSetCursorPosByType(unsigned int a1, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rax
  __int64 v12; // r9
  char v13; // r10
  __int64 result; // rax
  __int64 v15; // r9
  __int64 CurrentProcessWin32Process; // rax

  if ( (unsigned int)CheckWinstaAttributeAccess(0x10u)
    || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5, v4),
        (unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process)) )
  {
    v6 = *(_QWORD *)(gptiCurrent + 408LL);
    if ( !v6 || v6 == grpdeskRitInput )
    {
      if ( !gpqForeground
        || (v7 = *(_QWORD *)(gptiCurrent + 376LL),
            v8 = *(_QWORD *)(gpqForeground + 380LL),
            v9 = *(_QWORD *)(v7 + 824),
            !gbEnforceUIPI)
        || (unsigned int)v9 > (unsigned int)v8
        || (_DWORD)v9 == (_DWORD)v8
        && ((v10 = HIDWORD(v9), v11 = HIDWORD(v8), (_DWORD)v10 == (_DWORD)v11) || (_DWORD)v11 == -1 || (_DWORD)v10 == -1)
        || *(int *)(v7 + 12) < 0
        || (unsigned int)IsForegroundShellFrameQueueAccessible(gptiCurrent) )
      {
        zzzInternalSetCursorPos(a1, a2, 1LL);
        v12 = 3LL * (unsigned int)gptInd;
        *((_DWORD *)&gaptMouse + 2 * v12) = LOWORD(gptCursorAsync.x) | ((unsigned __int16)(*(_WORD *)(gpsi + 2192LL) - 1) << 16);
        *((_DWORD *)&gaptMouse + 2 * v12 + 1) = LOWORD(gptCursorAsync.y) | ((unsigned __int16)(*(_WORD *)(gpsi + 2196LL)
                                                                                             - 1) << 16);
        v13 = gptInd;
        result = 1LL;
        v15 = 3LL * (unsigned int)gptInd;
        *((_DWORD *)&gaptMouse + 2 * v15 + 2) = (MEMORY[0xFFFFF78000000320]
                                               * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        *((_QWORD *)&gaptMouse + v15 + 2) = 0LL;
        gptInd = (v13 + 1) & 0x3F;
        return result;
      }
      EtwTraceUIPIInputError(gptiCurrent, 0LL, gpqForeground, *(_QWORD *)(gpqForeground + 380LL), 1);
    }
  }
  return 0LL;
}
