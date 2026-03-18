/*
 * XREFs of IoIs32bitProcess @ 0x1400C3800
 * Callers:
 *     IoIsInitiator32bitProcess @ 0x1400B40DC (IoIsInitiator32bitProcess.c)
 *     PoGetRequester @ 0x1400FC1D4 (PoGetRequester.c)
 *     FsRtlGetMarkHandleInfo @ 0x1401B92A0 (FsRtlGetMarkHandleInfo.c)
 *     EtwpGetScsiPassThroughCdb @ 0x1402266A0 (EtwpGetScsiPassThroughCdb.c)
 *     PoTraceSystemTimerResolution @ 0x1403E9EB0 (PoTraceSystemTimerResolution.c)
 *     WmipIoControl @ 0x1404749C4 (WmipIoControl.c)
 *     WmipProbeWmiOpenGuidBlock @ 0x140474D00 (WmipProbeWmiOpenGuidBlock.c)
 *     WmipProbeAndCaptureGuidObjectAttributes @ 0x140474DB4 (WmipProbeAndCaptureGuidObjectAttributes.c)
 *     PiDqDispatch @ 0x14048B160 (PiDqDispatch.c)
 *     PiCMFastIoDeviceDispatch @ 0x1404FC714 (PiCMFastIoDeviceDispatch.c)
 * Callees:
 *     IoGetRequestorProcess @ 0x1400C3870 (IoGetRequestorProcess.c)
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
