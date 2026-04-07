/*
 * XREFs of ??1CContactStationaryVisual@@MEAA@XZ @ 0x180087FD8
 * Callers:
 *     ??_ECContactStationaryVisual@@MEAAPEAXI@Z @ 0x180088060 (--_ECContactStationaryVisual@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18002B05C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?Stop@CContactStationaryVisual@@UEAAXXZ @ 0x18006F5F0 (-Stop@CContactStationaryVisual@@UEAAXXZ.c)
 */

void __fastcall CContactStationaryVisual::~CContactStationaryVisual(void **this)
{
  __int64 i; // rdi
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx

  *this = &CContactStationaryVisual::`vftable';
  CContactStationaryVisual::Stop((CContactStationaryVisual *)this);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 98); i = (unsigned int)(i + 1) )
  {
    v3 = (CBaseObject *)*((_QWORD *)this[46] + i);
    if ( v3 )
      CBaseObject::Release(v3);
  }
  v4 = (CBaseObject *)this[44];
  if ( v4 )
    CBaseObject::Release(v4);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 46);
  *this = &CTouchVisual::`vftable';
  CVisual::~CVisual((CVisual *)this);
}
