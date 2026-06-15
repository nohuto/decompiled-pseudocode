/*
 * XREFs of ??_G?$CComObject@VCAPOWrapperSrv@@@ATL@@UEAAPEAXI@Z @ 0x180084170
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180027E90 (--3@YAXPEAX@Z.c)
 *     ??1?$CComObject@VCAPOWrapperSrv@@@ATL@@UEAA@XZ @ 0x1800840B0 (--1-$CComObject@VCAPOWrapperSrv@@@ATL@@UEAA@XZ.c)
 */

CAPOWrapperSrv *__fastcall ATL::CComObject<CAPOWrapperSrv>::`scalar deleting destructor'(CAPOWrapperSrv *a1, char a2)
{
  ATL::CComObject<CAPOWrapperSrv>::~CComObject<CAPOWrapperSrv>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
