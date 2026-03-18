/*
 * XREFs of ??_GCToken@@UEAAPEAXI@Z @ 0x1C00F4B20
 * Callers:
 *     <none>
 * Callees:
 *     ??1CToken@@UEAA@XZ @ 0x1C001EE38 (--1CToken@@UEAA@XZ.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 */

CToken *__fastcall CToken::`scalar deleting destructor'(CToken *this, char a2)
{
  CToken::~CToken(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool();
  return this;
}
