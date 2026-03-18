/*
 * XREFs of ?CancelInertiaState@@YAXPEAUtagTPSTATE@@H@Z @ 0x1C01F1008
 * Callers:
 *     ?CheckTouchpadCachedInertia@@YAXPEAX@Z @ 0x1C01F10D4 (-CheckTouchpadCachedInertia@@YAXPEAX@Z.c)
 *     ?DoTPShellProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@KPEAH@Z @ 0x1C01F1214 (-DoTPShellProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INF.c)
 *     ?xxxDoTPGestureProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAXHKPEAH@Z @ 0x1C01F4330 (-xxxDoTPGestureProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVIC.c)
 *     ?xxxInternalTPProcessing@@YA?AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C01F4EA4 (-xxxInternalTPProcessing@@YA-AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVIC.c)
 * Callees:
 *     FindTimer @ 0x1C0079B7C (FindTimer.c)
 *     ?SendEndInertia@@YAXPEAUtagTPSTATE@@@Z @ 0x1C01F202C (-SendEndInertia@@YAXPEAUtagTPSTATE@@@Z.c)
 */

void __fastcall CancelInertiaState(struct tagTPSTATE *a1, int a2)
{
  if ( !a2 && *((_QWORD *)a1 + 159) && (*((_DWORD *)a1 + 316) & 0x400000) != 0 )
    SendEndInertia(a1);
  *((_DWORD *)a1 + 316) &= 0xFF3FFFFF;
  if ( gtmridTouchpadInertiaTimer )
  {
    FindTimer(0LL, gtmridTouchpadInertiaTimer, 4u, 1, 0LL);
    gtmridTouchpadInertiaTimer = 0LL;
    ghdevTouchpad = 0LL;
  }
  *((_QWORD *)a1 + 159) = 0LL;
}
