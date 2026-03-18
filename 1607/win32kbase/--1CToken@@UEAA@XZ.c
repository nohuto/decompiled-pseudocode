/*
 * XREFs of ??1CToken@@UEAA@XZ @ 0x1C001EE38
 * Callers:
 *     ??1CFlipToken@@MEAA@XZ @ 0x1C001CAF8 (--1CFlipToken@@MEAA@XZ.c)
 *     ??_GCToken@@UEAAPEAXI@Z @ 0x1C00F4B20 (--_GCToken@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CRegion@@QEBAJXZ @ 0x1C001EBD4 (-Release@CRegion@@QEBAJXZ.c)
 */

void __fastcall CToken::~CToken(CToken *this)
{
  CRegion *v2; // rcx

  *(_QWORD *)this = &CToken::`vftable';
  v2 = (CRegion *)*((_QWORD *)this + 10);
  if ( v2 )
    CRegion::Release(v2);
  ObfDereferenceObject(*((PVOID *)this + 4));
  CTokenBase::~CTokenBase(this);
}
