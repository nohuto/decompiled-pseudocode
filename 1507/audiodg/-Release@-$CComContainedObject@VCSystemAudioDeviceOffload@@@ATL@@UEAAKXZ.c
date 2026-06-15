/*
 * XREFs of ?Release@?$CComContainedObject@VCSystemAudioDeviceOffload@@@ATL@@UEAAKXZ @ 0x14002ED60
 * Callers:
 *     ?Release@?$CComContainedObject@VCSystemAudioDeviceOffload@@@ATL@@W7EAAKXZ @ 0x14001A360 (-Release@-$CComContainedObject@VCSystemAudioDeviceOffload@@@ATL@@W7EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCSystemAudioDeviceOffload@@@ATL@@WBA@EAAKXZ @ 0x14001A370 (-Release@-$CComContainedObject@VCSystemAudioDeviceOffload@@@ATL@@WBA@EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCSystemAudioDeviceOffload@@@ATL@@WBBA@EAAKXZ @ 0x14001A380 (-Release@-$CComContainedObject@VCSystemAudioDeviceOffload@@@ATL@@WBBA@EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCSystemAudioDeviceOffload@@@ATL@@WBBI@EAAKXZ @ 0x14001A390 (-Release@-$CComContainedObject@VCSystemAudioDeviceOffload@@@ATL@@WBBI@EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCSystemAudioDeviceOffload@@@ATL@@WBCA@EAAKXZ @ 0x14001A3A0 (-Release@-$CComContainedObject@VCSystemAudioDeviceOffload@@@ATL@@WBCA@EAAKXZ.c)
 * Callees:
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall ATL::CComContainedObject<CSystemAudioDeviceOffload>::Release(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 296) + 16LL))(*(_QWORD *)(a1 + 296));
}
