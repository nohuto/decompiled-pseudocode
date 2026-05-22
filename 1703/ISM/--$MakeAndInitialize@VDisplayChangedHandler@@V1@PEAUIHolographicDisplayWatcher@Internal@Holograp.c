/*
 * XREFs of ??$MakeAndInitialize@VDisplayChangedHandler@@V1@PEAUIHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@QEAVSpatialInputControllerCollection@@_N@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VDisplayChangedHandler@@@WRL@Microsoft@@@012@$$QEAPEAUIHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@$$QEBQEAVSpatialInputControllerCollection@@$$QEA_N@Z @ 0x18007B1E4
 * Callers:
 *     ?EnsureDisplayWatcher@SpatialInputControllerCollection@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@@Z @ 0x180079690 (-EnsureDisplayWatcher@SpatialInputControllerCollection@@AEAAJAEBVSyncLockCriticalSection@Details.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<DisplayChangedHandler,DisplayChangedHandler,Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher *,SpatialInputControllerCollection * const,bool>(
        volatile signed __int32 **a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  volatile signed __int32 *v6; // rcx

  v6 = *a1;
  if ( v6 )
  {
    *a1 = 0LL;
    if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v6 + 32LL))(v6, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return Microsoft::WRL::Details::MakeAndInitialize<DisplayChangedHandler,DisplayChangedHandler,Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher *,SpatialInputControllerCollection * const,bool>(
           a1,
           a2,
           a3,
           a4);
}
