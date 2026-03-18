/*
 * XREFs of NtUserEndMenu @ 0x1C01010E0
 * Callers:
 *     <none>
 * Callees:
 *     _PostMessage @ 0x1C007B0C0 (_PostMessage.c)
 *     GetMenuStateWindow @ 0x1C02165D8 (GetMenuStateWindow.c)
 */

__int64 NtUserEndMenu()
{
  __int64 v0; // rcx
  __int64 v1; // rdx
  __int64 MenuStateWindow; // rax

  EnterCrit(1LL);
  v0 = gptiCurrent;
  v1 = *(_QWORD *)(gptiCurrent + 536LL);
  if ( v1 )
  {
    MenuStateWindow = GetMenuStateWindow(*(_QWORD *)(gptiCurrent + 536LL));
    if ( MenuStateWindow )
      PostMessage(MenuStateWindow, 0x1F3u, 0LL, 0LL);
    else
      *(_DWORD *)(v1 + 8) &= ~4u;
  }
  UserSessionSwitchLeaveCrit(v0, v1);
  return 1LL;
}
