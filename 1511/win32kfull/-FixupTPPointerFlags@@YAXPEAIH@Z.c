/*
 * XREFs of ?FixupTPPointerFlags@@YAXPEAIH@Z @ 0x1C01F16DC
 * Callers:
 *     ?FixupPrimaryGestureContact@@YAXPEAUtagPOINTERINFONODE@@IPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@H@Z @ 0x1C01F1480 (-FixupPrimaryGestureContact@@YAXPEAUtagPOINTERINFONODE@@IPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVI.c)
 *     ?FixupSecondaryGestureContacts@@YAXPEAUtagPOINTERINFONODE@@IPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@H@Z @ 0x1C01F15C4 (-FixupSecondaryGestureContacts@@YAXPEAUtagPOINTERINFONODE@@IPEAUtagTPSTATE@@PEAUtagHID_POINTER_D.c)
 * Callees:
 *     <none>
 */

void __fastcall FixupTPPointerFlags(unsigned int *a1, int a2)
{
  if ( (*a1 & 0x40000) == 0 )
  {
    if ( a2 )
      *a1 = *a1 & 0xFFFCFFFF | 0x10000;
    *a1 |= 0x14u;
  }
}
