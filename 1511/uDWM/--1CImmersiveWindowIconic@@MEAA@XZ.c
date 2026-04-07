/*
 * XREFs of ??1CImmersiveWindowIconic@@MEAA@XZ @ 0x1800795D0
 * Callers:
 *     ??_ECImmersiveWindowIconic@@MEAAPEAXI@Z @ 0x180079620 (--_ECImmersiveWindowIconic@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CImmersiveWindowIconic::~CImmersiveWindowIconic(CImmersiveWindowIconic *this)
{
  CBaseObject *v2; // rcx
  CBaseObject *v3; // rcx

  *(_QWORD *)this = &CImmersiveWindowIconic::`vftable';
  v2 = (CBaseObject *)*((_QWORD *)this + 34);
  if ( v2 )
    CBaseObject::Release(v2);
  v3 = (CBaseObject *)*((_QWORD *)this + 35);
  if ( v3 )
    CBaseObject::Release(v3);
  CVisual::~CVisual(this);
}
