/*
 * XREFs of ?DoStackCapture@@YAXIJI@Z @ 0x180003C78
 * Callers:
 *     ?DoStackCapture@@YAXJI@Z @ 0x180003D40 (-DoStackCapture@@YAXJI@Z.c)
 *     ?MilInstrumentationHandleFailure@@YAXIJKI@Z @ 0x180003D54 (-MilInstrumentationHandleFailure@@YAXIJKI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180003DE4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 * Callees:
 *     ?EnsureStackCaptureRegisteredWithWER@@YAXXZ @ 0x180003BFC (-EnsureStackCaptureRegisteredWithWER@@YAXXZ.c)
 */

void __fastcall DoStackCapture(int a1, int a2, int a3)
{
  volatile int v6; // r9d
  __int64 v7; // r10
  __int64 v8; // rbx
  DWORD CurrentThreadId; // eax
  PVOID *v10; // rbx

  EnsureStackCaptureRegisteredWithWER();
  do
  {
    v6 = g_nCurrentStackCaptureIndex;
    v7 = (unsigned __int8)(g_nCurrentStackCaptureIndex + 1);
  }
  while ( v6 != _InterlockedCompareExchange(&g_nCurrentStackCaptureIndex, v7, g_nCurrentStackCaptureIndex) );
  v8 = 5 * v7;
  g_StackCaptureFrames[10 * v7] = a2;
  CurrentThreadId = GetCurrentThreadId();
  g_StackCaptureFrames[2 * v8 + 2] = a3;
  g_StackCaptureFrames[2 * v8 + 1] = CurrentThreadId;
  v10 = (PVOID *)&g_StackCaptureFrames[2 * v8];
  v10[2] = 0LL;
  v10[3] = 0LL;
  v10[4] = 0LL;
  if ( !RtlCaptureStackBackTrace(a1 + 1, 3u, v10 + 2, 0LL) )
    memset(v10 + 2, 224, 18);
}
