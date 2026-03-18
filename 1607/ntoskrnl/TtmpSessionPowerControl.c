/*
 * XREFs of TtmpSessionPowerControl @ 0x140678FC0
 * Callers:
 *     TtmpActivateSessionWorker @ 0x140678E80 (TtmpActivateSessionWorker.c)
 *     TtmpDeactivateSessionWorker @ 0x140678F20 (TtmpDeactivateSessionWorker.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x140068940 (ExReleaseResourceLite.c)
 *     PoSessionPowerControl @ 0x140674D68 (PoSessionPowerControl.c)
 *     TtmpAcquireSessionLock @ 0x140678E60 (TtmpAcquireSessionLock.c)
 *     TtmiLogSessionPowerControlStart @ 0x14067BBF0 (TtmiLogSessionPowerControlStart.c)
 */

__int64 __fastcall TtmpSessionPowerControl(int *a1, unsigned __int8 a2, unsigned int a3)
{
  int v3; // ebx
  int *v5; // r14
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9

  v3 = *a1;
  v5 = a1;
  LOBYTE(a1) = a2;
  TtmiLogSessionPowerControlStart(a1, a3);
  *((_QWORD *)v5 + 20) = 0LL;
  ExReleaseResourceLite(&TtmpSessionLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v7, v8, v9);
  PoSessionPowerControl(a2, a3, v3);
  TtmpAcquireSessionLock();
  *((_QWORD *)v5 + 20) = KeGetCurrentThread();
  return TtmiLogSessionPowerControlStop();
}
