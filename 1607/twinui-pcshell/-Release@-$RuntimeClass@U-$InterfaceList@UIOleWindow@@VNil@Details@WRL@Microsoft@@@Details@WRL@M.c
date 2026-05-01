/*
 * XREFs of ?Release@?$RuntimeClass@U?$InterfaceList@UIOleWindow@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180007F40
 * Callers:
 *     ?RegisterSessionIdleDetector@CSingleViewShellExperience@@AEAAJPEAK@Z @ 0x18001BEE0 (-RegisterSessionIdleDetector@CSingleViewShellExperience@@AEAAJPEAK@Z.c)
 *     ??1?$ComPtr@V?$SessionIdleCallback@V_lambda_d51462a882575f844d514d7510b2bd27_@@@@@WRL@Microsoft@@QEAA@XZ @ 0x18001EED0 (--1-$ComPtr@V-$SessionIdleCallback@V_lambda_d51462a882575f844d514d7510b2bd27_@@@@@WRL@Microsoft@.c)
 *     ??$Make@V?$SessionIdleCallback@V_lambda_d51462a882575f844d514d7510b2bd27_@@@@AEAV_lambda_d51462a882575f844d514d7510b2bd27_@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@V?$SessionIdleCallback@V_lambda_d51462a882575f844d514d7510b2bd27_@@@@@12@AEAV_lambda_d51462a882575f844d514d7510b2bd27_@@@Z @ 0x1800208B4 (--$Make@V-$SessionIdleCallback@V_lambda_d51462a882575f844d514d7510b2bd27_@@@@AEAV_lambda_d51462a.c)
 *     ??1CExperienceManagerAnimationHelper@@QEAA@XZ @ 0x180026F78 (--1CExperienceManagerAnimationHelper@@QEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IOleWindow,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(
        volatile signed __int32 *a1)
{
  signed __int32 i; // r8d
  unsigned __int32 v2; // ebx

  for ( i = *((_DWORD *)a1 + 3);
        i != 0x7FFFFFFF && i != _InterlockedCompareExchange(a1 + 3, i - 1, i);
        i = *((_DWORD *)a1 + 3) )
  {
    ;
  }
  v2 = i - 1;
  if ( i == 1 )
  {
    if ( a1 )
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)a1 + 40LL))(a1, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      _InterlockedDecrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
  }
  return v2;
}
