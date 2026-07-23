/*
 * XREFs of RtlUserThreadStart @ 0x180051D40
 * Callers:
 *     <none>
 * Callees:
 *     RtlDecodePointer @ 0x180051BD0 (RtlDecodePointer.c)
 *     RtlExitUserThread @ 0x180052920 (RtlExitUserThread.c)
 *     ZwTerminateProcess @ 0x1800A69A0 (ZwTerminateProcess.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 *     RtlUnhandledExceptionFilter2 @ 0x1800F1DF0 (RtlUnhandledExceptionFilter2.c)
 */

void __cdecl RtlUserThreadStart(PTHREAD_START_ROUTINE Function, PVOID Parameter)
{
  NTSTATUS v2; // eax

  if ( !Kernel32ThreadInitThunkFunction )
  {
    v2 = ((__int64 (__fastcall *)(PVOID))Function)(Parameter);
    RtlExitUserThread(v2);
  }
  ((void (__fastcall *)(_QWORD, PTHREAD_START_ROUTINE, PVOID, PTHREAD_START_ROUTINE))Kernel32ThreadInitThunkFunction)(
    0LL,
    Function,
    Parameter,
    Function);
}
