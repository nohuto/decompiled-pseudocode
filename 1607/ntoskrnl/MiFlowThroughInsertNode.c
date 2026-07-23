/*
 * XREFs of MiFlowThroughInsertNode @ 0x1400B24E8
 * Callers:
 *     MiFinishMdlForMappedFileFault @ 0x140022E20 (MiFinishMdlForMappedFileFault.c)
 *     MiResolvePageFileFault @ 0x1401218D0 (MiResolvePageFileFault.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     RtlAvlInsertNodeEx @ 0x140026F30 (RtlAvlInsertNodeEx.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     MiGetPagingFileOffset @ 0x1400B7610 (MiGetPagingFileOffset.c)
 */

_QWORD *__fastcall MiFlowThroughInsertNode(__int64 a1, _QWORD *a2)
{
  _QWORD *result; // rax
  __int64 v5; // rdx
  _QWORD *v6; // r8
  int *v7; // rax
  unsigned __int16 v8; // r9
  __int64 v9; // rbx
  __int64 v10; // r10
  _QWORD *v11; // rdx
  unsigned __int64 v12; // r9
  bool v13; // al
  _QWORD *v14; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF
  __int64 v16; // [rsp+50h] [rbp+8h] BYREF

  v16 = a2[2];
  if ( (v16 & 0x400) != 0 )
  {
    *(_QWORD *)(a1 + 320) = 0LL;
    goto LABEL_3;
  }
  MiGetPagingFileOffset(&v16);
  v7 = MiPartitionIdToPointer(((unsigned int)HIDWORD(a2[5]) >> 8) & 0x3FF);
  v9 = *(_QWORD *)&v7[2 * (v8 >> 12) + 1576];
  *(_QWORD *)(a1 + 320) = v9;
  *(_QWORD *)(a1 + 328) = v10;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v9 + 232), &LockHandle);
  v11 = *(_QWORD **)(v9 + 248);
  v12 = a1 + 336;
  v13 = 0;
  if ( !v11 )
    goto LABEL_8;
  while ( __PAIR128__(*(_QWORD *)(a1 + 328), v12) <= __PAIR128__(*(v11 - 1), (unsigned __int64)v11) )
  {
    v14 = (_QWORD *)*v11;
    if ( !*v11 )
      goto LABEL_8;
LABEL_11:
    v11 = v14;
  }
  v14 = (_QWORD *)v11[1];
  if ( v14 )
    goto LABEL_11;
  v13 = 1;
LABEL_8:
  RtlAvlInsertNodeEx((unsigned __int64 *)(v9 + 248), (unsigned __int64)v11, v13, v12);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
LABEL_3:
  *(_BYTE *)(a1 + 189) |= 8u;
  result = (_QWORD *)(a1 + 16);
  v5 = *a2 - 32LL;
  v6 = *(_QWORD **)(v5 + 24);
  if ( *v6 != v5 + 16 )
    __fastfail(3u);
  *result = v5 + 16;
  *(_QWORD *)(a1 + 24) = v6;
  *v6 = result;
  *(_QWORD *)(v5 + 24) = result;
  *(_QWORD *)(a1 + 312) = v5;
  return result;
}
