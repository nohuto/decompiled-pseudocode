/*
 * XREFs of MapDesktop @ 0x1C009A3E0
 * Callers:
 *     NtUserBuildHwndList @ 0x1C0076200 (NtUserBuildHwndList.c)
 *     zzzComposeDesktop @ 0x1C0097524 (zzzComposeDesktop.c)
 *     xxxSetThreadDesktop @ 0x1C0099B20 (xxxSetThreadDesktop.c)
 *     xxxResolveDesktop @ 0x1C00D93C0 (xxxResolveDesktop.c)
 *     xxxCreateDesktopEx @ 0x1C00D9F40 (xxxCreateDesktopEx.c)
 *     UserCommitDesktopMemory @ 0x1C0123A10 (UserCommitDesktopMemory.c)
 * Callees:
 *     GetDesktopView @ 0x1C009A590 (GetDesktopView.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C009A5A8 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
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
  __int64 v12; // r8
  ULONG v13; // eax
  _BYTE v15[72]; // [rsp+50h] [rbp-48h] BYREF
  int v16; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v17; // [rsp+A8h] [rbp+10h] BYREF
  __int64 v18; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v19; // [rsp+B8h] [rbp+20h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  v3 = 0;
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v16);
  if ( *(_DWORD *)a1 != 3 )
  {
    ProcessWin32Process = PsGetProcessWin32Process(*(_QWORD *)(a1 + 8));
    if ( ProcessWin32Process )
    {
      v7 = *(_QWORD *)(a1 + 8);
      if ( (v7 == gpepCSRSS
         || (unsigned int)IsProcessDwm(v7)
         || (unsigned __int8)ObFindHandleForObject(*(_QWORD *)(a1 + 8), v1, ExDesktopObjectType, 0LL, v15))
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
          v18 = 0LL;
          v19 = 0LL;
          v17 = 0LL;
          v3 = MmMapViewOfSection(v9, v11, &v17, 0LL, 0LL, &v19, &v18, 2, 0x400000, 2);
          if ( v3 >= 0 )
          {
            v10[1] = v1;
            v10[2] = v8 - v17;
            *v10 = *(_QWORD *)(ProcessWin32Process + 664);
            *(_QWORD *)(ProcessWin32Process + 664) = v10;
          }
          else
          {
            Win32FreePool(v10, v4, v12);
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
    v13 = RtlNtStatusToDosError(v3);
    UserSetLastError(v13);
  }
LABEL_17:
  if ( !v16 )
    UserSessionSwitchLeaveCrit(v5, v4);
  return (unsigned int)v3;
}
