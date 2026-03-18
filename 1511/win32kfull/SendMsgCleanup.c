/*
 * XREFs of SendMsgCleanup @ 0x1C00D0790
 * Callers:
 *     xxxRestoreCsrssThreadDesktop @ 0x1C00CEA50 (xxxRestoreCsrssThreadDesktop.c)
 *     zzzCancelJournalling @ 0x1C010A868 (zzzCancelJournalling.c)
 * Callees:
 *     xxxReceiverDied @ 0x1C00D07E4 (xxxReceiverDied.c)
 *     ?SenderDied@@YAXPEAUtagSMS@@@Z @ 0x1C00D0888 (-SenderDied@@YAXPEAUtagSMS@@@Z.c)
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
LABEL_7:
      result = (struct tagSMS *)gsmsList;
    }
    else if ( *((_QWORD *)v4 + 5) == a1 )
    {
      xxxReceiverDied(v4);
      goto LABEL_7;
    }
  }
  return result;
}
