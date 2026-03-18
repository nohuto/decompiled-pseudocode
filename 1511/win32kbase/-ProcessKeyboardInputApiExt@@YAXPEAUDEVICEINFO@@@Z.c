/*
 * XREFs of ?ProcessKeyboardInputApiExt@@YAXPEAUDEVICEINFO@@@Z @ 0x1C00A9150
 * Callers:
 *     <none>
 * Callees:
 *     IsProcessKeyboardInputSupported_0 @ 0x1C0001AF0 (IsProcessKeyboardInputSupported_0.c)
 *     ProcessKeyboardInput_0 @ 0x1C0001AF8 (ProcessKeyboardInput_0.c)
 */

void __fastcall ProcessKeyboardInputApiExt(struct DEVICEINFO *a1)
{
  if ( (int)IsProcessKeyboardInputSupported_0() >= 0 )
    ProcessKeyboardInput_0();
}
