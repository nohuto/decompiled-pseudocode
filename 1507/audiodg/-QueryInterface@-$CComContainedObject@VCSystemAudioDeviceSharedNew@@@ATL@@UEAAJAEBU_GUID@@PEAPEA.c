/*
 * XREFs of ?QueryInterface@?$CComContainedObject@VCSystemAudioDeviceSharedNew@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14002E390
 * Callers:
 *     ?QueryInterface@?$CComContainedObject@VCSystemAudioDeviceSharedNew@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001A110 (-QueryInterface@-$CComContainedObject@VCSystemAudioDeviceSharedNew@@@ATL@@W7EAAJAEBU_GUID@@PEAPE.c)
 *     ?QueryInterface@?$CComContainedObject@VCSystemAudioDeviceSharedNew@@@ATL@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001A120 (-QueryInterface@-$CComContainedObject@VCSystemAudioDeviceSharedNew@@@ATL@@WBA@EAAJAEBU_GUID@@PEA.c)
 *     ?QueryInterface@?$CComContainedObject@VCSystemAudioDeviceSharedNew@@@ATL@@WBBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001A130 (-QueryInterface@-$CComContainedObject@VCSystemAudioDeviceSharedNew@@@ATL@@WBBA@EAAJAEBU_GUID@@PE.c)
 *     ?QueryInterface@?$CComContainedObject@VCSystemAudioDeviceSharedNew@@@ATL@@WBBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001A140 (-QueryInterface@-$CComContainedObject@VCSystemAudioDeviceSharedNew@@@ATL@@WBBI@EAAJAEBU_GUID@@PE.c)
 * Callees:
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall ATL::CComContainedObject<CSystemAudioDeviceSharedNew>::QueryInterface(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  return (***(__int64 (__fastcall ****)(_QWORD, __int64, __int64))(a1 + 288))(*(_QWORD *)(a1 + 288), a2, a3);
}
