/*
 * XREFs of DbgkExitThread @ 0x14061ACBC
 * Callers:
 *     PspExitThread @ 0x1404F950C (PspExitThread.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     DbgkpSendApiMessage @ 0x14061A3C0 (DbgkpSendApiMessage.c)
 */

struct _KTHREAD *__fastcall DbgkExitThread(int a1)
{
  struct _KTHREAD *result; // rax
  int v3; // r8d
  _KPROCESS *Process; // rcx
  _DWORD v5[68]; // [rsp+20h] [rbp-128h] BYREF

  result = KeGetCurrentThread();
  v3 = *((_DWORD *)&result[1].SwapListEntry + 2);
  Process = result->ApcState.Process;
  if ( (v3 & 4) == 0 )
  {
    result = (struct _KTHREAD *)Process[1].ActiveProcessors.Bitmap[6];
    if ( result )
    {
      if ( (v3 & 2) != 0 )
      {
        v5[12] = a1;
        v5[0] = 3407884;
        v5[1] = 8;
        v5[10] = 3;
        return (struct _KTHREAD *)DbgkpSendApiMessage(Process, 1, (__int64)v5);
      }
    }
  }
  return result;
}
