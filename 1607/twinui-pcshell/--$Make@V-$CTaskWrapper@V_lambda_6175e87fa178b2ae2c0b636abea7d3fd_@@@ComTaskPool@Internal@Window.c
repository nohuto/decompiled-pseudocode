/*
 * XREFs of ??$Make@V?$CTaskWrapper@V_lambda_6175e87fa178b2ae2c0b636abea7d3fd_@@@ComTaskPool@Internal@Windows@@V_lambda_6175e87fa178b2ae2c0b636abea7d3fd_@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@V?$CTaskWrapper@V_lambda_6175e87fa178b2ae2c0b636abea7d3fd_@@@ComTaskPool@Internal@Windows@@@12@$$QEAV_lambda_6175e87fa178b2ae2c0b636abea7d3fd_@@@Z @ 0x180020F18
 * Callers:
 *     ??$WrapWithTask@V_lambda_6175e87fa178b2ae2c0b636abea7d3fd_@@@ComTaskPool@Internal@Windows@@SA?AV?$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@$$QEAV_lambda_6175e87fa178b2ae2c0b636abea7d3fd_@@@Z @ 0x180020AA4 (--$WrapWithTask@V_lambda_6175e87fa178b2ae2c0b636abea7d3fd_@@@ComTaskPool@Internal@Windows@@SA-AV.c)
 * Callees:
 *     ??$?0V_lambda_6175e87fa178b2ae2c0b636abea7d3fd_@@@?$CTaskWrapper@V_lambda_6175e87fa178b2ae2c0b636abea7d3fd_@@@ComTaskPool@Internal@Windows@@QEAA@$$QEAV_lambda_6175e87fa178b2ae2c0b636abea7d3fd_@@@Z @ 0x180020F7C (--$-0V_lambda_6175e87fa178b2ae2c0b636abea7d3fd_@@@-$CTaskWrapper@V_lambda_6175e87fa178b2ae2c0b63.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002E6E0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall Microsoft::WRL::Details::Make<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_6175e87fa178b2ae2c0b636abea7d3fd_>,_lambda_6175e87fa178b2ae2c0b636abea7d3fd_>(
        __int64 *a1,
        __int64 a2)
{
  void *v4; // rax
  __int64 v5; // rdi

  *a1 = 0LL;
  v4 = operator new(0x168uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v5 = Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_6175e87fa178b2ae2c0b636abea7d3fd_>::CTaskWrapper<_lambda_6175e87fa178b2ae2c0b636abea7d3fd_>(
           v4,
           a2);
    if ( *a1 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v5;
  }
  return a1;
}
