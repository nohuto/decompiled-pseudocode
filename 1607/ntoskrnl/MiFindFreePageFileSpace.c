/*
 * XREFs of MiFindFreePageFileSpace @ 0x1400B4424
 * Callers:
 *     MiReservePageFileSpace @ 0x14001E150 (MiReservePageFileSpace.c)
 *     MiGetKernelStackSwapSupport @ 0x1400B40E8 (MiGetKernelStackSwapSupport.c)
 *     MiTrimUnusedPageFileRegionsApc @ 0x14010F784 (MiTrimUnusedPageFileRegionsApc.c)
 *     MiFindPageFileWriteCluster @ 0x140125FB0 (MiFindPageFileWriteCluster.c)
 *     MiReserveWorkingSetSwapSpaceRuns @ 0x140663564 (MiReserveWorkingSetSwapSpaceRuns.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     RtlSetBits @ 0x140027FA0 (RtlSetBits.c)
 *     MiPageFileLargestBitmapsRun @ 0x1400B4370 (MiPageFileLargestBitmapsRun.c)
 *     MiInvalidatePageFileBitmapsCache @ 0x1400B475C (MiInvalidatePageFileBitmapsCache.c)
 *     MiCheckHintedPageFileSpace @ 0x1400B4A18 (MiCheckHintedPageFileSpace.c)
 *     MiFindFreePageFileSpaceForward @ 0x14010F674 (MiFindFreePageFileSpaceForward.c)
 *     MiSetPageFileAllocationBits @ 0x140111E2C (MiSetPageFileAllocationBits.c)
 *     MiRescanPagefileBitmaps @ 0x140143114 (MiRescanPagefileBitmaps.c)
 *     MiGetPteTimeStamp @ 0x1401F24C8 (MiGetPteTimeStamp.c)
 *     MiTransferSoftwarePte @ 0x1401F27A4 (MiTransferSoftwarePte.c)
 */

__int64 __fastcall MiFindFreePageFileSpace(__int64 a1, _WORD *a2, unsigned __int64 a3, unsigned int a4)
{
  unsigned int v4; // r15d
  unsigned __int64 v5; // r13
  _QWORD *v6; // rsi
  ULONG PteTimeStamp; // ebp
  __int64 v9; // rdi
  unsigned int v10; // eax
  unsigned int v11; // ecx
  unsigned int v12; // esi
  __int64 *v13; // r14
  __int64 i; // r12
  __int16 v15; // cx
  __int64 v16; // rbx
  unsigned int v17; // eax
  unsigned __int64 v18; // rbx
  __int64 v20; // rsi
  unsigned __int64 v21; // rax
  unsigned int v22; // ecx
  unsigned __int64 v23; // rcx
  unsigned int v24; // eax
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rax
  int FreePageFileSpaceForward; // eax
  unsigned int v28; // r14d
  __int64 v29; // rax
  __int64 *v30; // r10
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-58h] BYREF
  _QWORD *v32; // [rsp+98h] [rbp+10h]
  ULONG v33; // [rsp+A0h] [rbp+18h] BYREF

  v32 = a2;
  v4 = a4;
  v5 = a3;
  v6 = a2;
  if ( a3 >= 0xFFFFFFFF )
    return 0LL;
  PteTimeStamp = -1;
  if ( (a4 & 0x10) != 0
    || ((v9 = *(_QWORD *)(a1 + 8LL * ((unsigned __int8)HIBYTE(*a2) >> 4) + 6304), (a4 & 0x65) != 1)
     || (unsigned int)MiPageFileLargestBitmapsRun(*(_QWORD *)(a1 + 8LL * ((unsigned __int8)HIBYTE(*a2) >> 4) + 6304)) >= a3
      ? (PteTimeStamp = MiGetPteTimeStamp(*v6, a2, a3))
      : (v4 |= 0x10u),
        (v4 & 0x10) != 0) )
  {
    v9 = *(_QWORD *)(a1 + 6304);
    v10 = MiPageFileLargestBitmapsRun(v9);
    v11 = *(_DWORD *)(a1 + 6296);
    v12 = v10;
    if ( v11 > 1 )
    {
      v13 = (__int64 *)(a1 + 6312);
      for ( i = v11 - 1; i; --i )
      {
        v15 = *(_WORD *)(v9 + 204);
        v16 = *v13;
        if ( (v15 & 0x10) != 0 && (*(_BYTE *)(v16 + 204) & 0x10) == 0
          || (v15 & 0x20) != 0 && (*(_BYTE *)(v16 + 204) & 0x20) == 0 )
        {
          v9 = *v13;
          v17 = MiPageFileLargestBitmapsRun(*v13);
        }
        else
        {
          if ( (*(_BYTE *)(v16 + 204) & 0x30) != 0 )
            goto LABEL_19;
          v17 = MiPageFileLargestBitmapsRun(*v13);
          if ( v17 <= v12 )
            goto LABEL_19;
          v9 = v16;
        }
        v12 = v17;
LABEL_19:
        ++v13;
      }
    }
  }
  v18 = 0LL;
  if ( (v4 & 4) == 0 )
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v9 + 232), &LockHandle);
  if ( (*(_BYTE *)(v9 + 207) & 1) != 0 )
    goto LABEL_26;
  if ( PteTimeStamp != -1 )
  {
    if ( PteTimeStamp < *(_DWORD *)(*(_QWORD *)(v9 + 112) + 24LL) )
    {
      v20 = (unsigned int)MiCheckHintedPageFileSpace(v9, PteTimeStamp, (unsigned int)v5, v4);
      if ( v20 == v5 || (v4 & 0x40) != 0 )
        goto LABEL_68;
    }
    else if ( (v4 & 0x48) != 0 )
    {
      goto LABEL_26;
    }
  }
  if ( (v4 & 8) != 0 )
  {
    v33 = PteTimeStamp;
    FreePageFileSpaceForward = MiFindFreePageFileSpaceForward(v9, &v33, (unsigned int)v5, v4);
    PteTimeStamp = v33;
    LODWORD(v20) = FreePageFileSpaceForward;
    goto LABEL_68;
  }
  while ( 2 )
  {
    v21 = *(_QWORD *)(v9 + 144);
    v18 = 0LL;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( !v21 )
          goto LABEL_48;
        v22 = *(_DWORD *)(v21 + 52);
        if ( (unsigned int)v5 >= v22 )
          break;
LABEL_37:
        v18 = v21;
        v21 = *(_QWORD *)v21;
      }
      if ( (unsigned int)v5 <= v22 )
        break;
      v21 = *(_QWORD *)(v21 + 8);
    }
    if ( *(_DWORD *)(v21 + 48) )
      goto LABEL_37;
    v23 = *(_QWORD *)v21;
    a2 = 0LL;
    v18 = v21;
    if ( !*(_QWORD *)v21 )
      goto LABEL_48;
    while ( 2 )
    {
      v24 = *(_DWORD *)(v23 + 52);
      if ( (unsigned int)v5 < v24 )
      {
LABEL_44:
        v23 = *(_QWORD *)v23;
      }
      else
      {
        if ( (unsigned int)v5 <= v24 )
        {
          if ( !*(_DWORD *)(v23 + 48) )
            a2 = (_WORD *)v23;
          goto LABEL_44;
        }
        v23 = *(_QWORD *)(v23 + 8);
      }
      if ( v23 )
        continue;
      break;
    }
    if ( a2 )
      v18 = (unsigned __int64)a2;
LABEL_48:
    if ( *(_DWORD *)(v18 + 52) != -1 )
      goto LABEL_66;
    v25 = *(unsigned int *)(v9 + 140);
    if ( v25 >= v5 && (unsigned int)v25 >= 0x20 )
    {
LABEL_64:
      MiRescanPagefileBitmaps(v9, a2);
      continue;
    }
    break;
  }
  if ( (v4 & 0x80u) != 0 )
  {
LABEL_26:
    if ( (v4 & 4) == 0 )
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    return 0LL;
  }
  v26 = *(_QWORD *)v18;
  a2 = (_WORD *)v18;
  if ( *(_QWORD *)v18 )
  {
    do
    {
      v18 = v26;
      v26 = *(_QWORD *)(v26 + 8);
    }
    while ( v26 );
  }
  else
  {
    while ( 1 )
    {
      v18 = *(_QWORD *)(v18 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v18 || *(_WORD **)(v18 + 8) == a2 )
        break;
      a2 = (_WORD *)v18;
    }
  }
  if ( !v18 )
  {
    if ( (unsigned int)v25 >= 0x20 )
      goto LABEL_64;
    ++*(_DWORD *)(v9 + 128);
    goto LABEL_26;
  }
  if ( (unsigned int)v25 > *(_DWORD *)(v18 + 52) && (unsigned int)v25 >= 0x20 )
    goto LABEL_64;
  LODWORD(v5) = *(_DWORD *)(v18 + 52);
LABEL_66:
  PteTimeStamp = *(_DWORD *)(v18 + 48);
  LODWORD(v20) = v5;
LABEL_68:
  if ( !(_DWORD)v20 )
    goto LABEL_26;
  v28 = 0;
  if ( (v4 & 1) != 0 )
  {
    v28 = 2;
    RtlSetBits((PRTL_BITMAP)(*(_QWORD *)(v9 + 112) + 24LL), PteTimeStamp, v20);
    *(_QWORD *)(v9 + 48) -= (unsigned int)v20;
  }
  if ( (v4 & 2) != 0 )
  {
    v28 |= 1u;
    MiSetPageFileAllocationBits(v9, PteTimeStamp, (unsigned int)v20);
  }
  if ( v28 )
    MiInvalidatePageFileBitmapsCache(v9, PteTimeStamp, (unsigned int)v20, v18);
  if ( (v4 & 4) == 0 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  v29 = MiTransferSoftwarePte(*v32, v9, PteTimeStamp, v28);
  *v30 = v29;
  return (unsigned int)v20;
}
