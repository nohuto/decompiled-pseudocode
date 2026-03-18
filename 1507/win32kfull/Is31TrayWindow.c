/*
 * XREFs of Is31TrayWindow @ 0x1C0223920
 * Callers:
 *     IsTrayWindow @ 0x1C0068BA0 (IsTrayWindow.c)
 *     xxxUpdateTray @ 0x1C007FA48 (xxxUpdateTray.c)
 * Callees:
 *     ?IsVSlick@@YAHPEAUtagWND@@@Z @ 0x1C022386C (-IsVSlick@@YAHPEAUtagWND@@@Z.c)
 */

__int64 __fastcall Is31TrayWindow(struct tagWND *a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx
  __int64 result; // rax
  char v5; // al

  v2 = 0;
  v3 = *((_QWORD *)a1 + 13);
  if ( v3 )
  {
    if ( *(char *)(v3 + 48) >= 0 )
      result = (*(_BYTE *)(v3 + 44) & 0x40) == 0
            && ((v5 = *(_BYTE *)(v3 + 54), (v5 & 0xA) == 0) || (v5 & 0xC0) == 0 && (*(_BYTE *)(v3 + 55) & 0x20) == 0)
            || IsVSlick((struct tagWND *)v3);
    else
      return 0LL;
  }
  else
  {
    LOBYTE(v2) = !IsVSlick(a1);
    return v2;
  }
  return result;
}
