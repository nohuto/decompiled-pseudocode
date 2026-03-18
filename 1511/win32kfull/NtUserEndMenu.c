/*
 * XREFs of NtUserEndMenu @ 0x1C0113C70
 * Callers:
 *     <none>
 * Callees:
 *     _PostMessage @ 0x1C0078490 (_PostMessage.c)
 *     GetMenuStateWindow @ 0x1C021643C (GetMenuStateWindow.c)
 */

__int64 NtUserEndMenu()
{
  __int64 v0; // rcx
  __int64 v1; // rdx
  __int64 MenuStateWindow; // rax

  EnterCrit(0LL, 1LL);
  v0 = gptiCurrent;
  v1 = *(_QWORD *)(gptiCurrent + 528LL);
  if ( v1 )
  {
    MenuStateWindow = GetMenuStateWindow(*(_QWORD *)(gptiCurrent + 528LL));
    if ( MenuStateWindow )
      PostMessage(MenuStateWindow, 499LL, 0LL, 0LL);
    else
      *(_DWORD *)(v1 + 8) &= ~4u;
  }
  UserSessionSwitchLeaveCrit(v0, v1);
  return 1LL;
}
