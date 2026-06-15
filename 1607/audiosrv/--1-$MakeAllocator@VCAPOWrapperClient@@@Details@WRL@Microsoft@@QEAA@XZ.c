/*
 * XREFs of ??1?$MakeAllocator@VCAPOWrapperClient@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180050900
 * Callers:
 *     _CAudioStream::_CAudioStream_::_1_::dtor$2 @ 0x18003AAF0 (_CAudioStream--_CAudioStream_--_1_--dtor$2.c)
 *     _CAudioStream::_CAudioStream_::_1_::dtor$3 @ 0x18003AB00 (_CAudioStream--_CAudioStream_--_1_--dtor$3.c)
 *     _CAudioStream::CAudioStream_::_1_::dtor$2 @ 0x18003AC10 (_CAudioStream--CAudioStream_--_1_--dtor$2.c)
 *     _CAudioStream::CAudioStream_::_1_::dtor$3 @ 0x18003AC20 (_CAudioStream--CAudioStream_--_1_--dtor$3.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CAPOWrapperClient_IAudioProcessingObject_unsigned_short_const_____ptr64_&___ptr64_enum_APO_TYPE_&___ptr64__GUID_const_&___ptr64__::_1_::dtor$1 @ 0x18003AFAC (_Microsoft--WRL--Details--MakeAndInitialize_CAPOWrapperClient_IAudioProcessingObjec_ea_18003AFAC.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180027E90 (--3@YAXPEAX@Z.c)
 */

void __fastcall Microsoft::WRL::Details::MakeAllocator<CAPOWrapperClient>::~MakeAllocator<CAPOWrapperClient>(void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1);
}
