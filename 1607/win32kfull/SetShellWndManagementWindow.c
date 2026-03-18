/*
 * XREFs of SetShellWndManagementWindow @ 0x1C00EDAD4
 * Callers:
 *     xxxFreeWindow @ 0x1C00543AC (xxxFreeWindow.c)
 *     ?CleanupShellWindowManagement@@YAXPEAUtagDESKTOP@@@Z @ 0x1C00ED674 (-CleanupShellWindowManagement@@YAXPEAUtagDESKTOP@@@Z.c)
 *     _RegisterWindowArrangementCallout @ 0x1C00ED9E0 (_RegisterWindowArrangementCallout.c)
 *     ?SeverWindowManagementConnectionToShell@@YAXPEAUtagDESKTOP@@@Z @ 0x1C01CDFC8 (-SeverWindowManagementConnectionToShell@@YAXPEAUtagDESKTOP@@@Z.c)
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
