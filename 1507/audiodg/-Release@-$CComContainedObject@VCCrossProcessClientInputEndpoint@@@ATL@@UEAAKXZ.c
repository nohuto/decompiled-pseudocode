/*
 * XREFs of ?Release@?$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@UEAAKXZ @ 0x140038CF0
 * Callers:
 *     ?Release@?$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBIA@EAAKXZ @ 0x14001A700 (-Release@-$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBIA@EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBLI@EAAKXZ @ 0x14001A710 (-Release@-$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBLI@EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@W7EAAKXZ @ 0x14001A720 (-Release@-$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@W7EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBHI@EAAKXZ @ 0x14001A730 (-Release@-$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBHI@EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBII@EAAKXZ @ 0x14001A740 (-Release@-$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBII@EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBKA@EAAKXZ @ 0x14001A750 (-Release@-$CComContainedObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBKA@EAAKXZ.c)
 * Callees:
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall ATL::CComContainedObject<CCrossProcessClientInputEndpoint>::Release(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 456) + 16LL))(*(_QWORD *)(a1 + 456));
}
