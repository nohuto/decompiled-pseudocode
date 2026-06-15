/*
 * XREFs of ??1?$MakeAllocator@VCEndpointCharacteristics@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18003428C
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CEndpointCharacteristics_CEndpointCharacteristics_unsigned_short_const_____ptr64_&___ptr64_int_&___ptr64__::_1_::dtor$1 @ 0x18003C78C (_Microsoft--WRL--Details--MakeAndInitialize_CEndpointCharacteristics_CEndpointChara_ea_18003C78C.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Details::MakeAllocator<CEndpointCharacteristics>::~MakeAllocator<CEndpointCharacteristics>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1);
}
