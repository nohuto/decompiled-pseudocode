/*
 * XREFs of ?AddRef@?$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@UEAAKXZ @ 0x14002B0E0
 * Callers:
 *     ?AddRef@?$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@W7EAAKXZ @ 0x140019DD0 (-AddRef@-$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@W7EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@WBA@EAAKXZ @ 0x140019DE0 (-AddRef@-$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComObject<CSystemAudioDeviceExclusive>::AddRef(__int64 a1)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 272));
}
