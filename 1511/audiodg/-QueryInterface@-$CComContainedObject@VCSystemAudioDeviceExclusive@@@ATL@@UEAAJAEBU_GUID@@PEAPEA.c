/*
 * XREFs of ?QueryInterface@?$CComContainedObject@VCSystemAudioDeviceExclusive@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14002BAE0
 * Callers:
 *     ?QueryInterface@?$CComContainedObject@VCSystemAudioDeviceExclusive@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140019E10 (-QueryInterface@-$CComContainedObject@VCSystemAudioDeviceExclusive@@@ATL@@W7EAAJAEBU_GUID@@PEAPE.c)
 *     ?QueryInterface@?$CComContainedObject@VCSystemAudioDeviceExclusive@@@ATL@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140019E20 (-QueryInterface@-$CComContainedObject@VCSystemAudioDeviceExclusive@@@ATL@@WBA@EAAJAEBU_GUID@@PEA.c)
 * Callees:
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall ATL::CComContainedObject<CSystemAudioDeviceExclusive>::QueryInterface(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  return (***(__int64 (__fastcall ****)(_QWORD, __int64, __int64))(a1 + 272))(*(_QWORD *)(a1 + 272), a2, a3);
}
