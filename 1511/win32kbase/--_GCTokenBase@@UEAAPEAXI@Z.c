/*
 * XREFs of ??_GCTokenBase@@UEAAPEAXI@Z @ 0x1C00E2FA0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     ??1CTokenBase@@UEAA@XZ @ 0x1C00A8D08 (--1CTokenBase@@UEAA@XZ.c)
 */

CTokenBase *__fastcall CTokenBase::`scalar deleting destructor'(CTokenBase *this, char a2)
{
  CTokenBase::~CTokenBase(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool();
  return this;
}
