/*
 * XREFs of ??1CCrossProcessServerOutputEndpoint@@UEAA@XZ @ 0x140025B60
 * Callers:
 *     _ATL::CComObject_CCrossProcessServerInputEndpoint_::_CComObject_CCrossProcessServerInputEndpoint__::_1_::dtor$0 @ 0x14001BD3B (_ATL--CComObject_CCrossProcessServerInputEndpoint_--_CComObject_CCrossProcessServerInputEndpoint.c)
 *     _privateCreateCrossProcessEndpoint_::_1_::dtor$4 @ 0x14001BE5F (_privateCreateCrossProcessEndpoint_--_1_--dtor$4.c)
 *     _ATL::CComObject_CCrossProcessServerInputEndpoint_::CComObject_CCrossProcessServerInputEndpoint__::_1_::dtor$0 @ 0x140025B4E (_ATL--CComObject_CCrossProcessServerInputEndpoint_--CComObject_CCrossProcessServerInputEndpoint_.c)
 *     _ATL::CComObject_CCrossProcessServerOutputEndpoint_::CComObject_CCrossProcessServerOutputEndpoint__::_1_::dtor$0 @ 0x14003545E (_ATL--CComObject_CCrossProcessServerOutputEndpoint_--CComObject_CCrossProcessServerOutputEndpoin.c)
 *     ??1?$CComAggObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAA@XZ @ 0x140035858 (--1-$CComAggObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComAggObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAA@XZ @ 0x1400358D8 (--1-$CComAggObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComContainedObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAA@XZ @ 0x140035964 (--1-$CComContainedObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAA@XZ @ 0x140035B08 (--1-$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAA@XZ.c)
 *     _ATL::CComObject_CCrossProcessServerOutputEndpoint_::_CComObject_CCrossProcessServerOutputEndpoint__::_1_::dtor$0 @ 0x140035B96 (_ATL--CComObject_CCrossProcessServerOutputEndpoint_--_CComObject_CCrossProcessServerOutputEndpoi.c)
 *     ??_G?$CComContainedObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x140035EF0 (--_G-$CComContainedObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CCrossProcessBaseServerEndpoint@@UEAA@XZ @ 0x140015C8C (--1CCrossProcessBaseServerEndpoint@@UEAA@XZ.c)
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
