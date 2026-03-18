/*
 * XREFs of WPP_RECORDER_SF_qL @ 0x1C001CC74
 * Callers:
 *     Interrupter_D0ExitStopped @ 0x1C0003B2C (Interrupter_D0ExitStopped.c)
 *     Controller_D0Exit @ 0x1C0003DDC (Controller_D0Exit.c)
 *     Interrupter_D0Entry @ 0x1C0004E40 (Interrupter_D0Entry.c)
 *     Command_HandleCommandCompletionEvent @ 0x1C000F3C0 (Command_HandleCommandCompletionEvent.c)
 *     Command_ControllerResetPostReset @ 0x1C001B590 (Command_ControllerResetPostReset.c)
 *     Command_FailAllCommands @ 0x1C001B84C (Command_FailAllCommands.c)
 *     Command_SendCommand @ 0x1C001C18C (Command_SendCommand.c)
 *     Command_WdfEvtTimerFunction @ 0x1C001C2A0 (Command_WdfEvtTimerFunction.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000FEA0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_qL(__int64 a1, unsigned __int8 a2, unsigned int a3, unsigned __int16 a4, __int64 a5, ...)
{
  unsigned __int64 v8; // rdi
  int v10; // eax
  int v12; // [rsp+20h] [rbp-48h]
  __int64 v13; // [rsp+98h] [rbp+30h] BYREF
  va_list va; // [rsp+98h] [rbp+30h]
  va_list va1; // [rsp+A0h] [rbp+38h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v13 = va_arg(va1, _QWORD);
  v8 = (unsigned __int64)a3 >> 16;
  v10 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v8 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v10, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v8 + 1) >= a2 )
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, __int64 *, __int64, char *, __int64, _QWORD))WPP_MAIN_CB.DeviceQueue.32)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v8),
      43LL,
      a5,
      a4,
      (__int64 *)va,
      8LL,
      va1,
      4LL,
      0LL);
  LOWORD(v12) = a4;
  return WppAutoLogTrace(a1, a2, a3, a5, v12, (__int64 *)va);
}
