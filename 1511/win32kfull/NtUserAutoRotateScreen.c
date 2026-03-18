/*
 * XREFs of NtUserAutoRotateScreen @ 0x1C0217EF0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     xxxAutoRotateScreen @ 0x1C01D2848 (xxxAutoRotateScreen.c)
 */

__int64 __fastcall NtUserAutoRotateScreen(unsigned int a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned int v6; // ebx
  int v7; // eax

  UserSessionSwitchEnterCrit();
  if ( PsGetCurrentProcess(v3, v2, v4, v5) != gpepCSRSS
    || ((*(_DWORD *)(gptiCurrent + 440LL) & 0x20000000) == 0
      ? (v7 = 0)
      : (v7 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 728LL) + 24LL) & 0x10),
        v7) )
  {
    v6 = -1;
    UserSetLastError(5);
  }
  else
  {
    v6 = xxxAutoRotateScreen(a1);
  }
  LeaveCrit();
  return v6;
}
