/*
 * XREFs of ??$WrapWithTask@V_lambda_dc01672e06462544fa819f216f90b0f3_@@@ComTaskPool@Internal@Windows@@SA?AV?$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@$$QEAV_lambda_dc01672e06462544fa819f216f90b0f3_@@@Z @ 0x1800156B4
 * Callers:
 *     ?OnDpiOrHighContrastChanged@CActionCenterExperienceManager@@AEAAJXZ @ 0x180011574 (-OnDpiOrHighContrastChanged@CActionCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ??$Make@V?$CTaskWrapper@V_lambda_dc01672e06462544fa819f216f90b0f3_@@@ComTaskPool@Internal@Windows@@V_lambda_dc01672e06462544fa819f216f90b0f3_@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@V?$CTaskWrapper@V_lambda_dc01672e06462544fa819f216f90b0f3_@@@ComTaskPool@Internal@Windows@@@12@$$QEAV_lambda_dc01672e06462544fa819f216f90b0f3_@@@Z @ 0x180015960 (--$Make@V-$CTaskWrapper@V_lambda_dc01672e06462544fa819f216f90b0f3_@@@ComTaskPool@Internal@Window.c)
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::WrapWithTask<_lambda_dc01672e06462544fa819f216f90b0f3_>(_QWORD *a1)
{
  __int64 *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = (__int64 *)Microsoft::WRL::Details::Make<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_dc01672e06462544fa819f216f90b0f3_>,_lambda_dc01672e06462544fa819f216f90b0f3_>(&v6);
  v3 = *v2;
  *v2 = 0LL;
  v4 = v6;
  *a1 = v3;
  if ( v4 )
  {
    v6 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return a1;
}
