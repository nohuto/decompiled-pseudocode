/*
 * XREFs of ?AddRef@?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@UEAAKXZ @ 0x14002D340
 * Callers:
 *     ?AddRef@?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@W7EAAKXZ @ 0x140019D10 (-AddRef@-$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@W7EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBA@EAAKXZ @ 0x140019D20 (-AddRef@-$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBA@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBBA@EAAKXZ @ 0x140019D30 (-AddRef@-$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBBA@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBBI@EAAKXZ @ 0x140019D40 (-AddRef@-$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBBI@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBFI@EAAKXZ @ 0x140019D50 (-AddRef@-$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBFI@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBGA@EAAKXZ @ 0x140019D60 (-AddRef@-$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBGA@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBGI@EAAKXZ @ 0x140019D70 (-AddRef@-$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBGI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComObject<CSystemAudioDeviceOffloadGraph>::AddRef(__int64 a1, volatile int *a2)
{
  return Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(a1 + 368), a2);
}
