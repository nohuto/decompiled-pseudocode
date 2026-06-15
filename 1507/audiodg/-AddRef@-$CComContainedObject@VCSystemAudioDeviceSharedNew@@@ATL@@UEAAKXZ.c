/*
 * XREFs of ?AddRef@?$CComContainedObject@VCSystemAudioDeviceSharedNew@@@ATL@@UEAAKXZ @ 0x14002DD40
 * Callers:
 *     ?AddRef@?$CComContainedObject@VCSystemAudioDeviceSharedNew@@@ATL@@W7EAAKXZ @ 0x14001A090 (-AddRef@-$CComContainedObject@VCSystemAudioDeviceSharedNew@@@ATL@@W7EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCSystemAudioDeviceSharedNew@@@ATL@@WBA@EAAKXZ @ 0x14001A0A0 (-AddRef@-$CComContainedObject@VCSystemAudioDeviceSharedNew@@@ATL@@WBA@EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCSystemAudioDeviceSharedNew@@@ATL@@WBBA@EAAKXZ @ 0x14001A0B0 (-AddRef@-$CComContainedObject@VCSystemAudioDeviceSharedNew@@@ATL@@WBBA@EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCSystemAudioDeviceSharedNew@@@ATL@@WBBI@EAAKXZ @ 0x14001A0C0 (-AddRef@-$CComContainedObject@VCSystemAudioDeviceSharedNew@@@ATL@@WBBI@EAAKXZ.c)
 * Callees:
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall ATL::CComContainedObject<CSystemAudioDeviceSharedNew>::AddRef(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 288) + 8LL))(*(_QWORD *)(a1 + 288));
}
