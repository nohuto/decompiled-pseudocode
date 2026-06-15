/*
 * XREFs of ??1CCrossProcessServerOutputEndpoint@@UEAA@XZ @ 0x140024CAC
 * Callers:
 *     _ATL::CComObject_CCrossProcessServerInputEndpoint_::CComObject_CCrossProcessServerInputEndpoint__::_1_::dtor$0 @ 0x14001B6B2 (_ATL--CComObject_CCrossProcessServerInputEndpoint_--CComObject_CCrossProcessServerInputEndpoint_.c)
 *     _ATL::CComObject_CCrossProcessServerInputEndpoint_::_CComObject_CCrossProcessServerInputEndpoint__::_1_::dtor$0 @ 0x14001B6C4 (_ATL--CComObject_CCrossProcessServerInputEndpoint_--_CComObject_CCrossProcessServerInputEndpoint.c)
 *     _ATL::CComObject_CCrossProcessServerOutputEndpoint_::CComObject_CCrossProcessServerOutputEndpoint__::_1_::dtor$0 @ 0x14003492B (_ATL--CComObject_CCrossProcessServerOutputEndpoint_--CComObject_CCrossProcessServerOutputEndpoin.c)
 *     ??1?$CComAggObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAA@XZ @ 0x140034CF8 (--1-$CComAggObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComAggObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAA@XZ @ 0x140034D60 (--1-$CComAggObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComContainedObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAA@XZ @ 0x140034DD4 (--1-$CComContainedObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAA@XZ @ 0x140034F40 (--1-$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAA@XZ.c)
 *     _ATL::CComObject_CCrossProcessServerOutputEndpoint_::_CComObject_CCrossProcessServerOutputEndpoint__::_1_::dtor$0 @ 0x140034FB3 (_ATL--CComObject_CCrossProcessServerOutputEndpoint_--_CComObject_CCrossProcessServerOutputEndpoi.c)
 *     ??_G?$CComContainedObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x140035310 (--_G-$CComContainedObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CCrossProcessBaseServerEndpoint@@UEAA@XZ @ 0x140013B44 (--1CCrossProcessBaseServerEndpoint@@UEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CCrossProcessServerOutputEndpoint::~CCrossProcessServerOutputEndpoint(
        CCrossProcessServerOutputEndpoint *this)
{
  CCrossProcessBaseServerEndpoint::~CCrossProcessBaseServerEndpoint(this);
  if ( *((_BYTE *)this + 512) )
  {
    *((_BYTE *)this + 512) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 472));
  }
}
