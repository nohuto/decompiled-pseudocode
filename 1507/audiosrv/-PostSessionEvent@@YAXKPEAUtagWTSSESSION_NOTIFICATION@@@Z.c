/*
 * XREFs of ?PostSessionEvent@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z @ 0x18002BAFC
 * Callers:
 *     ServiceCtrl @ 0x18002CEA0 (ServiceCtrl.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180006F40 (--2@YAPEAX_K@Z.c)
 *     ??_GSESSION_EVENT@@UEAAPEAXI@Z @ 0x18002BBF0 (--_GSESSION_EVENT@@UEAAPEAXI@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     memcpy_0 @ 0x180043A58 (memcpy_0.c)
 */

void __fastcall PostSessionEvent(int a1, struct tagWTSSESSION_NOTIFICATION *a2)
{
  _QWORD *v4; // rbx
  void *v5; // rax

  v4 = operator new(0x18uLL);
  if ( v4 )
  {
    *v4 = &SESSION_EVENT::`vftable';
    v4[2] = 0LL;
  }
  else
  {
    v4 = 0LL;
  }
  if ( v4 )
  {
    *((_DWORD *)v4 + 2) = a1;
    if ( a2 )
    {
      v5 = malloc(a2->cbSize);
      v4[2] = v5;
      if ( !v5 )
      {
        if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
          && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
          && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
        {
          WPP_SF_D(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
            10LL,
            &WPP_01dac6802e595772d379a89188d3f305_Traceguids,
            2147942414LL);
        }
        goto LABEL_14;
      }
      memcpy_0(v5, a2, a2->cbSize);
    }
    if ( PostQueuedCompletionStatus(g_WorkerEventPort, 0, (ULONG_PTR)v4, 0LL) )
      return;
LABEL_14:
    SESSION_EVENT::`scalar deleting destructor'((SESSION_EVENT *)v4, 1u);
  }
}
