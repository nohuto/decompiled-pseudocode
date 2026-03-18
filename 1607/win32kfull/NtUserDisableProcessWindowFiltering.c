/*
 * XREFs of NtUserDisableProcessWindowFiltering @ 0x1C0122C20
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 */

__int64 NtUserDisableProcessWindowFiltering()
{
  __int64 v0; // rcx

  EnterCrit(0LL, 1LL);
  *(_DWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 768LL) |= 0x800u;
  v0 = *(_QWORD *)(gptiCurrent + 432LL);
  if ( v0 )
    *(_QWORD *)(v0 + 224) |= 4uLL;
  UserSessionSwitchLeaveCrit(v0, gptiCurrent);
  return 1LL;
}
