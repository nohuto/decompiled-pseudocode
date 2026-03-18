/*
 * XREFs of zzzHideCursorNoCapture @ 0x1C01E6C60
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     zzzSetCursor @ 0x1C0062174 (zzzSetCursor.c)
 *     GetAppCompatFlags2 @ 0x1C00956B8 (GetAppCompatFlags2.c)
 */

__int64 zzzHideCursorNoCapture()
{
  if ( !*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 392) + 64LL)
    && (GetAppCompatFlags2(0x400u) & 0x100) == 0
    && ((unsigned int)gpdwCPUserPreferencesMask & 0x80010000) == 0x80010000 )
  {
    zzzSetCursor(0LL);
  }
  return 0LL;
}
