/*
 * XREFs of ??_GCCompositionBuffer@@UEAAPEAXI@Z @ 0x1C00E1320
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     ??1CCompositionBuffer@@UEAA@XZ @ 0x1C003E6B4 (--1CCompositionBuffer@@UEAA@XZ.c)
 */

CRegion **__fastcall CCompositionBuffer::`scalar deleting destructor'(CRegion **this, char a2)
{
  CCompositionBuffer::~CCompositionBuffer(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool();
  return this;
}
