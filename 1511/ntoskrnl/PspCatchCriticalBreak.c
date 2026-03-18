/*
 * XREFs of PspCatchCriticalBreak @ 0x1406417F4
 * Callers:
 *     PspExitThread @ 0x1403F0588 (PspExitThread.c)
 *     PspTerminateAllThreads @ 0x1403F2750 (PspTerminateAllThreads.c)
 *     PspTerminateThreadByPointer @ 0x1403F2F24 (PspTerminateThreadByPointer.c)
 * Callees:
 *     DbgPrintEx @ 0x1400E6934 (DbgPrintEx.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     DbgPrompt @ 0x1401F77D0 (DbgPrompt.c)
 */

ULONG __fastcall PspCatchCriticalBreak(PCSTR Format, _BYTE *BugCheckParameter1, __int64 a3)
{
  char v4; // bl
  ULONG result; // eax
  unsigned __int16 Response; // [rsp+58h] [rbp+20h] BYREF

  v4 = 0;
  if ( !(_BYTE)KdDebuggerEnabled )
LABEL_13:
    KeBugCheckEx(0xEFu, (ULONG_PTR)BugCheckParameter1, (*BugCheckParameter1 & 0x7F) == 6, 0LL, 0LL);
  result = DbgPrintEx(0, 0, Format, BugCheckParameter1, a3);
  while ( !(_BYTE)KdDebuggerNotPresent )
  {
    DbgPrompt("Break, or Ignore (bi)? ", (PCH)&Response, 2u);
    result = Response;
    if ( (_BYTE)Response == 66 )
      goto LABEL_9;
    if ( (_BYTE)Response != 73 )
    {
      if ( (_BYTE)Response != 98 )
      {
        if ( (_BYTE)Response != 105 )
          goto LABEL_11;
        goto LABEL_10;
      }
LABEL_9:
      __debugbreak();
    }
LABEL_10:
    v4 = 1;
LABEL_11:
    if ( v4 )
      break;
  }
  if ( !v4 )
    goto LABEL_13;
  return result;
}
