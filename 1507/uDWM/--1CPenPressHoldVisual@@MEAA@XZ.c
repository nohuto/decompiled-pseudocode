/*
 * XREFs of ??1CPenPressHoldVisual@@MEAA@XZ @ 0x18008806C
 * Callers:
 *     ??_GCPenPressHoldVisual@@MEAAPEAXI@Z @ 0x180088100 (--_GCPenPressHoldVisual@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetOpacity@CVisual@@QEAAXN@Z @ 0x18001D130 (-SetOpacity@CVisual@@QEAAXN@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180028054 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?StopTimer@CPenPressHoldVisual@@MEAAJXZ @ 0x180088420 (-StopTimer@CPenPressHoldVisual@@MEAAJXZ.c)
 */

void __fastcall CPenPressHoldVisual::~CPenPressHoldVisual(void **this)
{
  __int64 i; // rdi
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx

  *this = &CPenPressHoldVisual::`vftable';
  CPenPressHoldVisual::StopTimer((CPenPressHoldVisual *)this);
  CVisual::SetOpacity((CVisual *)this, 0.0);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 84); i = (unsigned int)(i + 1) )
  {
    v3 = (CBaseObject *)*((_QWORD *)this[39] + i);
    if ( v3 )
      CBaseObject::Release(v3);
  }
  v4 = (CBaseObject *)this[37];
  if ( v4 )
    CBaseObject::Release(v4);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 39);
  *this = &CTouchVisual::`vftable';
  CVisual::~CVisual((CVisual *)this);
}
