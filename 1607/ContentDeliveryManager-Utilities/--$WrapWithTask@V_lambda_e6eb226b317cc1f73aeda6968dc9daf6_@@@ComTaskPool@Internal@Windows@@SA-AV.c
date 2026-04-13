/*
 * XREFs of ??$WrapWithTask@V_lambda_e6eb226b317cc1f73aeda6968dc9daf6_@@@ComTaskPool@Internal@Windows@@SA?AV?$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@$$QEAV_lambda_e6eb226b317cc1f73aeda6968dc9daf6_@@@Z @ 0x1800390CC
 * Callers:
 *     _lambda_65e132131f351cb9064538b793e0e588_::operator() @ 0x180034CF4 (_lambda_65e132131f351cb9064538b793e0e588_--operator().c)
 * Callees:
 *     ??$Make@V?$CTaskWrapper@V_lambda_e6eb226b317cc1f73aeda6968dc9daf6_@@@ComTaskPool@Internal@Windows@@V_lambda_e6eb226b317cc1f73aeda6968dc9daf6_@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@V?$CTaskWrapper@V_lambda_e6eb226b317cc1f73aeda6968dc9daf6_@@@ComTaskPool@Internal@Windows@@@12@$$QEAV_lambda_e6eb226b317cc1f73aeda6968dc9daf6_@@@Z @ 0x180039D58 (--$Make@V-$CTaskWrapper@V_lambda_e6eb226b317cc1f73aeda6968dc9daf6_@@@ComTaskPool@Internal@Window.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::WrapWithTask<_lambda_e6eb226b317cc1f73aeda6968dc9daf6_>(_QWORD *a1)
{
  __int64 *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = (__int64 *)Microsoft::WRL::Details::Make<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_e6eb226b317cc1f73aeda6968dc9daf6_>,_lambda_e6eb226b317cc1f73aeda6968dc9daf6_>(&v6);
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
