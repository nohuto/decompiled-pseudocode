/*
 * XREFs of MiFindFreePageFileSpace @ 0x1400F4EDC
 * Callers:
 *     MiReservePageFileSpace @ 0x1400367C0 (MiReservePageFileSpace.c)
 *     MiGetKernelStackSwapSupport @ 0x1400F55A8 (MiGetKernelStackSwapSupport.c)
 *     MiFindPageFileWriteCluster @ 0x1401084F0 (MiFindPageFileWriteCluster.c)
 *     MiTrimUnusedPageFileRegionsApc @ 0x1401DD118 (MiTrimUnusedPageFileRegionsApc.c)
 *     MiReserveWorkingSetSwapSpaceRuns @ 0x14062AEB0 (MiReserveWorkingSetSwapSpaceRuns.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     RtlSetBits @ 0x140061410 (RtlSetBits.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     MiPageFileLargestBitmapsRun @ 0x1400F5160 (MiPageFileLargestBitmapsRun.c)
 *     MI_SET_PAGING_FILE_INFO @ 0x1400F5214 (MI_SET_PAGING_FILE_INFO.c)
 *     MiInvalidatePageFileBitmapsCache @ 0x1400F5258 (MiInvalidatePageFileBitmapsCache.c)
 *     MiCheckHintedPageFileSpace @ 0x1400F5524 (MiCheckHintedPageFileSpace.c)
 *     MiSetPageFileAllocationBits @ 0x140109328 (MiSetPageFileAllocationBits.c)
 *     MiRescanPagefileBitmaps @ 0x140139FC0 (MiRescanPagefileBitmaps.c)
 *     MiFindFreePageFileSpaceForward @ 0x1401DC854 (MiFindFreePageFileSpaceForward.c)
 */

__int64 __fastcall MiFindFreePageFileSpace(__int64 a1, _DWORD *a2, unsigned __int64 a3, unsigned int a4)
{
  unsigned int v4; // r15d
  unsigned __int64 v5; // r13
  __int64 v8; // rsi
  __int64 v9; // rdi
  unsigned int v10; // eax
  unsigned int v11; // ecx
  unsigned int v12; // ebp
  _QWORD *v13; // r14
  __int64 i; // r12
  __int16 v15; // cx
  __int64 v16; // rbx
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rax
  unsigned int v19; // ecx
  __int64 v20; // rbp
  int v21; // r14d
  unsigned __int64 v23; // rcx
  unsigned int v24; // eax
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rdx
  unsigned int v27; // eax
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rdx
  int FreePageFileSpaceForward; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-58h] BYREF
  int v32; // [rsp+98h] [rbp+10h]
  int v33; // [rsp+A0h] [rbp+18h] BYREF

  v32 = (int)a2;
  v4 = a4;
  v5 = a3;
  if ( a3 >= 0xFFFFFFFF )
    return 0LL;
  LODWORD(v8) = -1;
  if ( (a4 & 0x10) != 0
    || ((v9 = *(_QWORD *)(a1 + 8LL * ((*a2 >> 1) & 0xF) + 5728), (a4 & 0x65) == 1)
     && (unsigned int)MiPageFileLargestBitmapsRun(*(_QWORD *)(a1 + 8LL * ((*a2 >> 1) & 0xF) + 5728)) < a3
      ? (v4 |= 0x10u)
      : (v8 = HIDWORD(*(_QWORD *)a2)),
        (v4 & 0x10) != 0) )
  {
    v9 = *(_QWORD *)(a1 + 5728);
    v10 = MiPageFileLargestBitmapsRun(v9);
    v11 = *(_DWORD *)(a1 + 5720);
    v12 = v10;
    if ( v11 > 1 )
    {
      v13 = (_QWORD *)(a1 + 5736);
      for ( i = v11 - 1; i; --i )
      {
        v15 = *(_WORD *)(v9 + 204);
        v16 = *v13;
        if ( (v15 & 0x10) != 0 && (*(_BYTE *)(v16 + 204) & 0x10) == 0
          || (v15 & 0x20) != 0 && (*(_BYTE *)(v16 + 204) & 0x20) == 0 )
        {
          v9 = *v13;
          v24 = MiPageFileLargestBitmapsRun(*v13);
        }
        else
        {
          if ( (*(_BYTE *)(v16 + 204) & 0x30) != 0 )
            goto LABEL_8;
          v24 = MiPageFileLargestBitmapsRun(*v13);
          if ( v24 <= v12 )
            goto LABEL_8;
          v9 = v16;
        }
        v12 = v24;
LABEL_8:
        ++v13;
      }
    }
  }
  v17 = 0LL;
  if ( (v4 & 4) == 0 )
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v9 + 232), &LockHandle);
  if ( (*(_BYTE *)(v9 + 207) & 1) != 0 )
    goto LABEL_42;
  if ( (_DWORD)v8 != -1 )
  {
    if ( (unsigned int)v8 >= *(_DWORD *)(*(_QWORD *)(v9 + 112) + 24LL) )
    {
      if ( (v4 & 0x48) != 0 )
        goto LABEL_42;
    }
    else
    {
      v20 = (unsigned int)MiCheckHintedPageFileSpace(v9, (unsigned int)v8, (unsigned int)v5, v4);
      if ( v20 == v5 || (v4 & 0x40) != 0 )
        goto LABEL_23;
    }
  }
  if ( (v4 & 8) != 0 )
  {
    v33 = v8;
    FreePageFileSpaceForward = MiFindFreePageFileSpaceForward(v9, &v33, (unsigned int)v5, v4);
    LODWORD(v8) = v33;
    LODWORD(v20) = FreePageFileSpaceForward;
    goto LABEL_23;
  }
  while ( 2 )
  {
    v18 = *(_QWORD *)(v9 + 144);
    v17 = 0LL;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( !v18 )
          goto LABEL_21;
        v19 = *(_DWORD *)(v18 + 52);
        if ( (unsigned int)v5 >= v19 )
          break;
LABEL_16:
        v17 = v18;
        v18 = *(_QWORD *)v18;
      }
      if ( (unsigned int)v5 <= v19 )
        break;
      v18 = *(_QWORD *)(v18 + 8);
    }
    if ( *(_DWORD *)(v18 + 48) )
      goto LABEL_16;
    v25 = *(_QWORD *)v18;
    v26 = 0LL;
    v17 = v18;
    if ( !*(_QWORD *)v18 )
      goto LABEL_21;
    while ( 2 )
    {
      v27 = *(_DWORD *)(v25 + 52);
      if ( (unsigned int)v5 < v27 )
      {
LABEL_63:
        v25 = *(_QWORD *)v25;
      }
      else
      {
        if ( (unsigned int)v5 <= v27 )
        {
          if ( !*(_DWORD *)(v25 + 48) )
            v26 = v25;
          goto LABEL_63;
        }
        v25 = *(_QWORD *)(v25 + 8);
      }
      if ( v25 )
        continue;
      break;
    }
    if ( v26 )
      v17 = v26;
LABEL_21:
    if ( *(_DWORD *)(v17 + 52) != -1 )
      goto LABEL_22;
    v23 = *(unsigned int *)(v9 + 140);
    if ( v23 >= v5 && (unsigned int)v23 >= 0x20 )
    {
LABEL_47:
      MiRescanPagefileBitmaps(v9);
      continue;
    }
    break;
  }
  if ( (v4 & 0x80u) != 0 )
  {
LABEL_42:
    if ( (v4 & 4) == 0 )
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    return 0LL;
  }
  v28 = *(_QWORD *)v17;
  v29 = v17;
  if ( *(_QWORD *)v17 )
  {
    do
    {
      v17 = v28;
      v28 = *(_QWORD *)(v28 + 8);
    }
    while ( v28 );
  }
  else
  {
    while ( 1 )
    {
      v17 = *(_QWORD *)(v17 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v17 || *(_QWORD *)(v17 + 8) == v29 )
        break;
      v29 = v17;
    }
  }
  if ( !v17 )
  {
    if ( (unsigned int)v23 >= 0x20 )
      goto LABEL_47;
    ++*(_DWORD *)(v9 + 128);
    goto LABEL_42;
  }
  if ( (unsigned int)v23 > *(_DWORD *)(v17 + 52) && (unsigned int)v23 >= 0x20 )
    goto LABEL_47;
  LODWORD(v5) = *(_DWORD *)(v17 + 52);
LABEL_22:
  LODWORD(v8) = *(_DWORD *)(v17 + 48);
  LODWORD(v20) = v5;
LABEL_23:
  if ( !(_DWORD)v20 )
    goto LABEL_42;
  v21 = 0;
  if ( (v4 & 1) != 0 )
  {
    v21 = 2;
    RtlSetBits((PRTL_BITMAP)(*(_QWORD *)(v9 + 112) + 24LL), v8, v20);
    *(_QWORD *)(v9 + 48) -= (unsigned int)v20;
  }
  if ( (v4 & 2) != 0 )
  {
    v21 |= 1u;
    MiSetPageFileAllocationBits(v9, (unsigned int)v8, (unsigned int)v20);
  }
  if ( v21 )
    MiInvalidatePageFileBitmapsCache(v9, (unsigned int)v8, (unsigned int)v20, v17);
  if ( (v4 & 4) == 0 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  MI_SET_PAGING_FILE_INFO(v32, v32, v9, v8, v21);
  return (unsigned int)v20;
}
