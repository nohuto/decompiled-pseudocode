/*
 * XREFs of ??_GCDriverListener@@UEAAPEAXI@Z @ 0x180023170
 * Callers:
 *     <none>
 * Callees:
 *     ??1CDriverListener@@UEAA@XZ @ 0x1800231B4 (--1CDriverListener@@UEAA@XZ.c)
 */

CDriverListener *__fastcall CDriverListener::`scalar deleting destructor'(CDriverListener *this, char a2)
{
  HANDLE ProcessHeap; // rax

  CDriverListener::~CDriverListener(this);
  if ( (a2 & 1) != 0 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, this);
  }
  return this;
}
