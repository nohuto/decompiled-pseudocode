/*
 * XREFs of MapDesktop @ 0x140059FC0
 * Callers:
 *     xxxSetThreadDesktop @ 0x1400595D4 (xxxSetThreadDesktop.c)
 *     xxxCreateDesktopEx @ 0x14018BC74 (xxxCreateDesktopEx.c)
 *     zzzComposeDesktop @ 0x140201D04 (zzzComposeDesktop.c)
 *     UserCommitDesktopMemory @ 0x1402068E0 (UserCommitDesktopMemory.c)
 *     NtUserBuildHwndList @ 0x14020DC00 (NtUserBuildHwndList.c)
 *     xxxResolveDesktop @ 0x1402A52F0 (xxxResolveDesktop.c)
 * Callees:
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z @ 0x1400265D4 (-LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z.c)
 *     ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_HANDLEMANAGER@@@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@XZ @ 0x1400378B8 (--1-$ObjectLock@$$V@-$DomainExclusive@VDLT_HANDLEMANAGER@@@-$DomainShared@$$V@SharedUserCritOnly.c)
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x14003AB20 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
 *     GetDesktopView @ 0x14005A3B0 (GetDesktopView.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@VDLT_DESKTOP@@@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@XZ @ 0x14005A3F8 (--0-$ObjectLock@$$V@-$DomainExclusive@VDLT_DESKTOP@@@-$DomainShared@$$V@SharedUserCritOnly@@QEAA.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall MapDesktop(__int64 a1)
{
  int *v1; // r15
  int v2; // edi
  __int64 v4; // rcx
  char v5; // r12
  _QWORD *ProcessWin32Process; // rax
  __int64 v7; // rcx
  _QWORD *v8; // r14
  __int64 UserGdiSessionState; // rax
  __int64 v10; // rcx
  __int64 v11; // r13
  int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  _QWORD *v16; // rbx
  __int64 v17; // rdx
  __int64 v19; // [rsp+58h] [rbp-39h] BYREF
  __int64 v20; // [rsp+60h] [rbp-31h] BYREF
  __int64 v21; // [rsp+68h] [rbp-29h] BYREF
  PERESOURCE v22; // [rsp+70h] [rbp-21h] BYREF
  __int64 v23; // [rsp+78h] [rbp-19h] BYREF
  _BYTE v24[56]; // [rsp+80h] [rbp-11h] BYREF

  v1 = *(int **)(a1 + 32);
  v23 = 0LL;
  v2 = 0;
  v19 = 0LL;
  v21 = 0LL;
  v20 = 0LL;
  if ( (unsigned int)GET_USERCRIT_DISPOSITION(a1) )
  {
    v5 = 0;
  }
  else
  {
    v5 = 1;
    EnterCrit(1LL, 0LL);
  }
  if ( *(_DWORD *)(a1 + 16) != 3 )
  {
    ProcessWin32Process = (_QWORD *)PsGetProcessWin32Process(*(_QWORD *)(a1 + 24));
    v8 = ProcessWin32Process;
    if ( ProcessWin32Process && *ProcessWin32Process )
    {
      UserGdiSessionState = W32GetUserGdiSessionState(v7);
      v10 = *(_QWORD *)(a1 + 24);
      if ( (v10 == *(_QWORD *)(UserGdiSessionState + 40)
         || (unsigned int)IsProcessDwm(v10)
         || (unsigned __int8)ObFindHandleForObject(*(_QWORD *)(a1 + 24), v1, ExDesktopObjectType, 0LL, &v21))
        && (v11 = *((_QWORD *)v1 + 16), v12 = *v1, (unsigned int)PsGetProcessSessionIdEx(*(_QWORD *)(a1 + 24)) == v12) )
      {
        SharedUserCritOnly::DomainShared<>::DomainExclusive<DLT_DESKTOP>::ObjectLock<>::ObjectLock<>(v24);
        v22 = *(PERESOURCE *)(W32GetUserSessionState(v14, v13) + 42424);
        LockRefactorStagingAssertOwned(&v22, v15);
        if ( GetDesktopView(v8, v1) )
        {
          SharedUserCritOnly::DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::~ObjectLock<>((__int64)v24);
          goto LABEL_16;
        }
        v16 = (_QWORD *)Win32AllocPoolWithQuotaZInit(24LL, 1768977237LL);
        if ( v16 )
        {
          v17 = *(_QWORD *)(a1 + 24);
          v19 = 4096LL;
          v2 = ((__int64 (__fastcall *)(__int64, __int64, __int64 *, _QWORD, _QWORD, __int64 *, __int64 *, int, int, int))MmMapViewOfSection)(
                 v11,
                 v17,
                 &v20,
                 0LL,
                 0LL,
                 &v19,
                 &v23,
                 2,
                 0x400000,
                 2);
          if ( v2 < 0 )
          {
            Win32FreePool(v16);
          }
          else
          {
            v16[1] = v1;
            v16[2] = v20;
            *v16 = v8[86];
            v8[86] = v16;
          }
          SharedUserCritOnly::DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::~ObjectLock<>((__int64)v24);
          if ( v2 >= 0 )
            goto LABEL_16;
        }
        else
        {
          v2 = -1073741801;
          SharedUserCritOnly::DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::~ObjectLock<>((__int64)v24);
        }
      }
      else
      {
        v2 = -1073741790;
      }
    }
    else
    {
      v2 = -1073741811;
    }
    SetLastNtError((unsigned int)v2);
  }
LABEL_16:
  if ( v5 )
    UserSessionSwitchLeaveCrit(v4);
  return (unsigned int)v2;
}
