/*
 * XREFs of CmpRunDownDelayDerefKCBEngine @ 0x1404EDBF8
 * Callers:
 *     NtUnloadKeyEx @ 0x1404ED38C (NtUnloadKeyEx.c)
 *     CmpCleanUpKCBCacheTable @ 0x1404EDAE0 (CmpCleanUpKCBCacheTable.c)
 *     CmpFreeAllMemory @ 0x1406541E4 (CmpFreeAllMemory.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     CmpDoQueueLateUnloadWorker @ 0x1404460B8 (CmpDoQueueLateUnloadWorker.c)
 *     CmpUnlockHashEntryByIndex @ 0x140447B68 (CmpUnlockHashEntryByIndex.c)
 *     CmpUnlockKcb @ 0x1404C53F0 (CmpUnlockKcb.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1404C87E0 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpLockKcbExclusive @ 0x1404CCB10 (CmpLockKcbExclusive.c)
 *     CmpLockHashEntryByIndexExclusive @ 0x1404EDE10 (CmpLockHashEntryByIndexExclusive.c)
 *     CmpIsLockAllowedByIndex @ 0x1406569F4 (CmpIsLockAllowedByIndex.c)
 */

void __fastcall CmpRunDownDelayDerefKCBEngine(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r13
  unsigned int v5; // r15d
  __int64 v7; // rax
  unsigned __int8 CurrentIrql; // di
  signed __int8 v9; // cf
  __int64 v10; // rbx
  __int64 v11; // rbx
  __int64 v12; // rax
  ULONG_PTR v13; // rbx
  unsigned __int8 v14; // di
  signed __int32 v15; // eax
  __int64 v16; // r9
  ULONG_PTR v17; // rdi
  bool v18; // bp
  __int64 v19; // rdx
  __int64 v20; // r8
  unsigned int v21; // r14d
  __int64 v22; // rdx
  __int64 v23; // r8
  char v24; // si
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // r8
  __int64 v29; // r9
  unsigned __int8 v30; // bl
  signed __int32 v31; // eax
  int v32; // ecx
  __int64 v33; // rax
  __int64 v34; // rdi
  unsigned __int8 v35; // si
  _QWORD *v36; // rbx
  __int64 v37; // rax
  signed __int32 v38; // eax
  signed __int32 v39[8]; // [rsp+0h] [rbp-58h] BYREF
  char v40; // [rsp+60h] [rbp+8h] BYREF

  v4 = 0LL;
  v5 = -1;
  if ( a1 )
  {
    v4 = *(_QWORD *)(a1 + 32);
    v32 = *(_DWORD *)(a1 + 16) ^ (*(_DWORD *)(a1 + 16) >> 9);
    v5 = (((unsigned int)(101027 * v32) >> 9) ^ (101027 * v32)) & (*(_DWORD *)(v4 + 2808) - 1);
  }
  while ( 1 )
  {
    v7 = KeAbPreAcquire((ULONG_PTR)&CmpDelayDerefKCBLock, 0LL, 0LL, a4);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    v9 = _interlockedbittestandreset((volatile signed __int32 *)&CmpDelayDerefKCBLock, 0);
    v10 = v7;
    if ( !v9 )
      ExpAcquireFastMutexContended((ULONG_PTR)&CmpDelayDerefKCBLock, v7);
    if ( v10 )
      *(_BYTE *)(v10 + 26) |= 1u;
    v11 = CmpDelayDerefKCBListHead;
    *(&CmpDelayDerefKCBLock + 1) = (ULONG_PTR)KeGetCurrentThread();
    *((_DWORD *)&CmpDelayDerefKCBLock + 12) = CurrentIrql;
    if ( (__int64 *)CmpDelayDerefKCBListHead == &CmpDelayDerefKCBListHead )
      break;
    v12 = *(_QWORD *)CmpDelayDerefKCBListHead;
    if ( *(__int64 **)(CmpDelayDerefKCBListHead + 8) != &CmpDelayDerefKCBListHead
      || *(_QWORD *)(v12 + 8) != CmpDelayDerefKCBListHead )
    {
      __fastfail(3u);
    }
    CmpDelayDerefKCBListHead = *(_QWORD *)CmpDelayDerefKCBListHead;
    v13 = v11 - 216;
    *(_QWORD *)(v12 + 8) = &CmpDelayDerefKCBListHead;
    *(_QWORD *)(v13 + 224) = v13 + 216;
    *(_QWORD *)(v13 + 216) = v13 + 216;
    _InterlockedOr(v39, 0);
    *(_DWORD *)(v13 + 8) &= ~1u;
    *(&CmpDelayDerefKCBLock + 1) = 0LL;
    v14 = *((_BYTE *)&CmpDelayDerefKCBLock + 48);
    v15 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpDelayDerefKCBLock, 1, 0);
    if ( v15 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpDelayDerefKCBLock, v15);
    __writecr8(v14);
    KeAbPostRelease((ULONG_PTR)&CmpDelayDerefKCBLock);
    v17 = *(_QWORD *)(v13 + 32);
    v18 = 0;
    if ( (*(_DWORD *)(v13 + 4) & 0x20000) == 0 )
      v18 = *(_BYTE *)(v17 + 4112) == 1;
    v19 = (unsigned int)(*(_DWORD *)(v13 + 16) ^ (*(_DWORD *)(v13 + 16) >> 9));
    v20 = ((unsigned int)(101027 * v19) >> 9) ^ (101027 * (_DWORD)v19);
    v21 = v20 & (*(_DWORD *)(v17 + 2808) - 1);
    if ( a2 )
    {
      LOBYTE(v19) = a2;
      CmpDereferenceKeyControlBlockWithLock(v13, v19, v20, v16);
    }
    else
    {
      v24 = 0;
      v40 = 0;
      if ( !v4 )
        goto LABEL_19;
      if ( !(unsigned __int8)CmpIsLockAllowedByIndex(v4, v5, v17, v21, (__int64)&v40) )
      {
        v33 = KeAbPreAcquire((ULONG_PTR)&CmpDelayDerefKCBLock, 0LL, 0LL, v27);
        v34 = v33;
        v35 = KeGetCurrentIrql();
        __writecr8(1uLL);
        v9 = _interlockedbittestandreset((volatile signed __int32 *)&CmpDelayDerefKCBLock, 0);
        if ( !v9 )
          ExpAcquireFastMutexContended((ULONG_PTR)&CmpDelayDerefKCBLock, v33);
        if ( v34 )
          *(_BYTE *)(v34 + 26) |= 1u;
        *(&CmpDelayDerefKCBLock + 1) = (ULONG_PTR)KeGetCurrentThread();
        *((_DWORD *)&CmpDelayDerefKCBLock + 12) = v35;
        *(_DWORD *)(v13 + 8) |= 1u;
        v36 = (_QWORD *)(v13 + 216);
        v37 = CmpDelayDerefKCBListHead;
        *v36 = CmpDelayDerefKCBListHead;
        v36[1] = &CmpDelayDerefKCBListHead;
        if ( *(__int64 **)(v37 + 8) != &CmpDelayDerefKCBListHead )
          __fastfail(3u);
        *(_QWORD *)(v37 + 8) = v36;
        *(&CmpDelayDerefKCBLock + 1) = 0LL;
        CmpDelayDerefKCBListHead = (__int64)v36;
        v30 = *((_BYTE *)&CmpDelayDerefKCBLock + 48);
        v38 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpDelayDerefKCBLock, 1, 0);
        if ( v38 )
          ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpDelayDerefKCBLock, v38);
        goto LABEL_25;
      }
      v24 = v40;
      if ( !v40 )
LABEL_19:
        CmpLockHashEntryByIndexExclusive(v17, v21);
      CmpLockKcbExclusive(v13, v25, v26, v27);
      CmpDereferenceKeyControlBlockWithLock(v13, 0LL, v28, v29);
      CmpUnlockKcb((char *)v13);
      if ( !v24 )
        CmpUnlockHashEntryByIndex(v17, v21);
    }
    if ( v18 )
      CmpDoQueueLateUnloadWorker(v17, v22, v23, a4);
  }
  *(&CmpDelayDerefKCBLock + 1) = 0LL;
  v30 = *((_BYTE *)&CmpDelayDerefKCBLock + 48);
  v31 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpDelayDerefKCBLock, 1, 0);
  if ( v31 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpDelayDerefKCBLock, v31);
LABEL_25:
  __writecr8(v30);
  KeAbPostRelease((ULONG_PTR)&CmpDelayDerefKCBLock);
}
