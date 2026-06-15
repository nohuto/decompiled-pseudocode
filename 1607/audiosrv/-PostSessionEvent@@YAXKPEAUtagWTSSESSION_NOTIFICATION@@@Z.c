/*
 * XREFs of ?PostSessionEvent@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z @ 0x18002B2EC
 * Callers:
 *     ServiceCtrl @ 0x18002B270 (ServiceCtrl.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??_GSESSION_EVENT@@UEAAPEAXI@Z @ 0x18002B400 (--_GSESSION_EVENT@@UEAAPEAXI@Z.c)
 *     memcpy_0 @ 0x180038F10 (memcpy_0.c)
 */

void __fastcall PostSessionEvent(int a1, struct tagWTSSESSION_NOTIFICATION *a2)
{
  HANDLE ProcessHeap; // rax
  _QWORD *v5; // rbx
  void *v6; // rax

  ProcessHeap = GetProcessHeap();
  v5 = HeapAlloc(ProcessHeap, 0, 0x18uLL);
  if ( v5 )
  {
    *v5 = &SESSION_EVENT::`vftable';
    v5[2] = 0LL;
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    *((_DWORD *)v5 + 2) = a1;
    if ( a2 )
    {
      v6 = malloc(a2->cbSize);
      v5[2] = v6;
      if ( !v6 )
      {
        AudSrvTraceLoggingErrorHelper("SESSION_EVENT::Initialize", 62, -2147024882);
        goto LABEL_11;
      }
      memcpy_0(v6, a2, a2->cbSize);
    }
    if ( PostQueuedCompletionStatus(g_WorkerEventPort, 0, (ULONG_PTR)v5, 0LL) )
      return;
LABEL_11:
    SESSION_EVENT::`scalar deleting destructor'((SESSION_EVENT *)v5, 1u);
  }
}
