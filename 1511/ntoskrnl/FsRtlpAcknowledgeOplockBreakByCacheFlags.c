/*
 * XREFs of FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x14012DDB4
 * Callers:
 *     FsRtlpOplockFsctrlInternal @ 0x14048EA24 (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140037A60 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140037BF0 (ExReleaseFastMutexUnsafe.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x140042AE0 (ObfReferenceObjectWithTag.c)
 *     KeReleaseQueuedSpinLock @ 0x1400B0AE0 (KeReleaseQueuedSpinLock.c)
 *     FsRtlpReleaseIrpsWaitingForRH @ 0x1400C9078 (FsRtlpReleaseIrpsWaitingForRH.c)
 *     FsRtlpModifyThreadPriorities @ 0x1400C92DC (FsRtlpModifyThreadPriorities.c)
 *     FsRtlpOplockDequeueRH @ 0x1400C9C04 (FsRtlpOplockDequeueRH.c)
 *     FsRtlpRequestShareableOplock @ 0x1400CA474 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpComputeShareableOplockState @ 0x1400CAD98 (FsRtlpComputeShareableOplockState.c)
 *     IoAcquireCancelSpinLock @ 0x1400CAFE0 (IoAcquireCancelSpinLock.c)
 *     FsRtlpClearOwnerThread @ 0x1400CB038 (FsRtlpClearOwnerThread.c)
 *     FsRtlpOplockKeysEqual @ 0x1400CBE68 (FsRtlpOplockKeysEqual.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x1400CC94C (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     FsRtlpCancelExclusiveIrp @ 0x140103A90 (FsRtlpCancelExclusiveIrp.c)
 *     FsRtlpGrantAnyOplockFromExclusive @ 0x1401AD32C (FsRtlpGrantAnyOplockFromExclusive.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     FsRtlpOplockUpperLowerCompatible @ 0x14048F040 (FsRtlpOplockUpperLowerCompatible.c)
 */

__int64 __fastcall FsRtlpAcknowledgeOplockBreakByCacheFlags(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        _QWORD *a5,
        unsigned int a6)
{
  _UNKNOWN **v6; // rax
  __int64 v9; // rbx
  unsigned int v10; // esi
  _QWORD *PoolWithTag; // r12
  __int64 v12; // rdx
  int v13; // ecx
  char v14; // r13
  unsigned int v15; // eax
  _QWORD *v16; // rax
  _QWORD *v17; // r15
  int v18; // eax
  __int64 v19; // rdx
  char v20; // r15
  __int64 v21; // rcx
  _QWORD *v22; // r10
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rcx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v27; // r15
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  int v32; // eax
  char v33; // cl
  __int64 v34; // r8
  __int64 v35; // rdx
  _QWORD **v36; // rcx
  char v38; // [rsp+50h] [rbp-78h]
  char v39; // [rsp+51h] [rbp-77h]
  char v40; // [rsp+58h] [rbp-70h]
  char v41; // [rsp+59h] [rbp-6Fh] BYREF
  char v42; // [rsp+5Ah] [rbp-6Eh] BYREF
  char v43; // [rsp+5Bh] [rbp-6Dh]
  char v44; // [rsp+5Ch] [rbp-6Ch]
  char v45; // [rsp+5Dh] [rbp-6Bh]
  _QWORD *v46; // [rsp+60h] [rbp-68h] BYREF
  _QWORD *v47; // [rsp+68h] [rbp-60h]
  char v48; // [rsp+70h] [rbp-58h]
  char v49; // [rsp+71h] [rbp-57h]
  __int64 v50; // [rsp+78h] [rbp-50h]
  __int64 v51; // [rsp+80h] [rbp-48h]
  struct _KTHREAD *v52; // [rsp+88h] [rbp-40h]
  _UNKNOWN *retaddr; // [rsp+C8h] [rbp+0h] BYREF
  __int64 v54; // [rsp+D0h] [rbp+8h] BYREF
  __int64 v55; // [rsp+D8h] [rbp+10h]
  unsigned int v56; // [rsp+E8h] [rbp+20h]

  v6 = &retaddr;
  v56 = a4;
  v55 = a2;
  v54 = a1;
  v9 = a1;
  v10 = 0;
  PoolWithTag = 0LL;
  v46 = 0LL;
  LOBYTE(v6) = 0;
  v38 = 0;
  v45 = 0;
  v48 = 0;
  v40 = 0;
  LODWORD(v47) = (_DWORD)v6;
  v49 = 0;
  v41 = 0;
  v42 = 0;
  if ( !a1 )
  {
    *(_DWORD *)(a3 + 48) = -1073741597;
    pIofCompleteRequest(a3, 1LL);
    return 3221225699LL;
  }
  ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(a1 + 152));
  v44 = 1;
  v13 = *(_DWORD *)(v9 + 144);
  if ( (v13 & 0xF00000) == 0 && (((v13 & 0x1F0FFDF) - 12288) & 0xFFFF7FFF) != 0
    || (((v13 & 0x1F0FFDF) - 12288) & 0xFFFF7FFF) == 0 && *(_QWORD *)(v9 + 72) == v9 + 72 )
  {
    goto LABEL_32;
  }
  v50 = *(_QWORD *)(a3 + 24);
  if ( (*(_DWORD *)(v50 + 8) & 4) != 0 )
  {
    v14 = 1;
    v39 = 1;
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)273, 0x18uLL, 0x6F725346u);
    v46 = PoolWithTag;
    *PoolWithTag = 0LL;
    PoolWithTag[1] = 0LL;
    PoolWithTag[2] = 0LL;
  }
  else
  {
    v14 = 0;
    v39 = 0;
  }
  v15 = *(_DWORD *)(v9 + 144) & 0x1F0FFDF;
  if ( v15 <= 0x307040 )
  {
    if ( v15 != 3174464 )
    {
      if ( v15 == 12288 || v15 == 45056 || v15 == 1060864 )
        goto LABEL_8;
      if ( v15 != 1069120 && v15 != 1077312 )
        goto LABEL_32;
    }
LABEL_75:
    if ( v14 )
    {
      v12 = *(_QWORD *)(v9 + 8);
      v29 = *(_QWORD *)(v55 + 48);
      if ( v12 == v29 || !FsRtlpOplockKeysEqual(v29, v12, 0) )
        goto LABEL_32;
      if ( !a4 )
      {
        FsRtlpModifyThreadPriorities(v9, 0LL, 0);
        FsRtlpClearOwnerThread(v9, 0LL);
        *(_BYTE *)(v9 + 32) = 0;
        *(_DWORD *)(v9 + 144) = *(_DWORD *)(v9 + 144) & 0x20 | 1;
        PoolWithTag[2] = *(_QWORD *)(v9 + 8);
        v31 = *(_QWORD *)(v9 + 104);
        *PoolWithTag = v31;
        PoolWithTag[1] = v9 + 104;
        if ( *(_QWORD *)(v31 + 8) != v9 + 104 )
          __fastfail(3u);
        *(_QWORD *)(v31 + 8) = PoolWithTag;
        *(_QWORD *)(v9 + 104) = PoolWithTag;
        PoolWithTag = 0LL;
        v46 = 0LL;
        *(_QWORD *)(v9 + 8) = 0LL;
        *(_DWORD *)(v9 + 144) |= 0x1000000u;
        *(_DWORD *)(a3 + 48) = 0;
        LOBYTE(v30) = 1;
        pIofCompleteRequest(a3, v30);
        goto LABEL_98;
      }
    }
    else if ( *(_QWORD *)(v9 + 8) != *(_QWORD *)(v55 + 48) )
    {
      goto LABEL_32;
    }
    v32 = *(_DWORD *)(v9 + 144) & 0x1F0FFDF;
    if ( v32 == 1069120 || v32 == 1077312 || v32 == 3174464 || v32 == 5271616 || v32 == 8409152 || v32 == 8417344 )
    {
      v33 = (char)v47;
      if ( (a4 & 0x7000) > ((*(_DWORD *)(v9 + 144) >> 8) & 0x1000 | (*(_DWORD *)(v9 + 144) >> 7) & 0x4000 | (*(_DWORD *)(v9 + 144) >> 9) & 0x2000u)
        && *(_QWORD *)(v9 + 88) != v9 + 88 )
      {
        v33 = 1;
      }
    }
    else
    {
      v33 = (char)v47;
    }
    if ( v33 )
    {
      v34 = *(_QWORD *)(a3 + 24);
      *(_QWORD *)v34 = 0LL;
      *(_QWORD *)(v34 + 8) = 0LL;
      *(_QWORD *)(v34 + 16) = 0LL;
      *(_DWORD *)(v34 + 4) = (*(_DWORD *)(v9 + 144) >> 12) & 7;
      v35 = (*(_DWORD *)(v9 + 144) >> 20) & 1 | (*(_DWORD *)(v9 + 144) >> 19) & 4 | (*(_DWORD *)(v9 + 144) >> 21) & 2u;
      *(_DWORD *)(v34 + 8) = v35;
      *(_DWORD *)(v34 + 12) |= 1u;
      *(_QWORD *)(a3 + 56) = 24LL;
      v10 = -2147483602;
      *(_DWORD *)(a3 + 48) = -2147483602;
      LOBYTE(v35) = 1;
      pIofCompleteRequest(a3, v35);
      goto LABEL_103;
    }
    FsRtlpModifyThreadPriorities(v9, 0LL, 0);
    FsRtlpClearOwnerThread(v9, 0LL);
    *(_BYTE *)(v9 + 32) = 0;
    v10 = FsRtlpGrantAnyOplockFromExclusive(
            v9,
            a3,
            v55,
            a4,
            (__int64)a5,
            v14,
            (__int64)&v46,
            (__int64)&v42,
            (__int64)&v41,
            a6);
    PoolWithTag = v46;
LABEL_98:
    if ( v42 )
    {
      while ( 1 )
      {
        v36 = (_QWORD **)(v9 + 88);
        if ( *v36 == v36 )
          break;
        FsRtlpRemoveAndCompleteWaitingIrp(*v36);
      }
    }
    if ( v41 )
    {
      ObfDereferenceObjectWithTag(*(PVOID *)(v9 + 8), 0x746C6644u);
      *(_QWORD *)(v9 + 8) = 0LL;
    }
    goto LABEL_103;
  }
  if ( v15 != 8400896 )
  {
    if ( v15 != 5271616 && v15 != 8409152 && v15 != 8417344 )
      goto LABEL_32;
    goto LABEL_75;
  }
LABEL_8:
  v16 = (_QWORD *)(v9 + 72);
  v17 = *(_QWORD **)(v9 + 72);
  while ( 1 )
  {
    v47 = v17;
    if ( v17 == v16 )
      break;
    if ( v14 )
    {
      v12 = v17[3];
      v21 = *(_QWORD *)(v55 + 48);
      if ( v12 != v21 && FsRtlpOplockKeysEqual(v21, v12, 0) )
      {
LABEL_12:
        v38 = 1;
        v43 = 1;
        v18 = v17[6] & 0xF00000;
        v10 = v56;
        if ( v18 == 0x800000 )
        {
          if ( v56 )
          {
            v22 = (_QWORD *)(v9 + 88);
            if ( (_QWORD *)*v22 != v22 || !(unsigned __int8)FsRtlpOplockUpperLowerCompatible(v56, a6) )
            {
              v23 = *(_QWORD *)(a3 + 24);
              v24 = 0;
              *(_QWORD *)v23 = 0LL;
              *(_QWORD *)(v23 + 8) = 0LL;
              *(_QWORD *)(v23 + 16) = 0LL;
              goto LABEL_53;
            }
          }
LABEL_14:
          FsRtlpOplockDequeueRH((__int64)v17);
          if ( !v14 )
          {
            v40 = 1;
            if ( !v10 )
            {
              ObfDereferenceObjectWithTag((PVOID)v17[3], 0x746C6644u);
              goto LABEL_17;
            }
            goto LABEL_64;
          }
          PoolWithTag[2] = v17[3];
          v25 = *(_QWORD *)(v9 + 104);
          *PoolWithTag = v25;
          PoolWithTag[1] = v9 + 104;
          if ( *(_QWORD *)(v25 + 8) != v9 + 104 )
            __fastfail(3u);
          *(_QWORD *)(v25 + 8) = PoolWithTag;
          *(_QWORD *)(v9 + 104) = PoolWithTag;
          PoolWithTag = 0LL;
          v46 = 0LL;
LABEL_17:
          if ( !v10 )
          {
            FsRtlpComputeShareableOplockState(v9);
            *(_DWORD *)(a3 + 48) = 0;
            LOBYTE(v19) = 1;
            pIofCompleteRequest(a3, v19);
            goto LABEL_19;
          }
LABEL_64:
          if ( (v10 & 0x4040) == 0 && (v10 & 0x3010) != 0 )
          {
            v10 = FsRtlpRequestShareableOplock(&v54, v55, a3, v10, a5, v14, 1, a6);
            goto LABEL_72;
          }
          *(_QWORD *)v9 = a3;
          v51 = *(_QWORD *)(a3 + 184);
          *(_BYTE *)(v51 + 3) |= 1u;
          *(_QWORD *)(a3 + 56) = v9;
          *(_QWORD *)(v54 + 16) = KeGetCurrentThread()->ApcState.Process;
          CurrentThread = KeGetCurrentThread();
          v52 = CurrentThread;
          v9 = v54;
          *(_QWORD *)(v54 + 24) = CurrentThread;
          ObfReferenceObjectWithTag(CurrentThread, 0x746C6644u);
          *(_BYTE *)(v9 + 32) = 0;
          v14 = v39;
          if ( v39 )
          {
            v27 = v55;
            ObfReferenceObjectWithTag(*(PVOID *)(v55 + 48), 0x746C6644u);
            v28 = *(_QWORD *)(v27 + 48);
          }
          else
          {
            v28 = v17[3];
          }
          *(_QWORD *)(v9 + 8) = v28;
          *(_DWORD *)(v9 + 144) = v10 | *(_DWORD *)(v9 + 144) & 0x20 | 0x40;
          IoAcquireCancelSpinLock((PKIRQL)(a3 + 69));
          if ( *(_BYTE *)(a3 + 68) )
          {
            FsRtlpCancelExclusiveIrp(a3, 1, v39 == 0);
            v10 = 259;
            PoolWithTag = v46;
            v38 = v43;
            v17 = v47;
          }
          else
          {
            _InterlockedExchange64((volatile __int64 *)(a3 + 104), (__int64)FsRtlpExclusiveIrpCancelRoutine);
            KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a3 + 69));
            v10 = 259;
            v14 = v39;
            PoolWithTag = v46;
            v38 = v43;
            v17 = v47;
LABEL_72:
            v9 = v54;
          }
LABEL_19:
          FsRtlpModifyThreadPriorities(v9, (__int64)v17, 0);
          FsRtlpClearOwnerThread(v9, (__int64)v17);
          if ( *(_QWORD *)(v9 + 72) == v9 + 72 )
            *(_BYTE *)(v9 + 32) = 0;
          ExFreePoolWithTag(v17, 0);
          if ( v14 )
            *(_DWORD *)(v9 + 144) |= 0x1000000u;
        }
        else
        {
          if ( v18 != 0x100000 )
            goto LABEL_14;
          if ( (v56 & 0x7000) <= 0x3000 )
            goto LABEL_14;
          v22 = (_QWORD *)(v9 + 88);
          if ( (_QWORD *)*v22 == v22 )
          {
            if ( (unsigned __int8)FsRtlpOplockUpperLowerCompatible(v56, a6) )
              goto LABEL_14;
          }
          v23 = *(_QWORD *)(a3 + 24);
          *(_QWORD *)v23 = 0LL;
          *(_QWORD *)(v23 + 8) = 0LL;
          *(_QWORD *)(v23 + 16) = 0LL;
          v24 = 1;
LABEL_53:
          *(_DWORD *)(v23 + 4) = 3;
          if ( (_QWORD *)*v22 == v22 )
            v24 = a6;
          *(_DWORD *)(v23 + 8) = v24;
          *(_DWORD *)(v23 + 12) |= 1u;
          *(_QWORD *)(a3 + 56) = 24LL;
          v10 = -2147483602;
          *(_DWORD *)(a3 + 48) = -2147483602;
          LOBYTE(v12) = 1;
          pIofCompleteRequest(a3, v12);
        }
        v20 = 1;
        goto LABEL_24;
      }
    }
    else if ( v17[3] == *(_QWORD *)(v55 + 48) )
    {
      goto LABEL_12;
    }
    v17 = (_QWORD *)*v17;
    v16 = (_QWORD *)(v9 + 72);
  }
  v20 = v45;
LABEL_24:
  if ( v38 )
  {
    if ( v40 )
      FsRtlpReleaseIrpsWaitingForRH(v9);
    if ( v20 )
      goto LABEL_103;
    goto LABEL_98;
  }
LABEL_32:
  v10 = -1073741597;
  *(_DWORD *)(a3 + 48) = -1073741597;
  LOBYTE(v12) = 1;
  pIofCompleteRequest(a3, v12);
LABEL_103:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(v9 + 152));
  return v10;
}
