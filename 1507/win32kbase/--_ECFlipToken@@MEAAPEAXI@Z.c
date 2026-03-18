/*
 * XREFs of ??_ECFlipToken@@MEAAPEAXI@Z @ 0x1C0047C90
 * Callers:
 *     <none>
 * Callees:
 *     IsWin32FreePoolImplSupported_0 @ 0x1C0002BE8 (IsWin32FreePoolImplSupported_0.c)
 *     Win32FreePoolImpl_0 @ 0x1C0002BF0 (Win32FreePoolImpl_0.c)
 *     ?Discard@CFlipToken@@UEAAXXZ @ 0x1C0047D00 (-Discard@CFlipToken@@UEAAXXZ.c)
 *     ??1CToken@@UEAA@XZ @ 0x1C0048308 (--1CToken@@UEAA@XZ.c)
 */

CFlipToken *__fastcall CFlipToken::`vector deleting destructor'(CFlipToken *this, char a2)
{
  bool v2; // zf

  v2 = *((_DWORD *)this + 6) == 6;
  *(_QWORD *)this = &CFlipToken::`vftable';
  if ( !v2 )
    CFlipToken::Discard(this);
  CToken::~CToken(this);
  if ( (a2 & 1) != 0 && (int)IsWin32FreePoolImplSupported_0() >= 0 )
    Win32FreePoolImpl_0();
  return this;
}
