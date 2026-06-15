/*
 * XREFs of ??1CCrossProcessClientInputEndpoint@@UEAA@XZ @ 0x140035070
 * Callers:
 *     _ATL::CComObject_CCrossProcessClientInputEndpoint_::CComObject_CCrossProcessClientInputEndpoint__::_1_::dtor$0 @ 0x140034805 (_ATL--CComObject_CCrossProcessClientInputEndpoint_--CComObject_CCrossProcessClientInputEndpoint_.c)
 *     _ATL::CComObject_CCrossProcessClientOutputEndpoint_::CComObject_CCrossProcessClientOutputEndpoint__::_1_::dtor$0 @ 0x1400348AD (_ATL--CComObject_CCrossProcessClientOutputEndpoint_--CComObject_CCrossProcessClientOutputEndpoin.c)
 *     ??1?$CComAggObject@VCCrossProcessClientInputEndpoint@@@ATL@@UEAA@XZ @ 0x140034C28 (--1-$CComAggObject@VCCrossProcessClientInputEndpoint@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComAggObject@VCCrossProcessClientOutputEndpoint@@@ATL@@UEAA@XZ @ 0x140034C90 (--1-$CComAggObject@VCCrossProcessClientOutputEndpoint@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComContainedObject@VCCrossProcessClientOutputEndpoint@@@ATL@@UEAA@XZ @ 0x140034DC8 (--1-$CComContainedObject@VCCrossProcessClientOutputEndpoint@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@UEAA@XZ @ 0x140034DE0 (--1-$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@UEAA@XZ.c)
 *     _ATL::CComObject_CCrossProcessClientInputEndpoint_::_CComObject_CCrossProcessClientInputEndpoint__::_1_::dtor$0 @ 0x140034E7D (_ATL--CComObject_CCrossProcessClientInputEndpoint_--_CComObject_CCrossProcessClientInputEndpoint.c)
 *     ??1?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@UEAA@XZ @ 0x140034E90 (--1-$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@UEAA@XZ.c)
 *     _ATL::CComObject_CCrossProcessClientOutputEndpoint_::_CComObject_CCrossProcessClientOutputEndpoint__::_1_::dtor$0 @ 0x140034F2D (_ATL--CComObject_CCrossProcessClientOutputEndpoint_--_CComObject_CCrossProcessClientOutputEndpoi.c)
 *     ??_E?$CComContainedObject@VCCrossProcessClientOutputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x1400352D0 (--_E-$CComContainedObject@VCCrossProcessClientOutputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CCrossProcessBaseClientEndpoint@@UEAA@XZ @ 0x140034FF4 (--1CCrossProcessBaseClientEndpoint@@UEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CCrossProcessClientInputEndpoint::~CCrossProcessClientInputEndpoint(
        CCrossProcessClientInputEndpoint *this)
{
  CCrossProcessBaseClientEndpoint::~CCrossProcessBaseClientEndpoint(this);
  if ( *((_BYTE *)this + 512) )
  {
    *((_BYTE *)this + 512) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 472));
  }
}
