/*
 * XREFs of ?AddRef@?$CComObject@VCSystemAudioDeviceSharedNew@@@ATL@@UEAAKXZ @ 0x140013B10
 * Callers:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1400042F0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?AtlInternalQueryInterface@ATL@@YAJPEAXPEBU_ATL_INTMAP_ENTRY@1@AEBU_GUID@@PEAPEAX@Z @ 0x1400135C0 (-AtlInternalQueryInterface@ATL@@YAJPEAXPEBU_ATL_INTMAP_ENTRY@1@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?AddRef@?$CComObject@VCSystemAudioDeviceSharedNew@@@ATL@@W7EAAKXZ @ 0x14001A0D0 (-AddRef@-$CComObject@VCSystemAudioDeviceSharedNew@@@ATL@@W7EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSystemAudioDeviceSharedNew@@@ATL@@WBA@EAAKXZ @ 0x14001A0E0 (-AddRef@-$CComObject@VCSystemAudioDeviceSharedNew@@@ATL@@WBA@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSystemAudioDeviceSharedNew@@@ATL@@WBBA@EAAKXZ @ 0x14001A0F0 (-AddRef@-$CComObject@VCSystemAudioDeviceSharedNew@@@ATL@@WBBA@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSystemAudioDeviceSharedNew@@@ATL@@WBBI@EAAKXZ @ 0x14001A100 (-AddRef@-$CComObject@VCSystemAudioDeviceSharedNew@@@ATL@@WBBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall ATL::CComObject<CSystemAudioDeviceSharedNew>::AddRef(__int64 a1, volatile int *a2)
{
  return Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(a1 + 288), a2);
}
