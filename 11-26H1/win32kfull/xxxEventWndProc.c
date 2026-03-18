/*
 * XREFs of xxxEventWndProc @ 0x140216850
 * Callers:
 *     ?xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z @ 0x1400245B8 (-xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     xxxDispatchMessage @ 0x140035320 (xxxDispatchMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x140036F84 (xxxSendTransformableMessageTimeout.c)
 *     xxxSendMessageCallback @ 0x140051930 (xxxSendMessageCallback.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxChangeMonitorFlags @ 0x14008574C (xxxChangeMonitorFlags.c)
 *     HMValidateHandleNoRip @ 0x140095FE4 (HMValidateHandleNoRip.c)
 *     xxxDefWindowProc @ 0x14012D860 (xxxDefWindowProc.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ClientEventCallback @ 0x1402D4E5C (ClientEventCallback.c)
 */

__int64 __fastcall xxxEventWndProc(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rax
  __int64 *v9; // rcx
  __int64 v10; // rax
  __int16 v12; // dx

  if ( *(struct tagTHREADINFO **)(a1 + 16) != PtiCurrent(a1) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 240LL);
  v8 = *(_QWORD *)(a1 + 40);
  if ( *(_WORD *)(v8 + 42) )
    return 0LL;
  v9 = *(__int64 **)(a1 + 280);
  if ( !v9 )
    return xxxDefWindowProc((struct tagTHREADINFO **)a1, a2, a3, a4);
  if ( *(_DWORD *)(v8 + 248) < 8u )
    return xxxDefWindowProc((struct tagTHREADINFO **)a1, a2, a3, a4);
  v10 = HMValidateHandleNoRip(*v9, 9);
  if ( !v10 )
    return xxxDefWindowProc((struct tagTHREADINFO **)a1, a2, a3, a4);
  if ( a2 == 2 )
  {
    xxxChangeMonitorFlags(v10, 0LL);
    return 0LL;
  }
  if ( a2 != 60 )
    return xxxDefWindowProc((struct tagTHREADINFO **)a1, a2, a3, a4);
  v12 = *(_WORD *)(a4 + 4);
  if ( (*(_DWORD *)(v10 + 40) & *(_DWORD *)a4) != 0 )
  {
    if ( !v12 )
      return 0LL;
    goto LABEL_15;
  }
  if ( !v12 )
LABEL_15:
    ClientEventCallback(*(_QWORD *)(v10 + 56), a4);
  return 0LL;
}
