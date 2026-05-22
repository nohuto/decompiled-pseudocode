/*
 * XREFs of _lambda_dceba153a74a3d91faf07554a4f58ea5_::_lambda_invoker_cdecl_ @ 0x180077B10
 * Callers:
 *     <none>
 * Callees:
 *     ?SendTrackedNodesUpdates@SpatialInputControllerCollection@@QEAAXXZ @ 0x1800794EC (-SendTrackedNodesUpdates@SpatialInputControllerCollection@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_dceba153a74a3d91faf07554a4f58ea5_::_lambda_invoker_cdecl_(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  SpatialInputControllerCollection *v3; // rcx

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  v3 = *(SpatialInputControllerCollection **)(a1 + 24);
  if ( v3 )
    SpatialInputControllerCollection::SendTrackedNodesUpdates(v3);
  if ( v2 )
    LeaveCriticalSection(v2);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 12), 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return 0LL;
}
