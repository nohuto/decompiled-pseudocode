/*
 * XREFs of ?SendEndInertia@@YAXPEAUtagTPSTATE@@@Z @ 0x1C01F202C
 * Callers:
 *     xxxAssessPointerContactState @ 0x1C01CD534 (xxxAssessPointerContactState.c)
 *     ?CancelInertiaState@@YAXPEAUtagTPSTATE@@H@Z @ 0x1C01F1008 (-CancelInertiaState@@YAXPEAUtagTPSTATE@@H@Z.c)
 *     ?xxxDoTPButtonProcessing@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@HKPEAH@Z @ 0x1C01F3238 (-xxxDoTPButtonProcessing@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE.c)
 *     ?xxxDoTPDiscreteButtonProcessing@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAH2@Z @ 0x1C01F3CDC (-xxxDoTPDiscreteButtonProcessing@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAH2@Z.c)
 *     ?xxxDoTPMouseProcessing@@YA?AW4tagTP_PROCESSING_MODE@@PEBUtagPOINTERINPUTFRAME@@KPEAUtagTPSTATE@@@Z @ 0x1C01F4538 (-xxxDoTPMouseProcessing@@YA-AW4tagTP_PROCESSING_MODE@@PEBUtagPOINTERINPUTFRAME@@KPEAUtagTPSTATE@.c)
 * Callees:
 *     FindTimer @ 0x1C0079B7C (FindTimer.c)
 *     PostInertiaMessage @ 0x1C02398B8 (PostInertiaMessage.c)
 */

void __fastcall SendEndInertia(struct tagTPSTATE *a1)
{
  EtwTraceTouchpadEndInertiaQueued();
  PostInertiaMessage(
    572LL,
    *((_QWORD *)a1 + 159),
    (unsigned int)-__CFSHR__(*((_DWORD *)a1 + 316), 25),
    *((_QWORD *)a1 + 160),
    *((_QWORD *)a1 + 161));
  *((_DWORD *)a1 + 316) &= ~0x400000u;
  if ( gtmridTouchpadInertiaTimer )
  {
    FindTimer(0LL, gtmridTouchpadInertiaTimer, 4u, 1, 0LL);
    gtmridTouchpadInertiaTimer = 0LL;
    ghdevTouchpad = 0LL;
  }
}
