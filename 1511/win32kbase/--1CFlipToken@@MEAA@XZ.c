/*
 * XREFs of ??1CFlipToken@@MEAA@XZ @ 0x1C003C4BC
 * Callers:
 *     ??_ECFlipToken@@MEAAPEAXI@Z @ 0x1C003BDE0 (--_ECFlipToken@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Discard@CFlipToken@@UEAAXXZ @ 0x1C003BF70 (-Discard@CFlipToken@@UEAAXXZ.c)
 */

void __fastcall CFlipToken::~CFlipToken(CFlipToken *this)
{
  bool v1; // zf

  v1 = *((_DWORD *)this + 6) == 6;
  *(_QWORD *)this = &CFlipToken::`vftable';
  if ( !v1 )
    CFlipToken::Discard(this);
  CToken::~CToken(this);
}
