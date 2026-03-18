/*
 * XREFs of Etw_CommandWaitlisted @ 0x1C0030AE8
 * Callers:
 *     Command_InternalSendCommand @ 0x1C0017F70 (Command_InternalSendCommand.c)
 * Callees:
 *     Template_ppbc @ 0x1C00314AC (Template_ppbc.c)
 */

__int64 __fastcall Etw_CommandWaitlisted(int a1, __int64 a2, __int64 a3, char a4)
{
  __int64 result; // rax

  result = LODWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 0x20) != 0 )
    return Template_ppbc(a1, a2, a3, *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL), a3, a3 + 24, a4);
  return result;
}
