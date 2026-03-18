/*
 * XREFs of BootCompleteCallback @ 0x1C0090BC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall BootCompleteCallback(struct _DRIVER_OBJECT *DriverObject, PVOID Context, ULONG Count)
{
  LOBYTE(WPP_MAIN_CB.Queue.ListEntry.Flink) = 1;
}
