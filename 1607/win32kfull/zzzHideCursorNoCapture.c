/*
 * XREFs of zzzHideCursorNoCapture @ 0x1C01DD890
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     GetAppCompatFlags2 @ 0x1C006F66C (GetAppCompatFlags2.c)
 *     zzzSetCursor @ 0x1C0078168 (zzzSetCursor.c)
 */

__int64 __fastcall zzzHideCursorNoCapture(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9

  if ( !*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4) + 384) + 72LL)
    && (GetAppCompatFlags2(0x400u, v4, v5, v6) & 0x100) == 0
    && ((unsigned int)gpdwCPUserPreferencesMask & 0x80010000) == 0x80010000 )
  {
    zzzSetCursor(0LL);
  }
  return 0LL;
}
