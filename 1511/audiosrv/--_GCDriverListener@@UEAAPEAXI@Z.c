/*
 * XREFs of ??_GCDriverListener@@UEAAPEAXI@Z @ 0x1800A8A40
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 *     ?UnsubscribeWnfNotifications@CDriverListener@@AEAAJXZ @ 0x1800A8DE8 (-UnsubscribeWnfNotifications@CDriverListener@@AEAAJXZ.c)
 */

CDriverListener *__fastcall CDriverListener::`scalar deleting destructor'(CDriverListener *this, char a2)
{
  *(_QWORD *)this = &CDriverListener::`vftable';
  CDriverListener::UnsubscribeWnfNotifications(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
