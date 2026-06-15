/*
 * XREFs of ??1CSaProvider@@QEAA@XZ @ 0x1800739A0
 * Callers:
 *     _ATL::CComObject_CSaProvider_::CComObject_CSaProvider__::_1_::dtor$0 @ 0x18004845F (_ATL--CComObject_CSaProvider_--CComObject_CSaProvider__--_1_--dtor$0.c)
 *     ??1?$CComObject@VCSaProvider@@@ATL@@UEAA@XZ @ 0x180073798 (--1-$CComObject@VCSaProvider@@@ATL@@UEAA@XZ.c)
 *     _ATL::CComObject_CSaProvider_::_CComObject_CSaProvider__::_1_::dtor$0 @ 0x1800737FC (_ATL--CComObject_CSaProvider_--_CComObject_CSaProvider__--_1_--dtor$0.c)
 * Callees:
 *     ??_G?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAPEAXI@Z @ 0x18000C5E0 (--_G-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAPEAXI@Z.c)
 *     ?Cleanup@CSaProvider@@IEAAXXZ @ 0x180073FA8 (-Cleanup@CSaProvider@@IEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CSaProvider::~CSaProvider(CSaProvider *this)
{
  int i; // edi
  void *v3; // rcx
  int j; // edi
  void *v5; // rcx

  CSaProvider::Cleanup(this);
  if ( *((_QWORD *)this + 16) )
  {
    for ( i = 0; i < *((_DWORD *)this + 36); ++i )
      ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::`scalar deleting destructor'((_QWORD *)(*((_QWORD *)this + 16) + 8LL * i));
    free(*((void **)this + 16));
    *((_QWORD *)this + 16) = 0LL;
  }
  v3 = (void *)*((_QWORD *)this + 17);
  if ( v3 )
  {
    free(v3);
    *((_QWORD *)this + 17) = 0LL;
  }
  *((_DWORD *)this + 36) = 0;
  if ( *((_QWORD *)this + 13) )
  {
    for ( j = 0; j < *((_DWORD *)this + 30); ++j )
      ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::`scalar deleting destructor'((_QWORD *)(*((_QWORD *)this + 13) + 8LL * j));
    free(*((void **)this + 13));
    *((_QWORD *)this + 13) = 0LL;
  }
  v5 = (void *)*((_QWORD *)this + 14);
  if ( v5 )
  {
    free(v5);
    *((_QWORD *)this + 14) = 0LL;
  }
  *((_DWORD *)this + 30) = 0;
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  if ( *((_BYTE *)this + 56) )
  {
    *((_BYTE *)this + 56) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  }
}
