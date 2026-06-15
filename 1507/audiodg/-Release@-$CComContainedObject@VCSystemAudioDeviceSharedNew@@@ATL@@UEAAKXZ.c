/*
 * XREFs of ?Release@?$CComContainedObject@VCSystemAudioDeviceSharedNew@@@ATL@@UEAAKXZ @ 0x14002E3F0
 * Callers:
 *     ?Release@?$CComContainedObject@VCSystemAudioDeviceSharedNew@@@ATL@@W7EAAKXZ @ 0x14001A190 (-Release@-$CComContainedObject@VCSystemAudioDeviceSharedNew@@@ATL@@W7EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCSystemAudioDeviceSharedNew@@@ATL@@WBA@EAAKXZ @ 0x14001A1A0 (-Release@-$CComContainedObject@VCSystemAudioDeviceSharedNew@@@ATL@@WBA@EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCSystemAudioDeviceSharedNew@@@ATL@@WBBA@EAAKXZ @ 0x14001A1B0 (-Release@-$CComContainedObject@VCSystemAudioDeviceSharedNew@@@ATL@@WBBA@EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCSystemAudioDeviceSharedNew@@@ATL@@WBBI@EAAKXZ @ 0x14001A1C0 (-Release@-$CComContainedObject@VCSystemAudioDeviceSharedNew@@@ATL@@WBBI@EAAKXZ.c)
 * Callees:
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall ATL::CComContainedObject<CSystemAudioDeviceSharedNew>::Release(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 288) + 16LL))(*(_QWORD *)(a1 + 288));
}
