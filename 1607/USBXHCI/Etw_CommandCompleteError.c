/*
 * XREFs of Etw_CommandCompleteError @ 0x1C0033BFC
 * Callers:
 *     Command_HandleCommandCompletionEvent @ 0x1C000F3C0 (Command_HandleCommandCompletionEvent.c)
 *     Command_ControllerResetPostReset @ 0x1C001B590 (Command_ControllerResetPostReset.c)
 *     Command_FailAllCommands @ 0x1C001B84C (Command_FailAllCommands.c)
 *     Command_HandleCommandRingStoppedEvent @ 0x1C001B9B4 (Command_HandleCommandRingStoppedEvent.c)
 *     Command_WdfEvtTimerFunction @ 0x1C001C2A0 (Command_WdfEvtTimerFunction.c)
 * Callees:
 *     Template_ppbqc @ 0x1C003464C (Template_ppbqc.c)
 */

__int64 __fastcall Etw_CommandCompleteError(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 result; // rax

  result = LODWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 0x40) != 0 )
    return Template_ppbqc(
             (int)a3 + 24,
             (unsigned int)&USBXHCI_ETW_EVENT_COMMAND_COMPLETE_ERROR,
             a3,
             *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL),
             a3,
             a3 + 24,
             a4,
             *(_BYTE *)(a3 + 68));
  return result;
}
