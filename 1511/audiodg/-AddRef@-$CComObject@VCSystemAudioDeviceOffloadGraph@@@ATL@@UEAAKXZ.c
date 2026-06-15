/*
 * XREFs of ?AddRef@?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@UEAAKXZ @ 0x14002EAA0
 * Callers:
 *     ?AddRef@?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@W7EAAKXZ @ 0x14001A290 (-AddRef@-$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@W7EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBA@EAAKXZ @ 0x14001A2A0 (-AddRef@-$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBA@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBBA@EAAKXZ @ 0x14001A2B0 (-AddRef@-$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBBA@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBBI@EAAKXZ @ 0x14001A2C0 (-AddRef@-$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBBI@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBFI@EAAKXZ @ 0x14001A2D0 (-AddRef@-$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBFI@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBGA@EAAKXZ @ 0x14001A2E0 (-AddRef@-$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBGA@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBGI@EAAKXZ @ 0x14001A2F0 (-AddRef@-$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBGI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComObject<CSystemAudioDeviceOffloadGraph>::AddRef(__int64 a1)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 368));
}
