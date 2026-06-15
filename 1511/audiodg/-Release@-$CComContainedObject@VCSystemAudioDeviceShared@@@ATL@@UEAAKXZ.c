/*
 * XREFs of ?Release@?$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@UEAAKXZ @ 0x14002CC70
 * Callers:
 *     ?Release@?$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@W7EAAKXZ @ 0x140019FC0 (-Release@-$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@W7EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@WBA@EAAKXZ @ 0x140019FD0 (-Release@-$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@WBA@EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@WBBA@EAAKXZ @ 0x140019FE0 (-Release@-$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@WBBA@EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@WBBI@EAAKXZ @ 0x140019FF0 (-Release@-$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@WBBI@EAAKXZ.c)
 * Callees:
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall ATL::CComContainedObject<CSystemAudioDeviceShared>::Release(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 344) + 16LL))(*(_QWORD *)(a1 + 344));
}
