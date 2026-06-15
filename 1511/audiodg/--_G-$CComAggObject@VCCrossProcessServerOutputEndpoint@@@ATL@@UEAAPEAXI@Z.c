/*
 * XREFs of ??_G?$CComAggObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x140036040
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1400189FC (--3@YAXPEAX@Z.c)
 *     ??1?$CComAggObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAA@XZ @ 0x140035AA8 (--1-$CComAggObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAA@XZ.c)
 */

void *__fastcall ATL::CComAggObject<CCrossProcessServerOutputEndpoint>::`scalar deleting destructor'(
        void *Block,
        char a2)
{
  ATL::CComAggObject<CCrossProcessServerOutputEndpoint>::~CComAggObject<CCrossProcessServerOutputEndpoint>((__int64)Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
