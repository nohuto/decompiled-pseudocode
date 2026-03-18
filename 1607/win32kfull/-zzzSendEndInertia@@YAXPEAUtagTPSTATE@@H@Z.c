/*
 * XREFs of ?zzzSendEndInertia@@YAXPEAUtagTPSTATE@@H@Z @ 0x1C01EDB9C
 * Callers:
 *     ?xxxDoTPButtonProcessing@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@HKPEAH@Z @ 0x1C01E9BB8 (-xxxDoTPButtonProcessing@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE.c)
 *     ?xxxDoTPDiscreteButtonProcessing@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAH2@Z @ 0x1C01EA898 (-xxxDoTPDiscreteButtonProcessing@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAH2@Z.c)
 *     ?xxxDoTPMouseProcessing@@YA?AW4tagTP_PROCESSING_MODE@@PEBUtagPOINTERINPUTFRAME@@KPEAUtagTPSTATE@@@Z @ 0x1C01EB354 (-xxxDoTPMouseProcessing@@YA-AW4tagTP_PROCESSING_MODE@@PEBUtagPOINTERINPUTFRAME@@KPEAUtagTPSTATE@.c)
 *     ?zzzCancelInertiaState@@YAXPEAUtagTPSTATE@@H@Z @ 0x1C01EDB3C (-zzzCancelInertiaState@@YAXPEAUtagTPSTATE@@H@Z.c)
 * Callees:
 *     FindTimer @ 0x1C00ECDEC (FindTimer.c)
 *     zzzPostInertiaMessage @ 0x1C022A498 (zzzPostInertiaMessage.c)
 */

void __fastcall zzzSendEndInertia(struct tagTPSTATE *a1)
{
  EtwTraceTouchpadEndInertiaQueued();
  zzzPostInertiaMessage(0x23Cu);
  *((_DWORD *)a1 + 480) &= ~0x200000u;
  if ( gtmridTouchpadInertiaTimer )
  {
    FindTimer(0LL, gtmridTouchpadInertiaTimer, 4u, 1, 0LL);
    gtmridTouchpadInertiaTimer = 0LL;
    ghdevTouchpad = 0LL;
  }
}
