/*
 * XREFs of ??_GCToken@@UEAAPEAXI@Z @ 0x1C00E2950
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     ??1CToken@@UEAA@XZ @ 0x1C003D924 (--1CToken@@UEAA@XZ.c)
 */

CToken *__fastcall CToken::`scalar deleting destructor'(CToken *this, char a2)
{
  CToken::~CToken(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool();
  return this;
}
