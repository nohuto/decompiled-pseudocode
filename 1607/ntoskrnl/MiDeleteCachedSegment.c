/*
 * XREFs of MiDeleteCachedSegment @ 0x1401DE304
 * Callers:
 *     MiDereferenceSegmentThread @ 0x140141AC4 (MiDereferenceSegmentThread.c)
 *     MiRemoveUnusedSegments @ 0x140141D38 (MiRemoveUnusedSegments.c)
 * Callees:
 *     MiReleaseControlAreaWaiters @ 0x140026868 (MiReleaseControlAreaWaiters.c)
 *     MiInsertUnusedSegment @ 0x140026B6C (MiInsertUnusedSegment.c)
 *     ExReleaseSpinLockExclusive @ 0x14002E520 (ExReleaseSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14002E560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1400C0DF0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiDestroySection @ 0x140112284 (MiDestroySection.c)
 *     MiFlushControlArea @ 0x1401DE8C4 (MiFlushControlArea.c)
 *     MiUnlinkUnusedControlArea @ 0x1401DF28C (MiUnlinkUnusedControlArea.c)
 */

__int64 __fastcall MiDeleteCachedSegment(__int64 a1)
{
  volatile LONG *v1; // r15
  unsigned int v2; // esi
  __int64 v3; // rdi
  volatile signed __int32 **v4; // r14
  KIRQL v5; // bp
  volatile signed __int32 *i; // rbx
  volatile LONG *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // eax
  _QWORD *v12; // rbx
  struct _FILE_OBJECT *v13; // r8
  int v14; // eax
  _QWORD *v16; // [rsp+50h] [rbp+8h] BYREF
  struct _FILE_OBJECT *v17; // [rsp+58h] [rbp+10h] BYREF

  v1 = (volatile LONG *)(a1 + 1664);
  v2 = 1;
  v3 = 1LL;
  v4 = (volatile signed __int32 **)(a1 + 1544);
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1664));
  for ( i = *v4; i != (volatile signed __int32 *)v4; i = *(volatile signed __int32 **)i )
  {
    v3 = (__int64)(i - 2);
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(i + 16) )
      break;
  }
  if ( i == (volatile signed __int32 *)v4 )
  {
    v7 = v1;
LABEL_7:
    ExReleaseSpinLockExclusive(v7, v5);
    return 0;
  }
  MiUnlinkUnusedControlArea(v3);
  ExReleaseSpinLockExclusiveFromDpcLevel(v1);
  v11 = (*(_DWORD *)(v3 + 56) >> 5) & 1;
  if ( !v11 && *(_DWORD *)(v3 + 76) )
  {
    MiInsertUnusedSegment(v3, v8, v9, v10);
    v7 = (volatile LONG *)(v3 + 72);
    goto LABEL_7;
  }
  v12 = 0LL;
  v13 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  if ( !v11 )
  {
    LOBYTE(v8) = v5;
    v14 = MiFlushControlArea(v3, v8, &v16, &v17);
    v12 = v16;
    if ( v14 != 1 )
    {
      v2 = 0;
      goto LABEL_16;
    }
    v13 = v17;
  }
  MiDestroySection(v3, v5, v13);
LABEL_16:
  if ( v12 )
    MiReleaseControlAreaWaiters(v12);
  return v2;
}
