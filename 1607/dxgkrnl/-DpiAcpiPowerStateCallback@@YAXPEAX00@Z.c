/*
 * XREFs of ?DpiAcpiPowerStateCallback@@YAXPEAX00@Z @ 0x1C0010AE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DpiAcpiPowerStateCallback(struct _DEVICE_OBJECT *CallbackContext, PVOID Argument1, PVOID Argument2)
{
  if ( (_DWORD)Argument1 == 4 || (_DWORD)Argument1 == 1 )
    DpiAcpiCallAcpiEventHandler(CallbackContext, DxgkPowerStateEvent, (unsigned int)Argument1, Argument2);
}
