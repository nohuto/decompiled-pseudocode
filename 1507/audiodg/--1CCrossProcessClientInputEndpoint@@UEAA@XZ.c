/*
 * XREFs of ??1CCrossProcessClientInputEndpoint@@UEAA@XZ @ 0x140035C50
 * Callers:
 *     _ATL::CComObject_CCrossProcessClientInputEndpoint_::CComObject_CCrossProcessClientInputEndpoint__::_1_::dtor$0 @ 0x140035300 (_ATL--CComObject_CCrossProcessClientInputEndpoint_--CComObject_CCrossProcessClientInputEndpoint_.c)
 *     _ATL::CComObject_CCrossProcessClientOutputEndpoint_::CComObject_CCrossProcessClientOutputEndpoint__::_1_::dtor$0 @ 0x1400353C4 (_ATL--CComObject_CCrossProcessClientOutputEndpoint_--CComObject_CCrossProcessClientOutputEndpoin.c)
 *     ??1?$CComAggObject@VCCrossProcessClientInputEndpoint@@@ATL@@UEAA@XZ @ 0x140035758 (--1-$CComAggObject@VCCrossProcessClientInputEndpoint@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComAggObject@VCCrossProcessClientOutputEndpoint@@@ATL@@UEAA@XZ @ 0x1400357D8 (--1-$CComAggObject@VCCrossProcessClientOutputEndpoint@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComContainedObject@VCCrossProcessClientOutputEndpoint@@@ATL@@UEAA@XZ @ 0x140035958 (--1-$CComContainedObject@VCCrossProcessClientOutputEndpoint@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@UEAA@XZ @ 0x140035970 (--1-$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@UEAA@XZ.c)
 *     _ATL::CComObject_CCrossProcessClientInputEndpoint_::_CComObject_CCrossProcessClientInputEndpoint__::_1_::dtor$0 @ 0x140035A28 (_ATL--CComObject_CCrossProcessClientInputEndpoint_--_CComObject_CCrossProcessClientInputEndpoint.c)
 *     ??1?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@UEAA@XZ @ 0x140035A3C (--1-$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@UEAA@XZ.c)
 *     _ATL::CComObject_CCrossProcessClientOutputEndpoint_::_CComObject_CCrossProcessClientOutputEndpoint__::_1_::dtor$0 @ 0x140035AF4 (_ATL--CComObject_CCrossProcessClientOutputEndpoint_--_CComObject_CCrossProcessClientOutputEndpoi.c)
 *     ??_E?$CComContainedObject@VCCrossProcessClientOutputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x140035EB0 (--_E-$CComContainedObject@VCCrossProcessClientOutputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CCrossProcessBaseClientEndpoint@@UEAA@XZ @ 0x140035BD4 (--1CCrossProcessBaseClientEndpoint@@UEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CCrossProcessClientInputEndpoint::~CCrossProcessClientInputEndpoint(
        CCrossProcessClientInputEndpoint *this)
{
  CCrossProcessBaseClientEndpoint::~CCrossProcessBaseClientEndpoint(this);
  if ( *((_BYTE *)this + 504) )
  {
    *((_BYTE *)this + 504) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 464));
  }
}
