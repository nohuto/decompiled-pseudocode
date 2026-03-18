/*
 * XREFs of _guard_dispatch_icall_nop @ 0x1C000EA90
 * Callers:
 *     NVMeDeviceCompleteAllIORequests @ 0x1C0004BCC (NVMeDeviceCompleteAllIORequests.c)
 *     NVMeControllerCompleteAllIORequests @ 0x1C0004CD4 (NVMeControllerCompleteAllIORequests.c)
 *     NVMeCompletionDpcRoutine @ 0x1C000C700 (NVMeCompletionDpcRoutine.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall guard_dispatch_icall_nop()
{
  __int64 (*v0)(void); // rax

  return v0();
}
