/*
 * XREFs of ??_E?$CComAggObject@VCVpoContext@@@ATL@@UEAAPEAXI@Z @ 0x140031C70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x140017F34 (--3@YAXPEAX@Z.c)
 *     ??1?$CComAggObject@VCVpoContext@@@ATL@@UEAA@XZ @ 0x140031B44 (--1-$CComAggObject@VCVpoContext@@@ATL@@UEAA@XZ.c)
 */

void *__fastcall ATL::CComAggObject<CVpoContext>::`vector deleting destructor'(void *Block, char a2)
{
  ATL::CComAggObject<CVpoContext>::~CComAggObject<CVpoContext>((__int64)Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
