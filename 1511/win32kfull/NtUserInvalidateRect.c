/*
 * XREFs of NtUserInvalidateRect @ 0x1C0051F00
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     xxxRedrawWindow @ 0x1C00520F0 (xxxRedrawWindow.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserInvalidateRect(__int64 a1, __int128 *a2)
{
  __int64 CurrentProcess; // rax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int128 *v8; // rdx
  __int64 v9; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 CurrentProcessWin32Process; // r14
  int v14; // edx
  int v15; // ecx
  struct tagWND *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  _QWORD v21[3]; // [rsp+40h] [rbp-48h] BYREF
  __int128 v22; // [rsp+58h] [rbp-30h] BYREF

  EnterCrit(0LL, 1LL);
  CurrentProcess = PsGetCurrentProcess();
  v4 = 0;
  if ( (unsigned int)IsProcessDwm(CurrentProcess) )
    gbValidateHandleForIL = 0;
  if ( a1 )
  {
    v7 = ValidateHwnd(a1);
    if ( !v7 )
      goto LABEL_21;
  }
  else
  {
    v7 = 0LL;
  }
  v8 = a2;
  if ( a2 )
  {
    if ( (unsigned __int64)a2 >= W32UserProbeAddress )
      v8 = (__int128 *)W32UserProbeAddress;
    v22 = *v8;
    if ( v7 )
    {
      v9 = 0LL;
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( ThreadWin32Thread )
        v9 = *ThreadWin32Thread;
      if ( (*(_BYTE *)(*(_QWORD *)(v9 + 432) + 224LL) & 1) == 0 )
      {
        v11 = *(_QWORD *)(*(_QWORD *)(v7 + 16) + 376LL);
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(0x100000000000000LL);
        if ( !CurrentProcessWin32Process )
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v12);
        if ( !v11 )
          v11 = PsGetCurrentProcessWin32Process(v12);
        v14 = *(_DWORD *)(CurrentProcessWin32Process + 776);
        v15 = *(_DWORD *)(v11 + 776);
        if ( ((v14 ^ v15) & 0x4000) != 0 || (((unsigned __int16)v14 ^ (unsigned __int16)v15) & 0x2000) != 0 )
          TransformRectBetweenCoordinateSpaces(&v22, &v22, 0LL, v7);
      }
    }
  }
  v21[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v21;
  v21[1] = v7;
  if ( v7 )
  {
    ++*(_DWORD *)(v7 + 8);
    v16 = (struct tagWND *)v7;
  }
  else
  {
    v16 = 0LL;
  }
  v4 = xxxRedrawWindow(v16);
  ThreadUnlock1(v18, v17);
LABEL_21:
  UserSessionSwitchLeaveCrit(v6, v5);
  return v4;
}
