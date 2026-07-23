/*
 * XREFs of TtmpSetCsSessionGoal @ 0x140679334
 * Callers:
 *     TtmpActivateSessionWorker @ 0x140678F64 (TtmpActivateSessionWorker.c)
 *     TtmpDeactivateSessionWorker @ 0x140679004 (TtmpDeactivateSessionWorker.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     PoSetCsSessionGoal @ 0x140206E40 (PoSetCsSessionGoal.c)
 *     TtmpAcquireSessionLock @ 0x140678F44 (TtmpAcquireSessionLock.c)
 *     TtmiLogSessionSetCsSessionGoalStart @ 0x14067BF2C (TtmiLogSessionSetCsSessionGoalStart.c)
 *     TtmiLogSessionSetCsSessionGoalStop @ 0x14067C018 (TtmiLogSessionSetCsSessionGoalStop.c)
 */

__int64 __fastcall TtmpSetCsSessionGoal(__int64 a1, char a2, unsigned int a3)
{
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v7; // ebx

  v3 = a1;
  LOBYTE(a1) = a2;
  TtmiLogSessionSetCsSessionGoalStart(a1, a3);
  *(_QWORD *)(v3 + 160) = 0LL;
  ExReleaseResourceLite(&TtmpSessionLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v4, v5, v6);
  v7 = PoSetCsSessionGoal();
  TtmpAcquireSessionLock();
  *(_QWORD *)(v3 + 160) = KeGetCurrentThread();
  TtmiLogSessionSetCsSessionGoalStop(v7);
  return v7;
}
