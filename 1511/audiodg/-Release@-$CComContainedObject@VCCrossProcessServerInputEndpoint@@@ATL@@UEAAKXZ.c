/*
 * XREFs of ?Release@?$CComContainedObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAKXZ @ 0x140038DB0
 * Callers:
 *     ?Release@?$CComContainedObject@VCCrossProcessServerInputEndpoint@@@ATL@@W7EAAKXZ @ 0x14001A830 (-Release@-$CComContainedObject@VCCrossProcessServerInputEndpoint@@@ATL@@W7EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCCrossProcessServerInputEndpoint@@@ATL@@WBLI@EAAKXZ @ 0x14001A840 (-Release@-$CComContainedObject@VCCrossProcessServerInputEndpoint@@@ATL@@WBLI@EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCCrossProcessServerInputEndpoint@@@ATL@@WBHI@EAAKXZ @ 0x14001A850 (-Release@-$CComContainedObject@VCCrossProcessServerInputEndpoint@@@ATL@@WBHI@EAAKXZ.c)
 * Callees:
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall ATL::CComContainedObject<CCrossProcessServerInputEndpoint>::Release(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 464) + 16LL))(*(_QWORD *)(a1 + 464));
}
