/*
 * XREFs of ??1CIconicAnimatedVisual@@MEAA@XZ @ 0x18009B668
 * Callers:
 *     ??_GCIconicAnimatedVisual@@MEAAPEAXI@Z @ 0x18009B720 (--_GCIconicAnimatedVisual@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CIconicAnimatedVisual::~CIconicAnimatedVisual(CIconicAnimatedVisual *this)
{
  CBaseObject *v2; // rcx
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx
  CBaseObject *v5; // rcx
  CBaseObject *v6; // rcx
  CBaseObject *v7; // rcx
  CBaseObject *v8; // rcx

  *(_QWORD *)this = &CIconicAnimatedVisual::`vftable'{for `CVisual'};
  *((_QWORD *)this + 33) = &CIconicAnimatedVisual::`vftable'{for `ISecondaryWindowRepresentationChangedListener'};
  v2 = (CBaseObject *)*((_QWORD *)this + 34);
  if ( v2 )
    CBaseObject::Release(v2);
  v3 = (CBaseObject *)*((_QWORD *)this + 36);
  if ( v3 )
    CBaseObject::Release(v3);
  v4 = (CBaseObject *)*((_QWORD *)this + 40);
  if ( v4 )
    CBaseObject::Release(v4);
  v5 = (CBaseObject *)*((_QWORD *)this + 37);
  if ( v5 )
    CBaseObject::Release(v5);
  v6 = (CBaseObject *)*((_QWORD *)this + 38);
  if ( v6 )
    CBaseObject::Release(v6);
  v7 = (CBaseObject *)*((_QWORD *)this + 39);
  if ( v7 )
    CBaseObject::Release(v7);
  v8 = (CBaseObject *)*((_QWORD *)this + 41);
  if ( v8 )
  {
    CBaseObject::Release(v8);
    *((_QWORD *)this + 41) = 0LL;
  }
  CVisual::~CVisual(this);
}
