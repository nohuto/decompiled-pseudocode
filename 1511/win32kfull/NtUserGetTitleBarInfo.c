/*
 * XREFs of NtUserGetTitleBarInfo @ 0x1C0070920
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x1C0070B50 (-xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserGetTitleBarInfo(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rsi
  _BYTE *v7; // rdx
  unsigned int v8; // ebx
  __int64 v9; // r14
  __int64 *ThreadWin32Thread; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r14
  __int64 v14; // rcx
  __int64 CurrentProcessWin32Process; // r15
  _QWORD v17[4]; // [rsp+48h] [rbp-70h] BYREF
  _OWORD v18[3]; // [rsp+68h] [rbp-50h] BYREF

  memset(v18, 0, 0x2CuLL);
  EnterCrit(0LL, 1LL);
  gbValidateHandleForIL = 0;
  v6 = ValidateHwnd(a1);
  if ( v6 )
  {
    v17[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v17;
    v17[1] = v6;
    ++*(_DWORD *)(v6 + 8);
    if ( ((PsGetCurrentProcessWow64Process(gptiCurrent) != 0 ? 0 : 3) & (unsigned int)a2) != 0 )
      ExRaiseDatatypeMisalignment();
    v7 = (_BYTE *)a2;
    if ( a2 >= W32UserProbeAddress )
      v7 = (_BYTE *)W32UserProbeAddress;
    *v7 = *v7;
    v7[43] = v7[43];
    LODWORD(v18[0]) = *(_DWORD *)a2;
    if ( LODWORD(v18[0]) == 44 )
    {
      *(_QWORD *)((char *)&v18[1] + 4) = 0LL;
      *(_QWORD *)((char *)&v18[1] + 12) = 0LL;
      *(_QWORD *)((char *)&v18[2] + 4) = 0LL;
      xxxCommonGetTitleBarInfo((struct tagWND *)v6, (struct tagTITLEBARINFO *)v18);
      v8 = 1;
    }
    else
    {
      UserSetLastError(87);
      v8 = 0;
    }
    v9 = 0LL;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread )
      v9 = *ThreadWin32Thread;
    if ( (*(_BYTE *)(*(_QWORD *)(v9 + 432) + 224LL) & 1) == 0 )
    {
      v13 = *(_QWORD *)(*(_QWORD *)(v6 + 16) + 376LL);
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(0x100000000000000LL);
      if ( !CurrentProcessWin32Process )
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v14);
      if ( !v13 )
        v13 = PsGetCurrentProcessWin32Process(v14);
      v11 = *(unsigned int *)(CurrentProcessWin32Process + 776);
      if ( (((unsigned int)v11 ^ *(_DWORD *)(v13 + 776)) & 0x4000) != 0
        || (v12 = (unsigned int)v11 ^ *(_DWORD *)(v13 + 776),
            (((unsigned __int16)v11 ^ *(_WORD *)(v13 + 776)) & 0x2000) != 0) )
      {
        TransformRectBetweenCoordinateSpaces((char *)v18 + 4, (char *)v18 + 4, 0LL, v6);
      }
    }
    if ( v8 )
    {
      *(_OWORD *)a2 = v18[0];
      *(_OWORD *)(a2 + 16) = v18[1];
      *(_QWORD *)(a2 + 32) = *(_QWORD *)&v18[2];
      *(_DWORD *)(a2 + 40) = DWORD2(v18[2]);
    }
    ThreadUnlock1(v12, v11);
  }
  else
  {
    v8 = 0;
  }
  UserSessionSwitchLeaveCrit(v5, v4);
  return v8;
}
