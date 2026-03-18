/*
 * XREFs of PsAttachSiloToCurrentThread @ 0x14049BCB0
 * Callers:
 *     SepRmCallLsa @ 0x1400D4F24 (SepRmCallLsa.c)
 *     ExpWnfAllocateNextPersistentNameSequence @ 0x1403B4F34 (ExpWnfAllocateNextPersistentNameSequence.c)
 *     ExpWnfLookupPermanentName @ 0x1403E0F08 (ExpWnfLookupPermanentName.c)
 *     EtwpLogger @ 0x14046AE58 (EtwpLogger.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x14049B9C8 (SepCleanupLUIDDeviceMapDirectory.c)
 *     EtwpServerSiloCreateNotify @ 0x140526A2C (EtwpServerSiloCreateNotify.c)
 *     SeInitServerSilo @ 0x140526CAC (SeInitServerSilo.c)
 *     SepRmCommandServerThread @ 0x14053C31C (SepRmCommandServerThread.c)
 *     SepRmLsaConnectRequest @ 0x14053C6C0 (SepRmLsaConnectRequest.c)
 *     PspShutdownCsrProcess @ 0x140640950 (PspShutdownCsrProcess.c)
 *     SepDeleteUnreferencedLogonSessionsInSilo @ 0x1406542BC (SepDeleteUnreferencedLogonSessionsInSilo.c)
 *     EtwpServerSiloTerminateNotify @ 0x140663CF0 (EtwpServerSiloTerminateNotify.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140042AE0 (ObfReferenceObjectWithTag.c)
 *     PspGetJobSilo @ 0x1400776E8 (PspGetJobSilo.c)
 */

__int64 __fastcall PsAttachSiloToCurrentThread(void *a1)
{
  struct _KTHREAD *CurrentThread; // rdx
  void *v2; // r8
  __int64 JobSilo; // rax
  __int64 v5; // rbx

  CurrentThread = KeGetCurrentThread();
  v2 = a1;
  if ( *(_QWORD *)&CurrentThread[1].WaitBlockFill11[160] == -3LL )
    JobSilo = PspGetJobSilo(CurrentThread->Process[1].Affinity.Bitmap[16]);
  else
    JobSilo = *(_QWORD *)&CurrentThread[1].WaitBlockFill11[160];
  if ( (void *)JobSilo == v2 )
    return -2LL;
  v5 = *(_QWORD *)&CurrentThread[1].WaitBlockFill11[160];
  *(_QWORD *)&CurrentThread[1].WaitBlockFill11[160] = v2;
  if ( v2 )
    ObfReferenceObjectWithTag(v2, 0x49537350u);
  return v5;
}
