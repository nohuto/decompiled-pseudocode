/*
 * XREFs of zzzSetCursorPosByType @ 0x1C009A758
 * Callers:
 *     zzzSetCursorPos @ 0x1C009A750 (zzzSetCursorPos.c)
 * Callees:
 *     IsForegroundShellFrameQueueAccessible @ 0x1C0003224 (IsForegroundShellFrameQueueAccessible.c)
 *     CheckWinstaAttributeAccess @ 0x1C008AD60 (CheckWinstaAttributeAccess.c)
 *     zzzInternalSetCursorPos @ 0x1C009A8F8 (zzzInternalSetCursorPos.c)
 */

__int64 __fastcall zzzSetCursorPosByType(unsigned int a1, unsigned int a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // r8
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rax
  __int64 v11; // r9
  char v12; // r10
  __int64 result; // rax
  __int64 v14; // r9
  __int64 CurrentProcessWin32Process; // rax

  if ( (unsigned int)CheckWinstaAttributeAccess(16LL)
    || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4),
        (unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process)) )
  {
    v5 = *(_QWORD *)(gptiCurrent + 408LL);
    if ( !v5 || v5 == grpdeskRitInput )
    {
      if ( !gpqForeground
        || (v6 = *(_QWORD *)(gptiCurrent + 376LL),
            v7 = *(_QWORD *)(gpqForeground + 372LL),
            v8 = *(_QWORD *)(v6 + 832),
            !gbEnforceUIPI)
        || (unsigned int)v8 > (unsigned int)v7
        || (_DWORD)v8 == (_DWORD)v7
        && ((v9 = HIDWORD(v8), v10 = HIDWORD(v7), (_DWORD)v9 == (_DWORD)v10) || (_DWORD)v10 == -1 || (_DWORD)v9 == -1)
        || *(int *)(v6 + 12) < 0
        || IsForegroundShellFrameQueueAccessible(gptiCurrent) )
      {
        zzzInternalSetCursorPos(a1, a2, 1LL);
        v11 = 3LL * (unsigned int)gptInd;
        *((_DWORD *)&gaptMouse + 2 * v11) = LOWORD(gptCursorAsync.x) | ((unsigned __int16)(*(_WORD *)(gpsi + 2192LL) - 1) << 16);
        *((_DWORD *)&gaptMouse + 2 * v11 + 1) = LOWORD(gptCursorAsync.y) | ((unsigned __int16)(*(_WORD *)(gpsi + 2196LL)
                                                                                             - 1) << 16);
        v12 = gptInd;
        result = 1LL;
        v14 = 3LL * (unsigned int)gptInd;
        *((_DWORD *)&gaptMouse + 2 * v14 + 2) = (MEMORY[0xFFFFF78000000320]
                                               * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        *((_QWORD *)&gaptMouse + v14 + 2) = 0LL;
        gptInd = (v12 + 1) & 0x3F;
        return result;
      }
      EtwTraceUIPIInputError(gptiCurrent, 0LL, gpqForeground, *(_QWORD *)(gpqForeground + 372LL), 1);
    }
  }
  return 0LL;
}
