/*
 * XREFs of ?FreeHidDataIfSupported@@YAXPEAUtagHIDDATA@@@Z @ 0x1C00B9620
 * Callers:
 *     <none>
 * Callees:
 *     IsFreeHidDataSupported_0 @ 0x1C00028B0 (IsFreeHidDataSupported_0.c)
 *     FreeHidData_0 @ 0x1C00028B8 (FreeHidData_0.c)
 */

void __fastcall FreeHidDataIfSupported(struct tagHIDDATA *a1)
{
  if ( (int)IsFreeHidDataSupported_0() >= 0 )
    FreeHidData_0();
}
