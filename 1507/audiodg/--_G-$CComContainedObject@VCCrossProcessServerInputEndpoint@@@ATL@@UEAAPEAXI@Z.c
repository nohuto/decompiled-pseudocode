/*
 * XREFs of ??_G?$CComContainedObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x140035EF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CCrossProcessServerOutputEndpoint@@UEAA@XZ @ 0x140025B60 (--1CCrossProcessServerOutputEndpoint@@UEAA@XZ.c)
 *     ??3CCrossProcessClientOutputEndpoint@@SAXPEAX@Z @ 0x140035D8C (--3CCrossProcessClientOutputEndpoint@@SAXPEAX@Z.c)
 */

CCrossProcessServerOutputEndpoint *__fastcall ATL::CComContainedObject<CCrossProcessServerInputEndpoint>::`scalar deleting destructor'(
        CCrossProcessServerOutputEndpoint *a1,
        char a2)
{
  CCrossProcessServerOutputEndpoint::~CCrossProcessServerOutputEndpoint(a1);
  if ( (a2 & 1) != 0 )
    CCrossProcessClientOutputEndpoint::operator delete(a1);
  return a1;
}
