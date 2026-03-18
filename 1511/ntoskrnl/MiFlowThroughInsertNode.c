/*
 * XREFs of MiFlowThroughInsertNode @ 0x1400F2B80
 * Callers:
 *     MiFinishMdlForMappedFileFault @ 0x1400AB060 (MiFinishMdlForMappedFileFault.c)
 *     MiResolvePageFileFault @ 0x1401129C8 (MiResolvePageFileFault.c)
 * Callees:
 *     RtlAvlInsertNodeEx @ 0x14000C920 (RtlAvlInsertNodeEx.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     MI_GET_PAGING_FILE_OFFSET @ 0x1400BB740 (MI_GET_PAGING_FILE_OFFSET.c)
 */

__int64 __fastcall MiFlowThroughInsertNode(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v2; // rbx
  __int64 result; // rax
  __int64 v6; // rcx
  _QWORD *v7; // r8
  __int64 v8; // rbx
  __int64 v9; // r8
  _QWORD *v10; // rdx
  unsigned __int64 v11; // r9
  bool v12; // al
  _QWORD *v13; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int64 v15; // [rsp+50h] [rbp+8h] BYREF

  v15 = a2[2];
  v2 = v15;
  if ( (v15 & 0x400) != 0 )
  {
    *(_QWORD *)(a1 + 320) = 0LL;
    goto LABEL_3;
  }
  MI_GET_PAGING_FILE_OFFSET((__int64)&v15);
  v8 = *(_QWORD *)&MiPartitionIdToPointer(((unsigned int)HIDWORD(a2[5]) >> 8) & 0x3FF)[2 * ((v2 >> 1) & 0xF) + 1432];
  *(_QWORD *)(a1 + 320) = v8;
  *(_QWORD *)(a1 + 328) = v9;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v8 + 232), &LockHandle);
  v10 = *(_QWORD **)(v8 + 248);
  v11 = a1 + 336;
  v12 = 0;
  if ( !v10 )
    goto LABEL_8;
  while ( __PAIR128__(*(_QWORD *)(a1 + 328), v11) <= __PAIR128__(*(v10 - 1), (unsigned __int64)v10) )
  {
    v13 = (_QWORD *)*v10;
    if ( !*v10 )
      goto LABEL_8;
LABEL_11:
    v10 = v13;
  }
  v13 = (_QWORD *)v10[1];
  if ( v13 )
    goto LABEL_11;
  v12 = 1;
LABEL_8:
  RtlAvlInsertNodeEx((unsigned __int64 *)(v8 + 248), (unsigned __int64)v10, v12, v11);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
LABEL_3:
  *(_BYTE *)(a1 + 189) |= 8u;
  result = a1 + 16;
  v6 = *a2 - 32LL;
  v7 = *(_QWORD **)(v6 + 24);
  *(_QWORD *)(a1 + 16) = v6 + 16;
  *(_QWORD *)(a1 + 24) = v7;
  if ( *v7 != v6 + 16 )
    __fastfail(3u);
  *v7 = result;
  *(_QWORD *)(v6 + 24) = result;
  *(_QWORD *)(a1 + 312) = v6;
  return result;
}
