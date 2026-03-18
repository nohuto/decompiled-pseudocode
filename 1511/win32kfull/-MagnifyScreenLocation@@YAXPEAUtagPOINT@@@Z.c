/*
 * XREFs of ?MagnifyScreenLocation@@YAXPEAUtagPOINT@@@Z @ 0x1C01F1E74
 * Callers:
 *     ?FixupPrimaryGestureContact@@YAXPEAUtagPOINTERINFONODE@@IPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@H@Z @ 0x1C01F1480 (-FixupPrimaryGestureContact@@YAXPEAUtagPOINTERINFONODE@@IPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVI.c)
 *     ?FixupSecondaryGestureContacts@@YAXPEAUtagPOINTERINFONODE@@IPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@H@Z @ 0x1C01F15C4 (-FixupSecondaryGestureContacts@@YAXPEAUtagPOINTERINFONODE@@IPEAUtagTPSTATE@@PEAUtagHID_POINTER_D.c)
 * Callees:
 *     AcquireMagInputLock @ 0x1C0009F50 (AcquireMagInputLock.c)
 *     PtInRect @ 0x1C0066AB8 (PtInRect.c)
 *     MagInputTransform @ 0x1C0203BD4 (MagInputTransform.c)
 *     MagnificationTransformPoint @ 0x1C0203C9C (MagnificationTransformPoint.c)
 */

void __fastcall MagnifyScreenLocation(struct tagPOINT *a1)
{
  __int64 v2; // rax
  __int64 v3; // r8

  AcquireMagInputLock();
  v2 = MagInputTransform();
  if ( v2 && PtInRect((_DWORD *)(v2 + 16), (unsigned __int64)*a1) )
    MagnificationTransformPoint(v3, a1);
  _InterlockedExchange64(&gpMagInputLock, 0LL);
}
