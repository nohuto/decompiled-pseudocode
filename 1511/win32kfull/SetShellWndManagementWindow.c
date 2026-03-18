/*
 * XREFs of SetShellWndManagementWindow @ 0x1C00D5B04
 * Callers:
 *     xxxFreeWindow @ 0x1C0066C00 (xxxFreeWindow.c)
 *     ?CleanupShellWindowManagement@@YAXPEAUtagDESKTOP@@@Z @ 0x1C00D4BB4 (-CleanupShellWindowManagement@@YAXPEAUtagDESKTOP@@@Z.c)
 *     _RegisterWindowArrangementCallout @ 0x1C00D5A10 (_RegisterWindowArrangementCallout.c)
 *     ?SeverWindowManagementConnectionToShell@@YAXPEAUtagDESKTOP@@@Z @ 0x1C01D7144 (-SeverWindowManagementConnectionToShell@@YAXPEAUtagDESKTOP@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SetShellWndManagementWindow(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rcx
  __int64 v6; // rax

  v3 = 0LL;
  v4 = a1 + 320;
  if ( a2 )
  {
    HMAssignmentLock(v4, a2);
  }
  else
  {
    v6 = HMAssignmentUnlock(v4);
    *(_DWORD *)(a1 + 328) = 0;
    return v6;
  }
  return v3;
}
