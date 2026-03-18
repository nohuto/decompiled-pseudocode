/*
 * XREFs of NtUserEndMenu @ 0x140243E00
 * Callers:
 *     <none>
 * Callees:
 *     _PostMessage @ 0x14001F780 (_PostMessage.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     GetMenuStateWindow @ 0x1402D9274 (GetMenuStateWindow.c)
 */

__int64 NtUserEndMenu()
{
  __int64 v0; // rcx
  struct tagTHREADINFO *v1; // rax
  __int64 v2; // rcx
  __int64 MenuStateWindow; // rax
  __int64 v5; // rdx

  EnterCrit(0LL, 0LL);
  v1 = PtiCurrent(v0);
  if ( *((_QWORD *)v1 + 80) )
  {
    MenuStateWindow = GetMenuStateWindow(*((_QWORD *)v1 + 80));
    if ( MenuStateWindow )
      PostMessage(MenuStateWindow, 499, 0, 0);
    else
      *(_DWORD *)(v5 + 8) &= ~4u;
  }
  UserSessionSwitchLeaveCrit(v2);
  return 1LL;
}
