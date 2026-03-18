/*
 * XREFs of MiCommitRequestFailed @ 0x1401DBED8
 * Callers:
 *     MiChargeFullProcessCommitment @ 0x14041AAC0 (MiChargeFullProcessCommitment.c)
 * Callees:
 *     KeRequestTerminationThread @ 0x140030C48 (KeRequestTerminationThread.c)
 *     KeIsAttachedProcess @ 0x1400701C0 (KeIsAttachedProcess.c)
 */

char __fastcall MiCommitRequestFailed(__int64 a1)
{
  char result; // al
  struct _KTHREAD *CurrentThread; // rcx

  result = KeIsAttachedProcess();
  if ( !result && (*(_DWORD *)(a1 + 772) & 0x100) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( !_interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x11u) )
      return KeRequestTerminationThread((__int64)CurrentThread);
  }
  return result;
}
