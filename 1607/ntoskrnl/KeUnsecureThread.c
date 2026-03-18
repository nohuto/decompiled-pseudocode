/*
 * XREFs of KeUnsecureThread @ 0x1401D305C
 * Callers:
 *     PspExitThread @ 0x14051611C (PspExitThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeUnsecureThread(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 SecureThreadCookie; // rcx

  CurrentThread = KeGetCurrentThread();
  SecureThreadCookie = CurrentThread->SecureThreadCookie;
  CurrentThread->SecureThreadCookie = 0;
  return VslTerminateSecureThread(SecureThreadCookie, a1);
}
