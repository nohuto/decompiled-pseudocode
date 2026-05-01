/*
 * XREFs of ??$MakeImmersiveWindowMessageHandler@V_lambda_1e4f247a89265aed21ef611c1eede965_@@@@YA?AV?$ComPtr@V?$ImmersiveWindowMessageHandler@V_lambda_1e4f247a89265aed21ef611c1eede965_@@@@@WRL@Microsoft@@V_lambda_1e4f247a89265aed21ef611c1eede965_@@@Z @ 0x18001F2C0
 * Callers:
 *     ?RegisterForImmersiveWindowMessages@CSingleViewShellExperience@@AEAAJPEAK@Z @ 0x18001C138 (-RegisterForImmersiveWindowMessages@CSingleViewShellExperience@@AEAAJPEAK@Z.c)
 * Callees:
 *     ??$Make@V?$ImmersiveWindowMessageHandler@V_lambda_1e4f247a89265aed21ef611c1eede965_@@@@AEAV_lambda_1e4f247a89265aed21ef611c1eede965_@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@V?$ImmersiveWindowMessageHandler@V_lambda_1e4f247a89265aed21ef611c1eede965_@@@@@12@AEAV_lambda_1e4f247a89265aed21ef611c1eede965_@@@Z @ 0x1800209AC (--$Make@V-$ImmersiveWindowMessageHandler@V_lambda_1e4f247a89265aed21ef611c1eede965_@@@@AEAV_lamb.c)
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MakeImmersiveWindowMessageHandler<_lambda_1e4f247a89265aed21ef611c1eede965_>(
        __int64 a1,
        __int64 *a2)
{
  __int64 v4; // rcx

  Microsoft::WRL::Details::Make<ImmersiveWindowMessageHandler<_lambda_1e4f247a89265aed21ef611c1eede965_>,_lambda_1e4f247a89265aed21ef611c1eede965_ &>();
  v4 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return a1;
}
