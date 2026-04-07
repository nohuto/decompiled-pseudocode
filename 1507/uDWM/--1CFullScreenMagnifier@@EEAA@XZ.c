/*
 * XREFs of ??1CFullScreenMagnifier@@EEAA@XZ @ 0x18006D57C
 * Callers:
 *     ??_ECFullScreenMagnifier@@EEAAPEAXI@Z @ 0x18006D5D0 (--_ECFullScreenMagnifier@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CFullScreenMagnifier::~CFullScreenMagnifier(CFullScreenMagnifier *this)
{
  CBaseObject *v2; // rcx
  CBaseObject *v3; // rcx

  *(_QWORD *)this = &CFullScreenMagnifier::`vftable';
  v2 = (CBaseObject *)*((_QWORD *)this + 4);
  if ( v2 )
  {
    CBaseObject::Release(v2);
    *((_QWORD *)this + 4) = 0LL;
  }
  v3 = (CBaseObject *)*((_QWORD *)this + 3);
  if ( v3 )
  {
    CBaseObject::Release(v3);
    *((_QWORD *)this + 3) = 0LL;
  }
  *((_QWORD *)this + 2) = 0LL;
  *(_QWORD *)this = &CBaseObject::`vftable';
}
