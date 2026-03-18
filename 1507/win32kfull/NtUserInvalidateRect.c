/*
 * XREFs of NtUserInvalidateRect @ 0x1C008E6F0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     xxxRedrawWindow @ 0x1C008E8E0 (xxxRedrawWindow.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserInvalidateRect(__int64 a1, __int128 *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 CurrentProcess; // rax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int128 *v10; // rdx
  __int64 v11; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 CurrentProcessWin32Process; // r14
  int v16; // edx
  int v17; // ecx
  struct tagWND *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  _QWORD v23[3]; // [rsp+40h] [rbp-48h] BYREF
  __int128 v24; // [rsp+58h] [rbp-30h] BYREF

  EnterCrit(1LL);
  CurrentProcess = PsGetCurrentProcess(v4, v3);
  v6 = 0;
  if ( (unsigned int)IsProcessDwm(CurrentProcess) )
    gbValidateHandleForIL = 0;
  if ( a1 )
  {
    v9 = ValidateHwnd(a1);
    if ( !v9 )
      goto LABEL_21;
  }
  else
  {
    v9 = 0LL;
  }
  v10 = a2;
  if ( a2 )
  {
    if ( (unsigned __int64)a2 >= W32UserProbeAddress )
      v10 = (__int128 *)W32UserProbeAddress;
    v24 = *v10;
    if ( v9 )
    {
      v11 = 0LL;
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( ThreadWin32Thread )
        v11 = *ThreadWin32Thread;
      if ( (*(_BYTE *)(*(_QWORD *)(v11 + 440) + 224LL) & 1) == 0 )
      {
        v13 = *(_QWORD *)(*(_QWORD *)(v9 + 16) + 384LL);
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(0x100000000000000LL);
        if ( !CurrentProcessWin32Process )
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v14);
        if ( !v13 )
          v13 = PsGetCurrentProcessWin32Process(v14);
        v16 = *(_DWORD *)(CurrentProcessWin32Process + 776);
        v17 = *(_DWORD *)(v13 + 776);
        if ( ((v16 ^ v17) & 0x4000) != 0 || (((unsigned __int16)v16 ^ (unsigned __int16)v17) & 0x2000) != 0 )
          TransformRectBetweenCoordinateSpaces(&v24, &v24, 0LL, v9);
      }
    }
  }
  v23[0] = *(_QWORD *)(gptiCurrent + 376LL);
  *(_QWORD *)(gptiCurrent + 376LL) = v23;
  v23[1] = v9;
  if ( v9 )
  {
    ++*(_DWORD *)(v9 + 8);
    v18 = (struct tagWND *)v9;
  }
  else
  {
    v18 = 0LL;
  }
  v6 = xxxRedrawWindow(v18);
  ThreadUnlock1(v20, v19);
LABEL_21:
  UserSessionSwitchLeaveCrit(v8, v7);
  return v6;
}
