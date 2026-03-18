/*
 * XREFs of NtUserInvalidateRect @ 0x1C0059D00
 * Callers:
 *     <none>
 * Callees:
 *     xxxRedrawWindow @ 0x1C0059F20 (xxxRedrawWindow.c)
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C0084C90 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserInvalidateRect(__int64 a1, __int128 *a2)
{
  __int64 CurrentProcess; // rax
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int128 *v10; // rdx
  __int64 v11; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rsi
  __int64 *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // r14d
  __int64 v22; // rsi
  __int64 *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  struct tagWND *v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 CurrentProcessWin32Process; // rax
  _QWORD v32[3]; // [rsp+40h] [rbp-48h] BYREF
  __int128 v33; // [rsp+58h] [rbp-30h] BYREF

  EnterCrit(0LL, 1LL);
  CurrentProcess = PsGetCurrentProcess();
  v6 = 0;
  if ( (unsigned int)IsProcessDwm(CurrentProcess) )
    gbValidateHandleForIL = 0;
  if ( a1 )
  {
    v9 = ValidateHwnd(a1);
    if ( !v9 )
      goto LABEL_27;
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
    v33 = *v10;
    if ( v9 )
    {
      v11 = 0LL;
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v10, v4, v5);
      if ( ThreadWin32Thread )
        v11 = *ThreadWin32Thread;
      if ( (*(_BYTE *)(*(_QWORD *)(v11 + 432) + 224LL) & 1) == 0 )
      {
        v16 = 0LL;
        v17 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v13, v14, v15);
        if ( v17 )
          v16 = *v17;
        if ( (*(_BYTE *)(*(_QWORD *)(v16 + 432) + 224LL) & 0x20) == 0 )
        {
          LOBYTE(v21) = 18;
          v22 = 0LL;
          v23 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v18, v19, v20);
          if ( v23 )
            v22 = *v23;
          if ( v22 )
          {
            if ( *(_QWORD *)(v22 + 352) )
              CaptureAndValidateUserModeDpiAwarenessContext(v22);
            if ( *(_DWORD *)(v22 + 340) )
            {
              v21 = *(_DWORD *)(v22 + 340);
            }
            else
            {
              CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v25, v24);
              if ( CurrentProcessWin32Process )
                v21 = *(_DWORD *)(CurrentProcessWin32Process + 280);
            }
          }
          if ( (((unsigned __int8)v21 ^ *(_BYTE *)(v9 + 352)) & 0xF) != 0 )
            TransformRectBetweenCoordinateSpaces(&v33, &v33, 0LL, v9);
        }
      }
    }
  }
  v32[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v32;
  v32[1] = v9;
  if ( v9 )
  {
    ++*(_DWORD *)(v9 + 8);
    v26 = (struct tagWND *)v9;
  }
  else
  {
    v26 = 0LL;
  }
  v6 = xxxRedrawWindow(v26);
  ThreadUnlock1(v28, v27);
LABEL_27:
  UserSessionSwitchLeaveCrit(v8, v7);
  return v6;
}
