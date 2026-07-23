/*
 * XREFs of ZwShutdownSystem @ 0x140153980
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwShutdownSystem(SHUTDOWN_ACTION Action)
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&Action);
}
