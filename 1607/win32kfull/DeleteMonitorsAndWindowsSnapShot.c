/*
 * XREFs of DeleteMonitorsAndWindowsSnapShot @ 0x1C01CE640
 * Callers:
 *     <none>
 * Callees:
 *     CleanMonitorsAndWindowsSnapshot @ 0x1C01CE5DC (CleanMonitorsAndWindowsSnapshot.c)
 */

__int64 __fastcall DeleteMonitorsAndWindowsSnapShot(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // r8

  CleanMonitorsAndWindowsSnapshot(a1, a2, a3);
  return Win32FreePool(a1, v4, v5);
}
