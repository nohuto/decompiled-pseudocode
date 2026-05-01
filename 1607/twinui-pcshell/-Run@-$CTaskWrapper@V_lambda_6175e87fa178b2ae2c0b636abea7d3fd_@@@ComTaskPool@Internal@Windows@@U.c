/*
 * XREFs of ?Run@?$CTaskWrapper@V_lambda_6175e87fa178b2ae2c0b636abea7d3fd_@@@ComTaskPool@Internal@Windows@@UEAAXXZ @ 0x180020D00
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180018934 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?LaunchCore@CSingleViewShellExperience@@AEAAJAEBVHString@Wrappers@WRL@Microsoft@@PEBG@Z @ 0x18001C338 (-LaunchCore@CSingleViewShellExperience@@AEAAJAEBVHString@Wrappers@WRL@Microsoft@@PEBG@Z.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x18001F040 (-ContinueOnCurrentThread@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_Tlg.c)
 *     ??$AsStrong@UIInspectable@@@ExperienceManagerUtils@@YA?AV?$ComPtr@UIInspectable@@@WRL@Microsoft@@AEAVWeakRef@23@@Z @ 0x18001F144 (--$AsStrong@UIInspectable@@@ExperienceManagerUtils@@YA-AV-$ComPtr@UIInspectable@@@WRL@Microsoft@.c)
 *     ?Stop@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180026D5C (-Stop@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0.c)
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_6175e87fa178b2ae2c0b636abea7d3fd_>::Run(
        __int64 a1)
{
  __int64 v1; // rbx
  const char *v2; // r9
  __int64 v3; // rcx
  const unsigned __int16 *StringRawBuffer; // rax
  const unsigned __int16 *v5; // r14
  HSTRING *v6; // rcx
  int v7; // eax
  int v8; // edi
  _BYTE v9[16]; // [rsp+30h] [rbp-50h] BYREF
  void *Block; // [rsp+40h] [rbp-40h]
  char v11; // [rsp+48h] [rbp-38h]
  _BYTE v12[24]; // [rsp+50h] [rbp-30h] BYREF
  int v13; // [rsp+68h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]
  __int64 v15; // [rsp+A0h] [rbp+20h] BYREF

  v1 = a1 + 16;
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    (struct wil::details::IFailureCallback *)(a1 + 48),
    (wil::ActivityThreadWatcher *)v9);
  v2 = (const char *)*(unsigned int *)(v1 + 24);
  if ( (int)v2 >= 0 )
  {
    ExperienceManagerUtils::AsStrong<IInspectable>(&v15, (_QWORD *)v1);
    v3 = v15;
    if ( v15 )
    {
      StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(v1 + 16), 0LL);
      v5 = StringRawBuffer;
      v6 = *(HSTRING **)(v1 + 8);
      if ( !v6[24]
        || (v7 = CSingleViewShellExperience::LaunchCore((CSingleViewShellExperience *)v6, v6 + 24, StringRawBuffer),
            v8 = v7,
            v7 == -2144927148)
        || v7 == -2147009295 )
      {
        v8 = CSingleViewShellExperience::LaunchCore(
               *(CSingleViewShellExperience **)(v1 + 8),
               (HSTRING *)(*(_QWORD *)(v1 + 8) + 8LL),
               v5);
      }
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v1 + 8) + 88LL) + 104LL))(
        *(_QWORD *)(*(_QWORD *)(v1 + 8) + 88LL),
        *(_QWORD *)(v1 + 8),
        (unsigned int)v8);
      if ( v8 >= 0 )
        wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v1 + 32);
      else
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x198,
          (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
          (const char *)(unsigned int)v8);
      v3 = v15;
    }
    if ( v3 )
    {
      v15 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x17D,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      v2);
  }
  if ( v13 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v12);
  if ( v11 )
    free(Block);
}
