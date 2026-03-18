/*
 * XREFs of ?_RemoveClipboardFormatListener@@YAXPEAUtagWND@@@Z @ 0x1C0009520
 * Callers:
 *     NtUserRemoveClipboardFormatListener @ 0x1C00094A0 (NtUserRemoveClipboardFormatListener.c)
 *     xxxFreeWindow @ 0x1C0088BC8 (xxxFreeWindow.c)
 * Callees:
 *     _GetProcessWindowStation @ 0x1C00DD080 (_GetProcessWindowStation.c)
 */

void __fastcall _RemoveClipboardFormatListener(struct tagWND *a1)
{
  struct tagWND **v1; // rcx
  struct tagWND *v2; // rax
  struct tagWND *v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1;
  v1 = (struct tagWND **)(GetProcessWindowStation(0LL) + 120);
  if ( *v1 )
  {
    while ( 1 )
    {
      v2 = *v1;
      if ( *v1 == v3 )
        break;
      v1 = (struct tagWND **)((char *)v2 + 280);
      if ( !*((_QWORD *)v2 + 35) )
        return;
    }
    *v1 = (struct tagWND *)*((_QWORD *)v3 + 35);
    *((_QWORD *)v3 + 35) = 0LL;
    *((_DWORD *)v3 + 72) &= ~1u;
    HMAssignmentUnlock(&v3);
  }
}
