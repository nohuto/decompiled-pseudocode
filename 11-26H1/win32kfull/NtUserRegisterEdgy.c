/*
 * XREFs of NtUserRegisterEdgy @ 0x14024B4E0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     HMValidateHandleWithDescriptor @ 0x140028DB8 (HMValidateHandleWithDescriptor.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     IsShellProcess @ 0x1401A1AF8 (IsShellProcess.c)
 *     EdgyUnregisterListener @ 0x14025B158 (EdgyUnregisterListener.c)
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 *     EdgyRegisterListener @ 0x1402C3A30 (EdgyRegisterListener.c)
 */

__int64 __fastcall NtUserRegisterEdgy(unsigned int a1, __int64 a2, int a3)
{
  int v6; // ebx
  __int64 v7; // rcx
  struct tagTHREADINFO *v8; // rax
  int v9; // ecx
  __int64 v10; // rcx
  unsigned int i; // edi
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v17; // r8
  int v18; // eax
  _OWORD v20[2]; // [rsp+40h] [rbp-58h] BYREF
  __int128 v21; // [rsp+60h] [rbp-38h] BYREF
  __int128 v22; // [rsp+70h] [rbp-28h]

  v6 = 0;
  EnterCrit(0LL, 0LL);
  v8 = PtiCurrent(v7);
  if ( !a1 )
  {
    v9 = 87;
LABEL_3:
    UserSetLastError(v9);
    goto LABEL_27;
  }
  if ( !(unsigned int)IsShellProcess(*((_QWORD *)v8 + 57)) )
  {
    v9 = 5;
    goto LABEL_3;
  }
  for ( i = 0; i < a1; ++i )
  {
    v21 = 0LL;
    v22 = 0LL;
    RtlCopyFromUser(&v21, (void *)(a2 + 32LL * i), 0x20uLL);
    v20[0] = v21;
    v20[1] = (unsigned __int64)v22;
    if ( a3 )
    {
      if ( !HMValidateHandleWithDescriptor(*(__int64 *)&v20[0], 0x13u) )
        goto LABEL_10;
      if ( *((_QWORD *)&v20[0] + 1) )
      {
        v12 = ValidateHwnd(*((_QWORD *)&v20[0] + 1));
        v14 = v12;
        if ( !v12 )
          goto LABEL_10;
        v15 = *(_QWORD *)(v12 + 40);
        if ( *(char *)(v15 + 19) < 0 || *(char *)(v15 + 20) < 0 )
          goto LABEL_10;
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v13);
        v17 = CurrentProcessWin32Process;
        if ( CurrentProcessWin32Process )
          v17 = CurrentProcessWin32Process & -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
        if ( *(_QWORD *)(*(_QWORD *)(v14 + 16) + 456LL) != v17 || *(_DWORD *)(v14 + 260) )
        {
LABEL_10:
          UserSetLastError(87);
          goto LABEL_27;
        }
      }
      v18 = EdgyRegisterListener(v20);
    }
    else
    {
      v18 = EdgyUnregisterListener(v20);
    }
    if ( a3 && !v18 )
    {
      UserSetLastError(8);
      goto LABEL_27;
    }
  }
  v6 = 1;
LABEL_27:
  UserSessionSwitchLeaveCrit(v10);
  return v6;
}
