/*
 * XREFs of imp_WdfVerifierDbgBreakPoint @ 0x1C0067CE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_WdfVerifierDbgBreakPoint(_WDF_DRIVER_GLOBALS *DriverGlobals)
{
  if ( BYTE2(DriverGlobals[-2].DriverTag) )
    DbgBreakPoint();
}
