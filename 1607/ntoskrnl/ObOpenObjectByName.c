/*
 * XREFs of ObOpenObjectByName @ 0x140463564
 * Callers:
 *     NtOpenMutant @ 0x140462D44 (NtOpenMutant.c)
 *     NtOpenDirectoryObject @ 0x140462DE8 (NtOpenDirectoryObject.c)
 *     NtOpenEvent @ 0x140462E6C (NtOpenEvent.c)
 *     NtOpenSymbolicLinkObject @ 0x140462F14 (NtOpenSymbolicLinkObject.c)
 *     CmCreateKey @ 0x140462FD0 (CmCreateKey.c)
 *     NtOpenSemaphore @ 0x1404BF1AC (NtOpenSemaphore.c)
 *     ExCreateCallback @ 0x1404CCE20 (ExCreateCallback.c)
 *     IopLoadDriver @ 0x140516794 (IopLoadDriver.c)
 *     CmpLinkHiveToMaster @ 0x1405194C0 (CmpLinkHiveToMaster.c)
 *     NtOpenSession @ 0x14052DDB4 (NtOpenSession.c)
 *     IopReferenceDriverObjectByName @ 0x140539268 (IopReferenceDriverObjectByName.c)
 *     IopUnloadDriver @ 0x140545368 (IopUnloadDriver.c)
 *     CmpCreatePredefined @ 0x14055DDCC (CmpCreatePredefined.c)
 *     NtOpenRegistryTransaction @ 0x1405F989C (NtOpenRegistryTransaction.c)
 *     CmpDoReOpenTransKey @ 0x140611CD0 (CmpDoReOpenTransKey.c)
 *     NtOpenIoCompletion @ 0x1406240DC (NtOpenIoCompletion.c)
 *     NtOpenPartition @ 0x1406614FC (NtOpenPartition.c)
 *     NtOpenJobObject @ 0x140680090 (NtOpenJobObject.c)
 *     NtOpenTimer @ 0x1406AFD94 (NtOpenTimer.c)
 *     NtOpenKeyedEvent @ 0x1406B86B4 (NtOpenKeyedEvent.c)
 *     CmInitSystem1 @ 0x1407ADA6C (CmInitSystem1.c)
 * Callees:
 *     PspGetJobSilo @ 0x1400767A8 (PspGetJobSilo.c)
 *     ObOpenObjectByNameEx @ 0x140417F30 (ObOpenObjectByNameEx.c)
 */

__int64 __fastcall ObOpenObjectByName(
        __int64 a1,
        __int64 a2,
        unsigned __int8 a3,
        __int64 a4,
        ACCESS_MASK a5,
        __int64 a6,
        _QWORD *a7)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // r10
  __int64 JobSilo; // rax

  CurrentThread = KeGetCurrentThread();
  v8 = a1;
  if ( *(_QWORD *)&CurrentThread[1].WaitBlockFill11[160] == -3LL )
    JobSilo = PspGetJobSilo(CurrentThread->Process[1].Affinity.Bitmap[16]);
  else
    JobSilo = *(_QWORD *)&CurrentThread[1].WaitBlockFill11[160];
  return ObOpenObjectByNameEx(v8, a2, a3, a4, a5, a6, JobSilo, a7);
}
