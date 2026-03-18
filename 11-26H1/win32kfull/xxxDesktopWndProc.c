/*
 * XREFs of xxxDesktopWndProc @ 0x1401FFCC0
 * Callers:
 *     ?xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z @ 0x1400245B8 (-xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     xxxDispatchMessage @ 0x140035320 (xxxDispatchMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x140036F84 (xxxSendTransformableMessageTimeout.c)
 *     xxxSendMessageCallback @ 0x140051930 (xxxSendMessageCallback.c)
 *     ?xxxWrapDesktopWndProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1401FFC60 (-xxxWrapDesktopWndProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1401FFD98 (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall xxxDesktopWndProc(struct tagTHREADINFO **a1, unsigned int a2, unsigned __int64 a3, __int64 a4)
{
  struct tagTHREADINFO *v8; // rbp
  __int64 v9; // rbx
  int v10; // esi
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned int v14; // eax
  __int64 result; // rax

  v8 = PtiCurrent((__int64)a1);
  v9 = 0LL;
  v10 = 0;
  if ( a1[2] != PtiCurrent(v11) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 1488LL);
  if ( a1[13] )
  {
    v12 = *((_QWORD *)v8 + 61);
    if ( v12 )
    {
      v13 = *(_QWORD *)(v12 + 40);
      if ( v13 )
      {
        v9 = *(_QWORD *)(v13 + 24);
        v14 = *(_DWORD *)(v9 + 32);
        if ( v14 >= 0x20 )
          return 0LL;
        v10 = 1;
        *(_DWORD *)(v9 + 32) = v14 + 1;
      }
    }
  }
  result = xxxDesktopWndProcWorker((struct tagWND *)a1, a2, a3, a4);
  if ( v10 )
    --*(_DWORD *)(v9 + 32);
  return result;
}
