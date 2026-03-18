/*
 * XREFs of ?xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z @ 0x1C02323CC
 * Callers:
 *     xxxDoScrollMenu @ 0x1C023395C (xxxDoScrollMenu.c)
 * Callees:
 *     xxxClientLoadMenu @ 0x1C00807C4 (xxxClientLoadMenu.c)
 *     _GetSubMenu @ 0x1C00CA2E4 (_GetSubMenu.c)
 *     RtlInitUnicodeStringOrId @ 0x1C00CC1E8 (RtlInitUnicodeStringOrId.c)
 *     LockDesktopMenu @ 0x1C010FCC0 (LockDesktopMenu.c)
 */

struct tagMENU *__fastcall xxxGetScrollMenu(struct tagWND *a1, int a2)
{
  __int64 v2; // rbx
  unsigned __int8 **v3; // rbx
  unsigned __int8 *Menu; // rdi
  struct _UNICODE_STRING v6; // [rsp+20h] [rbp-18h] BYREF

  v2 = *((_QWORD *)a1 + 3);
  if ( a2 )
    v3 = (unsigned __int8 **)(v2 + 72);
  else
    v3 = (unsigned __int8 **)(v2 + 64);
  Menu = *v3;
  if ( *v3 )
    return (struct tagMENU *)GetSubMenu((__int64)Menu);
  if ( (*(_DWORD *)(gptiCurrent + 440LL) & 5) == 0
    && (RtlInitUnicodeStringOrId(&v6, (WCHAR *)(a2 != 0 ? 80LL : 64LL)),
        Menu = xxxClientLoadMenu(0LL, (void **)&v6),
        LockDesktopMenu((__int64)v3, (__int64)Menu),
        Menu) )
  {
    return (struct tagMENU *)GetSubMenu((__int64)Menu);
  }
  else
  {
    return 0LL;
  }
}
