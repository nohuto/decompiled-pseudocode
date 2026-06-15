/*
 * XREFs of ?QueryInterface@?$CComContainedObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140037240
 * Callers:
 *     ?QueryInterface@?$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBIA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001A160 (-QueryInterface@-$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBIA@EAAJAEBU_GUI.c)
 *     ?QueryInterface@?$CComContainedObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBII@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001A170 (-QueryInterface@-$CComContainedObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBII@EAAJAEBU_GU.c)
 *     ?QueryInterface@?$CComContainedObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBKI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001A180 (-QueryInterface@-$CComContainedObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBKI@EAAJAEBU_GU.c)
 *     ?QueryInterface@?$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBMA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001A190 (-QueryInterface@-$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBMA@EAAJAEBU_GUI.c)
 *     ?QueryInterface@?$CComContainedObject@VCCrossProcessServerInputEndpoint@@@ATL@@WBLI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001A1A0 (-QueryInterface@-$CComContainedObject@VCCrossProcessServerInputEndpoint@@@ATL@@WBLI@EAAJAEBU_GUI.c)
 *     ?QueryInterface@?$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001A1B0 (-QueryInterface@-$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@W7EAAJAEBU_GUID@@.c)
 *     ?QueryInterface@?$CComContainedObject@VCCrossProcessServerInputEndpoint@@@ATL@@WBHI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001A1C0 (-QueryInterface@-$CComContainedObject@VCCrossProcessServerInputEndpoint@@@ATL@@WBHI@EAAJAEBU_GUI.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComContainedObject<CCrossProcessServerInputEndpoint>::QueryInterface(__int64 a1)
{
  return (***(__int64 (__fastcall ****)(_QWORD))(a1 + 464))(*(_QWORD *)(a1 + 464));
}
