/*
 * XREFs of ?AddRef@?$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@UEAAKXZ @ 0x14002CA10
 * Callers:
 *     ?AddRef@?$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@W7EAAKXZ @ 0x140019EC0 (-AddRef@-$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@W7EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@WBA@EAAKXZ @ 0x140019ED0 (-AddRef@-$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@WBA@EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@WBBA@EAAKXZ @ 0x140019EE0 (-AddRef@-$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@WBBA@EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@WBBI@EAAKXZ @ 0x140019EF0 (-AddRef@-$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@WBBI@EAAKXZ.c)
 * Callees:
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall ATL::CComContainedObject<CSystemAudioDeviceShared>::AddRef(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 344) + 8LL))(*(_QWORD *)(a1 + 344));
}
