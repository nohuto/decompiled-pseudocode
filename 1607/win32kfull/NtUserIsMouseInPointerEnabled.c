/*
 * XREFs of NtUserIsMouseInPointerEnabled @ 0x1C0216C60
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 */

__int64 NtUserIsMouseInPointerEnabled()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // r9
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rdx

  EnterSharedCrit(0LL, 1LL);
  v3 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v0, v1, v2) + 376);
  v4 = (*(_DWORD *)(v3 + 768) >> 2) & 1;
  UserSessionSwitchLeaveCrit(v3, v5);
  return v4;
}
