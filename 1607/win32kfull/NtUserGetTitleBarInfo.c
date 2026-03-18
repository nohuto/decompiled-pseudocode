/*
 * XREFs of NtUserGetTitleBarInfo @ 0x1C006EC50
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x1C006EEC0 (-xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z.c)
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C0084C90 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserGetTitleBarInfo(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r14
  _BYTE *v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // ebx
  __int64 v12; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdi
  __int64 *v19; // rax
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // r15d
  __int64 v23; // rdi
  __int64 *v24; // rax
  __int64 CurrentProcessWin32Process; // rax
  _QWORD v27[3]; // [rsp+50h] [rbp-68h] BYREF
  _OWORD v28[3]; // [rsp+68h] [rbp-50h] BYREF

  memset(v28, 0, 0x2CuLL);
  EnterCrit(0LL, 1LL);
  gbValidateHandleForIL = 0;
  v6 = ValidateHwnd(a1);
  if ( v6 )
  {
    v27[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v27;
    v27[1] = v6;
    ++*(_DWORD *)(v6 + 8);
    if ( ((PsGetCurrentProcessWow64Process(gptiCurrent) != 0 ? 0 : 3) & (unsigned int)a2) != 0 )
      ExRaiseDatatypeMisalignment();
    v7 = (_BYTE *)a2;
    if ( a2 >= W32UserProbeAddress )
      v7 = (_BYTE *)W32UserProbeAddress;
    *v7 = *v7;
    v7[43] = v7[43];
    LODWORD(v28[0]) = *(_DWORD *)a2;
    if ( LODWORD(v28[0]) == 44 )
    {
      *(_QWORD *)((char *)&v28[1] + 4) = 0LL;
      *(_QWORD *)((char *)&v28[1] + 12) = 0LL;
      *(_QWORD *)((char *)&v28[2] + 4) = 0LL;
      xxxCommonGetTitleBarInfo((struct tagWND *)v6, (struct tagTITLEBARINFO *)v28);
      v11 = 1;
    }
    else
    {
      UserSetLastError(87LL);
      v11 = 0;
    }
    v12 = 0LL;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v8, v9, v10);
    if ( ThreadWin32Thread )
      v12 = *ThreadWin32Thread;
    if ( (*(_BYTE *)(*(_QWORD *)(v12 + 432) + 224LL) & 1) == 0 )
    {
      v18 = 0LL;
      v19 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v14, v16, v17);
      if ( v19 )
        v18 = *v19;
      if ( (*(_BYTE *)(*(_QWORD *)(v18 + 432) + 224LL) & 0x20) == 0 )
      {
        LOBYTE(v22) = 18;
        v23 = 0LL;
        v24 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v14, v20, v21);
        if ( v24 )
          v23 = *v24;
        if ( v23 )
        {
          if ( *(_QWORD *)(v23 + 352) )
            CaptureAndValidateUserModeDpiAwarenessContext(v23);
          if ( *(_DWORD *)(v23 + 340) )
          {
            v22 = *(_DWORD *)(v23 + 340);
          }
          else
          {
            CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v15, v14);
            if ( CurrentProcessWin32Process )
              v22 = *(_DWORD *)(CurrentProcessWin32Process + 280);
          }
        }
        if ( (((unsigned __int8)v22 ^ *(_BYTE *)(v6 + 352)) & 0xF) != 0 )
          TransformRectBetweenCoordinateSpaces((char *)v28 + 4, (char *)v28 + 4, 0LL, v6);
      }
    }
    if ( v11 )
    {
      *(_OWORD *)a2 = v28[0];
      *(_OWORD *)(a2 + 16) = v28[1];
      *(_QWORD *)(a2 + 32) = *(_QWORD *)&v28[2];
      *(_DWORD *)(a2 + 40) = DWORD2(v28[2]);
    }
    ThreadUnlock1(v15, v14);
  }
  else
  {
    v11 = 0;
  }
  UserSessionSwitchLeaveCrit(v5, v4);
  return v11;
}
