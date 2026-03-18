/*
 * XREFs of ?zzzCancelInertiaState@@YAXPEAUtagTPSTATE@@H@Z @ 0x1C01EDB3C
 * Callers:
 *     ?xxxDoTPGestureProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAXHKPEAH@Z @ 0x1C01EB030 (-xxxDoTPGestureProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVIC.c)
 *     ?xxxDoTPShellProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAXKPEAH@Z @ 0x1C01EBC40 (-xxxDoTPShellProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_.c)
 *     ?xxxDoTouchpadProcessing@@YAHPEAXH@Z @ 0x1C01EBE78 (-xxxDoTouchpadProcessing@@YAHPEAXH@Z.c)
 *     ?xxxInternalTPProcessing@@YA?AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C01EC198 (-xxxInternalTPProcessing@@YA-AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVIC.c)
 * Callees:
 *     FindTimer @ 0x1C00ECDEC (FindTimer.c)
 *     ?zzzSendEndInertia@@YAXPEAUtagTPSTATE@@H@Z @ 0x1C01EDB9C (-zzzSendEndInertia@@YAXPEAUtagTPSTATE@@H@Z.c)
 */

void __fastcall zzzCancelInertiaState(struct tagTPSTATE *a1, int a2)
{
  if ( !a2 && (*((_DWORD *)a1 + 480) & 0x200000) != 0 )
    zzzSendEndInertia(a1, 0);
  *((_DWORD *)a1 + 480) &= 0xFF9FFFFF;
  if ( gtmridTouchpadInertiaTimer )
  {
    FindTimer(0LL, gtmridTouchpadInertiaTimer, 4u, 1, 0LL);
    gtmridTouchpadInertiaTimer = 0LL;
    ghdevTouchpad = 0LL;
  }
}
