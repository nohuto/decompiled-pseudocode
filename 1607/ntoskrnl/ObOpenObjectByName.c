/*
 * XREFs of ObOpenObjectByName @ 0x140464694
 * Callers:
 *     NtOpenMutant @ 0x140463E74 (NtOpenMutant.c)
 *     NtOpenDirectoryObject @ 0x140463F18 (NtOpenDirectoryObject.c)
 *     NtOpenEvent @ 0x140463F9C (NtOpenEvent.c)
 *     NtOpenSymbolicLinkObject @ 0x140464044 (NtOpenSymbolicLinkObject.c)
 *     CmCreateKey @ 0x140464100 (CmCreateKey.c)
 *     IopLoadDriver @ 0x14049E388 (IopLoadDriver.c)
 *     CmpLinkHiveToMaster @ 0x1404A10B4 (CmpLinkHiveToMaster.c)
 *     NtOpenSemaphore @ 0x1404DBBA8 (NtOpenSemaphore.c)
 *     ExCreateCallback @ 0x1404EADFC (ExCreateCallback.c)
 *     NtOpenSession @ 0x14052D874 (NtOpenSession.c)
 *     IopReferenceDriverObjectByName @ 0x140538D28 (IopReferenceDriverObjectByName.c)
 *     IopUnloadDriver @ 0x140544E28 (IopUnloadDriver.c)
 *     CmpCreatePredefined @ 0x14055D88C (CmpCreatePredefined.c)
 *     NtOpenRegistryTransaction @ 0x1405F97E8 (NtOpenRegistryTransaction.c)
 *     CmpDoReOpenTransKey @ 0x140611C1C (CmpDoReOpenTransKey.c)
 *     NtOpenIoCompletion @ 0x140624028 (NtOpenIoCompletion.c)
 *     NtOpenPartition @ 0x140661418 (NtOpenPartition.c)
 *     NtOpenJobObject @ 0x14067FFAC (NtOpenJobObject.c)
 *     NtOpenTimer @ 0x1406AFC5C (NtOpenTimer.c)
 *     NtOpenKeyedEvent @ 0x1406B857C (NtOpenKeyedEvent.c)
 *     CmInitSystem1 @ 0x1407ADA6C (CmInitSystem1.c)
 * Callees:
 *     PspGetJobSilo @ 0x140076728 (PspGetJobSilo.c)
 *     ObOpenObjectByNameEx @ 0x140419070 (ObOpenObjectByNameEx.c)
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
