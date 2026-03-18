/*
 * XREFs of _guard_dispatch_icall_nop @ 0x1C000EBC0
 * Callers:
 *     NVMeDeviceCompleteAllIORequests @ 0x1C0004CBC (NVMeDeviceCompleteAllIORequests.c)
 *     NVMeControllerCompleteAllIORequests @ 0x1C0004DC4 (NVMeControllerCompleteAllIORequests.c)
 *     NVMeCompletionDpcRoutine @ 0x1C000C830 (NVMeCompletionDpcRoutine.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall guard_dispatch_icall_nop()
{
  __int64 (*v0)(void); // rax

  return v0();
}
