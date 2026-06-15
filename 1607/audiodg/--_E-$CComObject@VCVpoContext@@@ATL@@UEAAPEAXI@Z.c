/*
 * XREFs of ??_E?$CComObject@VCVpoContext@@@ATL@@UEAAPEAXI@Z @ 0x140031CB0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x140017F34 (--3@YAXPEAX@Z.c)
 *     ??1?$CComObject@VCVpoContext@@@ATL@@UEAA@XZ @ 0x140031BB8 (--1-$CComObject@VCVpoContext@@@ATL@@UEAA@XZ.c)
 */

CVpoContext *__fastcall ATL::CComObject<CVpoContext>::`vector deleting destructor'(CVpoContext *Block, char a2)
{
  ATL::CComObject<CVpoContext>::~CComObject<CVpoContext>(Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
