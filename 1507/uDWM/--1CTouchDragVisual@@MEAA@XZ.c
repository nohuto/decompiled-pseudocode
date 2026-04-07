/*
 * XREFs of ??1CTouchDragVisual@@MEAA@XZ @ 0x180085600
 * Callers:
 *     ??_GCTouchDragVisual@@MEAAPEAXI@Z @ 0x1800856A0 (--_GCTouchDragVisual@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180028054 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?Stop@CTouchDragVisual@@UEAAXXZ @ 0x1800860F0 (-Stop@CTouchDragVisual@@UEAAXXZ.c)
 */

void __fastcall CTouchDragVisual::~CTouchDragVisual(void **this)
{
  CBaseObject *v2; // rcx
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx

  *this = &CTouchDragVisual::`vftable';
  CTouchDragVisual::Stop((CTouchDragVisual *)this);
  v2 = (CBaseObject *)this[46];
  if ( v2 )
  {
    CBaseObject::Release(v2);
    this[46] = 0LL;
  }
  v3 = (CBaseObject *)this[51];
  if ( v3 )
  {
    CBaseObject::Release(v3);
    this[51] = 0LL;
  }
  v4 = (CBaseObject *)this[52];
  if ( v4 )
  {
    CBaseObject::Release(v4);
    this[52] = 0LL;
  }
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 42);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 38);
  *this = &CTouchVisual::`vftable';
  CVisual::~CVisual((CVisual *)this);
}
