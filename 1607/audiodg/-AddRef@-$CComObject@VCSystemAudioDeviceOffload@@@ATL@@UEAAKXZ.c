/*
 * XREFs of ?AddRef@?$CComObject@VCSystemAudioDeviceOffload@@@ATL@@UEAAKXZ @ 0x14002BD40
 * Callers:
 *     ?AddRef@?$CComObject@VCSystemAudioDeviceOffload@@@ATL@@W7EAAKXZ @ 0x140019B10 (-AddRef@-$CComObject@VCSystemAudioDeviceOffload@@@ATL@@W7EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSystemAudioDeviceOffload@@@ATL@@WBA@EAAKXZ @ 0x140019B20 (-AddRef@-$CComObject@VCSystemAudioDeviceOffload@@@ATL@@WBA@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSystemAudioDeviceOffload@@@ATL@@WBBA@EAAKXZ @ 0x140019B30 (-AddRef@-$CComObject@VCSystemAudioDeviceOffload@@@ATL@@WBBA@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSystemAudioDeviceOffload@@@ATL@@WBBI@EAAKXZ @ 0x140019B40 (-AddRef@-$CComObject@VCSystemAudioDeviceOffload@@@ATL@@WBBI@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSystemAudioDeviceOffload@@@ATL@@WBCA@EAAKXZ @ 0x140019B50 (-AddRef@-$CComObject@VCSystemAudioDeviceOffload@@@ATL@@WBCA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComObject<CSystemAudioDeviceOffload>::AddRef(__int64 a1, volatile int *a2)
{
  return Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(a1 + 296), a2);
}
