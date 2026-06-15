/*
 * XREFs of ?QueryInterface@?$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14002D1D0
 * Callers:
 *     ?QueryInterface@?$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140019FD0 (-QueryInterface@-$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@.c)
 *     ?QueryInterface@?$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140019FE0 (-QueryInterface@-$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@WBA@EAAJAEBU_GUID@@PEAPEA.c)
 *     ?QueryInterface@?$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@WBBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140019FF0 (-QueryInterface@-$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@WBBA@EAAJAEBU_GUID@@PEAPE.c)
 * Callees:
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall ATL::CComContainedObject<CSystemAudioDeviceShared>::QueryInterface(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  return (***(__int64 (__fastcall ****)(_QWORD, __int64, __int64))(a1 + 280))(*(_QWORD *)(a1 + 280), a2, a3);
}
