/*
 * XREFs of TtmNotifyCsStateExited @ 0x140678944
 * Callers:
 *     PopNotifyCsStateExited @ 0x14066FE88 (PopNotifyCsStateExited.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x140068940 (ExReleaseResourceLite.c)
 *     TtmpAcquireSessionById @ 0x140546B74 (TtmpAcquireSessionById.c)
 *     TtmiScheduleSessionWorker @ 0x140678D08 (TtmiScheduleSessionWorker.c)
 *     TtmiLogSessionCsExitComplete @ 0x14067B794 (TtmiLogSessionCsExitComplete.c)
 */

void __fastcall TtmNotifyCsStateExited(unsigned int a1)
{
  int v2; // eax
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v2 = TtmpAcquireSessionById(&v7, a1);
  if ( v2 >= 0 )
  {
    TtmiLogSessionCsExitComplete(a1);
    v3 = v7;
    *(_DWORD *)(v7 + 4) &= 0xFFFFFCFF;
    TtmiScheduleSessionWorker(v3, 4LL);
    ExReleaseResourceLite(&TtmpSessionLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v4, v5, v6);
  }
  else
  {
    TtmiLogError("TtmNotifyCsStateExited", 2124, v2, v2);
  }
}
