/*
 * XREFs of ndisUnloadPeriodicReceives @ 0x1C01065CC
 * Callers:
 *     ndisInitializePeriodicReceives @ 0x1C0104304 (ndisInitializePeriodicReceives.c)
 * Callees:
 *     NdisReleaseRWLock @ 0x1C0008FC0 (NdisReleaseRWLock.c)
 *     NdisAcquireRWLockWrite @ 0x1C0009030 (NdisAcquireRWLockWrite.c)
 *     NdisFreeRWLock @ 0x1C000E700 (NdisFreeRWLock.c)
 *     NdisFreeNetBufferListPool @ 0x1C00102C0 (NdisFreeNetBufferListPool.c)
 *     memset @ 0x1C0023A40 (memset.c)
 */

void ndisUnloadPeriodicReceives()
{
  void *v0; // rbx
  NDIS_HANDLE v1; // rax
  struct _LOCK_STATE_EX LockState; // [rsp+60h] [rbp+0h] BYREF

  v0 = 0LL;
  if ( Lock )
  {
    NdisAcquireRWLockWrite(Lock, (PLOCK_STATE_EX)((unsigned __int64)&LockState & 0xFFFFFFFFFFFFFFC0uLL), 0);
    v1 = PoolHandle;
    if ( PoolHandle )
    {
      PoolHandle = 0LL;
      v0 = v1;
    }
    if ( ndisPeriodicReceives == 1 )
    {
      ndisPeriodicReceives = 0;
      ExDeleteNPagedLookasideList(&Lookaside);
      ExDeleteNPagedLookasideList(&stru_1C0084E40);
      memset(&Lookaside, 0, sizeof(Lookaside));
      memset(&stru_1C0084E40, 0, sizeof(stru_1C0084E40));
    }
    NdisReleaseRWLock(Lock, (PLOCK_STATE_EX)((unsigned __int64)&LockState & 0xFFFFFFFFFFFFFFC0uLL));
    NdisFreeRWLock(Lock);
    if ( v0 )
      NdisFreeNetBufferListPool(v0);
  }
  if ( WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink )
  {
    ExFreePoolWithTag(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink, 0);
    WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink = 0LL;
  }
  if ( P )
  {
    ExFreePoolWithTag(P, 0);
    P = 0LL;
  }
  if ( qword_1C0084D80 )
  {
    ExFreePoolWithTag(qword_1C0084D80, 0);
    qword_1C0084D80 = 0LL;
  }
  if ( qword_1C0084D78 )
  {
    ExFreePoolWithTag(qword_1C0084D78, 0);
    qword_1C0084D78 = 0LL;
  }
  if ( qword_1C0084D70 )
  {
    ExFreePoolWithTag(qword_1C0084D70, 0);
    qword_1C0084D70 = 0LL;
  }
}
