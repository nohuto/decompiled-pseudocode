/*
 * XREFs of CcCopyWriteEx @ 0x140077D10
 * Callers:
 *     CcCopyWrite @ 0x1401A8E20 (CcCopyWrite.c)
 *     CcFastCopyWrite @ 0x1401A8F18 (CcFastCopyWrite.c)
 * Callees:
 *     ExpAcquireFastMutexContended @ 0x1400209FC (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x140020FFC (ExpReleaseFastMutexContended.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     CcMapAndCopyInToCache @ 0x140068870 (CcMapAndCopyInToCache.c)
 *     PsGetBaseIoPriorityThread @ 0x140077F80 (PsGetBaseIoPriorityThread.c)
 */

char __fastcall CcCopyWriteEx(__int64 a1, __int64 a2, __int64 a3, char a4, char *a5, __int64 a6)
{
  unsigned int v8; // r14d
  int BaseIoPriorityThread; // eax
  __int64 *v10; // rdx
  unsigned int v11; // r8d
  __int64 v12; // r10
  int v13; // ebp
  _DWORD *v14; // r12
  __int64 v15; // rax
  __int64 v16; // rsi
  ULONG_PTR v17; // r15
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 CurrentIrql; // rcx
  ULONG_PTR v21; // rdi
  unsigned __int8 v22; // si
  signed __int32 v23; // eax
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned __int64 v27; // [rsp+50h] [rbp-48h]
  __int64 v28; // [rsp+58h] [rbp-40h] BYREF
  __int64 v29; // [rsp+60h] [rbp-38h]
  __int64 v30; // [rsp+68h] [rbp-30h] BYREF

  v8 = a3;
  BaseIoPriorityThread = PsGetBaseIoPriorityThread(KeGetCurrentThread(), a2, a3);
  if ( ((BaseIoPriorityThread >= 2 || (struct _KTHREAD *)v12 != KeGetCurrentThread() || !*(_DWORD *)(v12 + 1788))
     && BaseIoPriorityThread <= 0
     || (*(_DWORD *)(a1 + 80) & 0x10) != 0)
    && !a4 )
  {
    return 0;
  }
  v13 = 2;
  v14 = *(_DWORD **)(*(_QWORD *)(a1 + 40) + 8LL);
  v15 = *v10;
  v30 = v15;
  if ( (v15 & 0xFFF) == 0 && v11 >= 0x1000 )
    v13 = 3;
  if ( (((_WORD)v15 + (_WORD)v11) & 0xFFF) == 0 )
    v13 |= 4u;
  v16 = *(_QWORD *)(a1 + 24);
  v27 = v15 & 0xFFFFFFFFFFFFF000uLL;
  if ( (*(_BYTE *)(v16 + 4) & 0x40) != 0 )
  {
    v17 = *(_QWORD *)(v16 + 48);
    v18 = KeAbPreAcquire(v17, 0LL, 0LL);
    v19 = v18;
    CurrentIrql = KeGetCurrentIrql();
    v29 = CurrentIrql;
    __writecr8(1uLL);
    if ( !_interlockedbittestandreset((volatile signed __int32 *)v17, 0) )
    {
      ExpAcquireFastMutexContended(v17, v18);
      LOBYTE(CurrentIrql) = v29;
    }
    if ( v19 )
      *(_BYTE *)(v19 + 26) |= 1u;
    *(_QWORD *)(v17 + 8) = KeGetCurrentThread();
    *(_DWORD *)(v17 + 48) = (unsigned __int8)CurrentIrql;
    v21 = *(_QWORD *)(v16 + 48);
    v22 = *(_BYTE *)(v21 + 48);
    v28 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL);
    *(_QWORD *)(v21 + 8) = 0LL;
    v23 = _InterlockedCompareExchange((volatile signed __int32 *)v21, 1, 0);
    if ( v23 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)v21, v23);
    __writecr8(v22);
    KeAbPostRelease(v21);
    v24 = v28;
  }
  else
  {
    v24 = *(_QWORD *)(v16 + 40);
    v28 = v24;
  }
  v25 = v24 - v27;
  if ( v25 <= 0 )
  {
    v13 |= 7u;
  }
  else if ( (unsigned __int64)v25 <= 0x1000 )
  {
    v13 |= 6u;
  }
  return CcMapAndCopyInToCache(v14, a5, &v30, v8, v13, a1, &v28, a4, a6);
}
