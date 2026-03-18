/*
 * XREFs of CmpRemoveFromDelayedClose @ 0x1404EDEA4
 * Callers:
 *     CmpKcbCacheLookup @ 0x1404993B0 (CmpKcbCacheLookup.c)
 *     CmpDoOpen @ 0x1404C78D0 (CmpDoOpen.c)
 *     CmpReferenceKeyControlBlock @ 0x1404CBD60 (CmpReferenceKeyControlBlock.c)
 *     CmpCleanUpKCBCacheTable @ 0x1404EDAE0 (CmpCleanUpKCBCacheTable.c)
 *     CmpSearchKeyControlBlockTree @ 0x140656F6C (CmpSearchKeyControlBlockTree.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 */

void __fastcall CmpRemoveFromDelayedClose(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rdi
  unsigned __int8 CurrentIrql; // si
  int v8; // eax
  __int64 v9; // rcx
  _BYTE *v10; // rdx
  _QWORD *v11; // rax
  unsigned __int8 v12; // bl
  signed __int32 v13; // eax
  signed __int32 v14[10]; // [rsp+0h] [rbp-28h] BYREF

  v5 = KeAbPreAcquire((ULONG_PTR)&CmpDelayedCloseTableLock, 0LL, 0LL, a4);
  v6 = v5;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)&CmpDelayedCloseTableLock, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)&CmpDelayedCloseTableLock, v5);
  if ( v6 )
    *(_BYTE *)(v6 + 26) |= 1u;
  *(&CmpDelayedCloseTableLock + 1) = (ULONG_PTR)KeGetCurrentThread();
  *((_DWORD *)&CmpDelayedCloseTableLock + 12) = CurrentIrql;
  v8 = *(_DWORD *)(a1 + 8);
  if ( (v8 & 2) != 0 )
  {
    v9 = a1 + 216;
    if ( (v8 & 4) != 0 )
    {
      **(_BYTE **)v9 = 1;
      *(_DWORD *)(a1 + 8) &= ~4u;
    }
    else
    {
      v10 = *(_BYTE **)v9;
      v11 = *(_QWORD **)(a1 + 224);
      if ( *(_QWORD *)(*(_QWORD *)v9 + 8LL) != v9 || *v11 != v9 )
        __fastfail(3u);
      --CmpDelayedCloseElements;
      *v11 = v10;
      *((_QWORD *)v10 + 1) = v11;
      --qword_14077F048;
    }
    *(_QWORD *)(a1 + 224) = a1 + 216;
    *(_QWORD *)v9 = v9;
    _InterlockedOr(v14, 0);
    *(_DWORD *)(a1 + 8) &= ~2u;
  }
  *(&CmpDelayedCloseTableLock + 1) = 0LL;
  v12 = *((_BYTE *)&CmpDelayedCloseTableLock + 48);
  v13 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpDelayedCloseTableLock, 1, 0);
  if ( v13 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpDelayedCloseTableLock, v13);
  __writecr8(v12);
  KeAbPostRelease((ULONG_PTR)&CmpDelayedCloseTableLock);
}
