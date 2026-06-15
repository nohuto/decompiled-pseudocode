/*
 * XREFs of ??_ECSaDeviceProxy@@MEAAPEAXI@Z @ 0x18000AEC0
 * Callers:
 *     ?Release@CSaDeviceProxy@@UEAAKXZ @ 0x18000B1E0 (-Release@CSaDeviceProxy@@UEAAKXZ.c)
 * Callees:
 *     ??1CSaDeviceProxy@@MEAA@XZ @ 0x18000B310 (--1CSaDeviceProxy@@MEAA@XZ.c)
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
