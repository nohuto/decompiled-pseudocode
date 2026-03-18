/*
 * XREFs of ??1CToken@@UEAA@XZ @ 0x1C003D924
 * Callers:
 *     ??1CFlipToken@@MEAA@XZ @ 0x1C003C4BC (--1CFlipToken@@MEAA@XZ.c)
 *     ??_GCToken@@UEAAPEAXI@Z @ 0x1C00E2950 (--_GCToken@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CRegion@@QEBAJXZ @ 0x1C003EA44 (-Release@CRegion@@QEBAJXZ.c)
 */

void __fastcall CToken::~CToken(CToken *this)
{
  CRegion *v2; // rcx
  bool v3; // zf

  *(_QWORD *)this = &CToken::`vftable';
  v2 = (CRegion *)*((_QWORD *)this + 10);
  if ( v2 )
    CRegion::Release(v2);
  ObfDereferenceObject(*((PVOID *)this + 4));
  v3 = *((_DWORD *)this + 6) == 6;
  *(_QWORD *)this = &CTokenBase::`vftable';
  if ( !v3 )
    *((_DWORD *)this + 6) = 6;
}
