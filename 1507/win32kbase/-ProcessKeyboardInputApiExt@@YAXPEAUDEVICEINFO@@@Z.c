/*
 * XREFs of ?ProcessKeyboardInputApiExt@@YAXPEAUDEVICEINFO@@@Z @ 0x1C00A46E0
 * Callers:
 *     <none>
 * Callees:
 *     IsProcessKeyboardInputSupported_0 @ 0x1C0001AD0 (IsProcessKeyboardInputSupported_0.c)
 *     ProcessKeyboardInput_0 @ 0x1C0001AD8 (ProcessKeyboardInput_0.c)
 */

void __fastcall ProcessKeyboardInputApiExt(struct DEVICEINFO *a1)
{
  if ( (int)IsProcessKeyboardInputSupported_0() >= 0 )
    ProcessKeyboardInput_0();
}
