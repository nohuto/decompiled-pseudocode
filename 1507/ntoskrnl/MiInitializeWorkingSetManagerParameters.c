/*
 * XREFs of MiInitializeWorkingSetManagerParameters @ 0x14016EFB8
 * Callers:
 *     MiCreatePartition @ 0x1406A3A54 (MiCreatePartition.c)
 *     MiManagePartition @ 0x1406A4074 (MiManagePartition.c)
 *     MiInitSystem @ 0x1407C8BD0 (MiInitSystem.c)
 * Callees:
 *     MiSetTrimWhileAgingState @ 0x140025D74 (MiSetTrimWhileAgingState.c)
 *     MiUnlockDynamicMemoryExclusive @ 0x14015A080 (MiUnlockDynamicMemoryExclusive.c)
 *     MiLockDynamicMemoryExclusive @ 0x14015A0E4 (MiLockDynamicMemoryExclusive.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall MiInitializeWorkingSetManagerParameters(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 result; // rax
  int v7; // ebp
  struct _KTHREAD *CurrentThread; // r14
  unsigned __int64 v9; // rsi
  __int64 v10; // rax
  unsigned __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned __int64 v17; // rcx

  v4 = *(_QWORD *)(a1 + 5256);
  if ( v4 )
  {
    v7 = 0;
  }
  else
  {
    result = (__int64)ExAllocatePoolWithTag(NonPagedPoolNx, 0xA48uLL, 0x64576D4Du);
    v4 = result;
    if ( !result )
      return result;
    memset((void *)result, 0, 0xA48uLL);
    *(_WORD *)v4 = 0;
    *(_BYTE *)(v4 + 2) = 6;
    v7 = 1;
    *(_DWORD *)(v4 + 4) = 1;
    *(_QWORD *)(v4 + 16) = v4 + 8;
    *(_QWORD *)(v4 + 8) = v4 + 8;
    *(_DWORD *)(v4 + 36) = 256;
    *(_DWORD *)(v4 + 144) = 256;
  }
  CurrentThread = KeGetCurrentThread();
  MiLockDynamicMemoryExclusive(a1, (__int64)CurrentThread, a3, a4);
  v9 = *(_QWORD *)(a1 + 5328);
  if ( v9 < 0x20000 )
    v9 = 0x20000LL;
  *(_QWORD *)(v4 + 2400) = v9 >> 5;
  if ( v9 > 0x200000 )
    *(_QWORD *)(v4 + 2400) = ((v9 - 0x200000) >> 7) + 0x10000;
  *(_QWORD *)(v4 + 2408) = v9 >> 5;
  if ( v9 > 0x80000 )
    *(_QWORD *)(v4 + 2408) = ((v9 - 0x80000) >> 8) + 0x4000;
  *(_QWORD *)(v4 + 2416) = *(_QWORD *)(v4 + 2408);
  *(_QWORD *)(v4 + 2392) = *(_QWORD *)(v4 + 2400) >> 2;
  if ( v7 == 1 )
    *(_QWORD *)(a1 + 5256) = v4;
  MiSetTrimWhileAgingState(a1, 3LL);
  v10 = 100LL;
  v11 = v9 / 0x3E8;
  if ( v11 > 0x64 )
    v10 = v11;
  *(_QWORD *)(v4 + 64) = v10;
  if ( v7 != 1 )
    goto LABEL_17;
  *(_DWORD *)(v4 + 108) = 0;
  *(_WORD *)(v4 + 104) = 1;
  *(_BYTE *)(v4 + 106) = 6;
  *(_QWORD *)(v4 + 120) = v4 + 112;
  *(_QWORD *)(v4 + 112) = v4 + 112;
  if ( (__int16 *)a1 == MiSystemPartition )
  {
    LOWORD(stru_14034F790.Header.Lock) = 0;
    stru_14034F790.Header.WaitListHead.Blink = &stru_14034F790.Header.WaitListHead;
    stru_14034F790.Header.WaitListHead.Flink = &stru_14034F790.Header.WaitListHead;
    stru_14034F790.Header.Size = 6;
    stru_14034F790.Header.SignalState = 1;
LABEL_17:
    if ( (__int16 *)a1 == MiSystemPartition )
    {
      *(_QWORD *)(a1 + 4104) = qword_1403D0130;
      *(_QWORD *)(a1 + 4112) = qword_1403D0138;
    }
  }
  v12 = *(_QWORD *)(a1 + 4104);
  if ( v12 )
    v13 = v12 << 8;
  else
    v13 = 2LL * *(_QWORD *)(v4 + 2400);
  *(_QWORD *)(a1 + 4104) = v13;
  v14 = *(_QWORD *)(a1 + 4112);
  if ( v14 )
  {
    *(_QWORD *)(a1 + 4112) = v14 << 8;
  }
  else
  {
    v15 = *(_QWORD *)(a1 + 4104);
    v16 = 2 * v15;
    if ( 2 * v15 == v15 )
      v16 = 1LL;
    *(_QWORD *)(a1 + 4112) = v16;
  }
  v17 = *(_QWORD *)(a1 + 4112);
  if ( v17 < *(_QWORD *)(a1 + 4104) )
    v17 = *(_QWORD *)(a1 + 4104);
  *(_QWORD *)(a1 + 4112) = v17;
  MiUnlockDynamicMemoryExclusive(a1, (__int64)CurrentThread);
  return 1LL;
}
