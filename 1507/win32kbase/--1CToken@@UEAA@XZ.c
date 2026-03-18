/*
 * XREFs of ??1CToken@@UEAA@XZ @ 0x1C0048308
 * Callers:
 *     ??_ECFlipToken@@MEAAPEAXI@Z @ 0x1C0047C90 (--_ECFlipToken@@MEAAPEAXI@Z.c)
 *     ??_GCToken@@UEAAPEAXI@Z @ 0x1C00E0960 (--_GCToken@@UEAAPEAXI@Z.c)
 *     ??1CScatterToken@@MEAA@XZ @ 0x1C00E115C (--1CScatterToken@@MEAA@XZ.c)
 * Callees:
 *     ?Release@CRegion@@QEBAJXZ @ 0x1C004A4FC (-Release@CRegion@@QEBAJXZ.c)
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
