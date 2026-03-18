/*
 * XREFs of BootCompleteCallback @ 0x1C00734E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall BootCompleteCallback(struct _DRIVER_OBJECT *DriverObject, PVOID Context, ULONG Count)
{
  AcpiIsBootComplete = 1;
}
