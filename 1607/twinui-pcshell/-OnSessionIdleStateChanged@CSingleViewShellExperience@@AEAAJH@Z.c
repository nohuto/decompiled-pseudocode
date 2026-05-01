/*
 * XREFs of ?OnSessionIdleStateChanged@CSingleViewShellExperience@@AEAAJH@Z @ 0x18001C008
 * Callers:
 *     ?RegisterSessionIdleDetector@CSingleViewShellExperience@@AEAAJPEAK@Z @ 0x18001BEE0 (-RegisterSessionIdleDetector@CSingleViewShellExperience@@AEAAJPEAK@Z.c)
 *     ?OnIdleStateChanged@?$SessionIdleCallback@V_lambda_d51462a882575f844d514d7510b2bd27_@@@@UEAAJH@Z @ 0x18001EF00 (-OnIdleStateChanged@-$SessionIdleCallback@V_lambda_d51462a882575f844d514d7510b2bd27_@@@@UEAAJH@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000C888 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$SessionIdleState@AEA_N@SingleViewExperienceTelemetry@@SAXAEA_N@Z @ 0x18001F22C (--$SessionIdleState@AEA_N@SingleViewExperienceTelemetry@@SAXAEA_N@Z.c)
 *     ?NavigateView@NavigationLevelOverrideHelper@ShellExperienceHelpers@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Desktop@Shell@Internal@Windows@@W4NavigationLevel@45678@@Z @ 0x180026EDC (-NavigateView@NavigationLevelOverrideHelper@ShellExperienceHelpers@@AEAAJPEAUIViewWrapper@ViewMa.c)
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSingleViewShellExperience::OnSessionIdleStateChanged(CSingleViewShellExperience *this, int a2)
{
  _BYTE *v2; // rdi
  __int64 v5; // r8
  int v6; // eax
  __int64 v7; // rcx
  int v8; // esi
  int v9; // eax
  int v10; // edi
  __int64 v11; // r9
  __int64 v12; // rdx
  int v13; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (char *)this + 61;
  *((_BYTE *)this + 61) = a2 != 0;
  SingleViewExperienceTelemetry::SessionIdleState<bool &>((char *)this + 61);
  if ( *((_QWORD *)this + 4) )
  {
    LOBYTE(v5) = *v2;
    v6 = (*(__int64 (__fastcall **)(_QWORD, CSingleViewShellExperience *, __int64))(**((_QWORD **)this + 11) + 96LL))(
           *((_QWORD *)this + 11),
           this,
           v5);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xD4,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v6);
    v7 = *((_QWORD *)this + 4);
    if ( v7 )
    {
      if ( !a2 )
      {
        if ( *((_DWORD *)this + 20) )
        {
          v13 = ShellExperienceHelpers::NavigationLevelOverrideHelper::NavigateView(
                  (char *)this + 80,
                  *((_QWORD *)this + 4));
          if ( v13 >= 0 )
          {
            *((_DWORD *)this + 20) = 0;
            return 0LL;
          }
          v11 = (unsigned int)v13;
          v12 = 182LL;
        }
        else
        {
          v11 = 2147947423LL;
          v12 = 179LL;
        }
        goto LABEL_15;
      }
      v8 = *((_DWORD *)this + 21);
      if ( v8 )
      {
        v9 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 120LL))(v7, 1LL);
        v10 = v9;
        if ( v9 >= 0 )
        {
          *((_DWORD *)this + 21) = 1;
          v10 = 0;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x5D,
            (__int64)"internal\\Shell\\private\\inc\\NavigationLevelOverrideHelper.h",
            (const char *)(unsigned int)v9);
        }
        if ( v10 < 0 )
        {
          v11 = (unsigned int)v10;
          v12 = 159LL;
LABEL_15:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v12,
            (__int64)"internal\\Shell\\private\\inc\\NavigationLevelOverrideHelper.h",
            (const char *)v11);
          return 0LL;
        }
        *((_DWORD *)this + 20) = v8;
      }
    }
  }
  return 0LL;
}
