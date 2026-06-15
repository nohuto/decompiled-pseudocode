/*
 * XREFs of ?AddRef@?$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@UEAAKXZ @ 0x14002D320
 * Callers:
 *     ?AddRef@?$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@W7EAAKXZ @ 0x140019CA0 (-AddRef@-$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@W7EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBA@EAAKXZ @ 0x140019CB0 (-AddRef@-$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBA@EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBBA@EAAKXZ @ 0x140019CC0 (-AddRef@-$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBBA@EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBBI@EAAKXZ @ 0x140019CD0 (-AddRef@-$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBBI@EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBFI@EAAKXZ @ 0x140019CE0 (-AddRef@-$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBFI@EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBGA@EAAKXZ @ 0x140019CF0 (-AddRef@-$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBGA@EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBGI@EAAKXZ @ 0x140019D00 (-AddRef@-$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBGI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComContainedObject<CSystemAudioDeviceOffloadGraph>::AddRef(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 368) + 8LL))(*(_QWORD *)(a1 + 368));
}
