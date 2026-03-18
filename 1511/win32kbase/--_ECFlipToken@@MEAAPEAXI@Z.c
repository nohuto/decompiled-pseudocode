/*
 * XREFs of ??_ECFlipToken@@MEAAPEAXI@Z @ 0x1C003BDE0
 * Callers:
 *     <none>
 * Callees:
 *     IsWin32FreePoolImplSupported_0 @ 0x1C0002C18 (IsWin32FreePoolImplSupported_0.c)
 *     Win32FreePoolImpl_0 @ 0x1C0002C20 (Win32FreePoolImpl_0.c)
 *     ??1CFlipToken@@MEAA@XZ @ 0x1C003C4BC (--1CFlipToken@@MEAA@XZ.c)
 */

CFlipToken *__fastcall CFlipToken::`vector deleting destructor'(CFlipToken *this, char a2)
{
  CFlipToken::~CFlipToken(this);
  if ( (a2 & 1) != 0 && (int)IsWin32FreePoolImplSupported_0() >= 0 )
    Win32FreePoolImpl_0();
  return this;
}
