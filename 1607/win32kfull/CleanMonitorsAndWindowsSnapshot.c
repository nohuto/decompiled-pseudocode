/*
 * XREFs of CleanMonitorsAndWindowsSnapshot @ 0x1C01CE5DC
 * Callers:
 *     CleanupDesktopsMonitorsAndWindowsSnapShot @ 0x1C0135AE0 (CleanupDesktopsMonitorsAndWindowsSnapShot.c)
 *     DeleteMonitorsAndWindowsSnapShot @ 0x1C01CE640 (DeleteMonitorsAndWindowsSnapShot.c)
 *     SnapShotDesktopsMonitorsAndWindowsRects @ 0x1C01CE694 (SnapShotDesktopsMonitorsAndWindowsRects.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CleanMonitorsAndWindowsSnapshot(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v5; // rcx
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 24);
  v5 = *(_QWORD *)(a1 + 16);
  if ( v5 )
  {
    result = Win32FreePool(v5, a2, a3);
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  if ( v3 )
  {
    result = Win32FreePool(*(_QWORD *)(a1 + 24), a2, a3);
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  *(_DWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0LL;
  return result;
}
