/*
 * XREFs of _std::_Uninit_fill_n_Microsoft::WRL::WeakRef_____ptr64_unsigned___int64_Microsoft::WRL::WeakRef_std::allocator_Microsoft::WRL::WeakRef__Microsoft::WRL::WeakRef__::_1_::catch$0 @ 0x1800479B3
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWeakReference@@@WRL@Microsoft@@IEAAKXZ @ 0x18002B164 (-InternalRelease@-$ComPtr@UIWeakReference@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _CxxThrowException_0 @ 0x180043A40 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::_Uninit_fill_n_Microsoft::WRL::WeakRef_____ptr64_unsigned___int64_Microsoft::WRL::WeakRef_std::allocator_Microsoft::WRL::WeakRef__Microsoft::WRL::WeakRef__::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  Microsoft::WRL::Details::WeakReferenceImpl **i; // rbx

  for ( i = *(Microsoft::WRL::Details::WeakReferenceImpl ***)(a2 + 104);
        i != *(Microsoft::WRL::Details::WeakReferenceImpl ***)(a2 + 80);
        ++i )
  {
    Microsoft::WRL::ComPtr<IWeakReference>::InternalRelease(i, (volatile int *)a2);
  }
  throw;
}
