/*
 * XREFs of ?QueryInterface@?$CComContainedObject@VCCrossProcessClientOutputEndpoint@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140038090
 * Callers:
 *     ?QueryInterface@?$CComContainedObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBHI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001A550 (-QueryInterface@-$CComContainedObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBHI@EAAJAEBU_GU.c)
 *     ?QueryInterface@?$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBIA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001A560 (-QueryInterface@-$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBIA@EAAJAEBU_GUI.c)
 *     ?QueryInterface@?$CComContainedObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBII@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001A570 (-QueryInterface@-$CComContainedObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBII@EAAJAEBU_GU.c)
 *     ?QueryInterface@?$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBKA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001A580 (-QueryInterface@-$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBKA@EAAJAEBU_GUI.c)
 *     ?QueryInterface@?$CComContainedObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBLI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001A590 (-QueryInterface@-$CComContainedObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBLI@EAAJAEBU_GU.c)
 *     ?QueryInterface@?$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001A5A0 (-QueryInterface@-$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@W7EAAJAEBU_GUID@@.c)
 * Callees:
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall ATL::CComContainedObject<CCrossProcessClientOutputEndpoint>::QueryInterface(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  return (***(__int64 (__fastcall ****)(_QWORD, __int64, __int64))(a1 + 456))(*(_QWORD *)(a1 + 456), a2, a3);
}
