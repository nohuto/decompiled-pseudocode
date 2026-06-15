/*
 * XREFs of ??1CComAutoDeleteCriticalSection@ATL@@QEAA@XZ @ 0x140025FAC
 * Callers:
 *     _ATL::CRegObject::_CRegObject_::_1_::dtor$1 @ 0x140035F3A (_ATL--CRegObject--_CRegObject_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CComAutoDeleteCriticalSection::~CComAutoDeleteCriticalSection(
        ATL::CComAutoDeleteCriticalSection *this)
{
  if ( *((_BYTE *)this + 40) )
  {
    *((_BYTE *)this + 40) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)this);
  }
}
