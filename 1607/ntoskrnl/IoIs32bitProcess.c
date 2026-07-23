/*
 * XREFs of IoIs32bitProcess @ 0x1400C1690
 * Callers:
 *     IoIsInitiator32bitProcess @ 0x1400B1F5C (IoIsInitiator32bitProcess.c)
 *     PoGetRequester @ 0x1400F9F54 (PoGetRequester.c)
 *     FsRtlGetMarkHandleInfo @ 0x1401B8FF4 (FsRtlGetMarkHandleInfo.c)
 *     EtwpGetScsiPassThroughCdb @ 0x1402264CC (EtwpGetScsiPassThroughCdb.c)
 *     PoTraceSystemTimerResolution @ 0x1403EB4E0 (PoTraceSystemTimerResolution.c)
 *     WmipIoControl @ 0x140473894 (WmipIoControl.c)
 *     WmipProbeWmiOpenGuidBlock @ 0x140473BD0 (WmipProbeWmiOpenGuidBlock.c)
 *     WmipProbeAndCaptureGuidObjectAttributes @ 0x140473C84 (WmipProbeAndCaptureGuidObjectAttributes.c)
 *     PiDqDispatch @ 0x14048B6C4 (PiDqDispatch.c)
 *     PiCMFastIoDeviceDispatch @ 0x1404DF6A4 (PiCMFastIoDeviceDispatch.c)
 * Callees:
 *     IoGetRequestorProcess @ 0x1400C1700 (IoGetRequestorProcess.c)
 */

BOOLEAN __stdcall IoIs32bitProcess(PIRP Irp)
{
  PEPROCESS RequestorProcess; // rax

  if ( Irp )
  {
    if ( Irp->RequestorMode != 1 )
      return 0;
    RequestorProcess = IoGetRequestorProcess(Irp);
    return RequestorProcess && RequestorProcess[1].ActiveProcessors.Bitmap[7];
  }
  else
  {
    return KeGetCurrentThread()->PreviousMode == 1
        && KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7];
  }
}
