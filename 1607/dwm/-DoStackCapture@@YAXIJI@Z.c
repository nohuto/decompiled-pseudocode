/*
 * XREFs of ?DoStackCapture@@YAXIJI@Z @ 0x140005344
 * Callers:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x140001A90 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?MilInstrumentationHandleFailure@@YAXIJKI@Z @ 0x140005480 (-MilInstrumentationHandleFailure@@YAXIJKI@Z.c)
 * Callees:
 *     ?EnsureStackCaptureRegisteredWithWER@@YAXXZ @ 0x1400053F8 (-EnsureStackCaptureRegisteredWithWER@@YAXXZ.c)
 */

void __fastcall DoStackCapture(int a1, int a2, int a3)
{
  volatile int v6; // r9d
  __int64 v7; // r10
  char *v8; // rbx
  DWORD CurrentThreadId; // eax

  EnsureStackCaptureRegisteredWithWER();
  do
  {
    v6 = g_nCurrentStackCaptureIndex;
    v7 = (unsigned __int8)(g_nCurrentStackCaptureIndex + 1);
  }
  while ( v6 != _InterlockedCompareExchange(&g_nCurrentStackCaptureIndex, v7, g_nCurrentStackCaptureIndex) );
  v8 = (char *)&g_StackCaptureFrames + 40 * v7;
  *(_DWORD *)v8 = a2;
  CurrentThreadId = GetCurrentThreadId();
  *((_DWORD *)v8 + 2) = a3;
  *((_DWORD *)v8 + 1) = CurrentThreadId;
  *((_QWORD *)v8 + 2) = 0LL;
  *((_QWORD *)v8 + 3) = 0LL;
  *((_QWORD *)v8 + 4) = 0LL;
  if ( !RtlCaptureStackBackTrace(a1 + 1, 3u, (PVOID *)v8 + 2, 0LL) )
    memset(v8 + 16, 224, 18);
}
