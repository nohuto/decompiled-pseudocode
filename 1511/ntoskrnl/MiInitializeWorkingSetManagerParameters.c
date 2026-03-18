/*
 * XREFs of MiInitializeWorkingSetManagerParameters @ 0x1401413A4
 * Callers:
 *     MiCreatePartition @ 0x140624224 (MiCreatePartition.c)
 *     MiManagePartition @ 0x14062480C (MiManagePartition.c)
 *     MiInitSystem @ 0x14074C59C (MiInitSystem.c)
 * Callees:
 *     MiSetTrimWhileAgingState @ 0x1400F3E10 (MiSetTrimWhileAgingState.c)
 *     MiUnlockDynamicMemoryExclusive @ 0x140126D68 (MiUnlockDynamicMemoryExclusive.c)
 *     MiLockDynamicMemoryExclusive @ 0x140127060 (MiLockDynamicMemoryExclusive.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall MiInitializeWorkingSetManagerParameters(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax
  int v4; // ebp
  struct _KTHREAD *CurrentThread; // r14
  unsigned __int64 v6; // rsi
  __int64 v7; // rax
  unsigned __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned __int64 v14; // rcx

  v1 = *(_QWORD *)(a1 + 5616);
  if ( v1 )
  {
    v4 = 0;
  }
  else
  {
    result = (__int64)ExAllocatePoolWithTag(NonPagedPoolNx, 0xA58uLL, 0x64576D4Du);
    v1 = result;
    if ( !result )
      return result;
    memset((void *)result, 0, 0xA58uLL);
    *(_WORD *)v1 = 0;
    *(_BYTE *)(v1 + 2) = 6;
    v4 = 1;
    *(_DWORD *)(v1 + 4) = 1;
    *(_QWORD *)(v1 + 16) = v1 + 8;
    *(_QWORD *)(v1 + 8) = v1 + 8;
    *(_DWORD *)(v1 + 36) = 256;
    *(_DWORD *)(v1 + 144) = 256;
  }
  CurrentThread = KeGetCurrentThread();
  MiLockDynamicMemoryExclusive(a1, (__int64)CurrentThread);
  v6 = *(_QWORD *)(a1 + 5712);
  if ( v6 < 0x21000 )
    v6 = 135168LL;
  *(_QWORD *)(v1 + 2400) = v6 >> 5;
  if ( v6 > 0x200000 )
    *(_QWORD *)(v1 + 2400) = ((v6 - 0x200000) >> 7) + 0x10000;
  *(_QWORD *)(v1 + 2408) = v6 >> 5;
  if ( v6 > 0x80000 )
    *(_QWORD *)(v1 + 2408) = ((v6 - 0x80000) >> 8) + 0x4000;
  *(_QWORD *)(v1 + 2416) = *(_QWORD *)(v1 + 2408);
  *(_QWORD *)(v1 + 2392) = *(_QWORD *)(v1 + 2400) >> 2;
  if ( v4 == 1 )
    *(_QWORD *)(a1 + 5616) = v1;
  MiSetTrimWhileAgingState(a1, 3);
  v7 = 100LL;
  v8 = v6 / 0x3E8;
  if ( v8 > 0x64 )
    v7 = v8;
  *(_QWORD *)(v1 + 64) = v7;
  if ( v4 != 1 )
    goto LABEL_17;
  *(_DWORD *)(v1 + 108) = 0;
  *(_WORD *)(v1 + 104) = 1;
  *(_BYTE *)(v1 + 106) = 6;
  *(_QWORD *)(v1 + 120) = v1 + 112;
  *(_QWORD *)(v1 + 112) = v1 + 112;
  if ( (int *)a1 == MiSystemPartition )
  {
    LOWORD(stru_1402FF310.Header.Lock) = 0;
    stru_1402FF310.Header.WaitListHead.Blink = &stru_1402FF310.Header.WaitListHead;
    stru_1402FF310.Header.WaitListHead.Flink = &stru_1402FF310.Header.WaitListHead;
    stru_1402FF310.Header.Size = 6;
    stru_1402FF310.Header.SignalState = 1;
LABEL_17:
    if ( (int *)a1 == MiSystemPartition )
    {
      *(_QWORD *)(a1 + 4328) = qword_140381140;
      *(_QWORD *)(a1 + 4336) = qword_140381148;
    }
  }
  v9 = *(_QWORD *)(a1 + 4328);
  if ( v9 )
    v10 = v9 << 8;
  else
    v10 = 2LL * *(_QWORD *)(v1 + 2400);
  *(_QWORD *)(a1 + 4328) = v10;
  v11 = *(_QWORD *)(a1 + 4336);
  if ( v11 )
  {
    *(_QWORD *)(a1 + 4336) = v11 << 8;
  }
  else
  {
    v12 = *(_QWORD *)(a1 + 4328);
    v13 = 2 * v12;
    if ( 2 * v12 == v12 )
      v13 = 1LL;
    *(_QWORD *)(a1 + 4336) = v13;
  }
  v14 = *(_QWORD *)(a1 + 4336);
  if ( v14 < *(_QWORD *)(a1 + 4328) )
    v14 = *(_QWORD *)(a1 + 4328);
  *(_QWORD *)(a1 + 4336) = v14;
  MiUnlockDynamicMemoryExclusive(a1, (__int64)CurrentThread);
  return 1LL;
}
