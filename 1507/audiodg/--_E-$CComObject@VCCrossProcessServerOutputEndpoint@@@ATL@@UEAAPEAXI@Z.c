/*
 * XREFs of ??_E?$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x140035FB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAA@XZ @ 0x140035B08 (--1-$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAA@XZ.c)
 *     ??3CCrossProcessClientOutputEndpoint@@SAXPEAX@Z @ 0x140035D8C (--3CCrossProcessClientOutputEndpoint@@SAXPEAX@Z.c)
 */

CCrossProcessServerOutputEndpoint *__fastcall ATL::CComObject<CCrossProcessServerOutputEndpoint>::`vector deleting destructor'(
        CCrossProcessServerOutputEndpoint *a1,
        char a2)
{
  ATL::CComObject<CCrossProcessServerOutputEndpoint>::~CComObject<CCrossProcessServerOutputEndpoint>(a1);
  if ( (a2 & 1) != 0 )
    CCrossProcessClientOutputEndpoint::operator delete(a1);
  return a1;
}
