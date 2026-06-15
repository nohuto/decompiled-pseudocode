/*
 * XREFs of ??_GCDriverListener@@UEAAPEAXI@Z @ 0x18001FC60
 * Callers:
 *     <none>
 * Callees:
 *     ??1CDriverListener@@UEAA@XZ @ 0x18001FC94 (--1CDriverListener@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800210D4 (--3@YAXPEAX_K@Z.c)
 */

CDriverListener *__fastcall CDriverListener::`scalar deleting destructor'(CDriverListener *this, char a2)
{
  CDriverListener::~CDriverListener(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x208uLL);
  return this;
}
