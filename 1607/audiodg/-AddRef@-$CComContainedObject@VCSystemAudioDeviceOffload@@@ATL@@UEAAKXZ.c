/*
 * XREFs of ?AddRef@?$CComContainedObject@VCSystemAudioDeviceOffload@@@ATL@@UEAAKXZ @ 0x14002BD20
 * Callers:
 *     ?AddRef@?$CComContainedObject@VCSystemAudioDeviceOffload@@@ATL@@W7EAAKXZ @ 0x140019AC0 (-AddRef@-$CComContainedObject@VCSystemAudioDeviceOffload@@@ATL@@W7EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCSystemAudioDeviceOffload@@@ATL@@WBA@EAAKXZ @ 0x140019AD0 (-AddRef@-$CComContainedObject@VCSystemAudioDeviceOffload@@@ATL@@WBA@EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCSystemAudioDeviceOffload@@@ATL@@WBBA@EAAKXZ @ 0x140019AE0 (-AddRef@-$CComContainedObject@VCSystemAudioDeviceOffload@@@ATL@@WBBA@EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCSystemAudioDeviceOffload@@@ATL@@WBBI@EAAKXZ @ 0x140019AF0 (-AddRef@-$CComContainedObject@VCSystemAudioDeviceOffload@@@ATL@@WBBI@EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCSystemAudioDeviceOffload@@@ATL@@WBCA@EAAKXZ @ 0x140019B00 (-AddRef@-$CComContainedObject@VCSystemAudioDeviceOffload@@@ATL@@WBCA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComContainedObject<CSystemAudioDeviceOffload>::AddRef(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 296) + 8LL))(*(_QWORD *)(a1 + 296));
}
