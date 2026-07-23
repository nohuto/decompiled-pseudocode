/*
 * XREFs of PspCatchCriticalBreak @ 0x14067FCDC
 * Callers:
 *     PspTerminateAllThreads @ 0x1404EC680 (PspTerminateAllThreads.c)
 *     PspTerminateThreadByPointer @ 0x1404EC9C0 (PspTerminateThreadByPointer.c)
 *     PspExitThread @ 0x1404F950C (PspExitThread.c)
 * Callees:
 *     PsIsHostSilo @ 0x140079FE8 (PsIsHostSilo.c)
 *     DbgPrintEx @ 0x140084C90 (DbgPrintEx.c)
 *     PsGetServerSiloState @ 0x1400AE2D8 (PsGetServerSiloState.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     DbgPrompt @ 0x1402111A0 (DbgPrompt.c)
 *     PsTerminateServerSilo @ 0x14067E25C (PsTerminateServerSilo.c)
 */

void PspCatchCriticalBreak(const char *a1, _BYTE *a2, __int64 a3, __int64 a4, ...)
{
  char v6; // bl
  const CHAR *v7; // rdx
  __int64 v8; // r8
  char v9; // di
  bool v10; // bl
  CHAR Response[40]; // [rsp+30h] [rbp-28h] BYREF

  v6 = 0;
  if ( (int)PsGetServerSiloState(a4) < 2 )
  {
    v9 = 0;
    if ( !(_BYTE)KdDebuggerEnabled )
    {
LABEL_15:
      v10 = (*a2 & 0x7F) == 6;
      if ( PsIsHostSilo(a4) )
        KeBugCheckEx(0xEFu, (ULONG_PTR)a2, v10, 0LL, 0LL);
      if ( !v9 )
        PsTerminateServerSilo(a4);
      return;
    }
    DbgPrintEx(0, 0, v7, a2, v8);
    while ( 1 )
    {
      if ( (_BYTE)KdDebuggerNotPresent )
        goto LABEL_14;
      DbgPrompt("Break, or Ignore (bi)? ", Response, 2u);
      if ( Response[0] == 66 )
        goto LABEL_11;
      if ( Response[0] != 73 )
        break;
LABEL_12:
      v6 = 1;
LABEL_13:
      if ( v6 )
        goto LABEL_14;
    }
    if ( Response[0] != 98 )
    {
      if ( Response[0] != 105 )
        goto LABEL_13;
      goto LABEL_12;
    }
LABEL_11:
    __debugbreak();
    goto LABEL_12;
  }
  v9 = 1;
  v6 = 1;
LABEL_14:
  if ( !v6 )
    goto LABEL_15;
}
