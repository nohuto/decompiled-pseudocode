/*
 * XREFs of ?xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z @ 0x1C0231F9C
 * Callers:
 *     xxxDoScrollMenu @ 0x1C023352C (xxxDoScrollMenu.c)
 * Callees:
 *     _GetSubMenu @ 0x1C004EB50 (_GetSubMenu.c)
 *     RtlInitUnicodeStringOrId @ 0x1C004F27C (RtlInitUnicodeStringOrId.c)
 *     xxxClientLoadMenu @ 0x1C007E4F8 (xxxClientLoadMenu.c)
 *     LockDesktopMenu @ 0x1C0128B90 (LockDesktopMenu.c)
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
  if ( (*(_DWORD *)(gptiCurrent + 448LL) & 5) == 0
    && (RtlInitUnicodeStringOrId(&v6, (WCHAR *)(a2 != 0 ? 80LL : 64LL)),
        Menu = xxxClientLoadMenu(0LL, (char **)&v6),
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
