/*
 * XREFs of ?xxxFrostCrashedWindow@@YAPEAUHWND__@@PEAUtagWND@@PEAU1@@Z @ 0x1402CAC68
 * Callers:
 *     NtUserFrostCrashedWindow @ 0x1402B2270 (NtUserFrostCrashedWindow.c)
 * Callees:
 *     ?GetFrostProp@@YAPEAUHWND__@@PEBUtagWND@@@Z @ 0x14002355C (-GetFrostProp@@YAPEAUHWND__@@PEBUtagWND@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 *     IsWindowBeingDestroyed @ 0x14014D20C (IsWindowBeingDestroyed.c)
 *     ??0LeaveEnterCritShared@@QEAA@XZ @ 0x1402953CC (--0LeaveEnterCritShared@@QEAA@XZ.c)
 *     ?_ShouldFrostCrashedWindow@@YAHPEAUtagWND@@@Z @ 0x1402CAA34 (-_ShouldFrostCrashedWindow@@YAHPEAUtagWND@@@Z.c)
 *     DwmSyncSignalGhost @ 0x1403479A0 (DwmSyncSignalGhost.c)
 */

HWND __fastcall xxxFrostCrashedWindow(PETHREAD **a1, HWND a2)
{
  PETHREAD *v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  void *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdx
  const struct tagWND *v9; // r8
  unsigned int v11; // [rsp+70h] [rbp+18h] BYREF

  if ( (unsigned int)_ShouldFrostCrashedWindow((struct tagWND *)a1) )
  {
    PsGetThreadProcessId(*a1[2]);
    PsGetThreadId(*a1[2]);
    v3 = *a1;
    v6 = (void *)ReferenceDwmApiPort(v5, v4);
    LeaveEnterCritShared::LeaveEnterCritShared((LeaveEnterCritShared *)&v11);
    LODWORD(v6) = DwmSyncSignalGhost(v6);
    EnterSharedCrit(0LL, v11);
    v7 = HMValidateHandleNoSecure((__int64)v3, 1);
    if ( (int)v6 >= 0 && v7 && !(unsigned int)IsWindowBeingDestroyed(v7) )
      GetFrostProp(v9, v8);
  }
  return 0LL;
}
