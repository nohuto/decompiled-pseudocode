/*
 * XREFs of ACPIRootPowerCallBack @ 0x1C0023700
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ACPIRootPowerCallBack(PVOID CallbackContext, PVOID Argument1, PVOID Argument2)
{
  if ( (_DWORD)Argument1 == 3 )
    sub_1C0033602(CallbackContext, Argument1, Argument2);
}
