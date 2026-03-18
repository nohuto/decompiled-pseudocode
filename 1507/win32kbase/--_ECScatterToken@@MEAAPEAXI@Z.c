/*
 * XREFs of ??_ECScatterToken@@MEAAPEAXI@Z @ 0x1C00E11B0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     ??1CScatterToken@@MEAA@XZ @ 0x1C00E115C (--1CScatterToken@@MEAA@XZ.c)
 */

CScatterToken *__fastcall CScatterToken::`vector deleting destructor'(CScatterToken *this, char a2)
{
  CScatterToken::~CScatterToken(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool();
  return this;
}
