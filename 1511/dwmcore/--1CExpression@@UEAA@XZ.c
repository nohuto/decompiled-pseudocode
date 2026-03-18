/*
 * XREFs of ??1CExpression@@UEAA@XZ @ 0x180129A24
 * Callers:
 *     ??_ECExpression@@UEAAPEAXI@Z @ 0x180129A90 (--_ECExpression@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180076CE4 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180085DFC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
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
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 24);
  CBaseExpression::~CBaseExpression(this);
}
