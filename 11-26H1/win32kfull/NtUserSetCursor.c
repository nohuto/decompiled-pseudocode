/*
 * XREFs of NtUserSetCursor @ 0x140036620
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1400368B8 (-zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 */

__int64 __fastcall NtUserSetCursor(__int64 a1)
{
  __int64 v2; // rdi
  unsigned __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 UserSessionState; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // r14
  __int16 v14; // cx
  char v15; // al
  struct tagCURSOR *v16; // rax
  __int64 v17; // rcx
  __int64 v19; // rcx
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v21; // r8
  __int16 v22; // ax
  _QWORD *v23; // rax
  __int64 v24; // rax

  EnterCrit(0LL, 0LL);
  v2 = 0LL;
  v3 = 0LL;
  if ( !a1 )
    goto LABEL_10;
  PtiCurrent();
  v7 = *(_QWORD *)(W32GetUserSessionState(v5, v4) + 19904);
  if ( (unsigned __int64)(unsigned __int16)a1 >= *(_QWORD *)(v7 + 8) )
    goto LABEL_31;
  UserSessionState = W32GetUserSessionState(v7, v6);
  v11 = *(_DWORD *)(W32GetUserSessionState(v10, v9) + 19928) * (unsigned int)(unsigned __int16)a1
      + *(_QWORD *)(UserSessionState + 19920);
  v13 = HMPkheFromPhe(v11);
  v14 = WORD1(a1) & 0x7FFF;
  if ( (WORD1(a1) & 0x7FFF) != *(_WORD *)(v11 + 26) && v14 != 0x7FFF && (v14 || !PsGetCurrentProcessWow64Process()) )
    goto LABEL_31;
  v15 = *(_BYTE *)(v11 + 25);
  if ( (v15 & 1) == 0 && *(_BYTE *)(v11 + 24) == 3 )
  {
    v3 = *(_QWORD *)v13;
    if ( (v15 & 4) != 0 )
    {
      LOBYTE(v12) = 3;
      v3 &= -(__int64)((unsigned int)HMSDCheck(a1, v12, 0LL) != 0);
    }
  }
  if ( (*(_BYTE *)(v11 + 25) & 4) == 0 )
  {
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)PtiCurrent() + 130, 0, 0) & 0x20000000) != 0 )
    {
      if ( !(unsigned int)ValidateHandleSecure(a1, 3LL) )
        v3 = 0LL;
    }
    else
    {
      v19 = -(__int64)((unsigned int)ValidateHandleSecure(a1, 2LL) != 0);
      v3 &= v19;
    }
    if ( *(char *)(v11 + 25) < 0 )
    {
      CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v19);
      v21 = CurrentProcessWin32Process;
      if ( CurrentProcessWin32Process )
      {
        if ( *CurrentProcessWin32Process )
        {
          v22 = gahti[12 * *(unsigned __int8 *)(v11 + 24) + 6];
          if ( (v22 & 2) != 0 )
          {
            v23 = *(_QWORD **)(v13 + 8);
          }
          else
          {
            if ( (v22 & 1) == 0 )
              goto LABEL_9;
            v24 = *(_QWORD *)(v13 + 8);
            if ( !v24 )
              goto LABEL_9;
            v23 = *(_QWORD **)(v24 + 456);
          }
          if ( v23 && v23 != v21 )
            goto LABEL_31;
        }
      }
    }
  }
LABEL_9:
  if ( !v3 )
  {
LABEL_31:
    UserSetLastError(1402);
    goto LABEL_12;
  }
LABEL_10:
  v16 = zzzSetCursor((struct tagCURSOR *)v3);
  if ( v16 )
    v2 = *(_QWORD *)v16;
LABEL_12:
  UserSessionSwitchLeaveCrit(v17);
  return v2;
}
