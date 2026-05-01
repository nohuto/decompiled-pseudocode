/*
 * XREFs of ??$MakeSessionIdleCallback@V_lambda_d51462a882575f844d514d7510b2bd27_@@@@YA?AV?$ComPtr@V?$SessionIdleCallback@V_lambda_d51462a882575f844d514d7510b2bd27_@@@@@WRL@Microsoft@@V_lambda_d51462a882575f844d514d7510b2bd27_@@@Z @ 0x18001F1E8
 * Callers:
 *     ?RegisterSessionIdleDetector@CSingleViewShellExperience@@AEAAJPEAK@Z @ 0x18001BEE0 (-RegisterSessionIdleDetector@CSingleViewShellExperience@@AEAAJPEAK@Z.c)
 * Callees:
 *     ??$Make@V?$SessionIdleCallback@V_lambda_d51462a882575f844d514d7510b2bd27_@@@@AEAV_lambda_d51462a882575f844d514d7510b2bd27_@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@V?$SessionIdleCallback@V_lambda_d51462a882575f844d514d7510b2bd27_@@@@@12@AEAV_lambda_d51462a882575f844d514d7510b2bd27_@@@Z @ 0x1800208B4 (--$Make@V-$SessionIdleCallback@V_lambda_d51462a882575f844d514d7510b2bd27_@@@@AEAV_lambda_d51462a.c)
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MakeSessionIdleCallback<_lambda_d51462a882575f844d514d7510b2bd27_>(__int64 a1, __int64 *a2)
{
  __int64 v4; // rcx

  Microsoft::WRL::Details::Make<SessionIdleCallback<_lambda_d51462a882575f844d514d7510b2bd27_>,_lambda_d51462a882575f844d514d7510b2bd27_ &>();
  v4 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return a1;
}
