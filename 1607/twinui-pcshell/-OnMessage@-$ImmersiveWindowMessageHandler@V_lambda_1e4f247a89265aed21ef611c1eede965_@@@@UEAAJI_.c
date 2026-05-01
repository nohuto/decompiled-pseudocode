/*
 * XREFs of ?OnMessage@?$ImmersiveWindowMessageHandler@V_lambda_1e4f247a89265aed21ef611c1eede965_@@@@UEAAJI_K_J@Z @ 0x18001EDC0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnboostPriority@CSingleViewShellExperience@@AEAAXW4PriorityBoostReason@1@@Z @ 0x18001EA90 (-UnboostPriority@CSingleViewShellExperience@@AEAAXW4PriorityBoostReason@1@@Z.c)
 *     ??$AsStrong@UIInspectable@@@ExperienceManagerUtils@@YA?AV?$ComPtr@UIInspectable@@@WRL@Microsoft@@AEAVWeakRef@23@@Z @ 0x18001F144 (--$AsStrong@UIInspectable@@@ExperienceManagerUtils@@YA-AV-$ComPtr@UIInspectable@@@WRL@Microsoft@.c)
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ImmersiveWindowMessageHandler<_lambda_1e4f247a89265aed21ef611c1eede965_>::OnMessage(
        __int64 a1,
        int a2,
        __int64 a3)
{
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v5 = a1 + 16;
  ExperienceManagerUtils::AsStrong<IInspectable>(&v8, a1 + 16);
  v6 = v8;
  if ( v8 && !a2 && a3 == *(_QWORD *)(v5 + 8) )
  {
    CSingleViewShellExperience::UnboostPriority(*(_QWORD *)(v5 + 8), 0);
    v6 = v8;
  }
  if ( v6 )
  {
    v8 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return 0LL;
}
