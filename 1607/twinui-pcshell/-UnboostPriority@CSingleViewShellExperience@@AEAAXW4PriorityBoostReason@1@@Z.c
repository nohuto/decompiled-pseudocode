/*
 * XREFs of ?UnboostPriority@CSingleViewShellExperience@@AEAAXW4PriorityBoostReason@1@@Z @ 0x18001EA90
 * Callers:
 *     ?Launch@CSingleViewShellExperience@@QEAAJXZ @ 0x18001C3C4 (-Launch@CSingleViewShellExperience@@QEAAJXZ.c)
 *     ?LaunchCompleted@CSingleViewShellExperience@@QEAAXXZ @ 0x18001C6F8 (-LaunchCompleted@CSingleViewShellExperience@@QEAAXXZ.c)
 *     ?OnViewDestroyedBase@CSingleViewShellExperience@@AEAAJXZ @ 0x18001D074 (-OnViewDestroyedBase@CSingleViewShellExperience@@AEAAJXZ.c)
 *     ?Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z @ 0x18001E63C (-Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z.c)
 *     ??1?$ScopeExitFn@V_lambda_a7f15287e5878abd1220aaf01e051b7a_@@@details@wil@@QEAA@XZ @ 0x18001ECC0 (--1-$ScopeExitFn@V_lambda_a7f15287e5878abd1220aaf01e051b7a_@@@details@wil@@QEAA@XZ.c)
 *     ?OnMessage@?$ImmersiveWindowMessageHandler@V_lambda_1e4f247a89265aed21ef611c1eede965_@@@@UEAAJI_K_J@Z @ 0x18001EDC0 (-OnMessage@-$ImmersiveWindowMessageHandler@V_lambda_1e4f247a89265aed21ef611c1eede965_@@@@UEAAJI_.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000C888 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x180018678 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?UnboostDiskIo@CSingleViewShellExperience@@AEAAXXZ @ 0x18001EBE0 (-UnboostDiskIo@CSingleViewShellExperience@@AEAAXXZ.c)
 *     ??$OnPriorityUnboostRequested@PEBGPEBGAEAW4PriorityBoostReason@CSingleViewShellExperience@@AEA_NAEAIAEA_N@SingleViewExperienceTelemetry@@SAX$$QEAPEBG0AEAW4PriorityBoostReason@CSingleViewShellExperience@@AEA_NAEAI2@Z @ 0x180020444 (--$OnPriorityUnboostRequested@PEBGPEBGAEAW4PriorityBoostReason@CSingleViewShellExperience@@AEA_N.c)
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSingleViewShellExperience::UnboostPriority(__int64 a1, int a2)
{
  int v3; // eax
  int v4; // edi
  int v5; // eax
  int v6; // eax
  int v7; // edi
  PCWSTR StringRawBuffer; // rax
  HSTRING v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  PCWSTR v12; // [rsp+40h] [rbp+8h] BYREF
  int v13; // [rsp+48h] [rbp+10h] BYREF
  PCWSTR v14; // [rsp+50h] [rbp+18h] BYREF

  v13 = a2;
  if ( a2 )
  {
    if ( a2 == 1 && *(_BYTE *)(a1 + 164) )
    {
      v3 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 88) + 128LL))(*(_QWORD *)(a1 + 88), a1);
      v4 = v3;
      if ( v3 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x4EC,
          (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
          (const char *)(unsigned int)v3);
      *(_BYTE *)(a1 + 164) = v4 < 0;
    }
  }
  else
  {
    v5 = *(_DWORD *)(a1 + 168);
    if ( v5 )
      *(_DWORD *)(a1 + 168) = v5 - 1;
    if ( !*(_DWORD *)(a1 + 168) )
    {
      wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
        (struct _TP_TIMER **)(a1 + 176),
        0LL);
      if ( *(_BYTE *)(a1 + 172) )
      {
        v6 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 88) + 128LL))(*(_QWORD *)(a1 + 88), a1);
        v7 = v6;
        if ( v6 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x4E3,
            (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
            (const char *)(unsigned int)v6);
        *(_BYTE *)(a1 + 172) = v7 < 0;
        CSingleViewShellExperience::UnboostDiskIo((CSingleViewShellExperience *)a1);
      }
    }
  }
  StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(a1 + 16), 0LL);
  v9 = *(HSTRING *)(a1 + 8);
  v12 = StringRawBuffer;
  v14 = WindowsGetStringRawBuffer(v9, 0LL);
  return SingleViewExperienceTelemetry::OnPriorityUnboostRequested<unsigned short const *,unsigned short const *,enum CSingleViewShellExperience::PriorityBoostReason &,bool &,unsigned int &,bool &>(
           (unsigned int)&v14,
           (unsigned int)&v12,
           (unsigned int)&v13,
           (int)a1 + 172,
           a1 + 168,
           a1 + 164);
}
