/*
 * XREFs of Is31TrayWindow @ 0x1C0224508
 * Callers:
 *     xxxUpdateTray @ 0x1C009C3D0 (xxxUpdateTray.c)
 *     IsTrayWindow @ 0x1C00A1E80 (IsTrayWindow.c)
 * Callees:
 *     ?IsVSlick@@YAHPEAUtagWND@@@Z @ 0x1C0224444 (-IsVSlick@@YAHPEAUtagWND@@@Z.c)
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
