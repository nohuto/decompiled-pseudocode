/*
 * XREFs of MiInitializeMirroring @ 0x1407A4334
 * Callers:
 *     MiInitSystem @ 0x1407A3AAC (MiInitSystem.c)
 * Callees:
 *     MiReservePtes @ 0x1400DB9F0 (MiReservePtes.c)
 *     MiLockDynamicMemoryExclusive @ 0x140133378 (MiLockDynamicMemoryExclusive.c)
 *     MiUnlockDynamicMemoryExclusive @ 0x1401333E4 (MiUnlockDynamicMemoryExclusive.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     MiSizeMemoryListLocks @ 0x1404D36C0 (MiSizeMemoryListLocks.c)
 *     MiUpdateMirrorBitmaps @ 0x14052F6D4 (MiUpdateMirrorBitmaps.c)
 *     MiInitializeDynamicBitmap @ 0x1405363C0 (MiInitializeDynamicBitmap.c)
 */

__int64 MiInitializeMirroring()
{
  SIZE_T v0; // rdi
  PVOID PoolWithTag; // rax
  __int64 v2; // rbx
  unsigned __int64 v3; // r8
  _RTL_BITMAP_EX *v4; // rsi
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v6; // r14
  unsigned __int64 v7; // rbx
  unsigned int v8; // edi
  ULONG_PTR v9; // rax
  _RTL_BITMAP_EX v11; // [rsp+20h] [rbp-18h] BYREF

  stru_140327078.Parameter = (void *)-1LL;
  stru_140327078.List.Flink = 0LL;
  stru_140327060.Header.WaitListHead.Blink = &stru_140327060.Header.WaitListHead;
  stru_140327060.Header.WaitListHead.Flink = &stru_140327060.Header.WaitListHead;
  stru_140327078.WorkerRoutine = (void (__fastcall *)(void *))MiFinishResume;
  LOWORD(stru_140327060.Header.Lock) = 1;
  stru_140327060.Header.Size = 6;
  stru_140327060.Header.SignalState = 1;
  v0 = MiSizeMemoryListLocks();
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v0, 0x614C6D4Du);
  v2 = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v0);
    qword_140324710 = v2;
    v4 = &stru_1403270A8;
    CurrentThread = KeGetCurrentThread();
    v6 = qword_140326AD0;
    v7 = (((unsigned __int64)(qword_140326AD0 + 8) >> 3) + 4095) >> 12;
    v8 = 0;
    while ( 1 )
    {
      v9 = MiReservePtes((__int64)&qword_1403278B0, (unsigned int)v7, v3);
      if ( !v9 || !(unsigned int)MiInitializeDynamicBitmap(&v11, (__int64)(v9 << 25) >> 16, v6 + 1, 24) )
        break;
      v11.SizeOfBitMap = 0LL;
      ++v8;
      *v4++ = v11;
      if ( v8 >= 2 )
      {
        if ( (dword_1403A9148 & 1) != 0 )
        {
          MiLockDynamicMemoryExclusive((__int64)MiSystemPartition, (__int64)CurrentThread);
          MiUpdateMirrorBitmaps();
          MiUnlockDynamicMemoryExclusive((__int64)MiSystemPartition, (__int64)CurrentThread);
        }
        return 1LL;
      }
    }
  }
  return 0LL;
}
