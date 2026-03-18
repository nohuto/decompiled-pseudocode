/*
 * XREFs of NtUserGetScrollBarInfo @ 0x1C00AF510
 * Callers:
 *     <none>
 * Callees:
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C0084C90 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     xxxGetScrollBarInfo @ 0x1C00AF75C (xxxGetScrollBarInfo.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 */

__int64 __fastcall NtUserGetScrollBarInfo(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r14
  _BYTE *v8; // rdx
  int ScrollBarInfo; // ebx
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 *ThreadWin32Thread; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 *v20; // rax
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // r15d
  __int64 v24; // rdi
  __int64 *v25; // rax
  __int64 CurrentProcessWin32Process; // rax
  _QWORD v28[11]; // [rsp+50h] [rbp-78h] BYREF

  memset(&v28[3], 0, 0x3CuLL);
  EnterCrit(0LL, 1LL);
  v7 = ValidateHwnd(a1);
  if ( v7 )
  {
    v28[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v28;
    v28[1] = v7;
    ++*(_DWORD *)(v7 + 8);
    if ( ((PsGetCurrentProcessWow64Process(gptiCurrent) != 0 ? 0 : 3) & (unsigned int)a3) != 0 )
      ExRaiseDatatypeMisalignment();
    v8 = (_BYTE *)a3;
    if ( a3 >= W32UserProbeAddress )
      v8 = (_BYTE *)W32UserProbeAddress;
    *v8 = *v8;
    v8[59] = v8[59];
    LODWORD(v28[3]) = *(_DWORD *)a3;
    ScrollBarInfo = xxxGetScrollBarInfo((struct tagWND *)v7);
    v10 = 0LL;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v11, v12, v13);
    if ( ThreadWin32Thread )
      v10 = *ThreadWin32Thread;
    v18 = *(_QWORD *)(v10 + 432);
    if ( (*(_BYTE *)(v18 + 224) & 1) == 0 )
    {
      v19 = 0LL;
      v20 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v15, v16, v17);
      if ( v20 )
        v19 = *v20;
      if ( (*(_BYTE *)(*(_QWORD *)(v19 + 432) + 224LL) & 0x20) == 0 )
      {
        LOBYTE(v23) = 18;
        v24 = 0LL;
        v25 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v15, v21, v22);
        if ( v25 )
          v24 = *v25;
        if ( v24 )
        {
          if ( *(_QWORD *)(v24 + 352) )
            CaptureAndValidateUserModeDpiAwarenessContext(v24);
          if ( *(_DWORD *)(v24 + 340) )
          {
            v23 = *(_DWORD *)(v24 + 340);
          }
          else
          {
            CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v18, v15);
            if ( CurrentProcessWin32Process )
              v23 = *(_DWORD *)(CurrentProcessWin32Process + 280);
          }
        }
        if ( (((unsigned __int8)v23 ^ *(_BYTE *)(v7 + 352)) & 0xF) != 0 )
          TransformRectBetweenCoordinateSpaces((char *)&v28[3] + 4, (char *)&v28[3] + 4, 0LL, v7);
      }
    }
    if ( ScrollBarInfo )
    {
      *(_OWORD *)a3 = *(_OWORD *)&v28[3];
      *(_OWORD *)(a3 + 16) = *(_OWORD *)&v28[5];
      *(_OWORD *)(a3 + 32) = *(_OWORD *)&v28[7];
      *(_QWORD *)(a3 + 48) = v28[9];
      *(_DWORD *)(a3 + 56) = v28[10];
    }
    ThreadUnlock1(v18, v15);
  }
  else
  {
    ScrollBarInfo = 0;
  }
  UserSessionSwitchLeaveCrit(v6, v5);
  return ScrollBarInfo;
}
