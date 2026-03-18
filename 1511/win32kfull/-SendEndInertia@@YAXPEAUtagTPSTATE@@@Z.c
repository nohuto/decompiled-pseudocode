/*
 * XREFs of ?SendEndInertia@@YAXPEAUtagTPSTATE@@@Z @ 0x1C01F22D8
 * Callers:
 *     xxxAssessPointerContactState @ 0x1C01CF118 (xxxAssessPointerContactState.c)
 *     ?CancelInertiaState@@YAXPEAUtagTPSTATE@@H@Z @ 0x1C01F0F68 (-CancelInertiaState@@YAXPEAUtagTPSTATE@@H@Z.c)
 *     ?xxxDoTPButtonProcessing@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@HKPEAH@Z @ 0x1C01F3568 (-xxxDoTPButtonProcessing@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE.c)
 *     ?xxxDoTPDiscreteButtonProcessing@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAH2@Z @ 0x1C01F4054 (-xxxDoTPDiscreteButtonProcessing@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAH2@Z.c)
 *     ?xxxDoTPMouseProcessing@@YA?AW4tagTP_PROCESSING_MODE@@PEBUtagPOINTERINPUTFRAME@@KPEAUtagTPSTATE@@@Z @ 0x1C01F4898 (-xxxDoTPMouseProcessing@@YA-AW4tagTP_PROCESSING_MODE@@PEBUtagPOINTERINPUTFRAME@@KPEAUtagTPSTATE@.c)
 * Callees:
 *     FindTimer @ 0x1C00F646C (FindTimer.c)
 *     PostInertiaMessage @ 0x1C0239A9C (PostInertiaMessage.c)
 */

void __fastcall SendEndInertia(struct tagTPSTATE *a1)
{
  EtwTraceTouchpadEndInertiaQueued();
  PostInertiaMessage(
    572LL,
    *((_QWORD *)a1 + 195),
    (unsigned int)-__CFSHR__(*((_DWORD *)a1 + 386), 25),
    *((_QWORD *)a1 + 196),
    *((_QWORD *)a1 + 197));
  *((_DWORD *)a1 + 386) &= ~0x400000u;
  if ( gtmridTouchpadInertiaTimer )
  {
    FindTimer(0LL, gtmridTouchpadInertiaTimer, 4u, 1, 0LL);
    gtmridTouchpadInertiaTimer = 0LL;
    ghdevTouchpad = 0LL;
  }
}
