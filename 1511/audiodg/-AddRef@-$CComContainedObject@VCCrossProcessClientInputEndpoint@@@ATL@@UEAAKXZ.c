/*
 * XREFs of ?AddRef@?$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@UEAAKXZ @ 0x140036570
 * Callers:
 *     ?AddRef@?$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@W7EAAKXZ @ 0x14001A4F0 (-AddRef@-$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@W7EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBII@EAAKXZ @ 0x14001A500 (-AddRef@-$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBII@EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBLI@EAAKXZ @ 0x14001A510 (-AddRef@-$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBLI@EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBHI@EAAKXZ @ 0x14001A520 (-AddRef@-$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBHI@EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBIA@EAAKXZ @ 0x14001A530 (-AddRef@-$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBIA@EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBKA@EAAKXZ @ 0x14001A540 (-AddRef@-$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBKA@EAAKXZ.c)
 * Callees:
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall ATL::CComContainedObject<CCrossProcessClientInputEndpoint>::AddRef(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 456) + 8LL))(*(_QWORD *)(a1 + 456));
}
