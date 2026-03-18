/*
 * XREFs of MiCommitRequestFailed @ 0x140220B88
 * Callers:
 *     MiChargeFullProcessCommitment @ 0x1404BBC10 (MiChargeFullProcessCommitment.c)
 * Callees:
 *     KeRequestTerminationThread @ 0x14000C2F4 (KeRequestTerminationThread.c)
 */

struct _KTHREAD *__fastcall MiCommitRequestFailed(__int64 a1)
{
  struct _KTHREAD *result; // rax
  struct _KTHREAD *CurrentThread; // rcx

  result = KeGetCurrentThread();
  if ( result->ApcStateIndex != 1 && (*(_DWORD *)(a1 + 772) & 0x100) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( !_interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x11u) )
      return (struct _KTHREAD *)KeRequestTerminationThread((__int64)CurrentThread);
  }
  return result;
}
