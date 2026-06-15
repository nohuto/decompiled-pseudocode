/*
 * XREFs of ??_E?$CComObject@VCStreamGroup@@@ATL@@UEAAPEAXI@Z @ 0x1400110C0
 * Callers:
 *     ?Release@?$CComObject@VCStreamGroup@@@ATL@@UEAAKXZ @ 0x140011170 (-Release@-$CComObject@VCStreamGroup@@@ATL@@UEAAKXZ.c)
 * Callees:
 *     ??1?$CComObject@VCStreamGroup@@@ATL@@UEAA@XZ @ 0x1400110F8 (--1-$CComObject@VCStreamGroup@@@ATL@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x140017F34 (--3@YAXPEAX@Z.c)
 */

CStreamGroup *__fastcall ATL::CComObject<CStreamGroup>::`vector deleting destructor'(CStreamGroup *Block, char a2)
{
  ATL::CComObject<CStreamGroup>::~CComObject<CStreamGroup>(Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
