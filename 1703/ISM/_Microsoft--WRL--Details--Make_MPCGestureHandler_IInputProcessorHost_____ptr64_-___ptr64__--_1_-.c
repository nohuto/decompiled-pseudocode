/*
 * XREFs of _Microsoft::WRL::Details::Make_MPCGestureHandler_IInputProcessorHost_____ptr64_&___ptr64__::_1_::dtor$0 @ 0x1800A0D4E
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UIHidGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180004960 (--1-$ComPtr@UIHidGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@QE.c)
 */

void __fastcall Microsoft::WRL::Details::Make_MPCGestureHandler_IInputProcessorHost_____ptr64_____ptr64__::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IHidGameControllerProviderPrivate>::~ComPtr<Windows::Gaming::Input::Internal::IHidGameControllerProviderPrivate>(*(__int64 **)(a2 + 80));
  }
}
