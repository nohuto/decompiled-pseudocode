/*
 * XREFs of ??_GCCompositionBuffer@@UEAAPEAXI@Z @ 0x1C00F3850
 * Callers:
 *     <none>
 * Callees:
 *     ??1CCompositionBuffer@@UEAA@XZ @ 0x1C001E8D4 (--1CCompositionBuffer@@UEAA@XZ.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 */

CRegion **__fastcall CCompositionBuffer::`scalar deleting destructor'(CRegion **this, char a2)
{
  CCompositionBuffer::~CCompositionBuffer(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool();
  return this;
}
