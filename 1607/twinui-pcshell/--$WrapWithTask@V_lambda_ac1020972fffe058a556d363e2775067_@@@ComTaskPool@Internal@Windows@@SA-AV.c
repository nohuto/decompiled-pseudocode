/*
 * XREFs of ??$WrapWithTask@V_lambda_ac1020972fffe058a556d363e2775067_@@@ComTaskPool@Internal@Windows@@SA?AV?$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@$$QEAV_lambda_ac1020972fffe058a556d363e2775067_@@@Z @ 0x180015700
 * Callers:
 *     ?OnViewDestroyed@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800128C0 (-OnViewDestroyed@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ??$Make@V?$CTaskWrapper@V_lambda_ac1020972fffe058a556d363e2775067_@@@ComTaskPool@Internal@Windows@@V_lambda_ac1020972fffe058a556d363e2775067_@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@V?$CTaskWrapper@V_lambda_ac1020972fffe058a556d363e2775067_@@@ComTaskPool@Internal@Windows@@@12@$$QEAV_lambda_ac1020972fffe058a556d363e2775067_@@@Z @ 0x180015A00 (--$Make@V-$CTaskWrapper@V_lambda_ac1020972fffe058a556d363e2775067_@@@ComTaskPool@Internal@Window.c)
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::WrapWithTask<_lambda_ac1020972fffe058a556d363e2775067_>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  v3 = (__int64 *)Microsoft::WRL::Details::Make<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_ac1020972fffe058a556d363e2775067_>,_lambda_ac1020972fffe058a556d363e2775067_>(&v7);
  v4 = *v3;
  *v3 = 0LL;
  v5 = v7;
  *a1 = v4;
  if ( v5 )
  {
    v7 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return a1;
}
