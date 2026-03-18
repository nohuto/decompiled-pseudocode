/*
 * XREFs of EtwTraceWaitCursor @ 0x1C00771A0
 * Callers:
 *     <none>
 * Callees:
 *     ?EtwpGetWaitCursorType@@YAKQEAUtagCURSOR@@@Z @ 0x1C00AB51C (-EtwpGetWaitCursorType@@YAKQEAUtagCURSOR@@@Z.c)
 *     Template_qqqqq @ 0x1C00AE778 (Template_qqqqq.c)
 */

void EtwTraceWaitCursor()
{
  struct tagCURSOR *const v0; // r9
  unsigned int WaitCursorType; // eax
  int v2; // r8d
  unsigned int v3; // ebx
  __int64 v4; // rbx
  __int64 v5; // rbx

  if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x8000000000040000uLL) != 0
    && (unsigned __int8)(byte_1C01020C8 - 1) > 2u
    && (qword_1C01020B0 & 0x8000000000040000uLL) != 0
    && (qword_1C01020B8 & 0x8000000000040000uLL) == qword_1C01020B8 )
  {
    EtwpGetWaitCursorType(gpcurLogCurrent);
    WaitCursorType = EtwpGetWaitCursorType(v0);
    v3 = WaitCursorType;
    if ( v2 == W32kEtwWaitCursorActiveType
      && v2
      && v2 != WaitCursorType
      && (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
       - W32kEtwWaitCursorStartMs >= 0xC8
      && (Microsoft_Windows_Win32kEnableBits & 0x40) != 0 )
    {
      Template_qqqqq(
        MEMORY[0xFFFFF78000000320],
        (unsigned int)&WaitCursorEvent,
        v2,
        W32kEtwWaitCursorThreadId,
        W32kEtwWaitCursorProcessId,
        gSessionId,
        v2,
        ((unsigned int)(MEMORY[0xFFFFF78000000320] * MEMORY[0xFFFFF78000000004]) >> 24) - W32kEtwWaitCursorStartMs);
    }
    W32kEtwWaitCursorActiveType = v3;
    if ( v3 )
      W32kEtwWaitCursorStartMs = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    if ( gpqCursor )
    {
      v4 = *(_QWORD *)(gpqCursor + 64);
      if ( v4 )
        v5 = *(_QWORD *)(v4 + 16);
      else
        v5 = *(_QWORD *)(gpqCursor + 48);
      W32kEtwWaitCursorThreadId = (unsigned int)PsGetThreadId(*(PETHREAD *)v5);
      W32kEtwWaitCursorProcessId = *(_DWORD *)(*(_QWORD *)(v5 + 376) + 56LL);
    }
    else
    {
      W32kEtwWaitCursorThreadId = 0;
      W32kEtwWaitCursorProcessId = 0;
    }
  }
}
