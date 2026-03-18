/*
 * XREFs of CmpRemoveFromDelayedClose @ 0x1404C082C
 * Callers:
 *     CmpReferenceKeyControlBlock @ 0x1403FA9B0 (CmpReferenceKeyControlBlock.c)
 *     CmpDoOpen @ 0x1403FEFA0 (CmpDoOpen.c)
 *     CmpKcbCacheLookup @ 0x140407660 (CmpKcbCacheLookup.c)
 *     CmpCleanUpKCBCacheTable @ 0x14049979C (CmpCleanUpKCBCacheTable.c)
 *     CmpSearchKeyControlBlockTree @ 0x1405E1248 (CmpSearchKeyControlBlockTree.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 */

void __fastcall CmpRemoveFromDelayedClose(__int64 a1)
{
  int v2; // eax
  __int64 v3; // rcx
  _BYTE *v4; // rdx
  _QWORD *v5; // rax
  signed __int32 v6[10]; // [rsp+0h] [rbp-28h] BYREF

  ExAcquireFastMutex((PFAST_MUTEX)&CmpDelayedCloseTableLock);
  v2 = *(_DWORD *)(a1 + 8);
  if ( (v2 & 2) != 0 )
  {
    v3 = a1 + 216;
    if ( (v2 & 4) != 0 )
    {
      **(_BYTE **)v3 = 1;
      *(_DWORD *)(a1 + 8) &= ~4u;
    }
    else
    {
      v4 = *(_BYTE **)v3;
      v5 = *(_QWORD **)(a1 + 224);
      if ( *(_QWORD *)(*(_QWORD *)v3 + 8LL) != v3 || *v5 != v3 )
        __fastfail(3u);
      --CmpDelayedCloseElements;
      *v5 = v4;
      *((_QWORD *)v4 + 1) = v5;
      --qword_1406FC028;
    }
    *(_QWORD *)(a1 + 224) = a1 + 216;
    *(_QWORD *)v3 = v3;
    _InterlockedOr(v6, 0);
    *(_DWORD *)(a1 + 8) &= ~2u;
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)&CmpDelayedCloseTableLock);
}
