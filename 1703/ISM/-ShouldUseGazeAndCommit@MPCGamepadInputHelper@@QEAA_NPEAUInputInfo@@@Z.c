/*
 * XREFs of ?ShouldUseGazeAndCommit@MPCGamepadInputHelper@@QEAA_NPEAUInputInfo@@@Z @ 0x18004A784
 * Callers:
 *     ?PostHitTestProcessing@MPCGamepadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x18002D8E0 (-PostHitTestProcessing@MPCGamepadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@.c)
 *     ?OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x18002DBB0 (-OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z.c)
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAUIInputDisplay@@PEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIInputTarget@@@Z @ 0x18004B610 (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAUIInputDisplay@@PEAUInputInfo@@PEAUIMPCInput.c)
 * Callees:
 *     <none>
 */

bool __fastcall MPCGamepadInputHelper::ShouldUseGazeAndCommit(MPCGamepadInputHelper *this, struct InputInfo *a2)
{
  bool result; // al
  __int64 v3; // r8
  bool v4; // zf
  char v5; // r8
  char v6; // cl

  result = 1;
  if ( *(_BYTE *)this || *((_BYTE *)this + 26) || *((_BYTE *)a2 + 1072) )
    return 0;
  v3 = *((_QWORD *)a2 + 103);
  if ( v3 == *((_QWORD *)this + 1) || (v4 = v3 == *((_QWORD *)this + 2), v5 = 0, v4) )
    v5 = 1;
  if ( !*((_BYTE *)a2 + 785) || (v6 = 1, *((_BYTE *)a2 + 787)) )
    v6 = 0;
  if ( v5 && v6 )
    return 0;
  return result;
}
