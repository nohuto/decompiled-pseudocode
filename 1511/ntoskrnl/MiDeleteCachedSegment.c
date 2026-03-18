/*
 * XREFs of MiDeleteCachedSegment @ 0x1401D0A74
 * Callers:
 *     MiRemoveUnusedSegments @ 0x140138B1C (MiRemoveUnusedSegments.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiReleaseControlAreaWaiters @ 0x14000C640 (MiReleaseControlAreaWaiters.c)
 *     ExReleaseSpinLockExclusive @ 0x14004CC00 (ExReleaseSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14004CC40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiInsertUnusedSegment @ 0x1400A8590 (MiInsertUnusedSegment.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1400DAD80 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiDestroySection @ 0x1401070FC (MiDestroySection.c)
 *     MiFlushControlArea @ 0x1401D0FFC (MiFlushControlArea.c)
 */

void __fastcall MiDeleteCachedSegment(__int64 a1)
{
  volatile LONG *v1; // rbp
  __int64 v2; // rdi
  volatile signed __int32 **v3; // r14
  KIRQL v4; // si
  volatile signed __int32 *i; // rbx
  volatile LONG *v6; // rcx
  _QWORD *v7; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  __int64 v10; // rdx
  int v11; // eax
  _QWORD *v12; // rbx
  struct _FILE_OBJECT *v13; // r8
  int v14; // eax
  _QWORD *v15; // [rsp+40h] [rbp+8h] BYREF
  struct _FILE_OBJECT *v16; // [rsp+48h] [rbp+10h] BYREF

  v1 = (volatile LONG *)(a1 + 1536);
  v2 = 1LL;
  v3 = (volatile signed __int32 **)(a1 + 1408);
  v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1536));
  for ( i = *v3; i != (volatile signed __int32 *)v3; i = *(volatile signed __int32 **)i )
  {
    v2 = (__int64)(i - 2);
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(i + 16) )
      break;
  }
  if ( i == (volatile signed __int32 *)v3 )
  {
    v6 = v1;
LABEL_7:
    ExReleaseSpinLockExclusive(v6, v4);
    return;
  }
  v7 = (_QWORD *)(v2 + 8);
  v8 = *(_QWORD *)(v2 + 8);
  v9 = *(_QWORD **)(v2 + 16);
  if ( *(_QWORD *)(v8 + 8) != v2 + 8 || (_QWORD *)*v9 != v7 )
    __fastfail(3u);
  *v9 = v8;
  *(_QWORD *)(v8 + 8) = v9;
  *(_DWORD *)(v2 + 56) &= ~0x8000000u;
  *(_QWORD *)(v2 + 16) = v2 + 8;
  *v7 = v7;
  ExReleaseSpinLockExclusiveFromDpcLevel(v1);
  v11 = (*(_DWORD *)(v2 + 56) >> 5) & 1;
  if ( !v11 && *(_DWORD *)(v2 + 76) )
  {
    MiInsertUnusedSegment(v2);
    v6 = (volatile LONG *)(v2 + 72);
    goto LABEL_7;
  }
  v12 = 0LL;
  v13 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  if ( !v11 )
  {
    LOBYTE(v10) = v4;
    v14 = MiFlushControlArea(v2, v10, &v15, &v16);
    v12 = v15;
    if ( v14 != 1 )
      goto LABEL_18;
    v13 = v16;
  }
  MiDestroySection(v2, v4, v13);
LABEL_18:
  if ( v12 )
    MiReleaseControlAreaWaiters(v12);
}
