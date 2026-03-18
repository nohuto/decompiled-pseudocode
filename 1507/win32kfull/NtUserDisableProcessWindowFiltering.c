/*
 * XREFs of NtUserDisableProcessWindowFiltering @ 0x1C00F9BC0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 */

__int64 NtUserDisableProcessWindowFiltering()
{
  __int64 v0; // rcx

  EnterCrit(1LL);
  *(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 776LL) |= 0x800u;
  v0 = *(_QWORD *)(gptiCurrent + 440LL);
  if ( v0 )
    *(_QWORD *)(v0 + 224) |= 4uLL;
  UserSessionSwitchLeaveCrit(v0, gptiCurrent);
  return 1LL;
}
