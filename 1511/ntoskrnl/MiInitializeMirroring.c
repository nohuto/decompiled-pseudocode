/*
 * XREFs of MiInitializeMirroring @ 0x14074CF24
 * Callers:
 *     MiInitSystem @ 0x14074C59C (MiInitSystem.c)
 * Callees:
 *     MiReservePtes @ 0x140049FD0 (MiReservePtes.c)
 *     MiUnlockDynamicMemoryExclusive @ 0x140126D68 (MiUnlockDynamicMemoryExclusive.c)
 *     MiLockDynamicMemoryExclusive @ 0x140127060 (MiLockDynamicMemoryExclusive.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     MiSizeMemoryListLocks @ 0x1404C697C (MiSizeMemoryListLocks.c)
 *     MiUpdateMirrorBitmaps @ 0x1404F6078 (MiUpdateMirrorBitmaps.c)
 *     MiInitializeDynamicBitmap @ 0x1404FF1D8 (MiInitializeDynamicBitmap.c)
 */

__int64 MiInitializeMirroring()
{
  SIZE_T v0; // rdi
  PVOID PoolWithTag; // rax
  __int64 v2; // rbx
  unsigned __int64 v3; // r8
  _RTL_BITMAP_EX *v4; // rdi
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v6; // r14
  unsigned __int64 v7; // rsi
  unsigned int v8; // ebx
  ULONG_PTR v9; // rax
  _RTL_BITMAP_EX v11; // [rsp+20h] [rbp-18h] BYREF

  stru_1402FEC68.Parameter = (void *)-1LL;
  stru_1402FEC68.List.Flink = 0LL;
  stru_1402FEC50.Header.WaitListHead.Blink = &stru_1402FEC50.Header.WaitListHead;
  stru_1402FEC50.Header.WaitListHead.Flink = &stru_1402FEC50.Header.WaitListHead;
  stru_1402FEC68.WorkerRoutine = (void (__fastcall *)(void *))MiFinishResume;
  LOWORD(stru_1402FEC50.Header.Lock) = 1;
  stru_1402FEC50.Header.Size = 6;
  stru_1402FEC50.Header.SignalState = 1;
  v0 = MiSizeMemoryListLocks();
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v0, 0x614C6D4Du);
  v2 = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v0);
    qword_140301088 = v2;
    v4 = &stru_1402FEC98;
    CurrentThread = KeGetCurrentThread();
    v6 = qword_1402FE758;
    v7 = (((unsigned __int64)(qword_1402FE758 + 8) >> 3) + 4095) >> 12;
    v8 = 0;
    while ( 1 )
    {
      v9 = MiReservePtes((__int64)&qword_1402FF7B0, v7, v3);
      if ( !v9 || !(unsigned int)MiInitializeDynamicBitmap(&v11, (__int64)(v9 << 25) >> 16, v6 + 1, 24) )
        break;
      v11.SizeOfBitMap = 0LL;
      ++v8;
      *v4++ = v11;
      if ( v8 >= 2 )
      {
        if ( (dword_1403810FC & 1) != 0 )
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
