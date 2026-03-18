/*
 * XREFs of NtUserClearForeground @ 0x1C02110A0
 * Callers:
 *     <none>
 * Callees:
 *     IAMThreadAccessGranted @ 0x1C00A6F0C (IAMThreadAccessGranted.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 */

__int64 NtUserClearForeground()
{
  int v0; // ebx
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8

  v0 = 1;
  EnterCrit(0LL, 1LL);
  if ( *(_QWORD *)(gptiCurrent + 408LL) == grpdeskRitInput || !IAMThreadAccessGranted(gptiCurrent) )
  {
    v0 = 0;
    UserSetLastError(5LL);
  }
  else if ( v3 )
  {
    v2 = *(_QWORD *)(v3 + 408);
    if ( v2 )
      HMAssignmentUnlock(v2 + 80);
  }
  UserSessionSwitchLeaveCrit(v2, v1);
  return v0;
}
