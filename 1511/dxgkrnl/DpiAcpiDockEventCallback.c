/*
 * XREFs of DpiAcpiDockEventCallback @ 0x1C01719E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiAcpiDockEventCallback(PVOID NotificationStructure, struct _DEVICE_OBJECT *Context)
{
  return DpiAcpiCallAcpiEventHandler(Context, DxgkDockingEvent, 0x77u, 0LL);
}
