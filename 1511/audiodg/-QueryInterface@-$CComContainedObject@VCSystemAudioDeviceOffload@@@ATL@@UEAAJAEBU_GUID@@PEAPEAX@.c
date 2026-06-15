/*
 * XREFs of ?QueryInterface@?$CComContainedObject@VCSystemAudioDeviceOffload@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14002E1C0
 * Callers:
 *     ?QueryInterface@?$CComContainedObject@VCSystemAudioDeviceOffload@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001A0E0 (-QueryInterface@-$CComContainedObject@VCSystemAudioDeviceOffload@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX.c)
 *     ?QueryInterface@?$CComContainedObject@VCSystemAudioDeviceOffload@@@ATL@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001A0F0 (-QueryInterface@-$CComContainedObject@VCSystemAudioDeviceOffload@@@ATL@@WBA@EAAJAEBU_GUID@@PEAPE.c)
 *     ?QueryInterface@?$CComContainedObject@VCSystemAudioDeviceOffload@@@ATL@@WBBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001A100 (-QueryInterface@-$CComContainedObject@VCSystemAudioDeviceOffload@@@ATL@@WBBA@EAAJAEBU_GUID@@PEAP.c)
 *     ?QueryInterface@?$CComContainedObject@VCSystemAudioDeviceOffload@@@ATL@@WBBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001A110 (-QueryInterface@-$CComContainedObject@VCSystemAudioDeviceOffload@@@ATL@@WBBI@EAAJAEBU_GUID@@PEAP.c)
 *     ?QueryInterface@?$CComContainedObject@VCSystemAudioDeviceOffload@@@ATL@@WBCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001A120 (-QueryInterface@-$CComContainedObject@VCSystemAudioDeviceOffload@@@ATL@@WBCA@EAAJAEBU_GUID@@PEAP.c)
 * Callees:
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall ATL::CComContainedObject<CSystemAudioDeviceOffload>::QueryInterface(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  return (***(__int64 (__fastcall ****)(_QWORD, __int64, __int64))(a1 + 296))(*(_QWORD *)(a1 + 296), a2, a3);
}
