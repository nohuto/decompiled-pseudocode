/*
 * XREFs of EtwTraceFocusChange @ 0x1C00150D0
 * Callers:
 *     <none>
 * Callees:
 *     Template_qq @ 0x1C00A95AC (Template_qq.c)
 */

void __fastcall EtwTraceFocusChange(PETHREAD *a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  unsigned int ThreadId; // esi

  if ( ((unsigned __int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x8000000000002000uLL) != 0
    && (unsigned __int8)(byte_1C00FEA58 - 1) > 2u
    && (qword_1C00FEA40 & 0x8000000000002000uLL) != 0
    && (qword_1C00FEA48 & 0x8000000000002000uLL) == qword_1C00FEA48 )
  {
    v4 = 0;
    if ( gptiForeground || a1 )
    {
      ThreadId = 0;
      if ( gptiForeground )
        ThreadId = (unsigned int)PsGetThreadId(*(PETHREAD *)gptiForeground);
      if ( a1 )
        v4 = (unsigned int)PsGetThreadId(*a1);
      if ( (Microsoft_Windows_Win32kEnableBits & 2) != 0 )
        Template_qq((unsigned int)Microsoft_Windows_Win32kEnableBits, &FocusEvent, a3, ThreadId, v4);
    }
  }
}
