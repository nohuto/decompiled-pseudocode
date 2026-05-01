/*
 * XREFs of ?OnIdleStateChanged@?$SessionIdleCallback@V_lambda_d51462a882575f844d514d7510b2bd27_@@@@UEAAJH@Z @ 0x18001EF00
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnSessionIdleStateChanged@CSingleViewShellExperience@@AEAAJH@Z @ 0x18001C008 (-OnSessionIdleStateChanged@CSingleViewShellExperience@@AEAAJH@Z.c)
 *     ??$AsStrong@UIInspectable@@@ExperienceManagerUtils@@YA?AV?$ComPtr@UIInspectable@@@WRL@Microsoft@@AEAVWeakRef@23@@Z @ 0x18001F144 (--$AsStrong@UIInspectable@@@ExperienceManagerUtils@@YA-AV-$ComPtr@UIInspectable@@@WRL@Microsoft@.c)
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SessionIdleCallback<_lambda_d51462a882575f844d514d7510b2bd27_>::OnIdleStateChanged(
        __int64 a1,
        int a2)
{
  __int64 v3; // rdi
  unsigned int v4; // ebx
  int v5; // eax
  unsigned int v6; // edi
  __int64 v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v3 = a1 + 16;
  ExperienceManagerUtils::AsStrong<IInspectable>(&v10, a1 + 16);
  v4 = 0;
  if ( v10 )
  {
    v5 = CSingleViewShellExperience::OnSessionIdleStateChanged(*(CSingleViewShellExperience **)(v3 + 8), a2);
    v6 = v5;
    if ( v5 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xBC,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v5);
    v7 = v10;
    if ( v10 )
    {
      v10 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    return v6;
  }
  return v4;
}
