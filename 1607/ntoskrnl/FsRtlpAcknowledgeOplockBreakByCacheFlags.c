/*
 * XREFs of FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x14013493C
 * Callers:
 *     FsRtlpOplockFsctrlInternal @ 0x1404696E8 (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     FsRtlpRequestShareableOplock @ 0x140077A14 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpComputeShareableOplockState @ 0x140078270 (FsRtlpComputeShareableOplockState.c)
 *     IoAcquireCancelSpinLock @ 0x1400784C0 (IoAcquireCancelSpinLock.c)
 *     FsRtlpOplockDequeueRH @ 0x140078518 (FsRtlpOplockDequeueRH.c)
 *     FsRtlpOplockKeysEqual @ 0x14007B258 (FsRtlpOplockKeysEqual.c)
 *     FsRtlpClearOwner @ 0x14007B708 (FsRtlpClearOwner.c)
 *     FsRtlpModifyThreadPriorities @ 0x14007B748 (FsRtlpModifyThreadPriorities.c)
 *     FsRtlpReleaseIrpsWaitingForRH @ 0x1400A0EB4 (FsRtlpReleaseIrpsWaitingForRH.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x1400A0FEC (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E6C40 (KeReleaseQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x1400EC370 (ObfReferenceObjectWithTag.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400EE420 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x1400EE580 (ExReleaseFastMutexUnsafe.c)
 *     FsRtlpCancelExclusiveIrp @ 0x14010F424 (FsRtlpCancelExclusiveIrp.c)
 *     FsRtlpGrantAnyOplockFromExclusive @ 0x1401B95D4 (FsRtlpGrantAnyOplockFromExclusive.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     FsRtlpOplockUpperLowerCompatible @ 0x140469CE8 (FsRtlpOplockUpperLowerCompatible.c)
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
  __int64 v13; // r8
  int v14; // ecx
  char v15; // r13
  unsigned int v16; // eax
  _QWORD *v17; // rax
  _QWORD *v18; // r15
  int v19; // eax
  char v20; // r15
  __int64 v21; // rcx
  _QWORD *v22; // r10
  __int64 v23; // rcx
  int v24; // eax
  _QWORD *v25; // rax
  __int64 v26; // rcx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v28; // r15
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  _QWORD *v32; // rax
  __int64 v33; // rcx
  int v34; // eax
  char v35; // cl
  __int64 v36; // r8
  _QWORD **v37; // rcx
  char v39; // [rsp+50h] [rbp-78h]
  char v40; // [rsp+51h] [rbp-77h]
  char v41; // [rsp+59h] [rbp-6Fh]
  char v42; // [rsp+5Ah] [rbp-6Eh] BYREF
  char v43; // [rsp+5Bh] [rbp-6Dh] BYREF
  char v44; // [rsp+5Ch] [rbp-6Ch]
  char v45; // [rsp+5Dh] [rbp-6Bh]
  _QWORD *v46; // [rsp+60h] [rbp-68h] BYREF
  char v47; // [rsp+68h] [rbp-60h]
  char v48; // [rsp+69h] [rbp-5Fh]
  _QWORD *v49; // [rsp+70h] [rbp-58h]
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
  v39 = 0;
  v44 = 0;
  v47 = 0;
  v41 = 0;
  LODWORD(v49) = (_DWORD)v6;
  v48 = 0;
  v43 = 0;
  v42 = 0;
  if ( !a1 )
  {
    *(_DWORD *)(a3 + 48) = -1073741597;
    pIofCompleteRequest((PIRP)a3, 1);
    return 3221225699LL;
  }
  ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(a1 + 152));
  v45 = 1;
  v14 = *(_DWORD *)(v9 + 144);
  if ( (v14 & 0xF00000) == 0 && (((v14 & 0x1F0FFDF) - 12288) & 0xFFFF7FFF) != 0
    || (((v14 & 0x1F0FFDF) - 12288) & 0xFFFF7FFF) == 0 && *(_QWORD *)(v9 + 72) == v9 + 72 )
  {
    goto LABEL_32;
  }
  v50 = *(_QWORD *)(a3 + 24);
  if ( (*(_DWORD *)(v50 + 8) & 4) != 0 )
  {
    v15 = 1;
    v40 = 1;
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)17, 0x18uLL, 0x6F725346u);
    v46 = PoolWithTag;
    *PoolWithTag = 0LL;
    PoolWithTag[1] = 0LL;
    PoolWithTag[2] = 0LL;
  }
  else
  {
    v15 = 0;
    v40 = 0;
  }
  v16 = *(_DWORD *)(v9 + 144) & 0x1F0FFDF;
  if ( v16 <= 0x307040 )
  {
    if ( v16 != 3174464 )
    {
      if ( v16 == 12288 || v16 == 45056 || v16 == 1060864 )
        goto LABEL_8;
      if ( v16 != 1069120 && v16 != 1077312 )
        goto LABEL_32;
    }
LABEL_75:
    if ( v15 )
    {
      v30 = *(_QWORD *)(v9 + 8);
      v31 = *(_QWORD *)(v55 + 48);
      if ( v30 == v31 || !FsRtlpOplockKeysEqual(v31, v30, 0) )
        goto LABEL_32;
      if ( !a4 )
      {
        FsRtlpModifyThreadPriorities(v9, 0LL, 0);
        FsRtlpClearOwner(v9, 0LL);
        *(_BYTE *)(v9 + 32) = 0;
        *(_DWORD *)(v9 + 144) = *(_DWORD *)(v9 + 144) & 0x20 | 1;
        PoolWithTag[2] = *(_QWORD *)(v9 + 8);
        v32 = (_QWORD *)(v9 + 104);
        v33 = *(_QWORD *)(v9 + 104);
        if ( *(_QWORD *)(v33 + 8) != v9 + 104 )
          __fastfail(3u);
        *PoolWithTag = v33;
        PoolWithTag[1] = v32;
        *(_QWORD *)(v33 + 8) = PoolWithTag;
        *v32 = PoolWithTag;
        PoolWithTag = 0LL;
        v46 = 0LL;
        *(_QWORD *)(v9 + 8) = 0LL;
        *(_DWORD *)(v9 + 144) |= 0x1000000u;
        *(_DWORD *)(a3 + 48) = 0;
        pIofCompleteRequest((PIRP)a3, 1);
        goto LABEL_98;
      }
    }
    else if ( *(_QWORD *)(v9 + 8) != *(_QWORD *)(v55 + 48) )
    {
      goto LABEL_32;
    }
    v34 = *(_DWORD *)(v9 + 144) & 0x1F0FFDF;
    if ( v34 == 1069120 || v34 == 1077312 || v34 == 3174464 || v34 == 5271616 || v34 == 8409152 || v34 == 8417344 )
    {
      v35 = (char)v49;
      if ( (a4 & 0x7000) > ((*(_DWORD *)(v9 + 144) >> 8) & 0x1000 | (*(_DWORD *)(v9 + 144) >> 7) & 0x4000 | (*(_DWORD *)(v9 + 144) >> 9) & 0x2000u)
        && *(_QWORD *)(v9 + 88) != v9 + 88 )
      {
        v35 = 1;
      }
    }
    else
    {
      v35 = (char)v49;
    }
    if ( v35 )
    {
      v36 = *(_QWORD *)(a3 + 24);
      *(_QWORD *)v36 = 0LL;
      *(_QWORD *)(v36 + 8) = 0LL;
      *(_QWORD *)(v36 + 16) = 0LL;
      *(_DWORD *)(v36 + 4) = (*(_DWORD *)(v9 + 144) >> 12) & 7;
      *(_DWORD *)(v36 + 8) = (*(_DWORD *)(v9 + 144) >> 20) & 1 | (*(_DWORD *)(v9 + 144) >> 19) & 4 | (*(_DWORD *)(v9 + 144) >> 21) & 2;
      *(_DWORD *)(v36 + 12) |= 1u;
      *(_QWORD *)(a3 + 56) = 24LL;
      v10 = -2147483602;
      *(_DWORD *)(a3 + 48) = -2147483602;
      pIofCompleteRequest((PIRP)a3, 1);
      goto LABEL_103;
    }
    FsRtlpModifyThreadPriorities(v9, 0LL, 0);
    FsRtlpClearOwner(v9, 0LL);
    *(_BYTE *)(v9 + 32) = 0;
    v10 = FsRtlpGrantAnyOplockFromExclusive(
            v9,
            a3,
            v55,
            a4,
            (__int64)a5,
            v15,
            (__int64)&v46,
            (__int64)&v42,
            (__int64)&v43,
            a6);
    PoolWithTag = v46;
LABEL_98:
    if ( v42 )
    {
      while ( 1 )
      {
        v37 = (_QWORD **)(v9 + 88);
        if ( *v37 == v37 )
          break;
        FsRtlpRemoveAndCompleteWaitingIrp(*v37);
      }
    }
    if ( v43 )
    {
      ObfDereferenceObjectWithTag(*(PVOID *)(v9 + 8), 0x746C6644u);
      *(_QWORD *)(v9 + 8) = 0LL;
    }
    goto LABEL_103;
  }
  if ( v16 != 8400896 )
  {
    if ( v16 != 5271616 && v16 != 8409152 && v16 != 8417344 )
      goto LABEL_32;
    goto LABEL_75;
  }
LABEL_8:
  v17 = (_QWORD *)(v9 + 72);
  v18 = *(_QWORD **)(v9 + 72);
  while ( 1 )
  {
    v49 = v18;
    if ( v18 == v17 )
      break;
    if ( v15 )
    {
      v12 = v18[3];
      v21 = *(_QWORD *)(v55 + 48);
      if ( v12 != v21 && FsRtlpOplockKeysEqual(v21, v12, 0) )
      {
LABEL_12:
        v39 = 1;
        v19 = v18[6] & 0xF00000;
        v10 = v56;
        if ( v19 == 0x800000 )
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
          FsRtlpOplockDequeueRH((__int64)v18, v12, v13);
          if ( !v15 )
          {
            v41 = 1;
            if ( !v10 )
            {
              ObfDereferenceObjectWithTag((PVOID)v18[3], 0x746C6644u);
              goto LABEL_17;
            }
            goto LABEL_64;
          }
          PoolWithTag[2] = v18[3];
          v25 = (_QWORD *)(v9 + 104);
          v26 = *(_QWORD *)(v9 + 104);
          if ( *(_QWORD *)(v26 + 8) != v9 + 104 )
            __fastfail(3u);
          *PoolWithTag = v26;
          PoolWithTag[1] = v25;
          *(_QWORD *)(v26 + 8) = PoolWithTag;
          *v25 = PoolWithTag;
          PoolWithTag = 0LL;
          v46 = 0LL;
LABEL_17:
          if ( !v10 )
          {
            FsRtlpComputeShareableOplockState(v9);
            *(_DWORD *)(a3 + 48) = 0;
            pIofCompleteRequest((PIRP)a3, 1);
            goto LABEL_19;
          }
LABEL_64:
          if ( (v10 & 0x4040) == 0 && (v10 & 0x3010) != 0 )
          {
            v10 = FsRtlpRequestShareableOplock(&v54, v55, a3, v10, a5, v15, 1, a6);
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
          v15 = v40;
          if ( v40 )
          {
            v28 = v55;
            ObfReferenceObjectWithTag(*(PVOID *)(v55 + 48), 0x746C6644u);
            v29 = *(_QWORD *)(v28 + 48);
          }
          else
          {
            v29 = v18[3];
          }
          *(_QWORD *)(v9 + 8) = v29;
          *(_DWORD *)(v9 + 144) = v10 | *(_DWORD *)(v9 + 144) & 0x20 | 0x40;
          IoAcquireCancelSpinLock((PKIRQL)(a3 + 69));
          if ( *(_BYTE *)(a3 + 68) )
          {
            FsRtlpCancelExclusiveIrp(a3, 1, v40 == 0);
            v10 = 259;
            PoolWithTag = v46;
            v39 = 1;
            v18 = v49;
          }
          else
          {
            _InterlockedExchange64((volatile __int64 *)(a3 + 104), (__int64)FsRtlpExclusiveIrpCancelRoutine);
            KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a3 + 69));
            v10 = 259;
            v15 = v40;
            PoolWithTag = v46;
            v39 = 1;
            v18 = v49;
LABEL_72:
            v9 = v54;
          }
LABEL_19:
          FsRtlpModifyThreadPriorities(v9, (__int64)v18, 0);
          FsRtlpClearOwner(v9, (__int64)v18);
          if ( *(_QWORD *)(v9 + 72) == v9 + 72 )
            *(_BYTE *)(v9 + 32) = 0;
          ExFreePoolWithTag(v18, 0);
          if ( v15 )
            *(_DWORD *)(v9 + 144) |= 0x1000000u;
        }
        else
        {
          if ( v19 != 0x100000 )
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
          pIofCompleteRequest((PIRP)a3, 1);
        }
        v20 = 1;
        goto LABEL_24;
      }
    }
    else if ( v18[3] == *(_QWORD *)(v55 + 48) )
    {
      goto LABEL_12;
    }
    v18 = (_QWORD *)*v18;
    v17 = (_QWORD *)(v9 + 72);
  }
  v20 = v44;
LABEL_24:
  if ( v39 )
  {
    if ( v41 )
      FsRtlpReleaseIrpsWaitingForRH(v9);
    if ( v20 )
      goto LABEL_103;
    goto LABEL_98;
  }
LABEL_32:
  v10 = -1073741597;
  *(_DWORD *)(a3 + 48) = -1073741597;
  pIofCompleteRequest((PIRP)a3, 1);
LABEL_103:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(v9 + 152));
  return v10;
}
