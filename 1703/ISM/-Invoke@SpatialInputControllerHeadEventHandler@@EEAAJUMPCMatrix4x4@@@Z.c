/*
 * XREFs of ?Invoke@SpatialInputControllerHeadEventHandler@@EEAAJUMPCMatrix4x4@@@Z @ 0x180077A90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SpatialInputControllerHeadEventHandler::Invoke(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 72) )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 12));
    if ( (*(int (__fastcall **)(_QWORD, __int64 (__fastcall *)(), __int64, __int64))(**(_QWORD **)(a1 + 72) + 128LL))(
           *(_QWORD *)(a1 + 72),
           lambda_dceba153a74a3d91faf07554a4f58ea5_::_lambda_invoker_cdecl_,
           a1,
           3LL) < 0
      && _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 12), 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return 0LL;
}
