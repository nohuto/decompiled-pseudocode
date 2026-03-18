/*
 * XREFs of ?xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z @ 0x1C022B18C
 * Callers:
 *     xxxDoScrollMenu @ 0x1C022C4CC (xxxDoScrollMenu.c)
 * Callees:
 *     RtlInitUnicodeStringOrId @ 0x1C00912C8 (RtlInitUnicodeStringOrId.c)
 *     xxxClientLoadMenu @ 0x1C00A99D4 (xxxClientLoadMenu.c)
 *     _GetSubMenu @ 0x1C00BB474 (_GetSubMenu.c)
 *     LockDesktopMenu @ 0x1C01300D8 (LockDesktopMenu.c)
 */

struct tagMENU *__fastcall xxxGetScrollMenu(struct tagWND *a1, int a2)
{
  __int64 v2; // rbx
  __int64 *v3; // rbx
  __int64 Menu; // rdi
  struct _UNICODE_STRING v6; // [rsp+20h] [rbp-18h] BYREF

  v2 = *((_QWORD *)a1 + 3);
  if ( a2 )
    v3 = (__int64 *)(v2 + 72);
  else
    v3 = (__int64 *)(v2 + 64);
  Menu = *v3;
  if ( *v3 )
    return (struct tagMENU *)GetSubMenu(Menu);
  if ( (*(_DWORD *)(gptiCurrent + 440LL) & 5) == 0
    && (RtlInitUnicodeStringOrId(&v6, (WCHAR *)(a2 != 0 ? 80LL : 64LL)),
        Menu = xxxClientLoadMenu(0LL, (char **)&v6),
        LockDesktopMenu((__int64)v3, Menu),
        Menu) )
  {
    return (struct tagMENU *)GetSubMenu(Menu);
  }
  else
  {
    return 0LL;
  }
}
