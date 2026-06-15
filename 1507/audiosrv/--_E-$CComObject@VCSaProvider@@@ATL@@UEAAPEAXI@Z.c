/*
 * XREFs of ??_E?$CComObject@VCSaProvider@@@ATL@@UEAAPEAXI@Z @ 0x180073AF0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180006F70 (--3@YAXPEAX@Z.c)
 *     ??1?$CComObject@VCSaProvider@@@ATL@@UEAA@XZ @ 0x180073798 (--1-$CComObject@VCSaProvider@@@ATL@@UEAA@XZ.c)
 */

CSaProvider *__fastcall ATL::CComObject<CSaProvider>::`vector deleting destructor'(CSaProvider *a1, char a2)
{
  ATL::CComObject<CSaProvider>::~CComObject<CSaProvider>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
