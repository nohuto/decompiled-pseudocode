/*
 * XREFs of ??_E?$CComContainedObject@VCCrossProcessClientOutputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x140035EB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CCrossProcessClientInputEndpoint@@UEAA@XZ @ 0x140035C50 (--1CCrossProcessClientInputEndpoint@@UEAA@XZ.c)
 *     ??3CCrossProcessClientOutputEndpoint@@SAXPEAX@Z @ 0x140035D8C (--3CCrossProcessClientOutputEndpoint@@SAXPEAX@Z.c)
 */

CCrossProcessClientInputEndpoint *__fastcall ATL::CComContainedObject<CCrossProcessClientOutputEndpoint>::`vector deleting destructor'(
        CCrossProcessClientInputEndpoint *a1,
        char a2)
{
  CCrossProcessClientInputEndpoint::~CCrossProcessClientInputEndpoint(a1);
  if ( (a2 & 1) != 0 )
    CCrossProcessClientOutputEndpoint::operator delete(a1);
  return a1;
}
