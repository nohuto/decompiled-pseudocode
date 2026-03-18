/*
 * XREFs of ??1CExpression@@UEAA@XZ @ 0x18010EAFC
 * Callers:
 *     ??_ECExpression@@UEAAPEAXI@Z @ 0x18010EB60 (--_ECExpression@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180070B90 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 */

void __fastcall CExpression::~CExpression(CExpression *this)
{
  CMILCOMBase *v2; // rcx
  CMILCOMBase *v3; // rcx

  *(_QWORD *)this = &CExpression::`vftable';
  v2 = (CMILCOMBase *)*((_QWORD *)this + 17);
  if ( v2 )
  {
    CMILCOMBase::InternalRelease(v2);
    *((_QWORD *)this + 17) = 0LL;
  }
  v3 = (CMILCOMBase *)*((_QWORD *)this + 20);
  if ( v3 )
  {
    CMILCOMBase::InternalRelease(v3);
    *((_QWORD *)this + 20) = 0LL;
  }
  CBaseExpression::~CBaseExpression(this);
}
