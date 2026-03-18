/*
 * XREFs of BootCompleteCallback @ 0x1C0073570
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall BootCompleteCallback(struct _DRIVER_OBJECT *DriverObject, PVOID Context, ULONG Count)
{
  AcpiIsBootComplete = 1;
}
