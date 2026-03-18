/*
 * XREFs of DbgkExitProcess @ 0x1405F0934
 * Callers:
 *     PspExitThread @ 0x1403F0588 (PspExitThread.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     DbgkpSendApiMessage @ 0x1405F071C (DbgkpSendApiMessage.c)
 */

struct _KTHREAD *__fastcall DbgkExitProcess(int a1)
{
  struct _KTHREAD *result; // rax
  int v3; // r8d
  _KPROCESS *Process; // rcx
  _DWORD v5[68]; // [rsp+20h] [rbp-128h] BYREF

  result = KeGetCurrentThread();
  v3 = *((_DWORD *)&result[1].SwapListEntry + 3);
  Process = result->ApcState.Process;
  if ( (v3 & 4) == 0 )
  {
    result = (struct _KTHREAD *)Process[1].ActiveProcessors.Bitmap[6];
    if ( result )
    {
      if ( (v3 & 2) != 0 )
      {
        Process[2].Affinity.Bitmap[15] = MEMORY[0xFFFFF78000000014];
        v5[12] = a1;
        v5[0] = 3407884;
        v5[1] = 8;
        v5[10] = 4;
        return (struct _KTHREAD *)DbgkpSendApiMessage(Process, 0, (__int64)v5);
      }
    }
  }
  return result;
}
