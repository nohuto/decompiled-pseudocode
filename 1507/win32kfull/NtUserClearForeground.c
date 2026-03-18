/*
 * XREFs of NtUserClearForeground @ 0x1C0218700
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     IAMThreadAccessGranted @ 0x1C0082890 (IAMThreadAccessGranted.c)
 */

__int64 NtUserClearForeground()
{
  unsigned int v0; // ebx
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8

  v0 = 1;
  EnterCrit(1LL);
  if ( *(_QWORD *)(gptiCurrent + 416LL) == grpdeskRitInput || !IAMThreadAccessGranted(gptiCurrent) )
  {
    v0 = 0;
    UserSetLastError(5);
  }
  else if ( v3 )
  {
    v2 = *(_QWORD *)(v3 + 416);
    if ( v2 )
      HMAssignmentUnlock(v2 + 80);
  }
  UserSessionSwitchLeaveCrit(v2, v1);
  return v0;
}
