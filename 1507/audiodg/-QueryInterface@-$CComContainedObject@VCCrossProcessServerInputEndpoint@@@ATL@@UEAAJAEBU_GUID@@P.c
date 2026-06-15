/*
 * XREFs of ?QueryInterface@?$CComContainedObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400380F0
 * Callers:
 *     ?QueryInterface@?$CComContainedObject@VCCrossProcessServerOutputEndpoint@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001A5B0 (-QueryInterface@-$CComContainedObject@VCCrossProcessServerOutputEndpoint@@@ATL@@W7EAAJAEBU_GUID@.c)
 *     ?QueryInterface@?$CComContainedObject@VCCrossProcessServerInputEndpoint@@@ATL@@WBLI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001A5C0 (-QueryInterface@-$CComContainedObject@VCCrossProcessServerInputEndpoint@@@ATL@@WBLI@EAAJAEBU_GUI.c)
 *     ?QueryInterface@?$CComContainedObject@VCCrossProcessServerInputEndpoint@@@ATL@@WBHI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001A5D0 (-QueryInterface@-$CComContainedObject@VCCrossProcessServerInputEndpoint@@@ATL@@WBHI@EAAJAEBU_GUI.c)
 * Callees:
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall ATL::CComContainedObject<CCrossProcessServerInputEndpoint>::QueryInterface(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  return (***(__int64 (__fastcall ****)(_QWORD, __int64, __int64))(a1 + 464))(*(_QWORD *)(a1 + 464), a2, a3);
}
