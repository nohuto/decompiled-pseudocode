/*
 * XREFs of NtUserAutoRotateScreen @ 0x1C0218120
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     xxxAutoRotateScreen @ 0x1C01D0C4C (xxxAutoRotateScreen.c)
 */

__int64 __fastcall NtUserAutoRotateScreen(unsigned int a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  unsigned int v4; // ebx
  int v5; // eax

  UserSessionSwitchEnterCrit();
  if ( PsGetCurrentProcess(v3, v2) != gpepCSRSS
    || ((*(_DWORD *)(gptiCurrent + 448LL) & 0x20000000) == 0
      ? (v5 = 0)
      : (v5 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 728LL) + 24LL) & 0x10),
        v5) )
  {
    v4 = -1;
    UserSetLastError(5);
  }
  else
  {
    v4 = xxxAutoRotateScreen(a1);
  }
  LeaveCrit();
  return v4;
}
