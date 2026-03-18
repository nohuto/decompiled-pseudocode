/*
 * XREFs of SendMsgCleanup @ 0x1C0106750
 * Callers:
 *     zzzCancelJournalling @ 0x1C00945F8 (zzzCancelJournalling.c)
 *     xxxRestoreCsrssThreadDesktop @ 0x1C00DD140 (xxxRestoreCsrssThreadDesktop.c)
 * Callees:
 *     xxxReceiverDied @ 0x1C01067A8 (xxxReceiverDied.c)
 *     ?SenderDied@@YAXPEAUtagSMS@@@Z @ 0x1C0106828 (-SenderDied@@YAXPEAUtagSMS@@@Z.c)
 */

struct tagSMS *__fastcall SendMsgCleanup(__int64 a1)
{
  struct tagSMS *result; // rax
  struct tagSMS *v3; // rbx
  struct tagSMS *v4; // rcx

  result = (struct tagSMS *)gsmsList;
  v3 = (struct tagSMS *)gsmsList;
  while ( v3 != result )
  {
    v4 = v3;
    v3 = *(struct tagSMS **)v3;
    if ( *((_QWORD *)v4 + 4) == a1 || *((_QWORD *)v4 + 8) == a1 )
    {
      SenderDied(v4);
LABEL_2:
      result = (struct tagSMS *)gsmsList;
    }
    else if ( *((_QWORD *)v4 + 5) == a1 )
    {
      xxxReceiverDied(v4);
      goto LABEL_2;
    }
  }
  return result;
}
