/*
 * XREFs of MiCommitRequestFailed @ 0x1401ECC18
 * Callers:
 *     MiChargeFullProcessCommitment @ 0x14042F830 (MiChargeFullProcessCommitment.c)
 * Callees:
 *     KeRequestTerminationThread @ 0x1400C7C80 (KeRequestTerminationThread.c)
 *     KeIsAttachedProcess @ 0x1400E5D20 (KeIsAttachedProcess.c)
 *     MiLogCommitRequestFailed @ 0x1401ECC60 (MiLogCommitRequestFailed.c)
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
