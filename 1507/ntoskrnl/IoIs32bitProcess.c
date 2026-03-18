/*
 * XREFs of IoIs32bitProcess @ 0x140019F50
 * Callers:
 *     PoGetRequester @ 0x1400D1464 (PoGetRequester.c)
 *     IoIsInitiator32bitProcess @ 0x14012D91C (IoIsInitiator32bitProcess.c)
 *     PoGetRequesterOld @ 0x140233688 (PoGetRequesterOld.c)
 *     EtwpGetScsiPassThroughCdb @ 0x14025DB14 (EtwpGetScsiPassThroughCdb.c)
 *     PiCMFastIoDeviceDispatch @ 0x140440BA4 (PiCMFastIoDeviceDispatch.c)
 *     PiDqDispatch @ 0x140441804 (PiDqDispatch.c)
 *     WmipIoControl @ 0x1404A915C (WmipIoControl.c)
 *     WmipProbeWmiOpenGuidBlock @ 0x1404AB210 (WmipProbeWmiOpenGuidBlock.c)
 *     WmipProbeAndCaptureGuidObjectAttributes @ 0x1404AB2C4 (WmipProbeAndCaptureGuidObjectAttributes.c)
 *     PoTraceSystemTimerResolution @ 0x1404F5E30 (PoTraceSystemTimerResolution.c)
 * Callees:
 *     IoGetRequestorProcess @ 0x140019FC0 (IoGetRequestorProcess.c)
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
