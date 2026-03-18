/*
 * XREFs of NtUserGetUpdateRect @ 0x1C00EFC90
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     SameCoordinateSpace @ 0x1C00855C8 (SameCoordinateSpace.c)
 *     xxxGetUpdateRect @ 0x1C00EFDD4 (xxxGetUpdateRect.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserGetUpdateRect(__int64 a1, _OWORD *a2, unsigned int a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int UpdateRect; // ebx
  __int64 v13; // r14
  __int64 CurrentProcessWin32Process; // rax
  _QWORD v16[3]; // [rsp+38h] [rbp-50h] BYREF
  __int128 v17; // [rsp+50h] [rbp-38h] BYREF

  v17 = 0uLL;
  EnterCrit(1LL);
  v6 = ValidateHwnd(a1);
  v9 = v6;
  if ( v6 )
  {
    v16[0] = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = v16;
    v16[1] = v6;
    ++*(_DWORD *)(v6 + 8);
    UpdateRect = xxxGetUpdateRect(
                   v6,
                   (unsigned __int64)&v17 & ((unsigned __int128)-(__int128)(unsigned __int64)a2 >> 64),
                   a3);
    if ( a2 )
    {
      v11 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 440);
      if ( (*(_BYTE *)(v11 + 224) & 1) == 0 )
      {
        v13 = *(_QWORD *)(v9 + 16);
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(*(unsigned int *)(v13 + 576));
        if ( !(unsigned int)SameCoordinateSpace(CurrentProcessWin32Process, *(_QWORD *)(v13 + 384)) )
          TransformRectBetweenCoordinateSpaces(&v17, &v17, 0LL, v9);
      }
      if ( (unsigned __int64)a2 >= W32UserProbeAddress )
        a2 = (_OWORD *)W32UserProbeAddress;
      *a2 = v17;
    }
    ThreadUnlock1(v11, v10);
  }
  else
  {
    UpdateRect = 0;
  }
  UserSessionSwitchLeaveCrit(v8, v7);
  return UpdateRect;
}
