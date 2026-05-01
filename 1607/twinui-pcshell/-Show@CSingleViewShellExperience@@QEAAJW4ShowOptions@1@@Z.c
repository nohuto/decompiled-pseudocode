/*
 * XREFs of ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x18001D9C8
 * Callers:
 *     ?TransitionToState@CActionCenterExperienceManager@@AEAAJW4ActionCenterViewState@1@@Z @ 0x180012040 (-TransitionToState@CActionCenterExperienceManager@@AEAAJW4ActionCenterViewState@1@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Launch@CSingleViewShellExperience@@QEAAJXZ @ 0x18001C3C4 (-Launch@CSingleViewShellExperience@@QEAAJXZ.c)
 *     ?ShowViewAsync@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x18001D86C (-ShowViewAsync@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 *     ??$Start@PEBGPEBGIAEBQEAUHWND__@@@Show@SingleViewExperienceTelemetry@@SA?AV01@$$QEAPEBG0$$QEAIAEBQEAUHWND__@@@Z @ 0x18001FE50 (--$Start@PEBGPEBGIAEBQEAUHWND__@@@Show@SingleViewExperienceTelemetry@@SA-AV01@$$QEAPEBG0$$QEAIAE.c)
 *     ?Stop@Show@SingleViewExperienceTelemetry@@QEAAXI@Z @ 0x180023ABC (-Stop@Show@SingleViewExperienceTelemetry@@QEAAXI@Z.c)
 *     ?Destroy@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180025CC8 (-Destroy@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Par.c)
 *     ??1?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800262A8 (--1-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsP.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Desktop@Shell@Internal@Windows@@@Z @ 0x1800270A0 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     __security_check_cookie @ 0x18002E500 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSingleViewShellExperience::Show(
        __int64 a1,
        struct Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewWrapper *a2)
{
  unsigned int v2; // esi
  ExperienceManagerUtils *v4; // rcx
  struct Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewWrapper *v5; // rdx
  int v6; // eax
  int v7; // edi
  __int64 v8; // rdx
  __int64 v10[5]; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v11[40]; // [rsp+68h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C0h] [rbp+B8h]

  v10[3] = -2LL;
  v2 = (unsigned int)a2;
  v4 = *(ExperienceManagerUtils **)(a1 + 32);
  if ( v4 )
    v10[0] = (__int64)ExperienceManagerUtils::WindowFromViewWrapper(v4, a2);
  else
    v10[0] = 0LL;
  v10[1] = (__int64)WindowsGetStringRawBuffer(*(HSTRING *)(a1 + 16), 0LL);
  v10[2] = (__int64)WindowsGetStringRawBuffer(*(HSTRING *)(a1 + 8), 0LL);
  SingleViewExperienceTelemetry::Show::Start<unsigned short const *,unsigned short const *,unsigned int,HWND__ * const &>(
    (SingleViewExperienceTelemetry::Show *)v11,
    (__int64)v10);
  if ( *(_DWORD *)(a1 + 48) != 1 )
  {
    if ( *(_DWORD *)(a1 + 48) != 2 )
    {
      *(_DWORD *)(a1 + 72) = 1;
      *(_DWORD *)(a1 + 76) = 0;
      if ( (v2 & 1) != 0 )
        *(_DWORD *)(a1 + 76) |= 1u;
      if ( (v2 & 2) != 0 )
        *(_DWORD *)(a1 + 76) |= 2u;
      if ( (v2 & 4) != 0 )
        *(_DWORD *)(a1 + 76) |= 4u;
      if ( !*(_QWORD *)(a1 + 32) )
      {
        v6 = CSingleViewShellExperience::Launch((CSingleViewShellExperience *)a1, v5);
        v7 = v6;
        if ( v6 < 0 )
        {
          v8 = 908LL;
LABEL_18:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v8,
            (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
            (const char *)(unsigned int)v6);
          goto LABEL_20;
        }
      }
    }
    goto LABEL_19;
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 88) + 24LL))(*(_QWORD *)(a1 + 88), a1);
  if ( v7 >= 0 )
  {
    v6 = CSingleViewShellExperience::ShowViewAsync(a1, v2);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 890LL;
      goto LABEL_18;
    }
LABEL_19:
    SingleViewExperienceTelemetry::Show::Stop((SingleViewExperienceTelemetry::Show *)v11, *(_DWORD *)(a1 + 48));
    v7 = 0;
  }
LABEL_20:
  v11[0] = &SingleViewExperienceTelemetry::Show::`vftable';
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v11);
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(v11);
  return (unsigned int)v7;
}
