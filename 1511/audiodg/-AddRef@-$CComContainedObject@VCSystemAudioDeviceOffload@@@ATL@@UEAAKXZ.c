/*
 * XREFs of ?AddRef@?$CComContainedObject@VCSystemAudioDeviceOffload@@@ATL@@UEAAKXZ @ 0x14002D310
 * Callers:
 *     ?AddRef@?$CComContainedObject@VCSystemAudioDeviceOffload@@@ATL@@W7EAAKXZ @ 0x14001A040 (-AddRef@-$CComContainedObject@VCSystemAudioDeviceOffload@@@ATL@@W7EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCSystemAudioDeviceOffload@@@ATL@@WBA@EAAKXZ @ 0x14001A050 (-AddRef@-$CComContainedObject@VCSystemAudioDeviceOffload@@@ATL@@WBA@EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCSystemAudioDeviceOffload@@@ATL@@WBBA@EAAKXZ @ 0x14001A060 (-AddRef@-$CComContainedObject@VCSystemAudioDeviceOffload@@@ATL@@WBBA@EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCSystemAudioDeviceOffload@@@ATL@@WBBI@EAAKXZ @ 0x14001A070 (-AddRef@-$CComContainedObject@VCSystemAudioDeviceOffload@@@ATL@@WBBI@EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCSystemAudioDeviceOffload@@@ATL@@WBCA@EAAKXZ @ 0x14001A080 (-AddRef@-$CComContainedObject@VCSystemAudioDeviceOffload@@@ATL@@WBCA@EAAKXZ.c)
 * Callees:
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall ATL::CComContainedObject<CSystemAudioDeviceOffload>::AddRef(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 296) + 8LL))(*(_QWORD *)(a1 + 296));
}
