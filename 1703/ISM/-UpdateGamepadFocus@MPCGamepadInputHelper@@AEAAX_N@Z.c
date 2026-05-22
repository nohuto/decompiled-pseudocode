/*
 * XREFs of ?UpdateGamepadFocus@MPCGamepadInputHelper@@AEAAX_N@Z @ 0x18004A7DC
 * Callers:
 *     ?OnTargetWithFocus3dChanged@MPCGamepadProcessor@@UEAAJPEAUIMPCInputTarget@@0@Z @ 0x18002D550 (-OnTargetWithFocus3dChanged@MPCGamepadProcessor@@UEAAJPEAUIMPCInputTarget@@0@Z.c)
 *     ??0MPCHolographicInputManager@@AEAA@XZ @ 0x18004A9E0 (--0MPCHolographicInputManager@@AEAA@XZ.c)
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAUIInputDisplay@@PEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIInputTarget@@@Z @ 0x18004B610 (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAUIInputDisplay@@PEAUInputInfo@@PEAUIMPCInput.c)
 * Callees:
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180043FD0 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?LogMPCGamepadInputStealing_@ISMTracing@@QEAAX_N@Z @ 0x18004A678 (-LogMPCGamepadInputStealing_@ISMTracing@@QEAAX_N@Z.c)
 */

void __fastcall MPCGamepadInputHelper::UpdateGamepadFocus(MPCGamepadInputHelper *this, char a2)
{
  _DWORD *v3; // rcx
  ISMTracing *v4; // rcx
  DWORD CurrentProcessId; // [rsp+48h] [rbp+10h] BYREF

  *((_BYTE *)this + 24) = a2;
  v3 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
  if ( v3 && *v3 )
  {
    ISMTracing::Instance();
    ISMTracing::LogMPCGamepadInputStealing_(v4, a2);
  }
  CurrentProcessId = 0;
  if ( a2 )
    CurrentProcessId = GetCurrentProcessId();
  else
    CurrentProcessId = 0;
  RtlPublishWnfStateData(WNF_SHEL_GAMECONTROLLER_FOCUS_INFO, 0LL, &CurrentProcessId, 4LL, 0LL);
}
