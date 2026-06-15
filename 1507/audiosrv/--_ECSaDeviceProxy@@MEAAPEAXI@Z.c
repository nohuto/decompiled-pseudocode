/*
 * XREFs of ??_ECSaDeviceProxy@@MEAAPEAXI@Z @ 0x180026C00
 * Callers:
 *     ?Release@CSaDeviceProxy@@UEAAKXZ @ 0x180026F20 (-Release@CSaDeviceProxy@@UEAAKXZ.c)
 * Callees:
 *     ??1CSaDeviceProxy@@MEAA@XZ @ 0x1800270A0 (--1CSaDeviceProxy@@MEAA@XZ.c)
 */

CSaDeviceProxy *__fastcall CSaDeviceProxy::`vector deleting destructor'(CSaDeviceProxy *this, char a2)
{
  HANDLE ProcessHeap; // rax

  CSaDeviceProxy::~CSaDeviceProxy(this);
  if ( (a2 & 1) != 0 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, this);
  }
  return this;
}
