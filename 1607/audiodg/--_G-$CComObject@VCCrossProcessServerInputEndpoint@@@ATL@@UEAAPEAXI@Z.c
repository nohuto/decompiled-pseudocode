/*
 * XREFs of ??_G?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x140011500
 * Callers:
 *     ?Release@?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAKXZ @ 0x140011470 (-Release@-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAKXZ.c)
 * Callees:
 *     ??1?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAA@XZ @ 0x1400115B4 (--1-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAA@XZ.c)
 *     ?AERTFree@@YAXPEAX0@Z @ 0x140012620 (-AERTFree@@YAXPEAX0@Z.c)
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x140012688 (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 */

CCrossProcessBaseServerEndpoint *__fastcall ATL::CComObject<CCrossProcessServerInputEndpoint>::`scalar deleting destructor'(
        CCrossProcessBaseServerEndpoint *a1,
        char a2)
{
  void *v4; // rax

  ATL::CComObject<CCrossProcessServerInputEndpoint>::~CComObject<CCrossProcessServerInputEndpoint>(a1);
  if ( (a2 & 1) != 0 )
  {
    v4 = AERTGetDLLRTHeap();
    AERTFree(a1, v4);
  }
  return a1;
}
