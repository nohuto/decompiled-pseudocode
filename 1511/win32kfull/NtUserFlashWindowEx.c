/*
 * XREFs of NtUserFlashWindowEx @ 0x1C000BDA0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     ?ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C007576C (-ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     xxxFlashWindow @ 0x1C00C6ACC (xxxFlashWindow.c)
 */

__int64 __fastcall NtUserFlashWindowEx(__int128 *a1)
{
  unsigned int v2; // ebx
  struct tagWND *v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int128 v9; // [rsp+40h] [rbp-58h]
  _QWORD v10[3]; // [rsp+58h] [rbp-40h] BYREF
  __int128 v11; // [rsp+70h] [rbp-28h]
  __int128 v12; // [rsp+80h] [rbp-18h]
  struct tagWND *v13; // [rsp+A8h] [rbp+10h] BYREF

  EnterCrit(0LL, 1LL);
  if ( a1 + 2 < a1 || (unsigned __int64)(a1 + 2) > W32UserProbeAddress )
    a1 = (__int128 *)W32UserProbeAddress;
  v9 = a1[1];
  v11 = *a1;
  v12 = v9;
  v2 = 0;
  if ( (unsigned int)ValidateHWNDND(*((HWND *)&v11 + 1), &v13) && (_DWORD)v11 == 32 && (v9 & 0xFFFFFFF0) == 0 )
  {
    v10[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v10;
    v3 = v13;
    v10[1] = v13;
    ++*((_DWORD *)v13 + 2);
    v2 = xxxFlashWindow(v3, (unsigned __int16)v9 | (WORD2(v9) << 16), DWORD2(v9));
    ThreadUnlock1(v5, v4);
  }
  else
  {
    UserSetLastError(87LL);
  }
  UserSessionSwitchLeaveCrit(v7, v6);
  return v2;
}
