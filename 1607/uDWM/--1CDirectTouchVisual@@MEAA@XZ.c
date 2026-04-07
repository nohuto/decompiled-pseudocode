/*
 * XREFs of ??1CDirectTouchVisual@@MEAA@XZ @ 0x180048198
 * Callers:
 *     ??_GCDirectTouchVisual@@MEAAPEAXI@Z @ 0x180047FC0 (--_GCDirectTouchVisual@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Stop@CDirectTouchVisual@@UEAAXXZ @ 0x180048080 (-Stop@CDirectTouchVisual@@UEAAXXZ.c)
 */

void __fastcall CDirectTouchVisual::~CDirectTouchVisual(CBaseObject **this)
{
  CBaseObject *v2; // rcx
  CBaseObject *v3; // rcx

  *this = (CBaseObject *)&CDirectTouchVisual::`vftable';
  CDirectTouchVisual::Stop((CDirectTouchVisual *)this);
  v2 = this[50];
  if ( v2 )
    CBaseObject::Release(v2);
  v3 = this[49];
  if ( v3 )
    CBaseObject::Release(v3);
  *this = (CBaseObject *)&CTouchVisual::`vftable';
  CVisual::~CVisual((CVisual *)this);
}
