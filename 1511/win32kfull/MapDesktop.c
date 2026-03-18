/*
 * XREFs of MapDesktop @ 0x1C00CF780
 * Callers:
 *     NtUserBuildHwndList @ 0x1C006D080 (NtUserBuildHwndList.c)
 *     xxxSetThreadDesktop @ 0x1C00CEE94 (xxxSetThreadDesktop.c)
 *     zzzComposeDesktop @ 0x1C00D1AFC (zzzComposeDesktop.c)
 *     UserCommitDesktopMemory @ 0x1C0101EB0 (UserCommitDesktopMemory.c)
 *     xxxResolveDesktop @ 0x1C01207C0 (xxxResolveDesktop.c)
 *     xxxCreateDesktopEx @ 0x1C0121340 (xxxCreateDesktopEx.c)
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     GetDesktopView @ 0x1C00CF930 (GetDesktopView.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C00CF948 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 */

__int64 __fastcall MapDesktop(__int64 a1)
{
  __int64 v1; // rbp
  NTSTATUS v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 ProcessWin32Process; // r14
  __int64 v7; // rcx
  __int64 v8; // r15
  __int64 v9; // r12
  _QWORD *v10; // rsi
  __int64 v11; // rdx
  ULONG v12; // eax
  _BYTE v14[72]; // [rsp+50h] [rbp-48h] BYREF
  int v15; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v16; // [rsp+A8h] [rbp+10h] BYREF
  __int64 v17; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v18; // [rsp+B8h] [rbp+20h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  v3 = 0;
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v15);
  if ( *(_DWORD *)a1 != 3 )
  {
    ProcessWin32Process = PsGetProcessWin32Process(*(_QWORD *)(a1 + 8));
    if ( ProcessWin32Process )
    {
      v7 = *(_QWORD *)(a1 + 8);
      if ( (v7 == gpepCSRSS
         || (unsigned int)IsProcessDwm(v7)
         || (unsigned __int8)ObFindHandleForObject(*(_QWORD *)(a1 + 8), v1, ExDesktopObjectType, 0LL, v14))
        && (v8 = *(_QWORD *)(v1 + 120),
            v9 = *(_QWORD *)(v1 + 112),
            (unsigned int)PsGetProcessSessionId(*(_QWORD *)(a1 + 8)) == *(_DWORD *)v1) )
      {
        if ( GetDesktopView(ProcessWin32Process) )
          goto LABEL_17;
        v10 = (_QWORD *)Win32AllocPoolWithQuota(24LL, 1768977237LL);
        if ( v10 )
        {
          v11 = *(_QWORD *)(a1 + 8);
          v17 = 0LL;
          v18 = 0LL;
          v16 = 0LL;
          v3 = MmMapViewOfSection(v9, v11, &v16, 0LL, 0LL, &v18, &v17, 2, 0x400000, 2);
          if ( v3 >= 0 )
          {
            v10[1] = v1;
            v10[2] = v8 - v16;
            *v10 = *(_QWORD *)(ProcessWin32Process + 672);
            *(_QWORD *)(ProcessWin32Process + 672) = v10;
          }
          else
          {
            Win32FreePool(v10);
          }
          if ( v3 >= 0 )
            goto LABEL_17;
        }
        else
        {
          v3 = -1073741801;
        }
      }
      else
      {
        v3 = -1073741790;
      }
    }
    else
    {
      v3 = -1073741811;
    }
    v12 = RtlNtStatusToDosError(v3);
    UserSetLastError(v12);
  }
LABEL_17:
  if ( !v15 )
    UserSessionSwitchLeaveCrit(v5, v4);
  return (unsigned int)v3;
}
