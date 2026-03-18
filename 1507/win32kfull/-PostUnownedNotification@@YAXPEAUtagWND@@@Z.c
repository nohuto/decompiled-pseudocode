/*
 * XREFs of ?PostUnownedNotification@@YAXPEAUtagWND@@@Z @ 0x1C0100ABC
 * Callers:
 *     xxxDestroyWindow @ 0x1C0088250 (xxxDestroyWindow.c)
 * Callees:
 *     PostIAMShellHookMessageEx @ 0x1C007AFD0 (PostIAMShellHookMessageEx.c)
 */

void __fastcall PostUnownedNotification(struct tagWND *a1)
{
  int v1; // edx

  if ( (*((_BYTE *)a1 + 55) & 0x10) != 0 )
  {
    if ( !gpqForeground || (v1 = 26, *(struct tagWND **)(gpqForeground + 80LL) != a1) )
      v1 = 29;
    PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 416LL), v1, *(_QWORD *)a1);
  }
}
