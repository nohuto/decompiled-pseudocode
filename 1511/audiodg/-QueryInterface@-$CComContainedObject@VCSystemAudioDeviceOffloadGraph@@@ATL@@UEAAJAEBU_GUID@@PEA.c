/*
 * XREFs of ?QueryInterface@?$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14002F410
 * Callers:
 *     ?QueryInterface@?$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001A300 (-QueryInterface@-$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@W7EAAJAEBU_GUID@@PE.c)
 *     ?QueryInterface@?$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001A310 (-QueryInterface@-$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBA@EAAJAEBU_GUID@@.c)
 *     ?QueryInterface@?$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001A320 (-QueryInterface@-$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBBA@EAAJAEBU_GUID@.c)
 *     ?QueryInterface@?$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001A330 (-QueryInterface@-$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBBI@EAAJAEBU_GUID@.c)
 *     ?QueryInterface@?$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBFI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001A340 (-QueryInterface@-$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBFI@EAAJAEBU_GUID@.c)
 *     ?QueryInterface@?$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBGA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001A350 (-QueryInterface@-$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBGA@EAAJAEBU_GUID@.c)
 *     ?QueryInterface@?$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBGI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001A360 (-QueryInterface@-$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBGI@EAAJAEBU_GUID@.c)
 * Callees:
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall ATL::CComContainedObject<CSystemAudioDeviceOffloadGraph>::QueryInterface(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  return (***(__int64 (__fastcall ****)(_QWORD, __int64, __int64))(a1 + 368))(*(_QWORD *)(a1 + 368), a2, a3);
}
