/*
 * XREFs of NtUserSetClipboardData @ 0x1C021FA60
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     ?ForegroundInputOwnerMatch@@YAHPEBUtagTHREADINFO@@@Z @ 0x1C0106E3C (-ForegroundInputOwnerMatch@@YAHPEBUtagTHREADINFO@@@Z.c)
 *     _SetClipboardData @ 0x1C0149FA0 (_SetClipboardData.c)
 */

__int64 __fastcall NtUserSetClipboardData(int a1, __int64 a2, _QWORD *a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r9
  __int64 v11; // r10
  __int64 v12; // rax

  EnterCrit(0LL, 1LL);
  if ( (*(_DWORD *)(gptiCurrent + 440LL) & 0x20000000) != 0 )
  {
    v6 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 728LL) + 24LL) & 4;
    v7 = 0;
  }
  else
  {
    v7 = 0;
    v6 = 0;
  }
  if ( !v6
    && (!*(_DWORD *)(PsGetCurrentProcessWin32Process(gptiCurrent) + 836)
     || ((v10 = gptiCurrent, v11 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 24LL), gpqForeground)
      && ForegroundInputOwnerMatch(gptiCurrent)
      || v10 == *(_QWORD *)(v11 + 48)
      || (v12 = *(_QWORD *)(v11 + 80)) != 0 && *(_QWORD *)(v12 + 16) == v10)
     && (a1 == 1 || a1 == 13)) )
  {
    if ( (unsigned __int64)a3 >= W32UserProbeAddress )
      a3 = (_QWORD *)W32UserProbeAddress;
    LOBYTE(v7) = (unsigned int)*a3 != 0;
    v7 = SetClipboardData(a1, a2, v7, HIDWORD(*a3) != 0);
  }
  else
  {
    UserSetLastError(5);
  }
  UserSessionSwitchLeaveCrit(v9, v8);
  return v7;
}
