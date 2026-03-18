/*
 * XREFs of ??_GCTokenBase@@UEAAPEAXI@Z @ 0x1C00F4EA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CTokenBase@@UEAA@XZ @ 0x1C001F104 (--1CTokenBase@@UEAA@XZ.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 */

CTokenBase *__fastcall CTokenBase::`scalar deleting destructor'(CTokenBase *this, char a2)
{
  CTokenBase::~CTokenBase(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool();
  return this;
}
