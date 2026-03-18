/*
 * XREFs of ?ProcessMouseInputApiExt@@YAXPEAUDEVICEINFO@@@Z @ 0x1C00A4700
 * Callers:
 *     <none>
 * Callees:
 *     IsProcessMouseInputSupported_0 @ 0x1C0001AC0 (IsProcessMouseInputSupported_0.c)
 *     ProcessMouseInput_0 @ 0x1C0001AC8 (ProcessMouseInput_0.c)
 */

void __fastcall ProcessMouseInputApiExt(struct DEVICEINFO *a1)
{
  if ( (int)IsProcessMouseInputSupported_0() >= 0 )
    ProcessMouseInput_0();
}
