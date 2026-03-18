/*
 * XREFs of IoIs32bitProcess @ 0x140090B20
 * Callers:
 *     PoGetRequester @ 0x140097AA8 (PoGetRequester.c)
 *     IoIsInitiator32bitProcess @ 0x1400F2BFC (IoIsInitiator32bitProcess.c)
 *     FsRtlGetMarkHandleInfo @ 0x1401ACD44 (FsRtlGetMarkHandleInfo.c)
 *     EtwpGetScsiPassThroughCdb @ 0x14020E7EC (EtwpGetScsiPassThroughCdb.c)
 *     WmipIoControl @ 0x1403D24BC (WmipIoControl.c)
 *     PiCMFastIoDeviceDispatch @ 0x140442920 (PiCMFastIoDeviceDispatch.c)
 *     PiDqDispatch @ 0x14045DCD4 (PiDqDispatch.c)
 *     PoTraceSystemTimerResolution @ 0x1404B5070 (PoTraceSystemTimerResolution.c)
 *     WmipProbeWmiOpenGuidBlock @ 0x1404BE744 (WmipProbeWmiOpenGuidBlock.c)
 *     WmipProbeAndCaptureGuidObjectAttributes @ 0x1404BE7F8 (WmipProbeAndCaptureGuidObjectAttributes.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall IoIs32bitProcess(PIRP Irp)
{
  PETHREAD Thread; // rdx
  unsigned __int64 Process; // rax
  CCHAR ApcEnvironment; // al

  if ( Irp )
  {
    if ( Irp->RequestorMode == 1 )
    {
      Thread = Irp->Tail.Overlay.Thread;
      if ( (Irp->Flags & 0x2000) != 0 )
      {
        Process = Irp->Overlay.AllocationSize.QuadPart & 0xFFFFFFFFFFFFFFF9uLL;
        return Process && *(_QWORD *)(Process + 1064);
      }
      if ( Thread )
      {
        ApcEnvironment = Irp->ApcEnvironment;
        if ( !ApcEnvironment )
        {
          Process = (unsigned __int64)Thread->Process;
          return Process && *(_QWORD *)(Process + 1064);
        }
        if ( ApcEnvironment == 1 )
        {
          Process = (unsigned __int64)Thread->ApcState.Process;
          return Process && *(_QWORD *)(Process + 1064);
        }
      }
    }
    return 0;
  }
  return KeGetCurrentThread()->PreviousMode == 1 && KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7];
}
