/*
 * XREFs of ??$WrapWithTask@V_lambda_5d878536394a9e5d6c15e6b3f5940618_@@@ComTaskPool@Internal@Windows@@SA?AV?$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@$$QEAV_lambda_5d878536394a9e5d6c15e6b3f5940618_@@@Z @ 0x18002A514
 * Callers:
 *     ?ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundation@Windows@@W4ActivateApplicationForExperienceOptions@@PEAK@Z @ 0x180029488 (-ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundati.c)
 * Callees:
 *     ??$Make@V?$CTaskWrapper@V_lambda_5d878536394a9e5d6c15e6b3f5940618_@@@ComTaskPool@Internal@Windows@@V_lambda_5d878536394a9e5d6c15e6b3f5940618_@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@V?$CTaskWrapper@V_lambda_5d878536394a9e5d6c15e6b3f5940618_@@@ComTaskPool@Internal@Windows@@@12@$$QEAV_lambda_5d878536394a9e5d6c15e6b3f5940618_@@@Z @ 0x18002A674 (--$Make@V-$CTaskWrapper@V_lambda_5d878536394a9e5d6c15e6b3f5940618_@@@ComTaskPool@Internal@Window.c)
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::WrapWithTask<_lambda_5d878536394a9e5d6c15e6b3f5940618_>(_QWORD *a1)
{
  __int64 *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = (__int64 *)Microsoft::WRL::Details::Make<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_5d878536394a9e5d6c15e6b3f5940618_>,_lambda_5d878536394a9e5d6c15e6b3f5940618_>(&v6);
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
