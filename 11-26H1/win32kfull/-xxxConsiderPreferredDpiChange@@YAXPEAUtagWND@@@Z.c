/*
 * XREFs of ?xxxConsiderPreferredDpiChange@@YAXPEAUtagWND@@@Z @ 0x1401EC228
 * Callers:
 *     xxxNotifyMonitorChanged @ 0x14004BDFC (xxxNotifyMonitorChanged.c)
 *     xxxCreateWindowEx @ 0x14017B3B8 (xxxCreateWindowEx.c)
 * Callees:
 *     xxxSendMessage @ 0x140036F50 (xxxSendMessage.c)
 *     _IsTopLevelWindow @ 0x14004DFC0 (_IsTopLevelWindow.c)
 */

void __fastcall xxxConsiderPreferredDpiChange(struct tagWND *a1)
{
  __int64 v2; // r9
  __int16 v3; // dx

  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF) == 3 && IsTopLevelWindow((__int64)a1) )
  {
    v3 = *(_WORD *)(*(_QWORD *)(ValidateHmonitorNoRip(*(_QWORD *)(v2 + 256)) + 40) + 84LL);
    if ( ((*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) >> 8) & 0x1FF) != v3 && *((_WORD *)a1 + 152) != v3 )
    {
      *((_WORD *)a1 + 152) = v3;
      xxxSendMessage(a1, 0x2E6u);
    }
  }
}
