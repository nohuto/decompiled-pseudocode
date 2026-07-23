/*
 * XREFs of CmpRemoveFromDelayedClose @ 0x14051934C
 * Callers:
 *     CmpSearchKeyControlBlockTreeEx @ 0x1401B4AC0 (CmpSearchKeyControlBlockTreeEx.c)
 *     CmpCleanUpKCBCacheTable @ 0x1403E3ED8 (CmpCleanUpKCBCacheTable.c)
 *     CmpReferenceKeyControlBlock @ 0x140518944 (CmpReferenceKeyControlBlock.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14002CC20 (ExAcquireFastMutex.c)
 */

void __fastcall CmpRemoveFromDelayedClose(__int64 a1)
{
  char v2; // al
  __int64 v3; // rcx
  _BYTE *v4; // rdx
  _QWORD *v5; // rax
  signed __int32 v6[10]; // [rsp+0h] [rbp-28h] BYREF

  ExAcquireFastMutex((PFAST_MUTEX)&CmpDelayedCloseTableLock);
  v2 = *(_BYTE *)(a1 + 56);
  if ( (v2 & 2) != 0 )
  {
    v3 = a1 + 216;
    if ( (v2 & 4) != 0 )
    {
      **(_BYTE **)v3 = 1;
      *(_BYTE *)(a1 + 56) &= ~4u;
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
      --qword_1407481D8;
    }
    *(_QWORD *)(a1 + 224) = a1 + 216;
    *(_QWORD *)v3 = v3;
    _InterlockedOr(v6, 0);
    *(_BYTE *)(a1 + 56) &= ~2u;
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)&CmpDelayedCloseTableLock);
}
