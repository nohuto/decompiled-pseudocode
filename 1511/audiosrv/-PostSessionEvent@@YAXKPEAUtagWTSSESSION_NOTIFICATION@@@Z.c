/*
 * XREFs of ?PostSessionEvent@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z @ 0x18002FF28
 * Callers:
 *     ServiceCtrl @ 0x18002FFD0 (ServiceCtrl.c)
 * Callees:
 *     ??_GSESSION_EVENT@@UEAAPEAXI@Z @ 0x18002FD70 (--_GSESSION_EVENT@@UEAAPEAXI@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     memcpy_0 @ 0x18004799C (memcpy_0.c)
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
        if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            10LL,
            &WPP_01dac6802e595772d379a89188d3f305_Traceguids,
            2147942414LL);
        }
        goto LABEL_14;
      }
      memcpy_0(v6, a2, a2->cbSize);
    }
    if ( PostQueuedCompletionStatus(g_WorkerEventPort, 0, (ULONG_PTR)v5, 0LL) )
      return;
LABEL_14:
    SESSION_EVENT::`scalar deleting destructor'((SESSION_EVENT *)v5, 1);
  }
}
