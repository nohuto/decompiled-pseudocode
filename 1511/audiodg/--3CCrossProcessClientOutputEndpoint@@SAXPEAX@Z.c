/*
 * XREFs of ??3CCrossProcessClientOutputEndpoint@@SAXPEAX@Z @ 0x140035F5C
 * Callers:
 *     _privateCreateCrossProcessEndpoint_::_1_::dtor$0 @ 0x14001BEFA (_privateCreateCrossProcessEndpoint_--_1_--dtor$0.c)
 *     _privateCreateCrossProcessEndpoint_::_1_::dtor$1 @ 0x14001BF06 (_privateCreateCrossProcessEndpoint_--_1_--dtor$1.c)
 *     _privateCreateCrossProcessEndpoint_::_1_::dtor$2 @ 0x14001BF12 (_privateCreateCrossProcessEndpoint_--_1_--dtor$2.c)
 *     _privateCreateCrossProcessEndpoint_::_1_::dtor$3 @ 0x14001BF1E (_privateCreateCrossProcessEndpoint_--_1_--dtor$3.c)
 *     ??_E?$CComContainedObject@VCCrossProcessClientOutputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x140036080 (--_E-$CComContainedObject@VCCrossProcessClientOutputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 *     ??_G?$CComContainedObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x1400360C0 (--_G-$CComContainedObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 *     ??_E?$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x140036100 (--_E-$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 *     ??_G?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x140036140 (--_G-$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 *     ??_E?$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x140036180 (--_E-$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 *     _ATL::CComCreator_ATL::CComObject_CCrossProcessClientInputEndpoint___::CreateInstance_::_1_::dtor$0 @ 0x140037560 (_ATL--CComCreator_ATL--CComObject_CCrossProcessClientInputEndpoint___--CreateInstance_--_1_--dto.c)
 *     _ATL::CComCreator_ATL::CComObject_CCrossProcessClientOutputEndpoint___::CreateInstance_::_1_::dtor$0 @ 0x1400376AC (_ATL--CComCreator_ATL--CComObject_CCrossProcessClientOutputEndpoint___--CreateInstance_--_1_--dt.c)
 *     _ATL::CComCreator_ATL::CComObject_CCrossProcessServerInputEndpoint___::CreateInstance_::_1_::dtor$0 @ 0x1400377F8 (_ATL--CComCreator_ATL--CComObject_CCrossProcessServerInputEndpoint___--CreateInstance_--_1_--dto.c)
 *     _ATL::CComCreator_ATL::CComObject_CCrossProcessServerOutputEndpoint___::CreateInstance_::_1_::dtor$0 @ 0x140037944 (_ATL--CComCreator_ATL--CComObject_CCrossProcessServerOutputEndpoint___--CreateInstance_--_1_--dt.c)
 * Callees:
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x140015620 (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 */

void __fastcall CCrossProcessClientOutputEndpoint::operator delete(void *a1)
{
  void *v2; // rax

  v2 = (void *)AERTGetDLLRTHeap();
  AERTFree(a1, v2);
}
