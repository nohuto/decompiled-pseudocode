/*
 * XREFs of ??_ECFlipToken@@MEAAPEAXI@Z @ 0x1C001C4E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CFlipToken@@MEAA@XZ @ 0x1C001CAF8 (--1CFlipToken@@MEAA@XZ.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 */

CFlipToken *__fastcall CFlipToken::`vector deleting destructor'(CFlipToken *this, char a2)
{
  CFlipToken::~CFlipToken(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool(this);
  return this;
}
