/*
 * XREFs of MiCommitRequestFailed @ 0x1401ECDEC
 * Callers:
 *     MiChargeFullProcessCommitment @ 0x140430960 (MiChargeFullProcessCommitment.c)
 * Callees:
 *     KeRequestTerminationThread @ 0x1400C9DE0 (KeRequestTerminationThread.c)
 *     KeIsAttachedProcess @ 0x1400E7E80 (KeIsAttachedProcess.c)
 *     MiLogCommitRequestFailed @ 0x1401ECE34 (MiLogCommitRequestFailed.c)
 */

void __fastcall MiCommitRequestFailed(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  struct _KTHREAD *CurrentThread; // rcx

  MiLogCommitRequestFailed(a1, a3, a4);
  if ( !KeIsAttachedProcess() && (*(_DWORD *)(a1 + 772) & 0x100) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( !_interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x11u) )
      KeRequestTerminationThread((__int64)CurrentThread);
  }
}
