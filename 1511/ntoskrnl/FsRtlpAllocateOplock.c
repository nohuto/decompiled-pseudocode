/*
 * XREFs of FsRtlpAllocateOplock @ 0x14048F084
 * Callers:
 *     FsRtlpOplockStoreKeyForDeleteOperation @ 0x140037950 (FsRtlpOplockStoreKeyForDeleteOperation.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1400C9C44 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpRequestShareableOplock @ 0x1400CA474 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpOplockFsctrlInternal @ 0x14048EA24 (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     KeInitializeEvent @ 0x14007E540 (KeInitializeEvent.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

char *FsRtlpAllocateOplock()
{
  struct _KEVENT *v0; // rax
  char *PoolWithTag; // [rsp+20h] [rbp-18h]

  PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)273, 0xA0uLL, 0x6F725346u);
  memset(PoolWithTag, 0, 0xA0uLL);
  v0 = (struct _KEVENT *)ExAllocatePoolWithTag((POOL_TYPE)528, 0x38uLL, 0x6F725346u);
  *((_QWORD *)PoolWithTag + 19) = v0;
  v0->Header.LockNV = 1;
  v0->Header.WaitListHead.Flink = 0LL;
  LODWORD(v0->Header.WaitListHead.Blink) = 0;
  KeInitializeEvent(v0 + 1, SynchronizationEvent, 0);
  *((_QWORD *)PoolWithTag + 6) = PoolWithTag + 40;
  *((_QWORD *)PoolWithTag + 5) = PoolWithTag + 40;
  *((_QWORD *)PoolWithTag + 8) = PoolWithTag + 56;
  *((_QWORD *)PoolWithTag + 7) = PoolWithTag + 56;
  *((_QWORD *)PoolWithTag + 10) = PoolWithTag + 72;
  *((_QWORD *)PoolWithTag + 9) = PoolWithTag + 72;
  *((_QWORD *)PoolWithTag + 12) = PoolWithTag + 88;
  *((_QWORD *)PoolWithTag + 11) = PoolWithTag + 88;
  *((_QWORD *)PoolWithTag + 14) = PoolWithTag + 104;
  *((_QWORD *)PoolWithTag + 13) = PoolWithTag + 104;
  *((_QWORD *)PoolWithTag + 16) = PoolWithTag + 120;
  *((_QWORD *)PoolWithTag + 15) = PoolWithTag + 120;
  *((_DWORD *)PoolWithTag + 36) = 1;
  return PoolWithTag;
}
