/*
 * XREFs of ??1CTouchDragVisual@@MEAA@XZ @ 0x1800890AC
 * Callers:
 *     ??_GCTouchDragVisual@@MEAAPEAXI@Z @ 0x180089180 (--_GCTouchDragVisual@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18002AA44 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?Stop@CTouchDragVisual@@UEAAXXZ @ 0x18006F600 (-Stop@CTouchDragVisual@@UEAAXXZ.c)
 */

void __fastcall CTouchDragVisual::~CTouchDragVisual(CBaseObject **this)
{
  CBaseObject *v2; // rcx
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx

  *this = (CBaseObject *)&CTouchDragVisual::`vftable';
  CTouchDragVisual::Stop((CTouchDragVisual *)this);
  v2 = this[46];
  if ( v2 )
  {
    CBaseObject::Release(v2);
    this[46] = 0LL;
  }
  v3 = this[51];
  if ( v3 )
  {
    CBaseObject::Release(v3);
    this[51] = 0LL;
  }
  v4 = this[52];
  if ( v4 )
  {
    CBaseObject::Release(v4);
    this[52] = 0LL;
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)(this + 42));
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)(this + 38));
  *this = (CBaseObject *)&CTouchVisual::`vftable';
  CVisual::~CVisual((CVisual *)this);
}
