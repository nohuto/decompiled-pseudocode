/*
 * XREFs of NtUserIsMouseInPointerEnabled @ 0x1C021D250
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 */

__int64 NtUserIsMouseInPointerEnabled()
{
  __int64 v0; // rcx
  unsigned int v1; // ebx
  __int64 v2; // rdx

  EnterSharedCrit(1LL);
  v0 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 384);
  v1 = (*(_DWORD *)(v0 + 776) >> 2) & 1;
  UserSessionSwitchLeaveCrit(v0, v2);
  return v1;
}
