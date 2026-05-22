/*
 * XREFs of Microsoft::WRL::Callback_SpatialInteractionDevices::IHapticsTimerCallback__lambda_77dca828cc74180f62f751716ffcfc7f___ @ 0x18009B5B8
 * Callers:
 *     ?SetHapticsFeedback@SpatialInteractionController@SpatialInteractionDevices@@QEAAJGEG@Z @ 0x18009AD5C (-SetHapticsFeedback@SpatialInteractionController@SpatialInteractionDevices@@QEAAJGEG@Z.c)
 * Callees:
 *     Microsoft::WRL::Details::Make_Microsoft::WRL::Details::InvokeHelper_SpatialInteractionDevices::IHapticsTimerCallback__lambda_77dca828cc74180f62f751716ffcfc7f__1_1___lambda_77dca828cc74180f62f751716ffcfc7f___ @ 0x18009BA50 (Microsoft--WRL--Details--Make_Microsoft--WRL--Details--InvokeHelper_SpatialInteractionDevices--I.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL::Callback_SpatialInteractionDevices::IHapticsTimerCallback__lambda_77dca828cc74180f62f751716ffcfc7f___(
        _QWORD *a1)
{
  __int64 *v2; // rax
  __int64 v3; // rdx
  volatile signed __int32 *v4; // rcx
  volatile signed __int32 *v6; // [rsp+40h] [rbp+18h] BYREF

  v2 = (__int64 *)Microsoft::WRL::Details::Make_Microsoft::WRL::Details::InvokeHelper_SpatialInteractionDevices::IHapticsTimerCallback__lambda_77dca828cc74180f62f751716ffcfc7f__1_1___lambda_77dca828cc74180f62f751716ffcfc7f___(&v6);
  v3 = *v2;
  *v2 = 0LL;
  v4 = v6;
  *a1 = v3;
  if ( v4 )
  {
    v6 = 0LL;
    if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v4 + 32LL))(v4, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return a1;
}
