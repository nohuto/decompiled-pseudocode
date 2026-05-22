/*
 * XREFs of ?ShouldHandleMPCInput@MPCGamepadInputHelper@@QEAA_NXZ @ 0x18004A750
 * Callers:
 *     ?Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18002D660 (-Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x18002DBB0 (-OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z.c)
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAUIInputDisplay@@PEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIInputTarget@@@Z @ 0x18004B610 (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAUIInputDisplay@@PEAUInputInfo@@PEAUIMPCInput.c)
 * Callees:
 *     <none>
 */

char __fastcall MPCGamepadInputHelper::ShouldHandleMPCInput(MPCGamepadInputHelper *this)
{
  char v1; // dl

  v1 = 1;
  if ( ((1LL << gdwDeviceFamily) & 0x400) == 0 && !*((_BYTE *)this + 25) || *(_BYTE *)this || *((_BYTE *)this + 26) )
    return 0;
  return v1;
}
