/*
 * XREFs of ??_E?$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x140036100
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@UEAA@XZ @ 0x140035B40 (--1-$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@UEAA@XZ.c)
 *     ??3CCrossProcessClientOutputEndpoint@@SAXPEAX@Z @ 0x140035F5C (--3CCrossProcessClientOutputEndpoint@@SAXPEAX@Z.c)
 */

CCrossProcessClientInputEndpoint *__fastcall ATL::CComObject<CCrossProcessClientInputEndpoint>::`vector deleting destructor'(
        CCrossProcessClientInputEndpoint *a1,
        char a2)
{
  ATL::CComObject<CCrossProcessClientInputEndpoint>::~CComObject<CCrossProcessClientInputEndpoint>(a1);
  if ( (a2 & 1) != 0 )
    CCrossProcessClientOutputEndpoint::operator delete(a1);
  return a1;
}
