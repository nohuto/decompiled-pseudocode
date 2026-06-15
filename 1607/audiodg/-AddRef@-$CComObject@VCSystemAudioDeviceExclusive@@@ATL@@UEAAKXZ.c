/*
 * XREFs of ?AddRef@?$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@UEAAKXZ @ 0x140029CD0
 * Callers:
 *     ?AddRef@?$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@W7EAAKXZ @ 0x140019850 (-AddRef@-$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@W7EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@WBA@EAAKXZ @ 0x140019860 (-AddRef@-$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComObject<CSystemAudioDeviceExclusive>::AddRef(__int64 a1, volatile int *a2)
{
  return Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(a1 + 272), a2);
}
