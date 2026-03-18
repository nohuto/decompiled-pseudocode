/*
 * XREFs of ?FreeHidDataIfSupported@@YAXPEAUtagHIDDATA@@@Z @ 0x1C00AB420
 * Callers:
 *     <none>
 * Callees:
 *     IsFreeHidDataSupported_0 @ 0x1C0002880 (IsFreeHidDataSupported_0.c)
 *     FreeHidData_0 @ 0x1C0002888 (FreeHidData_0.c)
 */

void __fastcall FreeHidDataIfSupported(struct tagHIDDATA *a1)
{
  if ( (int)IsFreeHidDataSupported_0() >= 0 )
    FreeHidData_0();
}
