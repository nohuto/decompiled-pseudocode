/*
 * XREFs of ??3CCrossProcessClientOutputEndpoint@@SAXPEAX@Z @ 0x1400351AC
 * Callers:
 *     _privateCreateCrossProcessEndpoint_::_1_::dtor$0 @ 0x14001B9A6 (_privateCreateCrossProcessEndpoint_--_1_--dtor$0.c)
 *     _privateCreateCrossProcessEndpoint_::_1_::dtor$1 @ 0x14001B9B2 (_privateCreateCrossProcessEndpoint_--_1_--dtor$1.c)
 *     _privateCreateCrossProcessEndpoint_::_1_::dtor$2 @ 0x14001B9BE (_privateCreateCrossProcessEndpoint_--_1_--dtor$2.c)
 *     _privateCreateCrossProcessEndpoint_::_1_::dtor$3 @ 0x14001B9CA (_privateCreateCrossProcessEndpoint_--_1_--dtor$3.c)
 *     ??_E?$CComContainedObject@VCCrossProcessClientOutputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x1400352D0 (--_E-$CComContainedObject@VCCrossProcessClientOutputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 *     ??_G?$CComContainedObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x140035310 (--_G-$CComContainedObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 *     ??_E?$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x140035350 (--_E-$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 *     ??_G?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x140035390 (--_G-$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 *     ??_E?$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x1400353D0 (--_E-$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 *     _ATL::CComCreator_ATL::CComObject_CCrossProcessClientInputEndpoint___::CreateInstance_::_1_::dtor$0 @ 0x140036684 (_ATL--CComCreator_ATL--CComObject_CCrossProcessClientInputEndpoint___--CreateInstance_--_1_--dto.c)
 *     _ATL::CComCreator_ATL::CComObject_CCrossProcessClientOutputEndpoint___::CreateInstance_::_1_::dtor$0 @ 0x1400367B4 (_ATL--CComCreator_ATL--CComObject_CCrossProcessClientOutputEndpoint___--CreateInstance_--_1_--dt.c)
 *     _ATL::CComCreator_ATL::CComObject_CCrossProcessServerInputEndpoint___::CreateInstance_::_1_::dtor$0 @ 0x1400368E4 (_ATL--CComCreator_ATL--CComObject_CCrossProcessServerInputEndpoint___--CreateInstance_--_1_--dto.c)
 *     _ATL::CComCreator_ATL::CComObject_CCrossProcessServerOutputEndpoint___::CreateInstance_::_1_::dtor$0 @ 0x140036A14 (_ATL--CComCreator_ATL--CComObject_CCrossProcessServerOutputEndpoint___--CreateInstance_--_1_--dt.c)
 * Callees:
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x140012688 (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 */

void __fastcall CCrossProcessClientOutputEndpoint::operator delete(void *a1)
{
  void *v2; // rax

  v2 = (void *)AERTGetDLLRTHeap();
  AERTFree(a1, v2);
}
