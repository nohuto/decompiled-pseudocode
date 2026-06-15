/*
 * XREFs of ??1?$MakeAllocator@VCExclusiveStreamGroupProxy@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180051110
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CSharedStreamGroupProxy_IStreamGroupProxy_StreamGroupParams_____ptr64_&___ptr64_ATL::CComHeapPtr_STREAM_GROUP_DESCRIPTOR__&___ptr64_unsigned_long_&___ptr64__::_1_::dtor$1 @ 0x18003B50E (_Microsoft--WRL--Details--MakeAndInitialize_CSharedStreamGroupProxy_IStreamGroupPro_ea_18003B50E.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CSaDeviceProxy_ISaDeviceProxy_SaDeviceParams_____ptr64_&___ptr64_CEndpointCharacteristics_____ptr64_&___ptr64_enum__AUDCLNT_SHAREMODE_&___ptr64_unsigned_long_&___ptr64_SaDeviceResourceParams_____ptr64__::_1_::dtor$1 @ 0x18003B586 (_Microsoft--WRL--Details--MakeAndInitialize_CSaDeviceProxy_ISaDeviceProxy_SaDeviceP_ea_18003B586.c)
 *     ??$MakeAndInitialize@VCExclusiveStreamGroupProxy@@UIStreamGroupProxy@@AEAPEAUStreamGroupParams@@AEAV?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@AEAK@Details@WRL@Microsoft@@YAJPEAPEAUIStreamGroupProxy@@AEAPEAUStreamGroupParams@@AEAV?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@AEAK@Z @ 0x180074574 (--$MakeAndInitialize@VCExclusiveStreamGroupProxy@@UIStreamGroupProxy@@AEAPEAUStreamGroupParams@@.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CExclusiveStreamGroupProxy_IStreamGroupProxy_StreamGroupParams_____ptr64_&___ptr64_ATL::CComHeapPtr_STREAM_GROUP_DESCRIPTOR__&___ptr64_unsigned_long_&___ptr64__::_1_::dtor$1 @ 0x1800746B4 (_Microsoft--WRL--Details--MakeAndInitialize_CExclusiveStreamGroupProxy_IStreamGroup_ea_1800746B4.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180036490 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall Microsoft::WRL::Details::MakeAllocator<CExclusiveStreamGroupProxy>::~MakeAllocator<CExclusiveStreamGroupProxy>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1, 0LL);
}
