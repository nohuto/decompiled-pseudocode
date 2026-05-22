/*
 * XREFs of ?Process2DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18002D890
 * Callers:
 *     <none>
 * Callees:
 *     ?ClearControllerProcessorState@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x18002EB60 (-ClearControllerProcessorState@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 */

__int64 __fastcall MPCGamepadProcessor::Process2DInput(MPCGamepadProcessor *this, struct InputInfo *a2)
{
  if ( *((_BYTE *)this + 2509) )
  {
    *((_BYTE *)this + 2509) = 0;
    MPCGamepadProcessor::ClearControllerProcessorState((MPCGamepadProcessor *)((char *)this - 24), a2);
  }
  return (*(__int64 (__fastcall **)(_QWORD, struct InputInfo *))(**((_QWORD **)this + 19) + 48LL))(
           *((_QWORD *)this + 19),
           a2);
}
