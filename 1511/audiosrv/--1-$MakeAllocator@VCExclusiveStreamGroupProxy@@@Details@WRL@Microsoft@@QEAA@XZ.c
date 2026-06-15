/*
 * XREFs of ??1?$MakeAllocator@VCExclusiveStreamGroupProxy@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800668C0
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CSaDeviceProxy_ISaDeviceProxy_SaDeviceParams_____ptr64_&___ptr64_CEndpointCharacteristics_____ptr64_&___ptr64_enum__AUDCLNT_SHAREMODE_&___ptr64_unsigned_long_&___ptr64_SaDeviceResourceParams_____ptr64__::_1_::dtor$1 @ 0x18004975C (_Microsoft--WRL--Details--MakeAndInitialize_CSaDeviceProxy_ISaDeviceProxy_SaDeviceP_ea_18004975C.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CSharedStreamGroupProxy_IStreamGroupProxy_StreamGroupParams_____ptr64_&___ptr64_ATL::CComHeapPtr_STREAM_GROUP_DESCRIPTOR__&___ptr64_unsigned_long_&___ptr64__::_1_::dtor$1 @ 0x180049E4C (_Microsoft--WRL--Details--MakeAndInitialize_CSharedStreamGroupProxy_IStreamGroupPro_ea_180049E4C.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CExclusiveStreamGroupProxy_IStreamGroupProxy_StreamGroupParams_____ptr64_&___ptr64_ATL::CComHeapPtr_STREAM_GROUP_DESCRIPTOR__&___ptr64_unsigned_long_&___ptr64__::_1_::dtor$1 @ 0x18008B4B8 (_Microsoft--WRL--Details--MakeAndInitialize_CExclusiveStreamGroupProxy_IStreamGroup_ea_18008B4B8.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 */

void __fastcall Microsoft::WRL::Details::MakeAllocator<CExclusiveStreamGroupProxy>::~MakeAllocator<CExclusiveStreamGroupProxy>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1);
}
