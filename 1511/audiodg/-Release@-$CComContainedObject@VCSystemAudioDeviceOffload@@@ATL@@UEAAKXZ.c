/*
 * XREFs of ?Release@?$CComContainedObject@VCSystemAudioDeviceOffload@@@ATL@@UEAAKXZ @ 0x14002E240
 * Callers:
 *     ?Release@?$CComContainedObject@VCSystemAudioDeviceOffload@@@ATL@@W7EAAKXZ @ 0x14001A180 (-Release@-$CComContainedObject@VCSystemAudioDeviceOffload@@@ATL@@W7EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCSystemAudioDeviceOffload@@@ATL@@WBA@EAAKXZ @ 0x14001A190 (-Release@-$CComContainedObject@VCSystemAudioDeviceOffload@@@ATL@@WBA@EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCSystemAudioDeviceOffload@@@ATL@@WBBA@EAAKXZ @ 0x14001A1A0 (-Release@-$CComContainedObject@VCSystemAudioDeviceOffload@@@ATL@@WBBA@EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCSystemAudioDeviceOffload@@@ATL@@WBBI@EAAKXZ @ 0x14001A1B0 (-Release@-$CComContainedObject@VCSystemAudioDeviceOffload@@@ATL@@WBBI@EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCSystemAudioDeviceOffload@@@ATL@@WBCA@EAAKXZ @ 0x14001A1C0 (-Release@-$CComContainedObject@VCSystemAudioDeviceOffload@@@ATL@@WBCA@EAAKXZ.c)
 * Callees:
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall ATL::CComContainedObject<CSystemAudioDeviceOffload>::Release(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 296) + 16LL))(*(_QWORD *)(a1 + 296));
}
