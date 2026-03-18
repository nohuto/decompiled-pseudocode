/*
 * XREFs of ??_GCTokenBase@@UEAAPEAXI@Z @ 0x1C00E1060
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     ??1CTokenBase@@UEAA@XZ @ 0x1C00A4188 (--1CTokenBase@@UEAA@XZ.c)
 */

CTokenBase *__fastcall CTokenBase::`scalar deleting destructor'(CTokenBase *this, char a2)
{
  CTokenBase::~CTokenBase(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool();
  return this;
}
