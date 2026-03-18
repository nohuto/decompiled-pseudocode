/*
 * XREFs of NtUserSetClipboardData @ 0x1C02196B0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     ?ForegroundInputOwnerMatch@@YAHPEBUtagTHREADINFO@@H@Z @ 0x1C011E8E8 (-ForegroundInputOwnerMatch@@YAHPEBUtagTHREADINFO@@H@Z.c)
 *     _SetClipboardData @ 0x1C014F6A0 (_SetClipboardData.c)
 */

__int64 __fastcall NtUserSetClipboardData(unsigned int a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rdx
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r11
  __int64 v12; // rsi
  __int64 v13; // rax

  EnterCrit(0LL, 1LL);
  if ( (*(_DWORD *)(gptiCurrent + 440LL) & 0x20000000) != 0 )
  {
    v7 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 720LL) + 24LL) & 4;
    v8 = 0;
  }
  else
  {
    v8 = 0;
    v7 = 0;
  }
  if ( !v7
    && (!*(_DWORD *)(PsGetCurrentProcessWin32Process(gptiCurrent, v6) + 828)
     || ((v11 = gptiCurrent, v12 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 24LL), gpqForeground)
      && ForegroundInputOwnerMatch(gptiCurrent, 1)
      || v11 == *(_QWORD *)(v12 + 48)
      || (v13 = *(_QWORD *)(v12 + 80)) != 0 && *(_QWORD *)(v13 + 16) == v11)
     && (a1 == 1 || a1 == 13)) )
  {
    if ( (unsigned __int64)a3 >= W32UserProbeAddress )
      a3 = (_QWORD *)W32UserProbeAddress;
    LOBYTE(v8) = (unsigned int)*a3 != 0;
    v8 = SetClipboardData(a1, a2, v8, HIDWORD(*a3) != 0);
  }
  else
  {
    UserSetLastError(5LL);
  }
  UserSessionSwitchLeaveCrit(v10, v9);
  return (int)v8;
}
