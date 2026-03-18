/*
 * XREFs of CcCopyWriteEx @ 0x140108EF0
 * Callers:
 *     CcCopyWrite @ 0x1401DCF30 (CcCopyWrite.c)
 *     CcFastCopyWrite @ 0x1401DD028 (CcFastCopyWrite.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     CcMapAndCopyInToCache @ 0x1400B2720 (CcMapAndCopyInToCache.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 */

char __fastcall CcCopyWriteEx(
        __int64 a1,
        LARGE_INTEGER *a2,
        unsigned int a3,
        __int64 a4,
        char *a5,
        struct _KTHREAD *a6)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int8 v7; // r13
  int v10; // eax
  int v11; // ebp
  __int64 v12; // r12
  LARGE_INTEGER v13; // rax
  __int64 v14; // rsi
  ULONG_PTR v15; // r14
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 CurrentIrql; // rcx
  ULONG_PTR v19; // rdi
  unsigned __int8 v20; // si
  signed __int32 v21; // eax
  LARGE_INTEGER v22; // rax
  __int64 v23; // rax
  unsigned __int64 v25; // [rsp+50h] [rbp-48h]
  LARGE_INTEGER v26; // [rsp+58h] [rbp-40h] BYREF
  __int64 v27; // [rsp+60h] [rbp-38h]
  LARGE_INTEGER v28; // [rsp+68h] [rbp-30h] BYREF

  CurrentThread = KeGetCurrentThread();
  v7 = a4;
  v10 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) >> 9) & 7;
  if ( (CurrentThread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
  {
    v10 = 0;
  }
  else if ( ((*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) >> 9) & 7u) >= 2 )
  {
    goto LABEL_3;
  }
  if ( CurrentThread == KeGetCurrentThread() && HIDWORD(CurrentThread[1].Timer.TimerListEntry.Flink) )
  {
LABEL_4:
    if ( (*(_DWORD *)(a1 + 80) & 0x10) == 0 )
      goto LABEL_5;
    goto LABEL_28;
  }
LABEL_3:
  if ( v10 > 0 )
    goto LABEL_4;
LABEL_28:
  if ( !(_BYTE)a4 )
    return 0;
LABEL_5:
  v11 = 2;
  v12 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
  v13 = *a2;
  v28 = v13;
  if ( (v13.LowPart & 0xFFF) == 0 && a3 >= 0x1000 )
    v11 = 3;
  if ( ((LOWORD(v13.LowPart) + (_WORD)a3) & 0xFFF) == 0 )
    v11 |= 4u;
  v14 = *(_QWORD *)(a1 + 24);
  v25 = v13.QuadPart & 0xFFFFFFFFFFFFF000uLL;
  if ( (*(_BYTE *)(v14 + 4) & 0x40) != 0 )
  {
    v15 = *(_QWORD *)(v14 + 48);
    v16 = KeAbPreAcquire(v15, 0LL, 0LL, a4);
    v17 = v16;
    CurrentIrql = KeGetCurrentIrql();
    v27 = CurrentIrql;
    __writecr8(1uLL);
    if ( !_interlockedbittestandreset((volatile signed __int32 *)v15, 0) )
    {
      ExpAcquireFastMutexContended(v15, v16);
      LOBYTE(CurrentIrql) = v27;
    }
    if ( v17 )
      *(_BYTE *)(v17 + 26) |= 1u;
    *(_QWORD *)(v15 + 8) = KeGetCurrentThread();
    *(_DWORD *)(v15 + 48) = (unsigned __int8)CurrentIrql;
    v19 = *(_QWORD *)(v14 + 48);
    v20 = *(_BYTE *)(v19 + 48);
    v26 = *(LARGE_INTEGER *)(*(_QWORD *)(a1 + 24) + 40LL);
    *(_QWORD *)(v19 + 8) = 0LL;
    v21 = _InterlockedCompareExchange((volatile signed __int32 *)v19, 1, 0);
    if ( v21 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)v19, v21);
    __writecr8(v20);
    KeAbPostRelease(v19);
    v22 = v26;
  }
  else
  {
    v22 = *(LARGE_INTEGER *)(v14 + 40);
    v26 = v22;
  }
  v23 = v22.QuadPart - v25;
  if ( v23 <= 0 )
  {
    v11 |= 7u;
  }
  else if ( (unsigned __int64)v23 <= 0x1000 )
  {
    v11 |= 6u;
  }
  return CcMapAndCopyInToCache(v12, a5, &v28, a3, v11, a1, &v26, v7, a6);
}
