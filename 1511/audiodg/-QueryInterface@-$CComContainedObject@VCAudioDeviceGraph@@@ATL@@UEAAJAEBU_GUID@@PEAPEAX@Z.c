/*
 * XREFs of ?QueryInterface@?$CComContainedObject@VCAudioDeviceGraph@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400279B0
 * Callers:
 *     ?QueryInterface@?$CComContainedObject@VCAudioDeviceGraph@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140019CB0 (-QueryInterface@-$CComContainedObject@VCAudioDeviceGraph@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComContainedObject@VCAudioDeviceGraph@@@ATL@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140019CC0 (-QueryInterface@-$CComContainedObject@VCAudioDeviceGraph@@@ATL@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall ATL::CComContainedObject<CAudioDeviceGraph>::QueryInterface(__int64 a1, __int64 a2, __int64 a3)
{
  return (***(__int64 (__fastcall ****)(_QWORD, __int64, __int64))(a1 + 24))(*(_QWORD *)(a1 + 24), a2, a3);
}
