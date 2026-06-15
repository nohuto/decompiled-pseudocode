/*
 * XREFs of ??_E?$CComObject@VCVpoContext@@@ATL@@UEAAPEAXI@Z @ 0x1400011C0
 * Callers:
 *     ?Release@?$CComObject@VCVpoContext@@@ATL@@UEAAKXZ @ 0x140001220 (-Release@-$CComObject@VCVpoContext@@@ATL@@UEAAKXZ.c)
 * Callees:
 *     ??1?$CComObject@VCVpoContext@@@ATL@@UEAA@XZ @ 0x1400012D4 (--1-$CComObject@VCVpoContext@@@ATL@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1400189FC (--3@YAXPEAX@Z.c)
 */

CVpoContext *__fastcall ATL::CComObject<CVpoContext>::`vector deleting destructor'(CVpoContext *Block, char a2)
{
  ATL::CComObject<CVpoContext>::~CComObject<CVpoContext>(Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
