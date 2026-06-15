/*
 * XREFs of ?AddRef@?$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAAKXZ @ 0x140008F80
 * Callers:
 *     ?AtlInternalQueryInterface@ATL@@YAJPEAXPEBU_ATL_INTMAP_ENTRY@1@AEBU_GUID@@PEAPEAX@Z @ 0x1400081F0 (-AtlInternalQueryInterface@ATL@@YAJPEAXPEBU_ATL_INTMAP_ENTRY@1@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x14000AB80 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?AddRef@?$CComObject@VCSystemAudioDeviceShared@@@ATL@@W7EAAKXZ @ 0x140019F00 (-AddRef@-$CComObject@VCSystemAudioDeviceShared@@@ATL@@W7EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSystemAudioDeviceShared@@@ATL@@WBA@EAAKXZ @ 0x140019F10 (-AddRef@-$CComObject@VCSystemAudioDeviceShared@@@ATL@@WBA@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSystemAudioDeviceShared@@@ATL@@WBBA@EAAKXZ @ 0x140019F20 (-AddRef@-$CComObject@VCSystemAudioDeviceShared@@@ATL@@WBBA@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSystemAudioDeviceShared@@@ATL@@WBBI@EAAKXZ @ 0x140019F30 (-AddRef@-$CComObject@VCSystemAudioDeviceShared@@@ATL@@WBBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComObject<CSystemAudioDeviceShared>::AddRef(__int64 a1)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 344));
}
