/*
 * XREFs of ??1CPenPressHoldVisual@@MEAA@XZ @ 0x18008AF2C
 * Callers:
 *     ??_GCPenPressHoldVisual@@MEAAPEAXI@Z @ 0x18008AFC0 (--_GCPenPressHoldVisual@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetOpacity@CVisual@@QEAAXN@Z @ 0x18001F7E4 (-SetOpacity@CVisual@@QEAAXN@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18002AA44 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?StopTimer@CPenPressHoldVisual@@MEAAJXZ @ 0x18008B2D0 (-StopTimer@CPenPressHoldVisual@@MEAAJXZ.c)
 */

void __fastcall CPenPressHoldVisual::~CPenPressHoldVisual(CBaseObject **this)
{
  __int64 i; // rdi
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx

  *this = (CBaseObject *)&CPenPressHoldVisual::`vftable';
  CPenPressHoldVisual::StopTimer((CPenPressHoldVisual *)this);
  CVisual::SetOpacity((CVisual *)this, 0.0);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 84); i = (unsigned int)(i + 1) )
  {
    v3 = (CBaseObject *)*((_QWORD *)this[39] + i);
    if ( v3 )
      CBaseObject::Release(v3);
  }
  v4 = this[37];
  if ( v4 )
    CBaseObject::Release(v4);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)(this + 39));
  *this = (CBaseObject *)&CTouchVisual::`vftable';
  CVisual::~CVisual((CVisual *)this);
}
